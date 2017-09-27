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
