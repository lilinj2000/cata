// Copyright (c) 2010
// All rights reserved.

#include "TraderSpiImpl.hh"
#include "ThostFtdcUserApiStructPrint.hh"
#include "Helper.hh"
#include "soil/Log.hh"

namespace cata {

TraderSpiImpl::TraderSpiImpl(TraderServiceImpl* service) :
    service_(service) {
  SOIL_TRACE("TraderSpiImpl::TraderSpiImpl()");
}

TraderSpiImpl::~TraderSpiImpl() {
  SOIL_TRACE("TraderSpiImpl::~TraderSpiImpl()");
}

void TraderSpiImpl::OnFrontConnected() {
  SOIL_FUNC_TRACE;

  service_->login();
}

void TraderSpiImpl::OnFrontDisconnected(
    int nReason) {
  SOIL_FUNC_TRACE;

  SOIL_DEBUG_PRINT(nReason);
}

void TraderSpiImpl::OnHeartBeatWarning(
    int nTimeLapse) {
  SOIL_FUNC_TRACE;

  SOIL_DEBUG_PRINT(nTimeLapse);
}

void TraderSpiImpl::OnRspAuthenticate(
    CThostFtdcRspAuthenticateField *pRspAuthenticateField,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspAuthenticate,
      pRspAuthenticateField,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspUserLogin(
    CThostFtdcRspUserLoginField *pRspUserLogin,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  SOIL_DEBUG_IF_PRINT(pRspUserLogin);
  SOIL_DEBUG_IF_PRINT(pRspInfo);
  SOIL_DEBUG_PRINT(nRequestID);
  SOIL_DEBUG_PRINT(bIsLast);

  if (!isRspError(pRspInfo)) {
    service_->rspLogin(pRspUserLogin);
  }
}

void TraderSpiImpl::OnRspUserLogout(
    CThostFtdcUserLogoutField *pUserLogout,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  SOIL_DEBUG_IF_PRINT(pUserLogout);
  SOIL_DEBUG_IF_PRINT(pRspInfo);
  SOIL_DEBUG_PRINT(nRequestID);
  SOIL_DEBUG_PRINT(bIsLast);

  service_->notify();
}

void TraderSpiImpl::OnRspUserPasswordUpdate(
    CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspUserPasswordUpdate,
      pUserPasswordUpdate,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspTradingAccountPasswordUpdate(
    CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspTradingAccountPasswordUpdate,
      pTradingAccountPasswordUpdate,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspOrderInsert(
    CThostFtdcInputOrderField *pInputOrder,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspOrderInsert,
      pInputOrder,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspParkedOrderInsert(
    CThostFtdcParkedOrderField *pParkedOrder,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspParkedOrderInsert,
      pParkedOrder,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspParkedOrderAction(
    CThostFtdcParkedOrderActionField *pParkedOrderAction,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspParkedOrderAction,
      pParkedOrderAction,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspOrderAction(
    CThostFtdcInputOrderActionField *pInputOrderAction,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspOrderAction,
      pInputOrderAction,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQueryMaxOrderVolume(
    CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQueryMaxOrderVolume,
      pQueryMaxOrderVolume,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspSettlementInfoConfirm(
    CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  SOIL_DEBUG_IF_PRINT(pSettlementInfoConfirm);
  SOIL_DEBUG_IF_PRINT(pRspInfo);
  SOIL_DEBUG_PRINT(nRequestID);
  SOIL_DEBUG_PRINT(bIsLast);

  if (!isRspError(pRspInfo)) {
    service_->notify();
  }
}

void TraderSpiImpl::OnRspRemoveParkedOrder(
    CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspRemoveParkedOrder,
      pRemoveParkedOrder,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspRemoveParkedOrderAction(
    CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspRemoveParkedOrderAction,
      pRemoveParkedOrderAction,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspExecOrderInsert(
    CThostFtdcInputExecOrderField *pInputExecOrder,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspExecOrderInsert,
      pInputExecOrder,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspExecOrderAction(
    CThostFtdcInputExecOrderActionField *pInputExecOrderAction,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspExecOrderAction,
      pInputExecOrderAction,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspForQuoteInsert(
    CThostFtdcInputForQuoteField *pInputForQuote,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspForQuoteInsert,
      pInputForQuote,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQuoteInsert(
    CThostFtdcInputQuoteField *pInputQuote,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQuoteInsert,
      pInputQuote,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQuoteAction(
    CThostFtdcInputQuoteActionField *pInputQuoteAction,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQuoteAction,
      pInputQuoteAction,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspBatchOrderAction(
    CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspBatchOrderAction,
      pInputBatchOrderAction,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspCombActionInsert(
    CThostFtdcInputCombActionField *pInputCombAction,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspCombActionInsert,
      pInputCombAction,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryOrder(
    CThostFtdcOrderField *pOrder,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryOrder,
      pOrder,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryTrade(
    CThostFtdcTradeField *pTrade,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryTrade,
      pTrade,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryInvestorPosition(
    CThostFtdcInvestorPositionField *pInvestorPosition,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryInvestorPosition,
      pInvestorPosition,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryTradingAccount(
    CThostFtdcTradingAccountField *pTradingAccount,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryTradingAccount,
      pTradingAccount,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryInvestor(
    CThostFtdcInvestorField *pInvestor,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryInvestor,
      pInvestor,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryTradingCode(
    CThostFtdcTradingCodeField *pTradingCode,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryTradingCode,
      pTradingCode,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryInstrumentMarginRate(
    CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryInstrumentMarginRate,
      pInstrumentMarginRate,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryInstrumentCommissionRate(
    CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryInstrumentCommissionRate,
      pInstrumentCommissionRate,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryExchange(
    CThostFtdcExchangeField *pExchange,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryExchange,
      pExchange,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryProduct(
    CThostFtdcProductField *pProduct,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryProduct,
      pProduct,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryInstrument(
    CThostFtdcInstrumentField *pInstrument,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryInstrument,
      pInstrument,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryDepthMarketData(
    CThostFtdcDepthMarketDataField *pDepthMarketData,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryDepthMarketData,
      pDepthMarketData,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQrySettlementInfo(
    CThostFtdcSettlementInfoField *pSettlementInfo,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQrySettlementInfo,
      pSettlementInfo,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryTransferBank(
    CThostFtdcTransferBankField *pTransferBank,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryTransferBank,
      pTransferBank,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryInvestorPositionDetail(
    CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryInvestorPositionDetail,
      pInvestorPositionDetail,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryNotice(
    CThostFtdcNoticeField *pNotice,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryNotice,
      pNotice,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQrySettlementInfoConfirm(
    CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQrySettlementInfoConfirm,
      pSettlementInfoConfirm,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryInvestorPositionCombineDetail(
    CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, // NOLINT
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryInvestorPositionCombineDetail,
      pInvestorPositionCombineDetail,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryCFMMCTradingAccountKey(
    CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryCFMMCTradingAccountKey,
      pCFMMCTradingAccountKey,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryEWarrantOffset(
    CThostFtdcEWarrantOffsetField *pEWarrantOffset,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryEWarrantOffset,
      pEWarrantOffset,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryInvestorProductGroupMargin(
    CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryInvestorProductGroupMargin,
      pInvestorProductGroupMargin,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryExchangeMarginRate(
    CThostFtdcExchangeMarginRateField *pExchangeMarginRate,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryExchangeMarginRate,
      pExchangeMarginRate,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryExchangeMarginRateAdjust(
    CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryExchangeMarginRateAdjust,
      pExchangeMarginRateAdjust,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryExchangeRate(
    CThostFtdcExchangeRateField *pExchangeRate,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryExchangeRate,
      pExchangeRate,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQrySecAgentACIDMap(
    CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQrySecAgentACIDMap,
      pSecAgentACIDMap,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryProductExchRate(
    CThostFtdcProductExchRateField *pProductExchRate,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryProductExchRate,
      pProductExchRate,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryProductGroup(
    CThostFtdcProductGroupField *pProductGroup,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryProductGroup,
      pProductGroup,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryMMInstrumentCommissionRate(
    CThostFtdcMMInstrumentCommissionRateField *pMMInstrumentCommissionRate,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryMMInstrumentCommissionRate,
      pMMInstrumentCommissionRate,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryMMOptionInstrCommRate(
    CThostFtdcMMOptionInstrCommRateField *pMMOptionInstrCommRate,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryMMOptionInstrCommRate,
      pMMOptionInstrCommRate,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryInstrumentOrderCommRate(
    CThostFtdcInstrumentOrderCommRateField *pInstrumentOrderCommRate,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryInstrumentOrderCommRate,
      pInstrumentOrderCommRate,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryOptionInstrTradeCost(
    CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryOptionInstrTradeCost,
      pOptionInstrTradeCost,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryOptionInstrCommRate(
    CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryOptionInstrCommRate,
      pOptionInstrCommRate,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryExecOrder(
    CThostFtdcExecOrderField *pExecOrder,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryExecOrder,
      pExecOrder,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryForQuote(
    CThostFtdcForQuoteField *pForQuote,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryForQuote,
      pForQuote,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryQuote(
    CThostFtdcQuoteField *pQuote,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryQuote,
      pQuote,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryCombInstrumentGuard(
    CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryCombInstrumentGuard,
      pCombInstrumentGuard,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryCombAction(
    CThostFtdcCombActionField *pCombAction,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryCombAction,
      pCombAction,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryTransferSerial(
    CThostFtdcTransferSerialField *pTransferSerial,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryTransferSerial,
      pTransferSerial,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryAccountregister(
    CThostFtdcAccountregisterField *pAccountregister,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryAccountregister,
      pAccountregister,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspError(
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

void TraderSpiImpl::OnRtnOrder(
    CThostFtdcOrderField *pOrder) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnOrder,
      pOrder);
}

void TraderSpiImpl::OnRtnTrade(
    CThostFtdcTradeField *pTrade) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnTrade,
      pTrade);
}

void TraderSpiImpl::OnRtnInstrumentStatus(
    CThostFtdcInstrumentStatusField *pInstrumentStatus) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnInstrumentStatus,
      pInstrumentStatus);
}

void TraderSpiImpl::OnRtnBulletin(
    CThostFtdcBulletinField *pBulletin) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnBulletin,
      pBulletin);
}

void TraderSpiImpl::OnRtnTradingNotice(
    CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnTradingNotice,
      pTradingNoticeInfo);
}

void TraderSpiImpl::OnRtnErrorConditionalOrder(
    CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnErrorConditionalOrder,
      pErrorConditionalOrder);
}

void TraderSpiImpl::OnRtnExecOrder(
    CThostFtdcExecOrderField *pExecOrder) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnExecOrder,
      pExecOrder);
}

void TraderSpiImpl::OnRtnQuote(
    CThostFtdcQuoteField *pQuote) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnQuote,
      pQuote);
}

void TraderSpiImpl::OnRtnForQuoteRsp(
    CThostFtdcForQuoteRspField *pForQuoteRsp) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnForQuoteRsp,
      pForQuoteRsp);
}

void TraderSpiImpl::OnRtnCFMMCTradingAccountToken(
    CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnCFMMCTradingAccountToken,
      pCFMMCTradingAccountToken);
}

void TraderSpiImpl::OnRtnCombAction(
    CThostFtdcCombActionField *pCombAction) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnCombAction,
      pCombAction);
}

void TraderSpiImpl::OnRspQryContractBank(
    CThostFtdcContractBankField *pContractBank,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryContractBank,
      pContractBank,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryParkedOrder(
    CThostFtdcParkedOrderField *pParkedOrder,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryParkedOrder,
      pParkedOrder,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryParkedOrderAction(
    CThostFtdcParkedOrderActionField *pParkedOrderAction,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryParkedOrderAction,
      pParkedOrderAction,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryTradingNotice(
    CThostFtdcTradingNoticeField *pTradingNotice,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryTradingNotice,
      pTradingNotice,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryBrokerTradingParams(
    CThostFtdcBrokerTradingParamsField *pBrokerTradingParams,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryBrokerTradingParams,
      pBrokerTradingParams,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQryBrokerTradingAlgos(
    CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQryBrokerTradingAlgos,
      pBrokerTradingAlgos,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQueryCFMMCTradingAccountToken(
    CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, // NOLINT
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQueryCFMMCTradingAccountToken,
      pQueryCFMMCTradingAccountToken,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRtnFromBankToFutureByBank(
    CThostFtdcRspTransferField *pRspTransfer) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnFromBankToFutureByBank,
      pRspTransfer);
}

void TraderSpiImpl::OnRtnFromFutureToBankByBank(
    CThostFtdcRspTransferField *pRspTransfer) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnFromFutureToBankByBank,
      pRspTransfer);
}

void TraderSpiImpl::OnRtnRepealFromBankToFutureByBank(
    CThostFtdcRspRepealField *pRspRepeal) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnRepealFromBankToFutureByBank,
      pRspRepeal);
}

void TraderSpiImpl::OnRtnRepealFromFutureToBankByBank(
    CThostFtdcRspRepealField *pRspRepeal) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnRepealFromFutureToBankByBank,
      pRspRepeal);
}

void TraderSpiImpl::OnRtnFromBankToFutureByFuture(
    CThostFtdcRspTransferField *pRspTransfer) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnFromBankToFutureByFuture,
      pRspTransfer);
}

void TraderSpiImpl::OnRtnFromFutureToBankByFuture(
    CThostFtdcRspTransferField *pRspTransfer) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnFromFutureToBankByFuture,
      pRspTransfer);
}

void TraderSpiImpl::OnRtnRepealFromBankToFutureByFutureManual(
    CThostFtdcRspRepealField *pRspRepeal) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnRepealFromBankToFutureByFutureManual,
      pRspRepeal);
}

void TraderSpiImpl::OnRtnRepealFromFutureToBankByFutureManual(
    CThostFtdcRspRepealField *pRspRepeal) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnRepealFromFutureToBankByFutureManual,
      pRspRepeal);
}

void TraderSpiImpl::OnRtnQueryBankBalanceByFuture(
    CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnQueryBankBalanceByFuture,
      pNotifyQueryAccount);
}

void TraderSpiImpl::OnRtnRepealFromBankToFutureByFuture(
    CThostFtdcRspRepealField *pRspRepeal) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnRepealFromBankToFutureByFuture,
      pRspRepeal);
}

void TraderSpiImpl::OnRtnRepealFromFutureToBankByFuture(
    CThostFtdcRspRepealField *pRspRepeal) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnRepealFromFutureToBankByFuture,
      pRspRepeal);
}

void TraderSpiImpl::OnRspFromBankToFutureByFuture(
    CThostFtdcReqTransferField *pReqTransfer,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspFromBankToFutureByFuture,
      pReqTransfer,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspFromFutureToBankByFuture(
    CThostFtdcReqTransferField *pReqTransfer,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspFromFutureToBankByFuture,
      pReqTransfer,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRspQueryBankAccountMoneyByFuture(
    CThostFtdcReqQueryAccountField *pReqQueryAccount,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID,
    bool bIsLast) {
  SOIL_FUNC_TRACE;

  CATA_ON_RSP_CALLBACK(
      onRspQueryBankAccountMoneyByFuture,
      pReqQueryAccount,
      pRspInfo,
      nRequestID,
      bIsLast);
}

void TraderSpiImpl::OnRtnOpenAccountByBank(
    CThostFtdcOpenAccountField *pOpenAccount) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnOpenAccountByBank,
      pOpenAccount);
}

void TraderSpiImpl::OnRtnCancelAccountByBank(
    CThostFtdcCancelAccountField *pCancelAccount) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnCancelAccountByBank,
      pCancelAccount);
}

void TraderSpiImpl::OnRtnChangeAccountByBank(
    CThostFtdcChangeAccountField *pChangeAccount) {
  SOIL_FUNC_TRACE;

  CATA_ON_RTN_CALLBACK(
      onRtnChangeAccountByBank,
      pChangeAccount);
}

bool TraderSpiImpl::isRspError(
    CThostFtdcRspInfoField *pRspInfo) {
  return ((pRspInfo) && (pRspInfo->ErrorID != 0));
}


};  // namespace cata
