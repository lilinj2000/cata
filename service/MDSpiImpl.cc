// Copyright (c) 2010
// All rights reserved.

#include "fmt/format.h"
#include "MDSpiImpl.hh"
#include "ThostFtdcUserApiStructPrint.hh"
#include "soil/Log.hh"


namespace cata {

MDSpiImpl::MDSpiImpl(MDServiceImpl* service) :
    service_(service) {
  LOG_TRACE("MDSpiImpl::MDSpiImpl()");
}

MDSpiImpl::~MDSpiImpl() {
  LOG_TRACE("MDSpiImpl::~MDSpiImpl()");
}

void MDSpiImpl::OnFrontConnected() {
  LOG_TRACE("MDSpiImpl::OnFrontConnected()");

  service_->login();
}

void MDSpiImpl::OnFrontDisconnected(int nReason) {
  LOG_TRACE("MDSpiImpl::OnFrontDisconnected()");

  LOG_ERROR("--->>> Reason = {%x}", nReason);
}

void MDSpiImpl::OnHeartBeatWarning(int nTimeLapse) {
  LOG_TRACE("MDSpiImpl::OnHeartBeatWarning()");

  LOG_ERROR("--->>> nTimerLapse = {}", nTimeLapse);
}

void MDSpiImpl::OnRspUserLogin(
    CThostFtdcRspUserLoginField *pRspUserLogin,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  LOG_TRACE("MDSpiImpl::OnRspUserLogin()");

  if (pRspUserLogin) {
    LOG_DEBUG("{}", *pRspUserLogin);
  }

  if (!isRspError(pRspInfo)) {
    service_->notify();
  }
}

void MDSpiImpl::OnRspUserLogout(
    CThostFtdcUserLogoutField *pUserLogout,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  LOG_TRACE("MDSpiImpl::OnRspUserLogout()");

  if (pUserLogout) {
    LOG_DEBUG("{}", *pUserLogout);
  }
}

void MDSpiImpl::OnRspError(
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  LOG_TRACE("MDSpiImpl::OnRspError()");
  isRspError(pRspInfo);
}

void MDSpiImpl::OnRspSubMarketData(
    CThostFtdcSpecificInstrumentField *pSpecificInstrument,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  LOG_TRACE("MDSpiImpl::OnRspSubMarketData()");

  if (pSpecificInstrument) {
    LOG_DEBUG("{}", *pSpecificInstrument);
  }

  if (!isRspError(pRspInfo)) {
    if (callback()) {
      callback()->onRspSubMarketData(
          fmt::format("{}", *pSpecificInstrument));
    }
  }
}

void MDSpiImpl::OnRspSubForQuoteRsp(
    CThostFtdcSpecificInstrumentField *pSpecificInstrument,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  LOG_TRACE("MDSpiImpl::OnRspSubForQuoteRsp()");

  if (pSpecificInstrument) {
    LOG_DEBUG("{}", *pSpecificInstrument);
  }

  if (!isRspError(pRspInfo)) {
    if (callback()) {
      callback()->onRspSubForQuoteRsp(
          fmt::format("{}", *pSpecificInstrument));
    }
  }
}

void MDSpiImpl::OnRspUnSubMarketData(
    CThostFtdcSpecificInstrumentField *pSpecificInstrument,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
    LOG_TRACE("MDSpiImpl::OnRspUnSubMarketData()");

    if (pSpecificInstrument) {
      LOG_DEBUG("{}", *pSpecificInstrument);
    }

    if (!isRspError(pRspInfo)) {
      if (callback()) {
        callback()->onRspUnSubMarketData(
            fmt::format("{}", *pSpecificInstrument));
      }
    }
}

void MDSpiImpl::OnRspUnSubForQuoteRsp(
    CThostFtdcSpecificInstrumentField *pSpecificInstrument,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  LOG_TRACE("MDSpiImpl::OnRspUnSubForQuoteRsp()");

  if (pSpecificInstrument) {
    LOG_DEBUG("{}", *pSpecificInstrument);
  }

  if (!isRspError(pRspInfo)) {
    if (callback()) {
      callback()->onRspUnSubForQuoteRsp(
          fmt::format("{}", *pSpecificInstrument));
    }
  }
}

void MDSpiImpl::OnRtnDepthMarketData(
    CThostFtdcDepthMarketDataField *pDepthMarketData) {
  LOG_TRACE("MDSpiImpl::OnRtnDepthMarketData()");

  if (pDepthMarketData) {
    LOG_DEBUG("{}", *pDepthMarketData);
  }

  if (callback()) {
    callback()->onRtnDepthMarketData(
        fmt::format("{}", *pDepthMarketData));
  }
}

void MDSpiImpl::OnRtnForQuoteRsp(
    CThostFtdcForQuoteRspField *pForQuoteRsp) {
  LOG_TRACE("MDSpiImpl::OnRtnForQuoteRsp()");

  if (pForQuoteRsp) {
    LOG_DEBUG("{}", *pForQuoteRsp);
  }

  if (callback()) {
    callback()->onRtnForQuoteRsp(
        fmt::format("{}", *pForQuoteRsp));
  }
}

bool MDSpiImpl::isRspError(
    CThostFtdcRspInfoField *pRspInfo) {
  LOG_TRACE("MDSpiImpl::isRspError()");

  if (pRspInfo) {
    LOG_DEBUG("{}", *pRspInfo);
  }

  bool result = ((pRspInfo) && (pRspInfo->ErrorID != 0));

  if (result) {
    if (service_->callback()) {
      service_->callback()->onRspError(
          fmt::format("{}", *pRspInfo));
    }
  }

  return result;
}


}  // namespace cata
