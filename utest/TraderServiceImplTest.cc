// Copyright (c) 2010
// All rights reserved.

#include "gtest/gtest.h"
#include "soil/Log.hh"
#include "soil/DateTime.hh"
#include "trader_service/TraderServiceImpl.hh"

namespace cata {

class TraderServiceImplTest : public ::testing::Test, public ServiceCallback {
 public:
  TraderServiceImplTest() {
    soil::DateTime cur;
    cur += std::chrono::hours(24*30);
    std::string ym = cur.getString("%y%m");
    instru_ = "IF" + ym;
  }

  void SetUp() {
    options_.reset(TraderService::createOptions());

    std::auto_ptr<soil::Config> config(soil::Config::create());
    config->configFile() = "trader.cfg";
    config->registerOptions(options_.get());
    config->loadConfig();

    SOIL_LOG_INIT("log.cfg");

    cond_.reset(soil::STimer::create());
    service_.reset(TraderService::createService(options_.get(), this));
  }

  void TearDown() {
    delete service_.release();
  }

  virtual void onRspMessage(const std::string& msg) {
    SOIL_INFO <<"receive the rsp message:\n"
              <<msg;
  }

  virtual void onRtnMessage(const std::string& msg) {
    SOIL_INFO <<"receive the rtn message:\n"
              <<msg;
  }

  void wait(int ms = 1000) {
    cond_->wait(ms);
  }

 protected:
  std::auto_ptr<soil::STimer> cond_;
  std::auto_ptr<soil::Options> options_;
  std::auto_ptr<TraderService> service_;
  std::string instru_;
};

TEST_F(TraderServiceImplTest, loginTest) {
  GTEST_SUCCEED();
}

TEST_F(TraderServiceImplTest, queryMarginRateTest) {
  wait();
  service_->queryExchangeMarginRate(instru_, HF_SPECULATION);
  wait();

  GTEST_SUCCEED();
}

TEST_F(TraderServiceImplTest, queryMarginRateAdjustTest) {
  wait();
  service_->queryExchangeMarginRateAdjust(instru_, HF_SPECULATION);
  wait();

  GTEST_SUCCEED();
}

TEST_F(TraderServiceImplTest, queryInstruMarginRateTest) {
  wait();
  // service_->queryInstruMarginRate(instru_, HF_SPECULATION);
  service_->queryInstruMarginRate("", HF_SPECULATION);
  wait();

  GTEST_SUCCEED();
}

TEST_F(TraderServiceImplTest, queryInstrumentTest) {
  wait();
  service_->queryInstrument("", "", "", "");
  wait(3000);

  GTEST_SUCCEED();
}

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
