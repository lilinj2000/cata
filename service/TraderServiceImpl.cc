// Copyright (c) 2010
// All rights reserved.

#include "TraderServiceImpl.hh"
#include "CataLog.hh"
#include "TraderOptions.hh"
#include "TraderSpiImpl.hh"
#include "ThostFtdcUserApiStructPrint.hh"

namespace cata {

TraderServiceImpl::TraderServiceImpl(soil::Options* options,
                                     TraderServiceCallback* callback) :
    trader_api_(NULL),
    callback_(callback),
    front_id_(-1),
    session_id_(-1),
    max_order_ref_(-1) {
  CATA_TRACE <<"TraderServiceImpl::TraderServiceImpl()";

  cond_.reset(soil::STimer::create());

  options_ = dynamic_cast<TraderOptions*>(options);

  trader_api_ = CThostFtdcTraderApi::CreateFtdcTraderApi
      (options_->flow_path.data());
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

  // querySettlementInfoConfirm();
  // wait("query settlement info confirm");
  settlementInfoConfirm();

  wait("settlementInfoConfirm");
}

TraderServiceImpl::~TraderServiceImpl() {
  CATA_TRACE <<"TraderServiceImpl::~TraderServiceImpl()";

  trader_api_->RegisterSpi(nullptr);
  trader_api_->Release();
  trader_api_ = nullptr;
}

std::string TraderServiceImpl::tradingDay() {
  CATA_TRACE <<"TraderServiceImpl::tradingDate()";

  return trader_api_->GetTradingDay();
}

int TraderServiceImpl::orderOpenBuy(const std::string& instru,
                                    double price, int volume) {
  CATA_TRACE <<"TraderServiceImpl::orderOpenBuy()";

  CATA_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  std::unique_ptr<CThostFtdcInputOrderField> req(orderField(&order_ref));

  strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  req->Direction = THOST_FTDC_D_Buy;
  req->LimitPrice = price;
  req->VolumeTotalOriginal = volume;

  try {
    orderGo(req.get());
  }
  catch( ... ) {
    throw std::runtime_error("order open buy failed.");
  }

  return order_ref;
}

int TraderServiceImpl::orderOpenBuyFAK(const std::string& instru,
                                       double price, int volume) {
  CATA_TRACE <<"TraderServiceImpl::orderOpenBuyFAK()";

  CATA_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  std::unique_ptr<CThostFtdcInputOrderField> req(orderField(&order_ref));

  strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  req->Direction = THOST_FTDC_D_Buy;
  req->LimitPrice = price;
  req->VolumeTotalOriginal = volume;

  req->TimeCondition = THOST_FTDC_TC_IOC;

  try {
    orderGo(req.get());
  }
  catch( ... ) {
    throw std::runtime_error("order open buy FAK failed.");
  }

  return order_ref;
}

int TraderServiceImpl::orderOpenBuyFOK(const std::string& instru,
                                       double price, int volume) {
  CATA_TRACE <<"TraderServiceImpl::orderOpenBuyFOK()";

  CATA_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  std::unique_ptr<CThostFtdcInputOrderField> req(orderField(&order_ref));

  strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  req->Direction = THOST_FTDC_D_Buy;
  req->LimitPrice = price;
  req->VolumeTotalOriginal = volume;

  req->TimeCondition = THOST_FTDC_TC_IOC;
  req->VolumeCondition = THOST_FTDC_VC_CV;

  try {
    orderGo(req.get());
  }
  catch( ... ) {
    throw std::runtime_error("order open buy FOK failed.");
  }

  return order_ref;
}


int TraderServiceImpl::orderOpenSell(const std::string& instru,
                                      double price, int volume) {
  CATA_TRACE <<"TraderServiceImpl::orderOpenSell()";

  CATA_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  std::unique_ptr<CThostFtdcInputOrderField> req(orderField(&order_ref));

  strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  req->Direction = THOST_FTDC_D_Sell;
  req->LimitPrice = price;
  req->VolumeTotalOriginal = volume;

  try {
    orderGo(req.get());
  }
  catch( ... ) {
    throw std::runtime_error("order open sell failed.");
  }

  return order_ref;
}

int TraderServiceImpl::orderCloseBuy(const std::string& instru,
                                     double price, int volume) {
  CATA_TRACE <<"TraderServiceImpl::orderCloseBuy()";

  CATA_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  std::unique_ptr<CThostFtdcInputOrderField> req(orderField(&order_ref));

  strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  req->Direction = THOST_FTDC_D_Buy;
  req->LimitPrice = price;
  req->VolumeTotalOriginal = volume;
  req->CombOffsetFlag[0] = THOST_FTDC_OF_CloseToday;

  try {
    orderGo(req.get());
  }
  catch( ... ) {
    throw std::runtime_error("order close buy failed.");
  }

  return order_ref;
}

int TraderServiceImpl::orderCloseSell(const std::string& instru,
                                     double price, int volume) {
  CATA_TRACE <<"TraderServiceImpl::orderCloseSell()";

  CATA_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  std::unique_ptr<CThostFtdcInputOrderField> req(orderField(&order_ref));

  strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  req->Direction = THOST_FTDC_D_Sell;
  req->LimitPrice = price;
  req->VolumeTotalOriginal = volume;
  req->CombOffsetFlag[0] = THOST_FTDC_OF_CloseToday;

  try {
    orderGo(req.get());
  }
  catch( ... ) {
    throw std::runtime_error("order close sell failed.");
  }

  return order_ref;
}

void TraderServiceImpl::initSession
(CThostFtdcRspUserLoginField* pRspUserLogin) {
  front_id_ = pRspUserLogin->FrontID;
  session_id_ = pRspUserLogin->SessionID;

  max_order_ref_ = atoi(pRspUserLogin->MaxOrderRef);
}

void TraderServiceImpl::login() {
  CATA_TRACE <<"TraderServiceImpl::login()";

  CThostFtdcReqUserLoginField req;
  memset(&req, 0x0, sizeof(req));
  strncpy(req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.UserID, options_->user_id.data(), sizeof(req.UserID));
  strncpy(req.Password, options_->password.data(), sizeof(req.Password));

  CATA_PDU <<req;

  int result = trader_api_->ReqUserLogin(&req, ++request_id_);

  if (result != 0) {
    CATA_ERROR <<"return code " <<result;
    throw std::runtime_error("login failed.");
  }
}

void TraderServiceImpl::querySettlementInfo() {
  CATA_TRACE <<"TraderSerivceImpl::querySettlementInfo()";

  CThostFtdcQrySettlementInfoField req;
  memset(&req, 0x0, sizeof(req));
  strncpy(req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.InvestorID, options_->investor_id.data(), sizeof(req.InvestorID));

  CATA_PDU <<req;

  int result = trader_api_->ReqQrySettlementInfo(&req, ++request_id_);

  if (result != 0) {
    CATA_ERROR <<"return code " <<result;
    throw std::runtime_error("query settlement info failed.");
  }
}

void TraderServiceImpl::querySettlementInfoConfirm() {
  CATA_TRACE <<"TraderSerivceImpl::querySettlementInfoConfirm()";

  CThostFtdcQrySettlementInfoConfirmField req;
  memset(&req, 0x0, sizeof(req));
  strncpy(req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.InvestorID, options_->investor_id.data(), sizeof(req.InvestorID));

  CATA_PDU <<req;

  int result = trader_api_->ReqQrySettlementInfoConfirm(&req, ++request_id_);

  if (result != 0) {
    CATA_ERROR <<"return code " <<result;
    throw std::runtime_error("query settlement info confirm failed.");
  }
}

void TraderServiceImpl::settlementInfoConfirm() {
  CATA_TRACE <<"TraderSerivceImpl::settlementInfoConfirm()";

  CThostFtdcSettlementInfoConfirmField req;
  memset(&req, 0x0, sizeof(req));
  strncpy(req.BrokerID,
          options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.InvestorID,
          options_->investor_id.data(), sizeof(req.InvestorID));

  CATA_PDU <<req;

  int result = trader_api_->ReqSettlementInfoConfirm(&req, ++request_id_);

  if (result != 0) {
    CATA_ERROR <<"return code " <<result;
    throw std::runtime_error("settlement info confirm failed.");
  }
}

void TraderServiceImpl::wait(const std::string& hint) {
  if (cond_->wait(2000)) {
    if (!hint.empty())
      throw std::runtime_error(hint + " time out");
  }
}

void TraderServiceImpl::notify() {
  cond_->notifyAll();
}

CThostFtdcInputOrderField* TraderServiceImpl::orderField(int* order_ref) {
  std::unique_ptr<CThostFtdcInputOrderField> req
      (new CThostFtdcInputOrderField());

  *order_ref = max_order_ref_++;
  strncpy(req->BrokerID, options_->broker_id.data(), sizeof(req->BrokerID));
  strncpy(req->InvestorID,
          options_->investor_id.data(), sizeof(req->InvestorID));

  char OrderRef[13];
  snprintf(OrderRef, sizeof(OrderRef), "%d", *order_ref);
  strncpy(req->OrderRef, OrderRef, sizeof(req->OrderRef));
  strncpy(req->UserID, options_->user_id.data(), sizeof(req->UserID));
  req->OrderPriceType = THOST_FTDC_OPT_LimitPrice;

  // req->CombOffsetFlag[0] = THOST_FTDC_OF_Open;
  req->CombOffsetFlag[0] = THOST_FTDC_OF_Open;
  req->CombHedgeFlag[0] = THOST_FTDC_OPT_AnyPrice;
  req->TimeCondition = THOST_FTDC_TC_GFD;
  req->VolumeCondition = THOST_FTDC_VC_AV;
  req->MinVolume = 1;
  req->ContingentCondition = THOST_FTDC_CC_Immediately;
  req->ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
  req->IsAutoSuspend = 0;

  return req.release();
}

void TraderServiceImpl::orderGo(CThostFtdcInputOrderField* req) {
  CATA_TRACE <<"TraderServiceImpl::orderGo()";
  CATA_PDU <<*req;

  int result = trader_api_->ReqOrderInsert(req, ++request_id_);

  if (result != 0) {
    CATA_ERROR <<"return code " <<result;
    throw;
  }
}

soil::Options* TraderService::createOptions() {
  return new TraderOptions();
}

TraderService* TraderService::createService(soil::Options* options,
                                            TraderServiceCallback* callback) {
  return new TraderServiceImpl(options, callback);
}

}  // namespace cata
