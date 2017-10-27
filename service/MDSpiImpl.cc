// Copyright (c) 2010
// All rights reserved.

#include "fmt/format.h"
#include "MDSpiImpl.hh"
#include "ThostFtdcUserApiStructPrint.hh"
#include "Helper.hh"
#include "soil/Log.hh"

namespace cata {

MDSpiImpl::MDSpiImpl(MDServiceImpl* service) :
    service_(service) {
  SOIL_TRACE("MDSpiImpl::MDSpiImpl()");
}

MDSpiImpl::~MDSpiImpl() {
  SOIL_TRACE("MDSpiImpl::~MDSpiImpl()");
}

void MDSpiImpl::OnFrontConnected() {
  SOIL_FUNC_TRACE;

  SOIL_INFO("OnFrontConnected");
  service_->login();
}

void MDSpiImpl::OnFrontDisconnected(
    int nReason) {
  SOIL_FUNC_TRACE;

  SOIL_ERROR("OnFrontDisconnected: {:#x}",
             nReason);
}

void MDSpiImpl::OnHeartBeatWarning(
    int nTimeLapse) {
  SOIL_FUNC_TRACE;

  SOIL_WARN("OnHeartBeatWarning: {}",
            nTimeLapse);
}

void MDSpiImpl::OnRspUserLogin(
    CThostFtdcRspUserLoginField *pRspUserLogin,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  SOIL_DEBUG_IF_PRINT(pRspUserLogin);
  SOIL_DEBUG_IF_PRINT(pRspInfo);
  SOIL_DEBUG_PRINT(nRequestID);
  SOIL_DEBUG_PRINT(bIsLast);

  bool error = ((pRspInfo) && (pRspInfo->ErrorID != 0));
  if (!error) {
    service_->onRspLogin();
  }
}

void MDSpiImpl::OnRspUserLogout(
    CThostFtdcUserLogoutField *pUserLogout,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  SOIL_DEBUG_IF_PRINT(pUserLogout);
  SOIL_DEBUG_IF_PRINT(pRspInfo);
  SOIL_DEBUG_PRINT(nRequestID);
  SOIL_DEBUG_PRINT(bIsLast);
}

void MDSpiImpl::OnRspError(
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_ERROR_CALLBACK(
      onRspError,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void MDSpiImpl::OnRspSubMarketData(
    CThostFtdcSpecificInstrumentField *pSpecificInstrument,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspSubMarketData,
      pSpecificInstrument,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void MDSpiImpl::OnRspUnSubMarketData(
    CThostFtdcSpecificInstrumentField *pSpecificInstrument,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspUnSubMarketData,
      pSpecificInstrument,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void MDSpiImpl::OnRspSubForQuoteRsp(
    CThostFtdcSpecificInstrumentField *pSpecificInstrument,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspSubForQuoteRsp,
      pSpecificInstrument,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void MDSpiImpl::OnRspUnSubForQuoteRsp(
    CThostFtdcSpecificInstrumentField *pSpecificInstrument,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspUnSubForQuoteRsp,
      pSpecificInstrument,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void MDSpiImpl::OnRtnDepthMarketData(
    CThostFtdcDepthMarketDataField *pDepthMarketData) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnDepthMarketData,
      pDepthMarketData);
}

void MDSpiImpl::OnRtnForQuoteRsp(
    CThostFtdcForQuoteRspField *pForQuoteRsp) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnForQuoteRsp,
      pForQuoteRsp);
}

}  // namespace cata
