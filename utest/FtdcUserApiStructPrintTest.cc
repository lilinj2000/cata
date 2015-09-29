#include <memory>

#include "gtest/gtest.h"
#include "utility/Log.hh"
#include "message/FtdcUserApiStructPrint.hh"

namespace ctp
{

class FtdcUserApiStructPrintTest : public ::testing::Test
{
public:
  FtdcUserApiStructPrintTest()
  {
    ctp::Log::init("log.cfg");
  }

  void SetUp()
  {
  }

  void TearDown()
  {
  }

 protected:
};

TEST_F(FtdcUserApiStructPrintTest, reqLoginFieldTest)
{
  CThostFtdcReqUserLoginField req;
  memset(&req, 0, sizeof(req));

  std::cout <<req <<std::endl;
  
  ASSERT_TRUE( true );
}


}  // namespace ctp
