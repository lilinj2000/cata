// Copyright (c) 2010
// All rights reserved.

#include "gtest/gtest.h"
#include "soil/Log.hh"
#include "soil/json.hh"
#include "soil/STimer.hh"
#include "cata/TraderService.hh"

namespace cata {

class TraderServiceImplTest :
      public ::testing::Test,
      public TraderCallback {
 public:
  TraderServiceImplTest() {
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
  }
 protected:
  rapidjson::Document config;
  std::unique_ptr<soil::STimer> cond;
  std::unique_ptr<TraderService> service;
};

TEST_F(TraderServiceImplTest, loginTest) {
  SUCCEED();
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

// TEST_F(TraderServiceImplTest, queryInstruMarginRateTest) {
//   wait(1000);
//   // service_->queryInstruMarginRate(instru_, HF_SPECULATION);
//   service_->queryInstruMarginRate("", HF_SPECULATION);
//   rsp_expect_ = "OnRspQryInstrumentMarginRate";
//   wait();

//   GTEST_SUCCEED();
// }

// TEST_F(TraderServiceImplTest, queryInstrumentTest) {
//   wait(1000);
//   service_->queryInstrument("", "", "", "");
//   rsp_expect_ = "OnRspQryInstrument";
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

// TEST_F(TraderServiceImplTest, queryInstruCommissionRateTest) {
//   wait(1000);
//   // service_->queryInstruCommissionRate(instru_);
//   service_->queryInstruCommissionRate("");
//   rsp_expect_ = "OnRspQryInstrumentCommissionRate";
//   wait();

//   GTEST_SUCCEED();
// }

// TEST_F(TraderServiceImplTest, orderOpenBuyTest) {
//   std::string instru = "cu1603";
//   double price = 32900;
//   int volume = 1;

//   service_->orderOpenBuy(instru, price, volume);

//   cond_->wait(2000);

//   ASSERT_TRUE(true);
// }

// TEST_F(TraderServiceImplTest, orderOpenBuyFAKTest) {
//   std::string instru = "IF1510";
//   double price = 3000;
//   int volume = 1;

//   service_->orderOpenBuyFAK(instru, price, volume);

//   cond_->wait(2000);

//   ASSERT_TRUE(true);
// }

// TEST_F(TraderServiceImplTest, orderOpenBuyFOKTest) {
//   std::string instru = "IF1510";
//   double price = 3000;
//   int volume = 10;

//   service_->orderOpenBuyFOK(instru, price, volume);

//   cond_->wait(2000);

//   ASSERT_TRUE(true);
// }

};  // namespace cata
