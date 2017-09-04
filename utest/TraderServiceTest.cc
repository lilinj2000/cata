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

  void notify() {
    cond->notifyAll();
  }

  virtual void onRspError(const std::string& rsp) {
    LOG_INFO("onRspError:\n {}", rsp);

    notify();
  }

  virtual void onRspQryOrder(const std::string& rsp,
                             bool is_last) {
    LOG_INFO("onRspQryOrder:\n {}", rsp);

    if (is_last) {
      notify();
    }
  }
  
  virtual void onRspQryTrade(const std::string& rsp,
                             bool is_last) {
    LOG_INFO("onRspQryTrade:\n {}", rsp);

    if (is_last) {
      notify();
    }
  }

  virtual void onRspOrderInsert(const std::string& rsp,
                                bool is_last) {
    LOG_INFO("onRspOrderInsert:\n {}", rsp);

    if (is_last) {
      notify();
    }
  }

  virtual void onRtnOrder(const std::string& rtn) {
    LOG_INFO("onRtnOrder:\n {}", rtn);
  }

  virtual void onRtnTrade(const std::string& rtn) {
    LOG_INFO("onRtnTrade:\n {}", rtn);
  }

  virtual void onErrRtnOrderInsert(const std::string& rtn) {
    LOG_INFO("onErrRtnOrderInsert:\n {}", rtn);
  }

  virtual void onRspQryInvestorPosition(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspQryInvestorPosition:\n {}", rsp);

    if (is_last) {
      notify();
    }

  }

  virtual void onRspQryTradingAccount(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspQryTradingAccount:\n {}", rsp);

    if (is_last) {
      notify();
    }

  }

  virtual void onRspQryInvestor(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspQryInvestor:\n {}", rsp);

    if (is_last) {
      notify();
    }
  }

  virtual void onRspQryTradingCode(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspQryTradingCode:\n {}", rsp);

    if (is_last) {
      notify();
    }
  }

  virtual void onRspQryInstrumentMarginRate(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspQryInstrumentMarginRate:\n {}", rsp);
    if (is_last) {
      notify();
    }
  }

  virtual void onRspQryInstrumentCommissionRate(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspQryInstrumentCommissionRate:\n {}", rsp);
    if (is_last) {
      notify();
    }

  }

  virtual void onRspQryExchange(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspQryExchange:\n {}", rsp);

    if (is_last) {
      notify();
    }

  }

  virtual void onRspQryInstrument(const std::string& rsp,
                                  bool is_last) {
    LOG_INFO("onRspQryInstrument:\n {}", rsp);

    if (is_last) {
      notify();
    }

  }

  virtual void onRspQryDepthMarketData(const std::string& rsp,
                                       bool is_last) {
    LOG_INFO("onRspQryDepthMarketData:\n {}", rsp);

    if (is_last) {
      notify();
    }
  }


 protected:
  rapidjson::Document config;
  std::unique_ptr<soil::STimer> cond;
  std::unique_ptr<TraderService> service;
};

TEST_F(TraderServiceTest, orderTest) {
  std::string instru, exchange, order_sys_id;
  std::string start_time, stop_time;
  service->queryOrder("",
                      exchange,
                      order_sys_id,
                      start_time,
                      stop_time);
  wait();
  wait(1000);

  std::string trade_id;
  service->queryTrade("",
                      exchange,
                      trade_id,
                      start_time,
                      stop_time);
  wait();
  wait(1000);

  instru = "cu1712";
  double price = 5000;
  int volume = 1;
  int32_t order_ref = service->openBuyOrder(instru,
                                            price,
                                            volume);
  LOG_INFO("order_ref: {}", order_ref);

  wait(1000);
  service->queryOrder("",
                      exchange,
                      order_sys_id,
                      start_time,
                      stop_time);
  wait();
  wait(1000);

  service->queryTrade("",
                      exchange,
                      trade_id,
                      start_time,
                      stop_time);
  wait();

  SUCCEED();
}

TEST_F(TraderServiceTest, queryTest) {
  std::string trading_day = service->tradingDay();
  LOG_INFO("{}", trading_day);

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

  service->queryExchange("");
  wait();
  wait(1000);

  service->queryInstrument("", "", "", "");
  wait();
  wait(1000);

  service->queryInstruMarginRate("");
  wait();
  wait(1000);

  service->queryInstruCommissionRate("");
  wait();
  wait(1000);

  service->queryDepthMarketData("");
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
}

// TEST_F(TraderServiceImplTest, queryExchangeMarginRateTest) {
//   wait(1000);
//   service_->queryExchangeMarginRate("", HF_SPECULATION);
//   rsp_expect_ = "OnRspQryExchangeMarginRate";
//   wait();

//   GTEST_SUCCEED();
// }

// TEST_F(TraderServiceImplTest, queryExchangeMarginRateAdjustTest) {
//   wait(1000);
//   service_->queryExchangeMarginRateAdjust("", HF_SPECULATION);
//   rsp_expect_ = "OnRspQryExchangeMarginRateAdjust";
//   wait();

//   GTEST_SUCCEED();
// }

// TEST_F(TraderServiceImplTest, queryProductTest) {
//   wait(1000);
//   service_->queryProduct("", PC_Futures);
//   rsp_expect_ = "OnRspQryProduct";
//   wait();

//   GTEST_SUCCEED();
// }

};  // namespace cata
