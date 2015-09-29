#include <memory>

#include "gtest/gtest.h"
#include "service/CTPLog.hh"
#include "message/ResponseMessage.hh"

namespace ctp
{

class ResponseMessageTest : public ::testing::Test
{
public:
  ResponseMessageTest()
  {
    CTP_LOG_INIT("log.cfg");
  }

  
  void SetUp()
  {
  }

  void TearDown()
  {
  }

 protected:
};

TEST_F(ResponseMessageTest, loginResponseMessageTest)
{
  std::string trading_day = "20150506";
  int front_id = 0;
  int session_id = 0;

  CThostFtdcRspUserLoginField rsp_login;
  memset(&rsp_login, 0x0, sizeof(rsp_login));
  strncpy(rsp_login.TradingDay, trading_day.data(), sizeof(rsp_login.TradingDay));
  rsp_login.FrontID = front_id;
  rsp_login.SessionID = session_id;
  
  std::auto_ptr<RspUserLoginFieldMessage> field_login( new RspUserLoginFieldMessage(&rsp_login) );

  int error_id = 0;
  std::string error_msg = "CTP:No Error";

  CThostFtdcRspInfoField rsp_info;
  memset(&rsp_info, 0x0, sizeof(rsp_info));
  rsp_info.ErrorID = error_id;
  strncpy(rsp_info.ErrorMsg, error_msg.data(), sizeof(rsp_info.ErrorMsg));
  std::auto_ptr<RspInfoFieldMessage> field_info( new RspInfoFieldMessage(&rsp_info) );

  int request_id = 0;
  bool is_last = true;
  
  std::auto_ptr<LoginResponseMessage> rsp( new LoginResponseMessage(field_login.release(), field_info.release(), request_id, is_last) );

  CTP_INFO <<*rsp;
  
  ASSERT_TRUE( true );
}

TEST_F(ResponseMessageTest, logoutResponseMessageTest)
{
  std::string broker_id = "0148";
  std::string user_id = "00095";

  CThostFtdcUserLogoutField rsp_logout;
  memset(&rsp_logout, 0x0, sizeof(rsp_logout));

  strncpy(rsp_logout.BrokerID, broker_id.data(), sizeof(rsp_logout.BrokerID));
  strncpy(rsp_logout.UserID, user_id.data(), sizeof(rsp_logout.UserID));
  
  std::auto_ptr<UserLogoutFieldMessage> field_logout( new UserLogoutFieldMessage(&rsp_logout) );

  int error_id = 0;
  std::string error_msg = "CTP:No Error";

  CThostFtdcRspInfoField rsp_info;
  memset(&rsp_info, 0x0, sizeof(rsp_info));
  rsp_info.ErrorID = error_id;
  strncpy(rsp_info.ErrorMsg, error_msg.data(), sizeof(rsp_info.ErrorMsg));
  std::auto_ptr<RspInfoFieldMessage> field_info( new RspInfoFieldMessage(&rsp_info) );

  int request_id = 0;
  bool is_last = true;
  
  std::auto_ptr<LogoutResponseMessage> rsp( new LogoutResponseMessage(field_logout.release(), field_info.release(), request_id, is_last) );

  CTP_INFO <<*rsp;
  
  ASSERT_TRUE( true );
}

TEST_F(ResponseMessageTest, errorResponseMessageTest)
{
  int error_id = 0;
  std::string error_msg = "CTP:No Error";

  CThostFtdcRspInfoField rsp_info;
  memset(&rsp_info, 0x0, sizeof(rsp_info));
  rsp_info.ErrorID = error_id;
  strncpy(rsp_info.ErrorMsg, error_msg.data(), sizeof(rsp_info.ErrorMsg));
  std::auto_ptr<RspInfoFieldMessage> field_info( new RspInfoFieldMessage(&rsp_info) );

  int request_id = 0;
  bool is_last = true;
  
  std::auto_ptr<ErrorResponseMessage> rsp( new ErrorResponseMessage( field_info.release(), request_id, is_last) );

  CTP_INFO <<*rsp;
  
  ASSERT_TRUE( true );
}


}  // namespace ctp
