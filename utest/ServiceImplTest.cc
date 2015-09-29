#include <memory>

#include "gtest/gtest.h"
#include "service/ServiceImpl.hh"
#include "utility/Log.hh"

class ServiceImplTest : public ::testing::Test
{
public:
  ServiceImplTest()
  {
    ctp::Log::init();
  }
  
  void SetUp()
  {
    service_.reset( ctp::CTPService::createService() );

    // ensure the login success
    // boost::this_thread::sleep(boost::posix_time::seconds(2));
  }

  void TearDown()
  {
    delete service_.release();
  }

 protected:
  std::auto_ptr<ctp::CTPService> service_;
};

TEST_F(ServiceImplTest, serviceCreatTest)
{
  ASSERT_TRUE ( true );
}

// int main(int argc, char** argv) 
// { 
//   testing::InitGoogleTest(&argc, argv); 
//   RUN_ALL_TESTS(); 
//   std::getchar(); // keep console window open until Return keystroke
// }
