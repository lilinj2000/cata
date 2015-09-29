#ifndef CATA_MDSPI_IMPL_HH
#define CATA_MDSPI_IMPL_HH

#include <memory>

#include "ThostFtdcMdApi.h"

namespace cata
{

class MDServiceImpl;
class CATAUtil;

class MDSpiImpl : public CThostFtdcMdSpi
{
 public:
		
  MDSpiImpl(MDServiceImpl* service);
		
  virtual ~MDSpiImpl();

  // interface from CThostFtdcMdSpi
  virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnFrontDisconnected(int nReason);
		
  virtual void OnHeartBeatWarning(int nTimeLapse);

  virtual void OnFrontConnected();
	
  virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
  
  virtual void OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspUnSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData);

  virtual void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp);


 protected:

  void checkRspInfo(CThostFtdcRspInfoField *pRspInfo);
  
 private:
  MDServiceImpl* service_;

  std::auto_ptr<CATAUtil> util_;
};

}; // namesapce cata

#endif // CATA_MDSPI_IMPL_H
