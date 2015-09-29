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

    std::auto_ptr<soil::Config> config( soil::Config::create() );
    config->configFile() = "md.cfg";
    config->registerOptions( options_.get() );
    config->loadConfig();

    CATA_LOG_INIT("log.cfg");
    
    cond_.reset( soil::Condition::create() );
    
    service_.reset( MDService::createService(options_.get(), NULL) );
  }

  void TearDown()
  {
  }

 protected:
  std::auto_ptr<cata::MDService> service_;

  std::auto_ptr<soil::Options> options_;

  std::auto_ptr<soil::Condition> cond_;

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
