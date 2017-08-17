// Copyright (c) 2010
// All rights reserved.

#include "fmt/format.h"
#include "MDSpiImpl.hh"
#include "MDLog.hh"
#include "message/ThostFtdcUserApiStructPrint.hh"


namespace cata {

MDSpiImpl::MDSpiImpl(MDServiceImpl* service) :
    service_(service) {
  MD_TRACE <<"MDSpiImpl::MDSpiImpl()";
}

MDSpiImpl::~MDSpiImpl() {
  MD_TRACE <<"MDSpiImpl::~MDSpiImpl()";
}

void MDSpiImpl::OnFrontConnected() {
  MD_TRACE <<"MDSpiImpl::OnFrontConnected()";

  service_->login();
}

void MDSpiImpl::OnFrontDisconnected(int nReason) {
  MD_TRACE <<"MDSpiImpl::OnFrontDisconnected()";

  MD_ERROR << "--->>> Reason = " <<std::hex  <<nReason;
}

void MDSpiImpl::OnHeartBeatWarning(int nTimeLapse) {
  MD_TRACE <<"MDSpiImpl::OnHeartBeatWarning()";

  MD_ERROR << "--->>> nTimerLapse = " << nTimeLapse;
}

void MDSpiImpl::OnRspUserLogin(
    CThostFtdcRspUserLoginField *pRspUserLogin,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  MD_TRACE <<"MDSpiImpl::OnRspUserLogin()";

  service_->notify();
}

void MDSpiImpl::OnRspUserLogout(
    CThostFtdcUserLogoutField *pUserLogout,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  MD_TRACE <<"MDSpiImpl::OnRspUserLogout()";

  service_->notify();
}

void MDSpiImpl::OnRspError(
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  MD_TRACE <<"MDSpiImpl::OnRspError()";

}

void MDSpiImpl::OnRspSubMarketData(
    CThostFtdcSpecificInstrumentField *pSpecificInstrument,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  MD_TRACE <<"MDSpiImpl::OnRspSubMarketData()";

}

void MDSpiImpl::OnRspSubForQuoteRsp(
    CThostFtdcSpecificInstrumentField *pSpecificInstrument,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  MD_TRACE <<"MDSpiImpl::OnRspSubForQuoteRsp()";

}

void MDSpiImpl::OnRspUnSubMarketData(
    CThostFtdcSpecificInstrumentField *pSpecificInstrument,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  MD_TRACE <<"MDSpiImpl::OnRspUnSubMarketData()";

}

void MDSpiImpl::OnRspUnSubForQuoteRsp(
    CThostFtdcSpecificInstrumentField *pSpecificInstrument,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  MD_TRACE <<"MDSpiImpl::OnRspUnSubForQuoteRsp()";

}

void MDSpiImpl::OnRtnDepthMarketData(
    CThostFtdcDepthMarketDataField *pDepthMarketData) {
  MD_TRACE <<"MDSpiImpl::OnRtnDepthMarketData()";

}

void MDSpiImpl::OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp) {
  MD_TRACE <<"MDSpiImpl::OnRtnForQuoteRsp()";

}

void MDSpiImpl::checkRspInfo(
    CThostFtdcRspInfoField *pRspInfo) {
  MD_TRACE <<"MDSpiImpl::checkRspInfo()";

  if (pRspInfo) {
    MD_DEBUG <<*pRspInfo;
  }

  bool result = ((pRspInfo) && (pRspInfo->ErrorID != 0));

  if (result) {
    throw std::runtime_error(
        fmt::format("ErrorID: {}, ErrorMsg: {}",
                    pRspInfo->ErrorID,
                    pRspInfo->ErrorMsg));
  }
}


}  // namespace cata
