// Copyright (c) 2010
// All rights reserved.

#include <memory>
#include "gtest/gtest.h"
#include "soil/Log.hh"
#include "service/ThostFtdcUserApiStructPrint.hh"

namespace cata {

TEST(MessageTest, instrumentFieldTest) {
  rapidjson::Document config;
  soil::json::load_from_file(&config, "msg.json");
  soil::log::init(config);

  CThostFtdcInstrumentField rsp;
  memset(&rsp, 0x0, sizeof(rsp));
  SOIL_DEBUG_PRINT(rsp);

  std::string rsp_str = fmt::format("{}", rsp);
  std::string esp_str = soil::json::escape_string(rsp_str);
  SOIL_DEBUG_PRINT(esp_str);

  rapidjson::Document doc;
  if (doc.Parse(esp_str).HasParseError()) {
    SOIL_DEBUG_PRINT(soil::json::get_parse_error(doc, esp_str));
    FAIL();
  }

  SUCCEED();
}

};  // namespace cata
