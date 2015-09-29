#include <memory>

#include "gtest/gtest.h"
#include "service/CTPLog.hh"
#include "message/RequestMessage.hh"
#include "message/FieldMessage.hh"

namespace ctp
{

class RequestMessageTest : public ::testing::Test
{
public:
  RequestMessageTest()
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

TEST_F(RequestMessageTest, loginRequestMessageTest)
{
  std::string broker_id = "0148";
  std::string user_id = "00095";
  std::string password = "888888";
      
  LoginRequestMessage req(broker_id, user_id, password);
  // CTP_INFO <<req;

  std::auto_ptr<ReqUserLoginFieldMessage> field_message( dynamic_cast<ReqUserLoginFieldMessage*>(req.toFieldMessage()) );

  CTP_INFO <<*field_message ;
  
  ASSERT_TRUE( true );
}

TEST_F(RequestMessageTest, logoutRequestMessageTest)
{
  std::string broker_id = "0148";
  std::string user_id = "00095";
      
  LogoutRequestMessage req(broker_id, user_id);
  // CTP_INFO <<req;

  std::auto_ptr<UserLogoutFieldMessage> field_message( dynamic_cast<UserLogoutFieldMessage*>(req.toFieldMessage()) );

  CTP_INFO <<*field_message ;
  
  ASSERT_TRUE( true );
}

TEST_F(RequestMessageTest, SubMarketRequestMessageTest)
{
  InstrumentsSet instrus;

  instrus.insert("IF1505");
  instrus.insert("IF1506");
      
  SubMarketDataRequestMessage req(instrus);
  // CTP_INFO <<req;

  std::auto_ptr<InstrumentsFieldMessage> field_message( dynamic_cast<InstrumentsFieldMessage*>(req.toFieldMessage()) );

  CTP_INFO <<*field_message ;
  
  ASSERT_TRUE( true );
}


}  // namespace ctp
