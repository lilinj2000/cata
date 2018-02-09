// Copyright 2017 The Cata Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// -----------------------------------------------------------------------------
// File: [file_name]
// -----------------------------------------------------------------------------
//
// [file_descrition]
//
// Example:
//
//   ... ...
//
//

#include "service/trader_service_impl.h"
#include "service/trader_options.h"
#include "service/trader_spi_impl.h"
#include "service/api_struct_print.h"
#include "soil/macro.h"
#include "soil/log.h"

namespace cata {

#define INPUT_BROKER_ID(O, S)  \
  S_INPUT(O,                                    \
          S,                                    \
          BrokerID,                             \
          options_->broker_id.data())

#define INPUT_USER_ID(O, S) \
  S_INPUT(O,                                    \
          S,                                    \
          UserID,                               \
          options_->user_id.data())

#define INPUT_INVESTOR_ID(O, S)                 \
  S_INPUT(O,                                    \
          S,                                    \
          InvestorID,                           \
          options_->investor_id.data())

#define INPUT_ID_OF_BI(O, S) \
  INPUT_BROKER_ID(O, S);      \
  INPUT_INVESTOR_ID(O, S)

#define INPUT_ID_OF_BU(O, S) \
  INPUT_BROKER_ID(O, S);      \
  INPUT_USER_ID(O, S)

#define INPUT_ID_OF_BUI(O, S) \
  INPUT_BROKER_ID(O, S);      \
  INPUT_USER_ID(O, S);        \
  INPUT_INVESTOR_ID(O, S)

TraderServiceImpl::TraderServiceImpl(
    const rapidjson::Document& doc,
    TraderCallback* callback) :
    trader_api_(nullptr),
    callback_(callback),
    request_id_(0),
    front_id_(-1),
    session_id_(-1),
    max_order_ref_(-1) {
  SOIL_TRACE("TraderServiceImpl::TraderServiceImpl()");

  cond_.reset(soil::STimer::create());
  options_.reset(new TraderOptions(doc));

  trader_api_ =
      CThostFtdcTraderApi::CreateFtdcTraderApi(
          options_->flow_path.data());

  SOIL_INFO("The Api version is {}",
           trader_api_->GetApiVersion());

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
  SOIL_TRACE("TraderServiceImpl::~TraderServiceImpl()");

  try {
    logout();
    wait();
  } catch (std::exception& e) {
    SOIL_ERROR("Error: {}", e.what());
  }

  trader_api_->RegisterSpi(nullptr);
  trader_api_->Release();
  trader_api_ = nullptr;
}

std::string TraderServiceImpl::tradingDay() {
  SOIL_TRACE("TraderServiceImpl::tradingDate()");

  return trader_api_->GetTradingDay();
}

int32_t TraderServiceImpl::openBuyOrder(
    const std::string& instru,
    double price,
    int volume) {
  SOIL_TRACE("TraderServiceImpl::openBuyOrder()");

  std::shared_ptr<CThostFtdcInputOrderField>
      req = reqOrderMessage(instru, price, volume);

  return orderGo(req);
}

int32_t TraderServiceImpl::openBuyOrderFAK(
    const std::string& instru,
    double price,
    int volume) {
  SOIL_TRACE("TraderServiceImpl::openBuyOrderFAK()");

  std::shared_ptr<CThostFtdcInputOrderField>
      req = reqOrderMessage(instru, price, volume,
                            THOST_FTDC_D_Buy,
                            THOST_FTDC_OF_Open,
                            THOST_FTDC_TC_IOC);
  return orderGo(req);
}

int32_t TraderServiceImpl::openBuyOrderFOK(
    const std::string& instru,
    double price,
    int volume) {
  SOIL_TRACE("TraderServiceImpl::openBuyOrderFOK()");

  std::shared_ptr<CThostFtdcInputOrderField>
      req = reqOrderMessage(instru, price, volume,
                            THOST_FTDC_D_Buy,
                            THOST_FTDC_OF_Open,
                            THOST_FTDC_TC_IOC,
                            THOST_FTDC_VC_CV);

  return orderGo(req);
}

int32_t TraderServiceImpl::closeBuyOrder(
    const std::string& instru,
    double price,
    int volume) {
  SOIL_TRACE("TraderServiceImpl::closeBuyOrder()");

  std::shared_ptr<CThostFtdcInputOrderField>
      req = reqOrderMessage(instru, price, volume,
                            THOST_FTDC_D_Buy,
                            THOST_FTDC_OF_Close);
  return orderGo(req);
}

int32_t TraderServiceImpl::closeBuyOrderFAK(
    const std::string& instru,
    double price,
    int volume) {
  SOIL_TRACE("TraderServiceImpl::closeBuyOrderFAK()");

  std::shared_ptr<CThostFtdcInputOrderField>
      req = reqOrderMessage(instru, price, volume,
                            THOST_FTDC_D_Buy,
                            THOST_FTDC_OF_Close,
                            THOST_FTDC_TC_IOC);
  return orderGo(req);
}

int32_t TraderServiceImpl::closeBuyOrderFOK(
    const std::string& instru,
    double price,
    int volume) {
  SOIL_TRACE("TraderServiceImpl::closeBuyOrderFOK()");

  std::shared_ptr<CThostFtdcInputOrderField>
      req = reqOrderMessage(instru, price, volume,
                            THOST_FTDC_D_Buy,
                            THOST_FTDC_OF_Close,
                            THOST_FTDC_TC_IOC,
                            THOST_FTDC_VC_CV);
  return orderGo(req);
}

int32_t TraderServiceImpl::openSellOrder(
    const std::string& instru,
    double price,
    int volume) {
  SOIL_TRACE("TraderServiceImpl::openSellOrder()");

  std::shared_ptr<CThostFtdcInputOrderField>
      req = reqOrderMessage(instru, price, volume,
                            THOST_FTDC_D_Sell);

  return orderGo(req);
}

int32_t TraderServiceImpl::openSellOrderFAK(
    const std::string& instru,
    double price,
    int volume) {
  SOIL_TRACE("TraderServiceImpl::openSellOrderFAK()");

  std::shared_ptr<CThostFtdcInputOrderField>
      req = reqOrderMessage(instru, price, volume,
                            THOST_FTDC_D_Sell,
                            THOST_FTDC_OF_Open,
                            THOST_FTDC_TC_IOC);

  return orderGo(req);
}

int32_t TraderServiceImpl::openSellOrderFOK(
    const std::string& instru,
    double price,
    int volume) {
  SOIL_TRACE("TraderServiceImpl::openSellOrderFOK()");

  std::shared_ptr<CThostFtdcInputOrderField>
      req = reqOrderMessage(instru, price, volume,
                            THOST_FTDC_D_Sell,
                            THOST_FTDC_OF_Open,
                            THOST_FTDC_TC_IOC,
                            THOST_FTDC_VC_CV);

  return orderGo(req);
}

int32_t TraderServiceImpl::closeSellOrder(
    const std::string& instru,
    double price,
    int volume) {
  SOIL_TRACE("TraderServiceImpl::closeSellOrder()");

  std::shared_ptr<CThostFtdcInputOrderField>
      req = reqOrderMessage(instru, price, volume,
                            THOST_FTDC_D_Sell,
                            THOST_FTDC_OF_Close);

  return orderGo(req);
}

int32_t TraderServiceImpl::closeSellOrderFAK(
    const std::string& instru,
    double price,
    int volume) {
  SOIL_TRACE("TraderServiceImpl::closeSellOrderFAK()");

  std::shared_ptr<CThostFtdcInputOrderField>
      req = reqOrderMessage(instru, price, volume,
                            THOST_FTDC_D_Sell,
                            THOST_FTDC_OF_Close,
                            THOST_FTDC_TC_IOC);

  return orderGo(req);
}

int32_t TraderServiceImpl::closeSellOrderFOK(
    const std::string& instru,
    double price,
    int volume) {
  SOIL_TRACE("TraderServiceImpl::closeSellOrderFOK()");

  std::shared_ptr<CThostFtdcInputOrderField>
      req = reqOrderMessage(instru, price, volume,
                            THOST_FTDC_D_Sell,
                            THOST_FTDC_OF_Close,
                            THOST_FTDC_TC_IOC,
                            THOST_FTDC_VC_CV);

  return orderGo(req);
}

void TraderServiceImpl::cancelOrder(
    int32_t order_ref,
    const std::string& instru) {
  SOIL_TRACE("TraderServiceImpl::cancelOrder()");

  CThostFtdcInputOrderActionField req;
  memset(&req, 0x0, sizeof(req));

  INPUT_ID_OF_BUI(
      &req,
      CThostFtdcInputOrderActionField);

  S_INPUT(&req,
          CThostFtdcInputOrderActionField,
          OrderRef,
          orderRef(order_ref).data());

  req.FrontID = front_id_;
  req.SessionID = session_id_;
  req.ActionFlag = THOST_FTDC_AF_Delete;

  S_INPUT(&req, CThostFtdcInputOrderActionField,
          InstrumentID, instru.data());

  SOIL_DEBUG("{}", req);

  int req_id = reqID();
  int ret = trader_api_->ReqOrderAction(&req, req_id);
  if (ret != 0) {
    throw std::runtime_error(
        fmt::format("cancel order failed."
                    " return code {}", ret));
  }
}

void TraderServiceImpl::cancelOrder(
    const std::string& exchange_id,
    const std::string& order_sys_id,
    const std::string& instru) {
  SOIL_TRACE("TraderServiceImpl::cancelOrder()");

  CThostFtdcInputOrderActionField req;
  memset(&req, 0x0, sizeof(req));

  INPUT_ID_OF_BUI(
      &req,
      CThostFtdcInputOrderActionField);

  S_INPUT(&req,
          CThostFtdcInputOrderActionField,
          ExchangeID,
          exchange_id.data());
  S_INPUT(&req,
          CThostFtdcInputOrderActionField,
          OrderSysID,
          order_sys_id.data());

  req.ActionFlag = THOST_FTDC_AF_Delete;

  S_INPUT(&req,
          CThostFtdcInputOrderActionField,
          InstrumentID,
          instru.data());

  SOIL_DEBUG("{}", req);

  int req_id = reqID();
  int ret = trader_api_->ReqOrderAction(&req, req_id);
  if (ret != 0) {
    throw std::runtime_error(
        fmt::format("cancel order failed."
                    " return code {}", ret));
  }
}

void TraderServiceImpl::queryOrder(
    const std::string& instru,
    const std::string& exchange,
    const std::string& order_sys_id,
    const std::string& start_time,
    const std::string& stop_time) {
  SOIL_TRACE("TraderServiceImpl::queryOrder()");

  CThostFtdcQryOrderField req;
  memset(&req, 0x0, sizeof(req));

  INPUT_ID_OF_BI(
      &req,
      CThostFtdcQryOrderField);
  S_INPUT(&req,
          CThostFtdcQryOrderField,
          InstrumentID,
          instru.data());
  S_INPUT(&req,
          CThostFtdcQryOrderField,
          ExchangeID,
          exchange.data());
  S_INPUT(&req,
          CThostFtdcQryOrderField,
          OrderSysID,
          order_sys_id.data());
  S_INPUT(&req,
          CThostFtdcQryOrderField,
          InsertTimeStart,
          start_time.data());
  S_INPUT(&req,
          CThostFtdcQryOrderField,
          InsertTimeEnd,
          stop_time.data());

  SOIL_DEBUG("{}", req);

  int req_id = reqID();
  int ret = trader_api_->ReqQryOrder(&req, req_id);
  if (ret != 0) {
    throw std::runtime_error(
        fmt::format("query order failed."
                    " return code {}", ret));
  }
}

void TraderServiceImpl::queryTrade(
    const std::string& instru,
    const std::string& exchange,
    const std::string& trade_id,
    const std::string& start_time,
    const std::string& stop_time) {
  SOIL_TRACE("TraderServiceImpl::queryTrade()");

  CThostFtdcQryTradeField req;
  memset(&req, 0x0, sizeof(req));

  INPUT_ID_OF_BI(
      &req,
      CThostFtdcQryTradeField);
  S_INPUT(&req,
          CThostFtdcQryTradeField,
          InstrumentID,
          instru.data());
  S_INPUT(&req,
          CThostFtdcQryTradeField,
          ExchangeID,
          exchange.data());
  S_INPUT(&req,
          CThostFtdcQryTradeField,
          TradeID,
          trade_id.data());
  S_INPUT(&req,
          CThostFtdcQryTradeField,
          TradeTimeStart,
          start_time.data());
  S_INPUT(&req,
          CThostFtdcQryTradeField,
          TradeTimeEnd,
          stop_time.data());

  SOIL_DEBUG("{}", req);

  int req_id = reqID();
  int ret = trader_api_->ReqQryTrade(&req, req_id);
  if (ret != 0) {
    throw std::runtime_error(
        fmt::format("query order failed.\n"
                    " return code {}", ret));
  }
}

void TraderServiceImpl::queryPosition(
    const std::string& instru) {
  SOIL_TRACE("TraderServiceImpl::queryPosition()");

  CThostFtdcQryInvestorPositionField req;
  memset(&req, 0x0, sizeof(req));

  INPUT_ID_OF_BI(
      &req,
      CThostFtdcQryInvestorPositionField);
  S_INPUT(&req,
          CThostFtdcQryInvestorPositionField,
          InstrumentID,
          instru.data());

  SOIL_DEBUG("{}", req);

  int req_id = reqID();
  int ret = trader_api_->ReqQryInvestorPosition(&req, req_id);
  if (ret != 0) {
    throw std::runtime_error(
        fmt::format("query position failed."
                    " return code {}", ret));
  }
}

void TraderServiceImpl::queryAccount(
    const std::string& currency_id) {
  SOIL_TRACE("TraderServiceImpl::queryAccount()");

  CThostFtdcQryTradingAccountField req;
  memset(&req, 0x0, sizeof(req));

  INPUT_ID_OF_BI(
      &req,
      CThostFtdcQryTradingAccountField);
  S_INPUT(&req,
          CThostFtdcQryTradingAccountField,
          CurrencyID,
          currency_id.data());

  SOIL_DEBUG_PRINT(req);

  int req_id = reqID();
  int ret = trader_api_->ReqQryTradingAccount(&req, req_id);
  if (ret != 0) {
    throw std::runtime_error(
        fmt::format("query account failed."
                    " return code {}", ret));
  }
}

void TraderServiceImpl::queryInvestor() {
  SOIL_TRACE("TraderServiceImpl::queryInvestor()");

  CThostFtdcQryInvestorField req;
  memset(&req, 0x0, sizeof(req));

  INPUT_ID_OF_BI(
      &req,
      CThostFtdcQryInvestorField);

  SOIL_DEBUG_PRINT(req);

  int req_id = reqID();
  int ret = trader_api_->ReqQryInvestor(&req, req_id);
  if (ret != 0) {
    throw std::runtime_error(
        fmt::format("query investor failed."
                    " return code {}", ret));
  }
}

void TraderServiceImpl::queryTradingCode(
    const std::string& exchange) {
  SOIL_TRACE("TraderServiceImpl::queryTradingCode()");

  CThostFtdcQryTradingCodeField req;
  memset(&req, 0x0, sizeof(req));

  INPUT_ID_OF_BI(
      &req,
      CThostFtdcQryTradingCodeField);

  S_INPUT(&req, CThostFtdcQryTradingCodeField,
          ExchangeID, exchange.data());

  SOIL_DEBUG_PRINT(req);

  int req_id = reqID();
  int ret = trader_api_->ReqQryTradingCode(&req, req_id);
  if (ret != 0) {
    throw std::runtime_error(
        fmt::format("query trading code failed.\n"
                    "return code is {}", ret));
  }
}

void TraderServiceImpl::queryInstruMarginRate(
    const std::string& instru) {
  SOIL_TRACE("TraderServiceImpl::queryInstruMarginRate()");

  CThostFtdcQryInstrumentMarginRateField req;
  memset(&req, 0x0, sizeof(req));

  INPUT_ID_OF_BI(
      &req,
      CThostFtdcQryInstrumentMarginRateField);

  S_INPUT(&req,
          CThostFtdcQryInstrumentMarginRateField,
          InstrumentID,
          instru.data());
  req.HedgeFlag = THOST_FTDC_HF_Speculation;

  SOIL_DEBUG_PRINT(req);

  int req_id = reqID();
  int ret = trader_api_->ReqQryInstrumentMarginRate(&req, req_id);
  if (ret != 0) {
    throw std::runtime_error(
        fmt::format("query instrument margin rate failed.\n"
                    "return code {}", ret));
  }
}

void TraderServiceImpl::queryInstruCommissionRate(
    const std::string& instru) {
  SOIL_TRACE("TraderServiceImpl::queryInstruCommissionRate()");

  CThostFtdcQryInstrumentCommissionRateField req;
  memset(&req, 0x0, sizeof(req));

  INPUT_ID_OF_BI(
      &req,
      CThostFtdcQryInstrumentCommissionRateField);
  S_INPUT(&req,
          CThostFtdcQryInstrumentCommissionRateField,
          InstrumentID,
          instru.data());

  SOIL_DEBUG_PRINT(req);

  int req_id = reqID();
  int ret = trader_api_->ReqQryInstrumentCommissionRate(&req, req_id);
  if (ret != 0) {
    throw std::runtime_error(
        fmt::format("query instrument commission rate failed."
                    " return code {}", ret));
  }
}

void TraderServiceImpl::queryExchange(
    const std::string& exchange) {
  SOIL_TRACE("TraderServiceImpl::queryExchange()");

  CThostFtdcQryExchangeField req;
  memset(&req, 0x0, sizeof(req));

  S_INPUT(&req, CThostFtdcQryExchangeField, ExchangeID, exchange.data());

  SOIL_DEBUG_PRINT(req);

  int req_id = reqID();
  int ret = trader_api_->ReqQryExchange(&req, req_id);
  if (ret != 0) {
    throw std::runtime_error(
        fmt::format("query exchange failed."
                    " return code {}", ret));
  }
}

void TraderServiceImpl::queryProduct(
    const std::string& product_id) {
  SOIL_TRACE("TraderServiceImpl::queryProduct()");

  CThostFtdcQryProductField req;
  memset(&req, 0x0, sizeof(req));

  S_INPUT(&req, CThostFtdcQryProductField, ProductID, product_id.data());

  SOIL_DEBUG_PRINT(req);

  int req_id = reqID();
  int ret = trader_api_->ReqQryProduct(&req, req_id);
  if (ret != 0) {
    throw std::runtime_error(
        fmt::format("query product failed."
                    " return code is {}", ret));
  }
}

void TraderServiceImpl::queryInstrument(
    const std::string& instru,
    const std::string& exchange,
    const std::string& exchange_instru_id,
    const std::string& product_id) {
  SOIL_TRACE("TraderServiceImpl::queryInstrument()");

  CThostFtdcQryInstrumentField req;
  memset(&req, 0x0, sizeof(req));

  S_INPUT(&req, CThostFtdcQryInstrumentField, InstrumentID, instru.data());
  S_INPUT(&req, CThostFtdcQryInstrumentField, ExchangeID, exchange.data());
  S_INPUT(&req, CThostFtdcQryInstrumentField,
          ExchangeInstID, exchange_instru_id.data());
  S_INPUT(&req, CThostFtdcQryInstrumentField, ProductID, product_id.data());

  SOIL_DEBUG_PRINT(req);

  int req_id = reqID();
  int ret = trader_api_->ReqQryInstrument(&req, req_id);
  if (ret != 0) {
    throw std::runtime_error(
        fmt::format("query instrument failed."
                    " return code {}", ret));
  }
}

void TraderServiceImpl::queryDepthMarketData(
    const std::string& instru) {
  SOIL_TRACE("TraderServiceImpl::queryDepthMarketData()");

  CThostFtdcQryDepthMarketDataField req;
  memset(&req, 0x0, sizeof(req));

  S_INPUT(&req, CThostFtdcQryDepthMarketDataField, InstrumentID, instru.data());

  SOIL_DEBUG_PRINT(req);

  int req_id = reqID();
  int ret = trader_api_->ReqQryDepthMarketData(&req, req_id);
  if (ret != 0) {
    throw std::runtime_error(
        fmt::format("query depth market data failed."
                    " return code {}", ret));
  }
}

void TraderServiceImpl::queryExchangeMarginRate(
    const std::string& instru) {
  SOIL_TRACE("TraderServiceImpl::queryExchangeMarginRate()");

  CThostFtdcQryExchangeMarginRateField req;
  memset(&req, 0x0, sizeof(req));

  INPUT_BROKER_ID(
      &req,
      CThostFtdcQryExchangeMarginRateField);
  req.HedgeFlag = THOST_FTDC_HF_Speculation;

  SOIL_DEBUG_PRINT(req);

  int req_id = reqID();
  int ret = trader_api_->ReqQryExchangeMarginRate(&req, req_id);
  if (ret != 0) {
    throw std::runtime_error(
        fmt::format("query exchange margin rate failed."
                    " return code is {}", ret));
  }
}

void TraderServiceImpl::queryExchangeMarginRateAdjust(
    const std::string& instru) {
  SOIL_TRACE("TraderServiceImpl::queryExchangeMarginRateAdjust()");

  CThostFtdcQryExchangeMarginRateAdjustField req;
  memset(&req, 0x0, sizeof(req));

  INPUT_BROKER_ID(
      &req,
      CThostFtdcQryExchangeMarginRateAdjustField);
  S_INPUT(&req,
          CThostFtdcQryExchangeMarginRateAdjustField,
          InstrumentID,
          instru.data());
  req.HedgeFlag = THOST_FTDC_HF_Speculation;

  SOIL_DEBUG_PRINT(req);

  int req_id = reqID();
  int ret = trader_api_->ReqQryExchangeMarginRateAdjust(&req, req_id);
  if (ret != 0) {
    throw std::runtime_error(
        fmt::format("query exchange margin rate adjust failed."
                    " return code is {}", ret));
  }
}

void TraderServiceImpl::login() {
  SOIL_TRACE("TraderServiceImpl::login()");

  CThostFtdcReqUserLoginField req;
  memset(&req, 0x0, sizeof(req));

  INPUT_ID_OF_BU(
      &req,
      CThostFtdcReqUserLoginField);
  S_INPUT(&req,
          CThostFtdcReqUserLoginField,
          Password,
          options_->password.data());

  SOIL_DEBUG_PRINT(req);

  int result = trader_api_->ReqUserLogin(&req, reqID());

  if (result != 0) {
    throw std::runtime_error(
        fmt::format("login failed, return code {}",
                    result));
  }
}

void TraderServiceImpl::rspLogin(
    const CThostFtdcRspUserLoginField* rsp) {
  SOIL_TRACE("TraderServiceImpl::rspLogin()");

  front_id_ = rsp->FrontID;
  session_id_ = rsp->SessionID;
  max_order_ref_ = std::atoi(rsp->MaxOrderRef);

  notify();
}

void TraderServiceImpl::logout() {
  SOIL_TRACE("TraderServiceImpl::logout()");

  CThostFtdcUserLogoutField req;
  memset(&req, 0x0, sizeof(req));

  INPUT_ID_OF_BU(
      &req,
      CThostFtdcUserLogoutField);

  SOIL_DEBUG_PRINT(req);

  int result = trader_api_->ReqUserLogout(&req, reqID());

  if (result != 0) {
    throw std::runtime_error(
        fmt::format("logout failed. return code {}",
                    result));
  }
}

void TraderServiceImpl::querySettlementInfo() {
  SOIL_TRACE("TraderSerivceImpl::querySettlementInfo()");

  CThostFtdcQrySettlementInfoField req;
  memset(&req, 0x0, sizeof(req));

  INPUT_ID_OF_BI(
      &req,
      CThostFtdcQrySettlementInfoField);

  SOIL_DEBUG_PRINT(req);

  int result = trader_api_->ReqQrySettlementInfo(&req, reqID());

  if (result != 0) {
    throw std::runtime_error(
        fmt::format("query settlement info failed."
                    " return code {}",
                    result));
  }
}

void TraderServiceImpl::querySettlementInfoConfirm() {
  SOIL_TRACE("TraderSerivceImpl::querySettlementInfoConfirm()");

  CThostFtdcQrySettlementInfoConfirmField req;
  memset(&req, 0x0, sizeof(req));

  INPUT_ID_OF_BI(
      &req,
      CThostFtdcQrySettlementInfoConfirmField);

  SOIL_DEBUG_PRINT(req);

  int result = trader_api_->ReqQrySettlementInfoConfirm(&req, reqID());

  if (result != 0) {
    throw std::runtime_error(
        fmt::format("query settlement info confirm failed."
                    " return code {}", result));
  }
}

void TraderServiceImpl::settlementInfoConfirm() {
  SOIL_TRACE("TraderSerivceImpl::settlementInfoConfirm()");

  CThostFtdcSettlementInfoConfirmField req;
  memset(&req, 0x0, sizeof(req));

  INPUT_ID_OF_BI(
      &req,
      CThostFtdcSettlementInfoConfirmField);

  SOIL_DEBUG_PRINT(req);

  int result = trader_api_->ReqSettlementInfoConfirm(&req, reqID());

  if (result != 0) {
    throw std::runtime_error(
        fmt::format("settlement info confirm failed."
                    " return code {}", result));
  }
}

std::shared_ptr<CThostFtdcInputOrderField>
TraderServiceImpl::reqOrderMessage(
    const std::string& instru,
    double price,
    int volume,
    TThostFtdcDirectionType direction,
    TThostFtdcOffsetFlagType offset_flag,
    TThostFtdcTimeConditionType time_condition,
    TThostFtdcVolumeConditionType volume_condition) {
  std::shared_ptr<CThostFtdcInputOrderField> req
      (new CThostFtdcInputOrderField());

  INPUT_ID_OF_BUI(
      req.get(),
      CThostFtdcInputOrderField);
  req->OrderPriceType = THOST_FTDC_OPT_LimitPrice;
  req->MinVolume = 1;
  req->ContingentCondition = THOST_FTDC_CC_Immediately;
  req->ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
  req->IsAutoSuspend = 0;

  req->CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;

  S_INPUT(req.get(), CThostFtdcInputOrderField, InstrumentID, instru.data());
  req->LimitPrice = price;
  req->VolumeTotalOriginal = volume;


  req->Direction = direction;
  req->CombOffsetFlag[0] = offset_flag;
  req->TimeCondition = time_condition;
  req->VolumeCondition = volume_condition;

  return req;
}

int32_t TraderServiceImpl::orderGo(
    std::shared_ptr<CThostFtdcInputOrderField> req) {
  SOIL_TRACE("TraderServiceImpl::orderGo()");

  int32_t order_ref = ++max_order_ref_;
  S_INPUT(req.get(),
          CThostFtdcInputOrderField,
          OrderRef,
          orderRef(order_ref).data());
  SOIL_DEBUG("{}", *req);

  int result = trader_api_->ReqOrderInsert(req.get(),
                                           reqID());
  if (result != 0) {
    throw std::runtime_error(
        fmt::format("request order failed.\n"
                    "Error code is {}", result));
  }

  return order_ref;
}

TraderService* TraderService::create(
    const rapidjson::Document& doc,
    TraderCallback* callback) {
  return new TraderServiceImpl(doc, callback);
}

}  // namespace cata
