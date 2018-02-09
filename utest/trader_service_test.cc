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


#include "gtest/gtest.h"
#include "soil/log.h"
#include "soil/json.h"
#include "soil/s_timer.h"
#include "cata/trader_service.h"

namespace cata {

class TraderServiceTest :
      public ::testing::Test,
      public TraderCallback {
 public:
  TraderServiceTest() {
    soil::json::load_from_file(&config, "trader.json");
    soil::log::init(config);

    soil::json::get_item_value(&prod,
                               config,
                               "/tests/prod");
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

  void wait(int ms = 2000) {
    cond->wait(ms);
  }

  void notify(bool is_last) {
    if (is_last) {
      cond->notifyAll();
    }
  }

 protected:
  rapidjson::Document config;
  std::unique_ptr<soil::STimer> cond;
  std::unique_ptr<TraderService> service;

  std::string prod;
  std::string instru;
  double price;
  int volume;
};

TEST_F(TraderServiceTest, orderTest) {
  int32_t order_ref = service->openBuyOrder(instru,
                                            price,
                                            volume);
  SOIL_INFO("order_ref: {}", order_ref);
  wait();

  service->cancelOrder(order_ref, instru);
  wait();

  service->queryOrder("", "", "", "", "");
  wait();

  service->queryTrade("", "", "", "", "");
  wait();

  SUCCEED();
}

TEST_F(TraderServiceTest, queryTest) {
  std::string trading_day = service->tradingDay();
  SOIL_INFO("{}", trading_day);

  wait();
  service->queryInvestor();
  wait();

  service->queryTradingCode("");
  wait();

  service->queryAccount("");
  wait();

  service->queryPosition("");
  wait();

  service->queryOrder("", "", "", "", "");
  wait();

  service->queryTrade("", "", "", "", "");
  wait();

  service->queryExchange("");
  wait();

  service->queryProduct("");
  wait();

  service->queryInstrument("", "", "", "");
  wait(10000);

  service->queryInstruMarginRate(prod);
  wait();

  service->queryInstruCommissionRate(prod);
  wait();

  service->queryDepthMarketData("");
  wait();

  service->queryExchangeMarginRate(instru);
  wait();

  service->queryExchangeMarginRateAdjust(instru);
  wait();
}

};  // namespace cata
