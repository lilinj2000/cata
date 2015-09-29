#ifndef CATA_TRADER_SPI_IMPL_HH
#define CATA_TRADER_SPI_IMPL_HH


#include "ThostFtdcTraderApi.h"

namespace cata
{

class TraderServiceImpl;

class TraderSpiImpl : public CThostFtdcTraderSpi
{
 public:
		
  TraderSpiImpl(TraderServiceImpl* service);
		
  virtual ~TraderSpiImpl();

  // interface from CThostFtdcTraderSpi
  virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnFrontDisconnected(int nReason);
		
  virtual void OnHeartBeatWarning(int nTimeLapse);

  virtual void OnFrontConnected();
	
  virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
  
  virtual void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRtnOrder(CThostFtdcOrderField *pOrder);

  virtual void OnRtnTrade(CThostFtdcTradeField *pTrade);

  virtual void OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo);
  
 protected:
  
    void checkRspInfo(CThostFtdcRspInfoField *pRspInfo);
  
 private:
  
  TraderServiceImpl* service_;
};

}; // namesapce cata

#endif // CATA_TRADER_SPI_IMPL_HH
