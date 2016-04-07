// Copyright (c) 2010
// All rights reserved.

#include "TraderServiceImpl.hh"
#include "TraderOptions.hh"
#include "TraderSpiImpl.hh"
#include "TraderLog.hh"
#include "message/ThostFtdcUserApiStructPrint.hh"
#include "message/ReqMessage.hh"

namespace cata {

TraderServiceImpl::TraderServiceImpl(soil::Options* options,
                                     ServiceCallback* callback) :
    trader_api_(nullptr),
    callback_(callback),
    request_id_(0),
    front_id_(-1),
    session_id_(-1),
    max_order_ref_(-1) {
  TRADER_TRACE <<"TraderServiceImpl::TraderServiceImpl()";

  cond_.reset(soil::STimer::create());

  rsp_queue_.reset(new soil::MsgQueue<Message, TraderServiceImpl>(this));

  order_queue_callback_.reset(new ReqOrderQueueCallback(this));
  order_queue_.reset(new soil::MsgQueue<Message, ReqOrderQueueCallback>(
      order_queue_callback_.get()));

  options_ = dynamic_cast<TraderOptions*>(options);

  trader_api_ = CThostFtdcTraderApi::CreateFtdcTraderApi
      (options_->flow_path.data());

  TRADER_INFO <<"The Api version is " <<apiVersion();
  TRADER_INFO <<"The trading day is " <<tradingDay();
  
  trader_spi_.reset(new TraderSpiImpl(this));
  trader_api_->RegisterSpi(trader_spi_.get());

  // THOST_TERT_QUICK
  // THOST_TERT_RESUME
  trader_api_->SubscribePrivateTopic(THOST_TERT_QUICK);
  trader_api_->SubscribePublicTopic(THOST_TERT_QUICK);

  trader_api_->RegisterFront
      (const_cast<char*>(options_->front_address.data()));

  trader_api_->Init();

  wait("login");

  if (status_ != AVAILABLE) {
    throw std::runtime_error("login failed, please check the log.");
  }

  // querySettlementInfoConfirm();
  // wait("query settlement info confirm");
  settlementInfoConfirm();

  // wait("settlementInfoConfirm");
}

TraderServiceImpl::~TraderServiceImpl() {
  TRADER_TRACE <<"TraderServiceImpl::~TraderServiceImpl()";

  try {
    logout();
  
    wait();
  } catch (std::exception& e) {
    TRADER_ERROR <<"logout failed.\n"
                 <<e.what();
  }

  trader_api_->RegisterSpi(nullptr);
  trader_api_->Release();
  trader_api_ = nullptr;
}

std::string TraderServiceImpl::apiVersion() {
  TRADER_TRACE <<"TraderServiceImpl::apiVersion()";

  return trader_api_->GetApiVersion();
}

std::string TraderServiceImpl::tradingDay() {
  TRADER_TRACE <<"TraderServiceImpl::tradingDate()";

  return trader_api_->GetTradingDay();
}

int TraderServiceImpl::order(DirectionType direct,
                             OffsetFlagType of,
                             HedgeFlagType hf,
                             const std::string& instru,
                             double price, int volume) {
  TRADER_TRACE <<"TraderServiceImpl::order()";

  std::unique_ptr<ReqOrderInsertMessage> req(
      reqOrderMessage(direct, of, hf,
                      instru, price, volume));

  int req_id = req->id();
  pushOrderReq(req.release());

  return req_id;
}

int TraderServiceImpl::orderFAK(DirectionType direct,
                                OffsetFlagType of,
                                HedgeFlagType hf,
                                const std::string& instru,
                                double price, int volume) {
  TRADER_TRACE <<"TraderServiceImpl::orderFAK()";

  std::unique_ptr<ReqOrderInsertMessage> req(
      reqOrderMessage(direct, of, hf,
                      instru, price, volume));

  req->inputOrder()->TimeCondition = THOST_FTDC_TC_IOC;

  int req_id = req->id();
  pushOrderReq(req.release());

  return req_id;
}

int TraderServiceImpl::orderFOK(DirectionType direct,
                                OffsetFlagType of,
                                HedgeFlagType hf,
                                const std::string& instru,
                                double price, int volume) {
  TRADER_TRACE <<"TraderServiceImpl::orderFOK()";

  std::unique_ptr<ReqOrderInsertMessage> req(
      reqOrderMessage(direct, of, hf,
                      instru, price, volume));

  req->inputOrder()->TimeCondition = THOST_FTDC_TC_IOC;
  req->inputOrder()->VolumeCondition = THOST_FTDC_VC_CV;

  int req_id = req->id();
  pushOrderReq(req.release());

  return req_id;
}

int TraderServiceImpl::queryOrder(const std::string& instru,
                                  const std::string& exchange,
                                  const std::string& order_sys_id,
                                  const std::string& start_time,
                                  const std::string& stop_time) {
  TRADER_TRACE <<"TraderServiceImpl::queryOrder()";

  CThostFtdcQryOrderField req;
  memset(&req, 0x0, sizeof(req));

  strncpy(req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.InvestorID, options_->investor_id.data(), sizeof(req.InvestorID));
  strncpy(req.InstrumentID, instru.data(), sizeof(req.InstrumentID));
  strncpy(req.ExchangeID, exchange.data(), sizeof(req.ExchangeID));
  strncpy(req.OrderSysID, order_sys_id.data(), sizeof(req.OrderSysID));
  strncpy(req.InsertTimeStart, start_time.data(), sizeof(req.InsertTimeStart));
  strncpy(req.InsertTimeEnd, stop_time.data(), sizeof(req.InsertTimeEnd));

  TRADER_DEBUG <<req;

  int req_id = reqID();
  int ret = trader_api_->ReqQryOrder(&req, req_id);
  if (ret != 0) {
    TRADER_ERROR <<"return code " <<ret;
    throw std::runtime_error("query order failed.");
  }

  return req_id;
}

int TraderServiceImpl::queryTrade(const std::string& instru,
                                  const std::string& exchange,
                                  const std::string& trade_id,
                                  const std::string& start_time,
                                  const std::string& stop_time) {
  TRADER_TRACE <<"TraderServiceImpl::queryTrade()";
  
  CThostFtdcQryTradeField req;
  memset(&req, 0x0, sizeof(req));

  strncpy(req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.InvestorID, options_->investor_id.data(), sizeof(req.InvestorID));
  strncpy(req.InstrumentID, instru.data(), sizeof(req.InstrumentID));
  strncpy(req.ExchangeID, exchange.data(), sizeof(req.ExchangeID));
  strncpy(req.TradeID, trade_id.data(), sizeof(req.TradeID));
  strncpy(req.TradeTimeStart, start_time.data(), sizeof(req.TradeTimeStart));
  strncpy(req.TradeTimeEnd, stop_time.data(), sizeof(req.TradeTimeEnd));

  TRADER_DEBUG <<req;

  int req_id = reqID();
  int ret = trader_api_->ReqQryTrade(&req, req_id);
  if (ret != 0) {
    TRADER_ERROR <<"return code " <<ret;
    throw std::runtime_error("query order failed.");
  }

  return req_id;
}

int TraderServiceImpl::queryPosition(const std::string& instru) {
  TRADER_TRACE <<"TraderServiceImpl::queryPosition()";

  CThostFtdcQryInvestorPositionField req;
  memset(&req, 0x0, sizeof(req));

  strncpy(req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.InvestorID, options_->investor_id.data(), sizeof(req.InvestorID));
  strncpy(req.InstrumentID, instru.data(), sizeof(req.InstrumentID));

  TRADER_DEBUG <<req;

  int req_id = reqID();
  int ret = trader_api_->ReqQryInvestorPosition(&req, req_id);
  if (ret != 0) {
    TRADER_ERROR <<"return code " <<ret;
    throw std::runtime_error("query position failed.");
  }

  return req_id;
}

int TraderServiceImpl::queryAccount(const std::string& currency_id) {
  TRADER_TRACE <<"TraderServiceImpl::queryAccount()";

  CThostFtdcQryTradingAccountField req;
  memset(&req, 0x0, sizeof(req));

  strncpy(req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.InvestorID, options_->investor_id.data(), sizeof(req.InvestorID));
  strncpy(req.CurrencyID, currency_id.data(), sizeof(req.CurrencyID));

  TRADER_DEBUG <<req;

  int req_id = reqID();
  int ret = trader_api_->ReqQryTradingAccount(&req, req_id);
  if (ret != 0) {
    TRADER_ERROR <<"return code " <<ret;
    throw std::runtime_error("query account failed.");
  }

  return req_id;
}

int TraderServiceImpl::queryInvestor() {
  TRADER_TRACE <<"TraderServiceImpl::queryInvestor()";

  CThostFtdcQryInvestorField req;
  memset(&req, 0x0, sizeof(req));

  strncpy(req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.InvestorID, options_->investor_id.data(), sizeof(req.InvestorID));

  TRADER_DEBUG <<req;

  int req_id = reqID();
  int ret = trader_api_->ReqQryInvestor(&req, req_id);
  if (ret != 0) {
    TRADER_ERROR <<"return code " <<ret;
    throw std::runtime_error("query investor failed.");
  }

  return req_id;
}

int TraderServiceImpl::queryTradingCode(const std::string& exchange,
                                        const std::string& client_id,
                                        ClientIDType cidt) {
  TRADER_TRACE <<"TraderServiceImpl::queryTradingCode()";

  CThostFtdcQryTradingCodeField req;
  memset(&req, 0x0, sizeof(req));

  strncpy(req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.InvestorID, options_->investor_id.data(), sizeof(req.InvestorID));
  strncpy(req.ExchangeID, exchange.data(), sizeof(req.ExchangeID));
  strncpy(req.ClientID, client_id.data(), sizeof(req.ClientID));
  req.ClientIDType = cidt;
  
  TRADER_DEBUG <<req;

  int req_id = reqID();
  int ret = trader_api_->ReqQryTradingCode(&req, req_id);
  if (ret != 0) {
    TRADER_ERROR <<"return code " <<ret;
    throw std::runtime_error("query trading code failed.");
  }

  return req_id;
}

int TraderServiceImpl::queryInstruMarginRate(const std::string& instru,
                                             HedgeFlagType hedge_flag) {
  TRADER_TRACE <<"TraderServiceImpl::queryInstruMarginRate()";

  CThostFtdcQryInstrumentMarginRateField req;
  memset(&req, 0x0, sizeof(req));

  strncpy(req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.InvestorID, options_->investor_id.data(), sizeof(req.InvestorID));
  strncpy(req.InstrumentID, instru.data(), sizeof(req.InstrumentID));
  req.HedgeFlag = hedge_flag;

  TRADER_DEBUG <<req;

  int req_id = reqID();
  int ret = trader_api_->ReqQryInstrumentMarginRate(&req, req_id);
  if (ret != 0) {
    TRADER_ERROR <<"return code " <<ret;
    throw std::runtime_error("query instrument margin rate failed.");
  }

  return req_id;
}

int TraderServiceImpl::queryInstruCommissionRate(const std::string& instru) {
  TRADER_TRACE <<"TraderServiceImpl::queryInstruCommissionRate()";

  CThostFtdcQryInstrumentCommissionRateField req;
  memset(&req, 0x0, sizeof(req));

  strncpy(req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.InvestorID, options_->investor_id.data(), sizeof(req.InvestorID));
  strncpy(req.InstrumentID, instru.data(), sizeof(req.InstrumentID));

  TRADER_DEBUG <<req;

  int req_id = reqID();
  int ret = trader_api_->ReqQryInstrumentCommissionRate(&req, req_id);
  if (ret != 0) {
    TRADER_ERROR <<"return code " <<ret;
    throw std::runtime_error("query instrument commission rate failed.");
  }

  return req_id;
}

int TraderServiceImpl::queryExchange(const std::string& exchange) {
  TRADER_TRACE <<"TraderServiceImpl::queryExchange()";

  CThostFtdcQryExchangeField req;
  memset(&req, 0x0, sizeof(req));

  strncpy(req.ExchangeID, exchange.data(), sizeof(req.ExchangeID));

  TRADER_DEBUG <<req;

  int req_id = reqID();
  int ret = trader_api_->ReqQryExchange(&req, req_id);
  if (ret != 0) {
    TRADER_ERROR <<"return code " <<ret;
    throw std::runtime_error("query exchange failed.");
  }

  return req_id;
}

int TraderServiceImpl::queryProduct(const std::string& product_id,
                                    ProductClassType pc) {
  TRADER_TRACE <<"TraderServiceImpl::queryProduct()";

  CThostFtdcQryProductField req;
  memset(&req, 0x0, sizeof(req));

  strncpy(req.ProductID, product_id.data(), sizeof(req.ProductID));
  req.ProductClass = pc;

  TRADER_DEBUG <<req;

  int req_id = reqID();
  int ret = trader_api_->ReqQryProduct(&req, req_id);
  if (ret != 0) {
    TRADER_ERROR <<"return code " <<ret;
    throw std::runtime_error("query product failed.");
  }

  return req_id;
}

int TraderServiceImpl::queryInstrument(const std::string& instru,
                                       const std::string& exchange,
                                       const std::string& exchange_instru_id,
                                       const std::string& product_id) {
  TRADER_TRACE <<"TraderServiceImpl::queryInstrument()";

  CThostFtdcQryInstrumentField req;
  memset(&req, 0x0, sizeof(req));

  strncpy(req.InstrumentID, instru.data(), sizeof(req.InstrumentID));
  strncpy(req.ExchangeID, exchange.data(), sizeof(req.ExchangeID));
  strncpy(req.ExchangeInstID, exchange_instru_id.data(), sizeof(req.ExchangeInstID));
  strncpy(req.ProductID, product_id.data(), sizeof(req.ProductID));

  TRADER_DEBUG <<req;

  int req_id = reqID();
  int ret = trader_api_->ReqQryInstrument(&req, req_id);
  if (ret != 0) {
    TRADER_ERROR <<"return code " <<ret;
    throw std::runtime_error("query instrument failed.");
  }

  return req_id;
}

int TraderServiceImpl::queryExchangeMarginRate(const std::string& instru,
                                               HedgeFlagType hedge_flag) {
  TRADER_TRACE <<"TraderServiceImpl::queryExchangeMarginRate()";

  CThostFtdcQryExchangeMarginRateField req;
  memset(&req, 0x0, sizeof(req));

  strncpy(req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.InstrumentID, instru.data(), sizeof(req.InstrumentID));
  req.HedgeFlag = hedge_flag;

  TRADER_DEBUG <<req;

  int req_id = reqID();
  int ret = trader_api_->ReqQryExchangeMarginRate(&req, req_id);
  if (ret != 0) {
    TRADER_ERROR <<"return code " <<ret;
    throw std::runtime_error("query exchange margin rate failed.");
  }

  return req_id;
}

int TraderServiceImpl::queryExchangeMarginRateAdjust(
    const std::string& instru,
    HedgeFlagType hedge_flag) {
  TRADER_TRACE <<"TraderServiceImpl::queryExchangeMarginRateAdjust()";

  CThostFtdcQryExchangeMarginRateAdjustField req;
  memset(&req, 0x0, sizeof(req));

  strncpy(req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.InstrumentID, instru.data(), sizeof(req.InstrumentID));
  req.HedgeFlag = hedge_flag;

  TRADER_DEBUG <<req;

  int req_id = reqID();
  int ret = trader_api_->ReqQryExchangeMarginRateAdjust(&req, req_id);
  if (ret != 0) {
    TRADER_ERROR <<"return code " <<ret;
    throw std::runtime_error("query exchange margin rate adjust failed.");
  }

  return req_id;
}

void TraderServiceImpl::login() {
  TRADER_TRACE <<"TraderServiceImpl::login()";

  CThostFtdcReqUserLoginField req;
  memset(&req, 0x0, sizeof(req));
  strncpy(req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.UserID, options_->user_id.data(), sizeof(req.UserID));
  strncpy(req.Password, options_->password.data(), sizeof(req.Password));

  TRADER_PDU <<req;

  int result = trader_api_->ReqUserLogin(&req, reqID());

  if (result != 0) {
    TRADER_ERROR <<"return code " <<result;
    throw std::runtime_error("login failed.");
  }
}

void TraderServiceImpl::rspLogin(const RspUserLoginMessage* rsp_login) {
  TRADER_TRACE <<" TraderServiceImpl::rspLogin()";

  TRADER_INFO <<rsp_login->toString();

  if (rsp_login->rspInfo()
      && 0 != rsp_login->rspInfo()->ErrorID) {  // login failed
  } else {  // login success
    status_ = AVAILABLE;

    front_id_ = rsp_login->rspUserLogin()->FrontID;
    session_id_ = rsp_login->rspUserLogin()->SessionID;

    max_order_ref_ = atoi(rsp_login->rspUserLogin()->MaxOrderRef);
  }

  notify();
}

void TraderServiceImpl::logout() {
  TRADER_TRACE <<"TraderServiceImpl::logout()";

  CThostFtdcUserLogoutField req;
  memset(&req, 0x0, sizeof(req));
  strncpy(req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.UserID, options_->user_id.data(), sizeof(req.UserID));

  TRADER_INFO <<req;

  int result = trader_api_->ReqUserLogout(&req, reqID());

  if (result != 0) {
    TRADER_ERROR <<"return code " <<result;
    throw std::runtime_error("logout failed.");
  }
}

void TraderServiceImpl::rspLogout() {
  TRADER_TRACE <<" TraderServiceImpl::rspLogout()";

  status_ = UNAVAILABLE;
      
  notify();
}

void TraderServiceImpl::querySettlementInfo() {
  TRADER_TRACE <<"TraderSerivceImpl::querySettlementInfo()";

  CThostFtdcQrySettlementInfoField req;
  memset(&req, 0x0, sizeof(req));
  strncpy(req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.InvestorID, options_->investor_id.data(), sizeof(req.InvestorID));

  TRADER_PDU <<req;

  int result = trader_api_->ReqQrySettlementInfo(&req, reqID());

  if (result != 0) {
    TRADER_ERROR <<"return code " <<result;
    throw std::runtime_error("query settlement info failed.");
  }
}

void TraderServiceImpl::querySettlementInfoConfirm() {
  TRADER_TRACE <<"TraderSerivceImpl::querySettlementInfoConfirm()";

  CThostFtdcQrySettlementInfoConfirmField req;
  memset(&req, 0x0, sizeof(req));
  strncpy(req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.InvestorID, options_->investor_id.data(), sizeof(req.InvestorID));

  TRADER_PDU <<req;

  int result = trader_api_->ReqQrySettlementInfoConfirm(&req, reqID());

  if (result != 0) {
    TRADER_ERROR <<"return code " <<result;
    throw std::runtime_error("query settlement info confirm failed.");
  }
}

void TraderServiceImpl::settlementInfoConfirm() {
  TRADER_TRACE <<"TraderSerivceImpl::settlementInfoConfirm()";

  CThostFtdcSettlementInfoConfirmField req;
  memset(&req, 0x0, sizeof(req));
  strncpy(req.BrokerID,
          options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.InvestorID,
          options_->investor_id.data(), sizeof(req.InvestorID));

  TRADER_PDU <<req;

  int result = trader_api_->ReqSettlementInfoConfirm(&req, reqID());

  if (result != 0) {
    TRADER_ERROR <<"return code " <<result;
    throw std::runtime_error("settlement info confirm failed.");
  }
}

ReqOrderInsertMessage* TraderServiceImpl::reqOrderMessage(
    DirectionType direct,
    OffsetFlagType of,
    HedgeFlagType hf,
    const std::string& instru,
    double price, int volume) {
  std::unique_ptr<CThostFtdcInputOrderField> req
      (new CThostFtdcInputOrderField());

  strncpy(req->BrokerID, options_->broker_id.data(), sizeof(req->BrokerID));
  strncpy(req->InvestorID,
          options_->investor_id.data(), sizeof(req->InvestorID));

  strncpy(req->UserID, options_->user_id.data(), sizeof(req->UserID));
  req->OrderPriceType = THOST_FTDC_OPT_LimitPrice;
  req->TimeCondition = THOST_FTDC_TC_GFD;
  req->VolumeCondition = THOST_FTDC_VC_AV;
  req->MinVolume = 1;
  req->ContingentCondition = THOST_FTDC_CC_Immediately;
  req->ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
  req->IsAutoSuspend = 0;

  req->Direction = direct;
  req->CombOffsetFlag[0] = of;
  req->CombHedgeFlag[0] = hf;
  strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  req->LimitPrice = price;
  req->VolumeTotalOriginal = volume;

  std::unique_ptr<ReqOrderInsertMessage> req_msg(
      new ReqOrderInsertMessage(req.get(), reqID()));

  TRADER_DEBUG <<req_msg->toString();

  return req_msg.release();
}

void TraderServiceImpl::orderGo(const Message* msg) {
  TRADER_TRACE <<"TraderServiceImpl::orderGo()";

  try {
    if (msg->id() == REQ_ORDER_INSERT_MESSAGE) {
      const ReqOrderInsertMessage* req_msg = dynamic_cast<
        const ReqOrderInsertMessage*>(msg);
      CThostFtdcInputOrderField* req = req_msg->inputOrder();
      char OrderRef[13];
      snprintf(OrderRef, sizeof(OrderRef), "%013d", ++max_order_ref_);
      strncpy(req->OrderRef, OrderRef, sizeof(req->OrderRef));

      int result = trader_api_->ReqOrderInsert(req, req_msg->requestID());
      if (result != 0) {
        std::stringstream ss;
        ss <<"the order insert failed.\n"
           <<"Error Code is " <<result;
        throw std::runtime_error(ss.str());
      }
    } else {
      std::stringstream ss;
      ss <<"the req message is unsupported.\n"
         <<"the message id is " <<msg->id();
      throw std::runtime_error(ss.str());
    }
  } catch (std::exception & e) {
    TRADER_ERROR <<e.what();
  }
}

soil::Options* TraderService::createOptions() {
  return new TraderOptions();
}

TraderService* TraderService::createService(soil::Options* options,
                                            ServiceCallback* callback) {
  return new TraderServiceImpl(options, callback);
}

}  // namespace cata
