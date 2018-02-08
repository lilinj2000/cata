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


#include <memory>
#include "gtest/gtest.h"
#include "service/md_service_impl.h"
#include "mock_md_api.h"
#include "soil/json.h"
#include "soil/s_timer.h"
#include "soil/log.h"

namespace cata {

using ::testing::NiceMock;

class FakeMdApiFactory :
      public MdApiFactory {
 public:
  FakeMdApiFactory() {
    mock_ = new NiceMock<MockCThostFtdcMdApi>();
  }

  virtual CThostFtdcMdApi* create(
      const char *pszFlowPath = "",
      const bool bIsUsingUdp = false,
      const bool bIsMulticast = false) {
    return mock_;
  }

  virtual ~FakeMdApiFactory() {
  }

  NiceMock<MockCThostFtdcMdApi>& mock() {
    return *mock_;
  }

 private:
  NiceMock<MockCThostFtdcMdApi>* mock_;
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

TEST_F(MDServiceImplTest, mdTest) {
  std::unique_ptr<MDServiceImpl> service;
  std::unique_ptr<FakeMdApiFactory> factory;
  factory.reset(new FakeMdApiFactory());

  NiceMock<MockCThostFtdcMdApi>& mock(factory->mock());

  service.reset(new MDServiceImpl(
      config,
      this,
      factory.get()));

  SOIL_INFO("trading_day: {}",
            service->tradingDay());

  char *c_instru = const_cast<char*>(instru.data());
  service->subMarketData(&c_instru, 1);
  wait();  // wait onRspSub

  mock.Init();  // network reconnect
  wait();

  SUCCEED();
}

};  // namespace cata
