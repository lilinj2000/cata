// Copyright (c) 2010
// All rights reserved.

#include <memory>
#include "gtest/gtest.h"
#include "md_service/MDServiceImpl.hh"
#include "soil/Log.hh"

namespace cata {

class MDServiceImplTest : public ::testing::Test, MDServiceCallback {
 public:
  MDServiceImplTest() {
  }

  void SetUp() {
    options_.reset(MDService::createOptions());

    std::unique_ptr<soil::Config> config(soil::Config::create());
    config->configFile() = "md.cfg";
    config->registerOptions(options_.get());
    config->loadConfig();

    SOIL_LOG_INIT("log.cfg");

    cond_.reset(soil::STimer::create());
    service_.reset(MDService::createService(options_.get(), this));
  }

  void TearDown() {
  }

  virtual void msgCallback(const std::string& msg) {
    SOIL_INFO <<msg;
  }

 protected:
  std::unique_ptr<cata::MDService> service_;

  std::unique_ptr<soil::Options> options_;

  std::unique_ptr<soil::STimer> cond_;
};

TEST_F(MDServiceImplTest, loginTest) {
  GTEST_SUCCEED();
}

TEST_F(MDServiceImplTest, subMarketDataTest) {
  InstrumentSet instruments;

  instruments.insert("cu1604");

  service_->subMarketData(instruments);

  cond_->wait(2000);

  GTEST_SUCCEED();
}

};  // namespace cata
