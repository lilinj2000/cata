// Copyright (c) 2010
// All rights reserved.

#include <memory>
#include "gtest/gtest.h"
#include "message/RspMessage.hh"
#include "soil/Log.hh"

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

  SOIL_INFO <<rsp_login_message->toString();

  rsp_login_message.reset(new RspUserLoginMessage(nullptr,
                                                  &rsp_info,
                                                  request_id,
                                                  is_last));

  ASSERT_EQ(rsp_login_message->rspUserLogin(), nullptr);
  SOIL_INFO <<rsp_login_message->toString();

  rsp_login_message.reset(new RspUserLoginMessage(&rsp_login,
                                                  nullptr,
                                                  request_id,
                                                  is_last));

  ASSERT_EQ(rsp_login_message->rspInfo(), nullptr);
  SOIL_INFO <<rsp_login_message->toString();

  rsp_login_message.reset(new RspUserLoginMessage(nullptr,
                                                  nullptr,
                                                  request_id,
                                                  is_last));

  ASSERT_EQ(rsp_login_message->rspUserLogin(), nullptr);
  ASSERT_EQ(rsp_login_message->rspInfo(), nullptr);
  SOIL_INFO <<rsp_login_message->toString();

  GTEST_SUCCEED();
}

TEST_F(MessageTest, rspQryInstrumentMessageTest) {
  CThostFtdcInstrumentField rsp_instru;
  CThostFtdcRspInfoField rsp_info;
  memset(&rsp_instru, 0x0, sizeof(rsp_instru));
  memset(&rsp_info, 0x0, sizeof(rsp_info));
  int request_id = 100;
  bool is_last = true;

  rsp_instru.ProductClass = '1';
  rsp_instru.InstLifePhase = '1';
  rsp_instru.OptionsType = '1';
  rsp_instru.PositionType = '2';
  rsp_instru.PositionDateType = '2';
  rsp_instru.MaxMarginSideAlgorithm = '0';
  rsp_instru.CombinationType = '0';
  std::cout <<rsp_instru;

  std::stringstream ss;
  ss <<rsp_instru;
  json::Document d;
  std::string str = ss.str();
  // std::cout <<"msg : ";
  // std::cout <<str[195] <<str[196] <<str[197] <<str[198] <<str[199]
  //           <<str[200] <<str[201] <<str[202] <<str[203] <<str[204]<<std::endl;
  json::fromString(ss.str(), &d);

  // std::unique_ptr<RspQryInstrumentMessage> rsp_instru_message;
  // rsp_instru_message.reset(new RspQryInstrumentMessage(&rsp_instru,
  //                                                      &rsp_info,
  //                                                      request_id,
  //                                                      is_last));

  // SOIL_INFO <<rsp_instru_message->toString();

}

};  // namespace cata
