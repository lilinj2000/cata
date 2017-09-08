// Copyright (c) 2010
// All rights reserved.

#include "gtest/gtest.h"
#include "soil/Log.hh"
#include "soil/json.hh"
#include "soil/STimer.hh"
#include "cata/TraderService.hh"

namespace cata {

class TraderServiceTest :
      public ::testing::Test,
      public TraderCallback {
 public:
  TraderServiceTest() {
    soil::json::load_from_file(&config, "trader.json");
    soil::log::init(config);

    soil::json::get_item_value(&instru,
                               config,
                               "/tests/instru");
    soil::json::get_item_value(&price,
                               config,
                               "/tests/price");
    soil::json::get_item_value(&volume,
                               config,
                               "/tests/volume");

    cond.reset(soil::STimer::create());
    service.reset(TraderService::create(config, this));
  }

  void SetUp() {
  }

  void TearDown() {
  }

  void wait(int ms = -1) {
    cond->wait(ms);
  }

  void notify(bool is_last) {
    if (is_last) {
      cond->notifyAll();
    }
  }

  virtual void onRspError(
      const std::string& rsp) {
    LOG_INFO("onRspError:\n {}", rsp);
  }

  virtual void onRspQryOrder(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspQryOrder:\n {}", rsp);

    notify(is_last);
  }

  virtual void onRspQryTrade(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspQryTrade:\n {}", rsp);

    notify(is_last);
  }

  virtual void onRspOrderInsert(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspOrderInsert:\n {}", rsp);

    notify(is_last);
  }

  virtual void onRspOrderAction(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspOrderAction:\n {}", rsp);

    notify(is_last);
  }

  virtual void onRtnOrder(
      const std::string& rtn) {
    LOG_INFO("onRtnOrder:\n {}", rtn);
  }

  virtual void onRtnTrade(
      const std::string& rtn) {
    LOG_INFO("onRtnTrade:\n {}", rtn);
  }

  virtual void onErrRtnOrderInsert(
      const std::string& rtn) {
    LOG_INFO("onErrRtnOrderInsert:\n {}", rtn);
  }

  virtual void onErrRtnOrderAction(
      const std::string& rtn) {
    LOG_INFO("onErrRtnOrderAction:\n {}", rtn);
  }

  virtual void onRspQryInvestorPosition(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspQryInvestorPosition:\n {}", rsp);

    notify(is_last);
  }

  virtual void onRspQryTradingAccount(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspQryTradingAccount:\n {}", rsp);

    notify(is_last);
  }

  virtual void onRspQryInvestor(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspQryInvestor:\n {}", rsp);

    notify(is_last);
  }

  virtual void onRspQryTradingCode(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspQryTradingCode:\n {}", rsp);

    notify(is_last);
  }

  virtual void onRspQryInstrumentMarginRate(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspQryInstrumentMarginRate:\n {}", rsp);
    notify(is_last);
  }

  virtual void onRspQryInstrumentCommissionRate(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspQryInstrumentCommissionRate:\n {}", rsp);
    notify(is_last);
  }

  virtual void onRspQryExchange(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspQryExchange:\n {}", rsp);

    notify(is_last);
  }

  virtual void onRspQryProduct(const std::string& rsp, bool is_last) {
    LOG_INFO("onRspQryProduct:\n {}", rsp);

    notify(is_last);
  }

  virtual void onRspQryInstrument(const std::string& rsp,
                                  bool is_last) {
    LOG_INFO("onRspQryInstrument:\n {}", rsp);

    notify(is_last);
  }

  virtual void onRspQryDepthMarketData(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspQryDepthMarketData:\n {}", rsp);

    notify(is_last);
  }

  virtual void onRspQryExchangeMarginRate(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspQryExchangeMarginRate:\n {}", rsp);

    notify(is_last);
  }

  virtual void onRspQryExchangeMarginRateAdjust(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspQryExchangeMarginRateAdjust:\n {}", rsp);

    notify(is_last);
  }

 protected:
  rapidjson::Document config;
  std::unique_ptr<soil::STimer> cond;
  std::unique_ptr<TraderService> service;

  std::string instru;
  double price;
  int volume;
};

TEST_F(TraderServiceTest, orderTest) {
  int32_t order_ref = service->openBuyOrder(instru,
                                            price,
                                            volume);
  LOG_INFO("order_ref: {}", order_ref);
  wait(2000);

  service->cancelOrder(order_ref, instru);
  wait(2000);

  wait(1000);
  service->queryOrder("", "", "", "", "");
  wait();

  wait(1000);
  service->queryTrade("", "", "", "", "");
  wait();

  SUCCEED();
}

TEST_F(TraderServiceTest, queryTest) {
  std::string trading_day = service->tradingDay();
  LOG_INFO("{}", trading_day);

  std::string instru = "cu1712";

  wait(1000);
  service->queryInvestor();
  wait();
  wait(1000);

  service->queryTradingCode("");
  wait();
  wait(1000);

  service->queryAccount("");
  wait();
  wait(1000);

  service->queryPosition("");
  wait();
  wait(1000);

  service->queryOrder("", "", "", "", "");
  wait();
  wait(1000);

  service->queryTrade("", "", "", "", "");
  wait();
  wait(1000);

  service->queryExchange("");
  wait();
  wait(1000);

  service->queryProduct("");
  wait();
  wait(1000);

  service->queryInstrument("", "", "", "");
  wait();
  wait(1000);

  service->queryInstruMarginRate(instru);
  wait();
  wait(1000);

  service->queryInstruCommissionRate(instru);
  wait();
  wait(1000);

  service->queryDepthMarketData("");
  wait();
  wait(1000);

  service->queryExchangeMarginRate(instru);
  wait();
  wait(1000);

  service->queryExchangeMarginRateAdjust(instru);
  wait();
}

};  // namespace cata
