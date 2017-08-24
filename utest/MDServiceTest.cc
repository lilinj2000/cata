// Copyright (c) 2010
// All rights reserved.

#include <memory>
#include "gtest/gtest.h"
#include "cata/MDService.hh"
#include "soil/json.hh"
#include "soil/STimer.hh"
#include "soil/Log.hh"

namespace cata {

class MDServiceTest :
      public MDCallback,
      public ::testing::Test {
 public:
  MDServiceTest() {
    soil::json::load_from_file(&config, "md.json");
    soil::log::init(config);

    cond.reset(soil::STimer::create());
    service.reset(MDService::create(
        config, this));
  }

  void SetUp() {
  }

  void TearDown() {
  }

  virtual void onRspError(const std::string& rsp) {
    LOG_INFO("onRspError: {}", rsp);
  }

  virtual void onRspSubMarketData(const std::string& rsp) {
    LOG_INFO("onRspSubMarketData: {}", rsp);
  }

  virtual void onRspSubForQuoteRsp(const std::string& rsp) {
    LOG_INFO("onRspSubForQuoteRsp: {}", rsp);
  }

  virtual void onRspUnSubMarketData(const std::string& rsp) {
    LOG_INFO("onRspUnSubMarketData: {}", rsp);
  }

  virtual void onRspUnSubForQuoteRsp(const std::string& rsp) {
    LOG_INFO("onRspUnSubForQuoteRsp: {}", rsp);
  }

  virtual void onRtnDepthMarketData(const std::string& rtn_md) {
    LOG_INFO("onRtnDepthMarketData: {}", rtn_md);
  }

  virtual void onRtnForQuoteRsp(const std::string& rtn_quote) {
    LOG_INFO("onRtnForQuoteRsp: {}", rtn_quote);
  }


 protected:
  std::unique_ptr<cata::MDService> service;
  std::unique_ptr<soil::STimer> cond;

  rapidjson::Document config;
};

TEST_F(MDServiceTest, mdTest) {
  LOG_INFO("trading_day: {}", service->tradingDay());

  std::string cu("cu1709");
  // std::unique_ptr<char> cu1(strdup("cu1709"));
  // char cu2[] = "cu1710";
  // char *instru[] = {cu1.get(), cu2};
  char *c_cu = const_cast<char*>(cu.data());
  service->subMarketData(&c_cu, 1);

  cond->wait(2000);
  
  SUCCEED();
}

};  // namespace cata
