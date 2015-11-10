#include <memory>
#include <boost/thread.hpp>

#include "gtest/gtest.h"
#include "service/MDServiceImpl.hh"
#include "service/CataLog.hh"

namespace cata
{

class MDServiceImplTest : public ::testing::Test
{
public:

  MDServiceImplTest()
  {
  }

  void SetUp()
  {
    options_.reset( MDService::createOptions() );

    std::unique_ptr<soil::Config> config( soil::Config::create() );
    config->configFile() = "md.cfg";
    config->registerOptions( options_.get() );
    config->loadConfig();

    CATA_LOG_INIT("log.cfg");
    
    cond_.reset( soil::STimer::create() );
    
    service_.reset( MDService::createService(options_.get(), NULL) );
  }

  void TearDown()
  {
  }

 protected:
  std::unique_ptr<cata::MDService> service_;

  std::unique_ptr<soil::Options> options_;

  std::unique_ptr<soil::STimer> cond_;

};

TEST_F(MDServiceImplTest, loginTest)
{
  ASSERT_TRUE ( true );
}

TEST_F(MDServiceImplTest, subMarketDataTest)
{
  InstrumentSet instruments;

  instruments.insert("cu1511");

  service_->subMarketData(instruments);

  cond_->wait(20000);
    
  ASSERT_TRUE ( true );
}

};  // namespace cata
