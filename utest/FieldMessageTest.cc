#include <memory>

#include "gtest/gtest.h"
#include "service/CTPLog.hh"
#include "message/FieldMessage.hh"

namespace ctp
{

class FieldMessageTest : public ::testing::Test
{
public:
  FieldMessageTest()
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

TEST_F(FieldMessageTest, reqUserLoginFieldMessageTest)
{

  CThostFtdcReqUserLoginField req;
  ReqUserLoginFieldMessage req_login(&req);

  CTP_INFO <<req_login;
  
  ASSERT_TRUE( true );
}

TEST_F(FieldMessageTest, instrumentsFieldMessageTest)
{

  boost::shared_array<char*> instrus( new char*[2] );

  std::string instru1 = "IF1505";
  std::string instru2 = "IF1506";
  
  instrus[0] = const_cast<char *>(&(instru1[0u]));
  instrus[1] = const_cast<char *>(&(instru2[0u]));

  InstrumentsFieldMessage req(instrus, 2);
  
  CTP_INFO <<req;
  
  ASSERT_TRUE( true );
}


}  // namespace ctp
