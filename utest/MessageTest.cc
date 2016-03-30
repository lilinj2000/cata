// Copyright (c) 2010
// All rights reserved.

#include <memory>
#include "gtest/gtest.h"
#include "message/RspMessage.hh"
#include "com/CataLog.hh"

namespace cata {

class MessageTest : public ::testing::Test {
 public:
  MessageTest() {
  }

  void SetUp() {
  }

  void TearDown() {
  }
};

TEST_F(MessageTest, rspMessageTest) {
  CThostFtdcRspUserLoginField rsp_login;
  CThostFtdcRspInfoField rsp_info;
  memset(&rsp_login, 0x0, sizeof(rsp_login));
  memset(&rsp_info, 0x0, sizeof(rsp_info));
  int request_id = 100;
  bool is_last = true;

  std::unique_ptr<RspUserLoginMessage> rsp_login_message;
  rsp_login_message.reset(new RspUserLoginMessage(&rsp_login,
                                                  &rsp_info,
                                                  request_id,
                                                  is_last));

  std::cout <<rsp_login_message->toString() <<std::endl;

  GTEST_SUCCEED();
}


};  // namespace cata
