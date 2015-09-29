#include <memory>

#include "gtest/gtest.h"
#include "service/CTPLog.hh"
#include "message/ReturnMessage.hh"

namespace ctp
{

class ReturnMessageTest : public ::testing::Test
{
public:
  ReturnMessageTest()
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

TEST_F(ReturnMessageTest, marketdataReturnMessageTest)
{
  CThostFtdcDepthMarketDataField m_data;
  memset(&m_data, 0x0, sizeof(m_data));

  strncpy(m_data.TradingDay, "20150512", sizeof(m_data.TradingDay));
  strncpy(m_data.InstrumentID, "cu1512", sizeof(m_data.InstrumentID));
  m_data.LastPrice = 45520;
  m_data.PreSettlementPrice = 45610;
  m_data.PreClosePrice = 45600;
  m_data.PreOpenInterest = 9286;
  m_data.OpenPrice = 45540;
  m_data.HighestPrice = 45640;
  m_data.LowestPrice = 45460;
  m_data.Volume = 94;
  m_data.Turnover = 21409200;
  m_data.OpenInterest = 9310;
  m_data.UpperLimitPrice = 47890;
  m_data.LowerLimitPrice = 43320;
  strncpy(m_data.UpdateTime, "11:30:00", sizeof(m_data.UpdateTime));
  m_data.UpdateMillisec = 500;
  m_data.BidPrice1 = 45400;
  m_data.BidVolume1 = 4;
  m_data.AskPrice1 = 45710;
  m_data.AskVolume1 = 2;

  std::auto_ptr<DepthMarketDataFieldMessage> field( new DepthMarketDataFieldMessage(&m_data) );

  std::auto_ptr<MarketDataReturnMessage> rsp( new MarketDataReturnMessage(field.release()) );

  CTP_INFO <<*rsp;
  
  ASSERT_TRUE( true );
}

}  // namespace ctp
