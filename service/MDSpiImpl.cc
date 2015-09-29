#include "MDSpiImpl.hh"
#include "CataUtil.hh"
#include "CataLog.hh"
#include "MDServiceImpl.hh"

#include "ThostFtdcUserApiStructPrint.hh"

namespace cata
{

MDSpiImpl::MDSpiImpl(MDServiceImpl* service) :
    service_(service)
{
  CATA_TRACE <<"MDSpiImpl::MDSpiImpl()" ;

  util_.reset( new CATAUtil() );
}

MDSpiImpl::~MDSpiImpl()
{
  CATA_TRACE <<"MDSpiImpl::~MDSpiImpl()" ;
}

void MDSpiImpl::OnFrontConnected()
{
  CATA_TRACE <<"MDSpiImpl::OnFrontConnected()" ;

  service_->login();
}

void MDSpiImpl::OnFrontDisconnected(int nReason)
{
  CATA_TRACE <<"MDSpiImpl::OnFrontDisconnected()" ;
  
  CATA_ERROR << "--->>> Reason = " <<std::hex  <<nReason ;
}
		
void MDSpiImpl::OnHeartBeatWarning(int nTimeLapse)
{
  CATA_TRACE <<"MDSpiImpl::OnHeartBeatWarning()" ;
  
  CATA_ERROR << "--->>> nTimerLapse = " << nTimeLapse ;
}

void MDSpiImpl::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin,
                           CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
  CATA_TRACE <<"MDSpiImpl::OnRspUserLogin()" ;

  try
  {
    checkRspInfo(pRspInfo);

    CATA_PDU <<*pRspUserLogin;

    service_->notify();
  }
  catch( ... )
  {
  }
}

void MDSpiImpl::OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
  CATA_TRACE <<"MDSpiImpl::OnRspUserLogout()" ;
}

void MDSpiImpl::OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
  CATA_TRACE <<"MDSpiImpl::OnRspError()" ;

}

void MDSpiImpl::OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
  CATA_TRACE <<"MDSpiImpl::OnRspSubMarketData()" ;
  
  try
  {
    checkRspInfo(pRspInfo);

    CATA_PDU <<*pSpecificInstrument;
  }
  catch( ... )
  {
  }
  
}

void MDSpiImpl::OnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
  CATA_TRACE <<"MDSpiImpl::OnRspSubForQuoteRsp()" ;

}

void MDSpiImpl::OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
  CATA_TRACE <<"MDSpiImpl::OnRspUnSubMarketData()" ;
  
}

void MDSpiImpl::OnRspUnSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
  CATA_TRACE <<"MDSpiImpl::OnRspUnSubForQuoteRsp()" ;
    
}

void MDSpiImpl::OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData)
{
  CATA_TRACE <<"MDSpiImpl::OnRtnDepthMarketData()" ;
  
  CATA_PDU <<*pDepthMarketData;

  DepthMarketData* data = util_->toDepthMarketData( pDepthMarketData );

  service_->pushData( data );

}

void MDSpiImpl::OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp)
{
  CATA_TRACE <<"MDSpiImpl::OnRtnForQuoteRsp()" ;

}


void MDSpiImpl::checkRspInfo(CThostFtdcRspInfoField *pRspInfo)
{
  CATA_TRACE <<"MDSpiImpl::checkRspInfo()" ;

  if( pRspInfo )
    CATA_PDU <<*pRspInfo ;
  
  bool result = ((pRspInfo) && (pRspInfo->ErrorID != 0));
  
  if (result)
  {
    std::stringstream err_stream;
    err_stream <<"ErrorID=" <<pRspInfo->ErrorID <<","
               <<"ErrorMsg=" <<pRspInfo->ErrorMsg;

    throw std::runtime_error(err_stream.str());
  }
  
}



} // namespace cata
