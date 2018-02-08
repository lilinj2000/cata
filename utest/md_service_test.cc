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
#include "cata/md_service.h"
#include "soil/json.h"
#include "soil/s_timer.h"
#include "soil/log.h"

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

  void wait(int ms = 2000) {
    cond->wait(ms);
  }

  void notify(bool is_last) {
    if (is_last) {
      cond->notifyAll();
    }
  }

 protected:
  std::unique_ptr<cata::MDService> service;
  std::unique_ptr<soil::STimer> cond;

  rapidjson::Document config;
  std::string instru;
};

TEST_F(MDServiceTest, mdTest) {
  SOIL_INFO("trading_day: {}", service->tradingDay());

  // std::string cu("cu1709");
  // std::unique_ptr<char> cu1(strdup("cu1709"));
  // char cu2[] = "cu1710";
  // char *instru[] = {cu1.get(), cu2};
  char *c_instru = const_cast<char*>(instru.data());
  service->subMarketData(&c_instru, 1);
  wait();  // wait onRspSub

  SUCCEED();
}

};  // namespace cata
