// Copyright (c) 2010
// All rights reserved.

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

  std::unique_ptr<RspUserLoginMessage> rsp_message(
      new RspUserLoginMessage(pRspUserLogin,
                              pRspInfo,
                              nRequestID, bIsLast));

  service_->rspLogin(rsp_message.get());
  service_->pushData(rsp_message.release());
}

void MDSpiImpl::OnRspUserLogout(
    CThostFtdcUserLogoutField *pUserLogout,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  MD_TRACE <<"MDSpiImpl::OnRspUserLogout()";

  pushMsg<RspUserLogoutMessage>(pUserLogout,
                                pRspInfo, nRequestID, bIsLast);
}

void MDSpiImpl::OnRspError(
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  MD_TRACE <<"MDSpiImpl::OnRspError()";

  pushMsg<RspErrorMessage>(pRspInfo, nRequestID, bIsLast);
}

void MDSpiImpl::OnRspSubMarketData(
    CThostFtdcSpecificInstrumentField *pSpecificInstrument,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  MD_TRACE <<"MDSpiImpl::OnRspSubMarketData()";

  pushMsg<RspSubMarketDataMessage>(pSpecificInstrument,
                                      pRspInfo, nRequestID, bIsLast);
}

void MDSpiImpl::OnRspSubForQuoteRsp(
    CThostFtdcSpecificInstrumentField *pSpecificInstrument,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  MD_TRACE <<"MDSpiImpl::OnRspSubForQuoteRsp()";

  pushMsg<RspSubForQuoteRspMessage>(pSpecificInstrument,
                                    pRspInfo, nRequestID, bIsLast);
}

void MDSpiImpl::OnRspUnSubMarketData(
    CThostFtdcSpecificInstrumentField *pSpecificInstrument,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  MD_TRACE <<"MDSpiImpl::OnRspUnSubMarketData()";

  pushMsg<RspUnSubMarketDataMessage>(pSpecificInstrument,
                                        pRspInfo, nRequestID, bIsLast);
}

void MDSpiImpl::OnRspUnSubForQuoteRsp(
    CThostFtdcSpecificInstrumentField *pSpecificInstrument,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  MD_TRACE <<"MDSpiImpl::OnRspUnSubForQuoteRsp()";

  pushMsg<RspUnSubForQuoteRspMessage>(pSpecificInstrument,
                                         pRspInfo, nRequestID, bIsLast);
}

void MDSpiImpl::OnRtnDepthMarketData(
    CThostFtdcDepthMarketDataField *pDepthMarketData) {
  MD_TRACE <<"MDSpiImpl::OnRtnDepthMarketData()";

  pushMsg<RtnDepthMarketDataMessage>(pDepthMarketData);
}

void MDSpiImpl::OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp) {
  MD_TRACE <<"MDSpiImpl::OnRtnForQuoteRsp()";

  pushMsg<RtnForQuoteRspMessage>(pForQuoteRsp);
}

}  // namespace cata
