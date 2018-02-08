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
#include "soil/log.h"
#include "service/api_struct_print.h"

namespace cata {

TEST(MessageTest, instrumentFieldTest) {
  rapidjson::Document config;
  soil::json::load_from_file(&config, "msg.json");
  soil::log::init(config);

  CThostFtdcInstrumentField rsp;
  memset(&rsp, 0x0, sizeof(rsp));
  SOIL_DEBUG_PRINT(rsp);

  std::string rsp_str = fmt::format("{}", rsp);
  SOIL_DEBUG_PRINT(rsp_str);

  rapidjson::Document doc;
  if (doc.Parse(rsp_str).HasParseError()) {
    SOIL_DEBUG_PRINT(
        soil::json::get_parse_error(
            doc,
            rsp_str));
    FAIL();
  }

  SUCCEED();
}

};  // namespace cata
