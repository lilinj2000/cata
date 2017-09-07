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

    soil::json::get_item_value(&instru, config, "/tests/instru");

    cond.reset(soil::STimer::create());
    service.reset(MDService::create(
        config, this));
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

  virtual void onRspError(const std::string& rsp) {
    LOG_INFO("onRspError: {}", rsp);
  }

  virtual void onRspSubMarketData(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspSubMarketData: {}", rsp);

    notify(is_last);
  }

  virtual void onRspSubForQuoteRsp(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspSubForQuoteRsp: {}", rsp);
    notify(is_last);
  }

  virtual void onRspUnSubMarketData(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspUnSubMarketData: {}", rsp);
    notify(is_last);
  }

  virtual void onRspUnSubForQuoteRsp(
      const std::string& rsp,
      bool is_last) {
    LOG_INFO("onRspUnSubForQuoteRsp: {}", rsp);
    notify(is_last);
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
  std::string instru;
};

TEST_F(MDServiceTest, mdTest) {
  LOG_INFO("trading_day: {}", service->tradingDay());

  // std::string cu("cu1709");
  // std::unique_ptr<char> cu1(strdup("cu1709"));
  // char cu2[] = "cu1710";
  // char *instru[] = {cu1.get(), cu2};
  char *c_instru = const_cast<char*>(instru.data());
  service->subMarketData(&c_instru, 1);
  wait();  // wait onRspSub

  wait(2000);  // wait onRtn Depth md

  SUCCEED();
}

};  // namespace cata
