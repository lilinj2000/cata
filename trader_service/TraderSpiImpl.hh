// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_TRADERSPI_IMPL_HH
#define CATA_TRADERSPI_IMPL_HH


#include "ThostFtdcTraderApi.h"

namespace cata {

class TraderServiceImpl;

class TraderSpiImpl : public CThostFtdcTraderSpi {
 public:
  explicit TraderSpiImpl(TraderServiceImpl* service);
  virtual ~TraderSpiImpl();

  // interface from CThostFtdcTraderSpi
  virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo,
                          int nRequestID, bool bIsLast);

  virtual void OnFrontDisconnected(int nReason);
  virtual void OnHeartBeatWarning(int nTimeLapse);
  virtual void OnFrontConnected();

  virtual void OnRspUserLogin(
      CThostFtdcRspUserLoginField *pRspUserLogin,
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQrySettlementInfo(
      CThostFtdcSettlementInfoField *pSettlementInfo,
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQrySettlementInfoConfirm(
      CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQryInstrument(
      CThostFtdcInstrumentField *pInstrument,
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspSettlementInfoConfirm(
      CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspOrderInsert(
      CThostFtdcInputOrderField *pInputOrder,
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRtnOrder(CThostFtdcOrderField *pOrder);

  virtual void OnRtnTrade(CThostFtdcTradeField *pTrade);

  virtual void OnErrRtnOrderInsert(
      CThostFtdcInputOrderField *pInputOrder,
      CThostFtdcRspInfoField *pRspInfo);

  virtual void OnRspQryInstrumentMarginRate(
      CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate,
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryExchangeMarginRate(
      CThostFtdcExchangeMarginRateField *pExchangeMarginRate,
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryExchangeMarginRateAdjust(
      CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust,
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

 protected:
    void checkRspInfo(CThostFtdcRspInfoField *pRspInfo);

 private:
  TraderServiceImpl* service_;
};

};  // namespace cata

#endif  // CATA_TRADER_SPI_IMPL_HH
