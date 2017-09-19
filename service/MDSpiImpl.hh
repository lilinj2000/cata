// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_MDSPI_IMPL_HH
#define CATA_MDSPI_IMPL_HH

#include <memory>
#include "ThostFtdcMdApi.h"
#include "MDServiceImpl.hh"

namespace cata {

class MDSpiImpl : public CThostFtdcMdSpi {
 public:
  explicit MDSpiImpl(MDServiceImpl* service);

  virtual ~MDSpiImpl();

  // interface from CThostFtdcMdSpi
  virtual void OnFrontConnected();

  virtual void OnFrontDisconnected(
      int nReason);

  virtual void OnHeartBeatWarning(
      int nTimeLapse);

  virtual void OnRspUserLogin(
      CThostFtdcRspUserLoginField *pRspUserLogin,
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID,
      bool bIsLast);

  virtual void OnRspUserLogout(
      CThostFtdcUserLogoutField *pUserLogout,
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID,
      bool bIsLast);

  virtual void OnRspError(
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID,
      bool bIsLast);

  virtual void OnRspSubMarketData(
      CThostFtdcSpecificInstrumentField *pSpecificInstrument,
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID,
      bool bIsLast);

  virtual void OnRspUnSubMarketData(
      CThostFtdcSpecificInstrumentField *pSpecificInstrument,
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID,
      bool bIsLast);

  virtual void OnRspSubForQuoteRsp(
      CThostFtdcSpecificInstrumentField *pSpecificInstrument,
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID,
      bool bIsLast);

  virtual void OnRspUnSubForQuoteRsp(
      CThostFtdcSpecificInstrumentField *pSpecificInstrument,
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID,
      bool bIsLast);

  virtual void OnRtnDepthMarketData(
      CThostFtdcDepthMarketDataField *pDepthMarketData);

  virtual void OnRtnForQuoteRsp(
      CThostFtdcForQuoteRspField *pForQuoteRsp);

 protected:
  MDCallback* callback() {
    return service_->callback();
  }

 private:
  MDServiceImpl* service_;
};

};  // namespace cata

#endif  // CATA_MDSPI_IMPL_H
