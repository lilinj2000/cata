// Copyright (c) 2010
// All rights reserved.

#include "gtest/gtest.h"
#include "soil/Log.hh"
#include "trader_service/TraderServiceImpl.hh"

namespace cata {

class TraderServiceImplTest : public ::testing::Test, public TraderServiceCallback {
 public:
  TraderServiceImplTest() {
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
  }

  virtual void msgCallback(const std::string& msg) {
    SOIL_INFO <<msg;
  }
 protected:
  std::auto_ptr<TraderService> service_;

  std::auto_ptr<soil::Options> options_;

  std::auto_ptr<soil::STimer> cond_;
};

TEST_F(TraderServiceImplTest, loginTest) {
  GTEST_SUCCEED();
}

TEST_F(TraderServiceImplTest, queryMarginRateTest) {
  std::string instru = "IF1604";

  service_->queryExchangeMarginRate(instru);
  cond_->wait(1000);

//   service_->queryExchangeMarginRateAdjust(instru);
//   cond_->wait(1000);

//   service_->queryInstruMarginRate(instru);
//   cond_->wait(1000);

//   ASSERT_TRUE(true);
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
