// Copyright (c) 2010
// All rights reserved.

#include <memory>
#include "gtest/gtest.h"
#include "service/MDServiceImpl.hh"
#include "CThostFtdcMdApiMock.hh"
#include "soil/json.hh"
#include "soil/STimer.hh"
#include "soil/Log.hh"

namespace cata {

class MdApiServiceFake :
      public MdApiService {
 public:
  virtual CThostFtdcMdApi* create(
      const char *pszFlowPath = "",
      const bool bIsUsingUdp = false,
      const bool bIsMulticast = false) {
    return api_mock.get();
  }

  virtual ~MdApiServiceFake() {
  }

  CThostFtdcMdApiMock& mock() {
    api_mock.reset(new CThostFtdcMdApiMock());

    return *api_mock;
  }

 private:
  std::unique_ptr<CThostFtdcMdApiMock> api_mock;
};

class MDServiceImplTest :
      public MDCallback,
      public ::testing::Test {
 public:
  MDServiceImplTest() {
    soil::json::load_from_file(&config, "md.json");
    soil::log::init(config);

    soil::json::get_item_value(&instru, config, "/tests/instru");

    cond.reset(soil::STimer::create());
  }

  void SetUp() {
  }

  void TearDown() {
  }

  void wait(int ms = 2000) {
    cond->wait(ms);
  }

  void notify(bool is_last) {
    if (is_last) {
      cond->notifyAll();
    }
  }

 protected:
  std::unique_ptr<soil::STimer> cond;
  rapidjson::Document config;
  std::string instru;
};

TEST_F(MDServiceImplTest, loginTest) {
  std::unique_ptr<MDServiceImpl> service;
  std::unique_ptr<MdApiServiceFake> api_service;
  api_service.reset(new MdApiServiceFake());

  CThostFtdcMdApiMock& mock = api_service->mock();
  mock.DelegateToFake();
  EXPECT_CALL(mock, RegisterSpi(_));
  EXPECT_CALL(mock, RegisterFront(_));
  EXPECT_CALL(mock, Init());

  service.reset(new MDServiceImpl(
      config,
      this,
      api_service.get()));

  SUCCEED();
}

};  // namespace cata
