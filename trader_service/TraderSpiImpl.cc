// Copyright (c) 2010
// All rights reserved.

#include "TraderSpiImpl.hh"
#include "TraderLog.hh"
#include "message/ThostFtdcUserApiStructPrint.hh"

namespace cata {

TraderSpiImpl::TraderSpiImpl(TraderServiceImpl* service) :
    service_(service) {
  TRADER_TRACE <<"TraderSpiImpl::TraderSpiImpl()";
}

TraderSpiImpl::~TraderSpiImpl() {
  TRADER_TRACE <<"TraderSpiImpl::~TraderSpiImpl()";
}

void TraderSpiImpl::OnFrontConnected() {
  TRADER_TRACE <<"TraderSpiImpl::OnFrontConnected()";

  service_->login();
}

void TraderSpiImpl::OnFrontDisconnected(int nReason) {
  TRADER_TRACE <<"TraderSpiImpl::OnFrontDisconnected()";

  TRADER_ERROR << "--->>> Reason = " <<std::hex  <<nReason;
}

void TraderSpiImpl::OnHeartBeatWarning(int nTimeLapse) {
  TRADER_TRACE <<"TraderSpiImpl::OnHeartBeatWarning()";

  TRADER_ERROR << "--->>> nTimerLapse = " << nTimeLapse;
}

void TraderSpiImpl::OnRspAuthenticate(
      CThostFtdcRspAuthenticateField *pRspAuthenticateField,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspAuthenticate()";

  pushMsg<RspAuthenticateMessage>(
                 pRspAuthenticateField,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspUserLogin(
      CThostFtdcRspUserLoginField *pRspUserLogin,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspUserLogin()";

  std::unique_ptr<RspUserLoginMessage> rsp_message(
    new RspUserLoginMessage(pRspUserLogin,
                            pRspInfo,
                            nRequestID, bIsLast));

  service_->rspLogin(rsp_message.get());
  service_->pushData(rsp_message.release());
}

void TraderSpiImpl::OnRspUserLogout(
      CThostFtdcUserLogoutField *pUserLogout,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspUserLogout()";

  pushMsg<RspUserLogoutMessage>(
                 pUserLogout,
                 pRspInfo, nRequestID, bIsLast);
  service_->rspLogout();
}

void TraderSpiImpl::OnRspUserPasswordUpdate(
      CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspUserPasswordUpdate()";

  pushMsg<RspUserPasswordUpdateMessage>(
                 pUserPasswordUpdate,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspTradingAccountPasswordUpdate(
      CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspTradingAccountPasswordUpdate()";

  pushMsg<RspTradingAccountPasswordUpdateMessage>(
                 pTradingAccountPasswordUpdate,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspOrderInsert(
      CThostFtdcInputOrderField *pInputOrder,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspOrderInsert()";

  pushMsg<RspOrderInsertMessage>(
                 pInputOrder,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspParkedOrderInsert(
      CThostFtdcParkedOrderField *pParkedOrder,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspParkedOrderInsert()";

  pushMsg<RspParkedOrderInsertMessage>(
                 pParkedOrder,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspParkedOrderAction(
      CThostFtdcParkedOrderActionField *pParkedOrderAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspParkedOrderAction()";

  pushMsg<RspParkedOrderActionMessage>(
                 pParkedOrderAction,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspOrderAction(
      CThostFtdcInputOrderActionField *pInputOrderAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspOrderAction()";

  pushMsg<RspOrderActionMessage>(
                 pInputOrderAction,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQueryMaxOrderVolume(
      CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQueryMaxOrderVolume()";

  pushMsg<RspQueryMaxOrderVolumeMessage>(
                 pQueryMaxOrderVolume,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspSettlementInfoConfirm(
      CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspSettlementInfoConfirm()";

  pushMsg<RspSettlementInfoConfirmMessage>(
                 pSettlementInfoConfirm,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspRemoveParkedOrder(
      CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspRemoveParkedOrder()";

  pushMsg<RspRemoveParkedOrderMessage>(
                 pRemoveParkedOrder,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspRemoveParkedOrderAction(
      CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspRemoveParkedOrderAction()";

  pushMsg<RspRemoveParkedOrderActionMessage>(
                 pRemoveParkedOrderAction,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspExecOrderInsert(
      CThostFtdcInputExecOrderField *pInputExecOrder,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspExecOrderInsert()";

  pushMsg<RspExecOrderInsertMessage>(
                 pInputExecOrder,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspExecOrderAction(
      CThostFtdcInputExecOrderActionField *pInputExecOrderAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspExecOrderAction()";

  pushMsg<RspExecOrderActionMessage>(
                 pInputExecOrderAction,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspForQuoteInsert(
      CThostFtdcInputForQuoteField *pInputForQuote,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspForQuoteInsert()";

  pushMsg<RspForQuoteInsertMessage>(
                 pInputForQuote,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQuoteInsert(
      CThostFtdcInputQuoteField *pInputQuote,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQuoteInsert()";

  pushMsg<RspQuoteInsertMessage>(
                 pInputQuote,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQuoteAction(
      CThostFtdcInputQuoteActionField *pInputQuoteAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQuoteAction()";

  pushMsg<RspQuoteActionMessage>(
                 pInputQuoteAction,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspCombActionInsert(
      CThostFtdcInputCombActionField *pInputCombAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspCombActionInsert()";

  pushMsg<RspCombActionInsertMessage>(
                 pInputCombAction,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryOrder(
      CThostFtdcOrderField *pOrder,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryOrder()";

  pushMsg<RspQryOrderMessage>(
                 pOrder,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryTrade(
      CThostFtdcTradeField *pTrade,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryTrade()";

  pushMsg<RspQryTradeMessage>(
                 pTrade,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryInvestorPosition(
      CThostFtdcInvestorPositionField *pInvestorPosition,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryInvestorPosition()";

  pushMsg<RspQryInvestorPositionMessage>(
                 pInvestorPosition,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryTradingAccount(
      CThostFtdcTradingAccountField *pTradingAccount,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryTradingAccount()";

  pushMsg<RspQryTradingAccountMessage>(
                 pTradingAccount,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryInvestor(
      CThostFtdcInvestorField *pInvestor,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryInvestor()";

  pushMsg<RspQryInvestorMessage>(
                 pInvestor,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryTradingCode(
      CThostFtdcTradingCodeField *pTradingCode,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryTradingCode()";

  pushMsg<RspQryTradingCodeMessage>(
                 pTradingCode,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryInstrumentMarginRate(
      CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryInstrumentMarginRate()";

  pushMsg<RspQryInstrumentMarginRateMessage>(
                 pInstrumentMarginRate,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryInstrumentCommissionRate(
      CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryInstrumentCommissionRate()";

  pushMsg<RspQryInstrumentCommissionRateMessage>(
                 pInstrumentCommissionRate,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryExchange(
      CThostFtdcExchangeField *pExchange,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryExchange()";

  pushMsg<RspQryExchangeMessage>(
                 pExchange,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryProduct(
      CThostFtdcProductField *pProduct,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryProduct()";

  pushMsg<RspQryProductMessage>(
                 pProduct,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryInstrument(
      CThostFtdcInstrumentField *pInstrument,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryInstrument()";

  pushMsg<RspQryInstrumentMessage>(
                 pInstrument,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryDepthMarketData(
      CThostFtdcDepthMarketDataField *pDepthMarketData,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryDepthMarketData()";

  pushMsg<RspQryDepthMarketDataMessage>(
                 pDepthMarketData,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQrySettlementInfo(
      CThostFtdcSettlementInfoField *pSettlementInfo,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQrySettlementInfo()";

  pushMsg<RspQrySettlementInfoMessage>(
                 pSettlementInfo,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryTransferBank(
      CThostFtdcTransferBankField *pTransferBank,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryTransferBank()";

  pushMsg<RspQryTransferBankMessage>(
                 pTransferBank,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryInvestorPositionDetail(
      CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryInvestorPositionDetail()";

  pushMsg<RspQryInvestorPositionDetailMessage>(
                 pInvestorPositionDetail,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryNotice(
      CThostFtdcNoticeField *pNotice,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryNotice()";

  pushMsg<RspQryNoticeMessage>(
                 pNotice,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQrySettlementInfoConfirm(
      CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQrySettlementInfoConfirm()";

  pushMsg<RspQrySettlementInfoConfirmMessage>(
                 pSettlementInfoConfirm,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryInvestorPositionCombineDetail(
      CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryInvestorPositionCombineDetail()";

  pushMsg<RspQryInvestorPositionCombineDetailMessage>(
                 pInvestorPositionCombineDetail,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryCFMMCTradingAccountKey(
      CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryCFMMCTradingAccountKey()";

  pushMsg<RspQryCFMMCTradingAccountKeyMessage>(
                 pCFMMCTradingAccountKey,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryEWarrantOffset(
      CThostFtdcEWarrantOffsetField *pEWarrantOffset,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryEWarrantOffset()";

  pushMsg<RspQryEWarrantOffsetMessage>(
                 pEWarrantOffset,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryInvestorProductGroupMargin(
      CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryInvestorProductGroupMargin()";

  pushMsg<RspQryInvestorProductGroupMarginMessage>(
                 pInvestorProductGroupMargin,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryExchangeMarginRate(
      CThostFtdcExchangeMarginRateField *pExchangeMarginRate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryExchangeMarginRate()";

  pushMsg<RspQryExchangeMarginRateMessage>(
                 pExchangeMarginRate,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryExchangeMarginRateAdjust(
      CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryExchangeMarginRateAdjust()";

  pushMsg<RspQryExchangeMarginRateAdjustMessage>(
                 pExchangeMarginRateAdjust,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryExchangeRate(
      CThostFtdcExchangeRateField *pExchangeRate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryExchangeRate()";

  pushMsg<RspQryExchangeRateMessage>(
                 pExchangeRate,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQrySecAgentACIDMap(
      CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQrySecAgentACIDMap()";

  pushMsg<RspQrySecAgentACIDMapMessage>(
                 pSecAgentACIDMap,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryProductExchRate(
      CThostFtdcProductExchRateField *pProductExchRate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryProductExchRate()";

  pushMsg<RspQryProductExchRateMessage>(
                 pProductExchRate,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryOptionInstrTradeCost(
      CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryOptionInstrTradeCost()";

  pushMsg<RspQryOptionInstrTradeCostMessage>(
                 pOptionInstrTradeCost,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryOptionInstrCommRate(
      CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryOptionInstrCommRate()";

  pushMsg<RspQryOptionInstrCommRateMessage>(
                 pOptionInstrCommRate,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryExecOrder(
      CThostFtdcExecOrderField *pExecOrder,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryExecOrder()";

  pushMsg<RspQryExecOrderMessage>(
                 pExecOrder,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryForQuote(
      CThostFtdcForQuoteField *pForQuote,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryForQuote()";

  pushMsg<RspQryForQuoteMessage>(
                 pForQuote,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryQuote(
      CThostFtdcQuoteField *pQuote,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryQuote()";

  pushMsg<RspQryQuoteMessage>(
                 pQuote,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryCombInstrumentGuard(
      CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryCombInstrumentGuard()";

  pushMsg<RspQryCombInstrumentGuardMessage>(
                 pCombInstrumentGuard,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryCombAction(
      CThostFtdcCombActionField *pCombAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryCombAction()";

  pushMsg<RspQryCombActionMessage>(
                 pCombAction,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryTransferSerial(
      CThostFtdcTransferSerialField *pTransferSerial,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryTransferSerial()";

  pushMsg<RspQryTransferSerialMessage>(
                 pTransferSerial,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryAccountregister(
      CThostFtdcAccountregisterField *pAccountregister,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryAccountregister()";

  pushMsg<RspQryAccountregisterMessage>(
                 pAccountregister,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspError(
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspError()";

  pushMsg<RspErrorMessage>(
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRtnOrder(
      CThostFtdcOrderField *pOrder) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnOrder()";

  pushMsg<RtnOrderMessage>(pOrder);
}

void TraderSpiImpl::OnRtnTrade(
      CThostFtdcTradeField *pTrade) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnTrade()";

  pushMsg<RtnTradeMessage>(pTrade);
}

void TraderSpiImpl::OnErrRtnOrderInsert(
      CThostFtdcInputOrderField *pInputOrder,
      CThostFtdcRspInfoField *pRspInfo) {
  TRADER_TRACE <<"TraderSpiImpl::OnErrRtnOrderInsert()";

  pushMsg<ErrRtnOrderInsertMessage>(pInputOrder, pRspInfo);
}

void TraderSpiImpl::OnErrRtnOrderAction(
      CThostFtdcOrderActionField *pOrderAction,
      CThostFtdcRspInfoField *pRspInfo) {
  TRADER_TRACE <<"TraderSpiImpl::OnErrRtnOrderAction()";

  pushMsg<ErrRtnOrderActionMessage>(pOrderAction, pRspInfo);
}

void TraderSpiImpl::OnRtnInstrumentStatus(
      CThostFtdcInstrumentStatusField *pInstrumentStatus) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnInstrumentStatus()";

  pushMsg<RtnInstrumentStatusMessage>(pInstrumentStatus);
}

void TraderSpiImpl::OnRtnTradingNotice(
      CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnTradingNotice()";

  pushMsg<RtnTradingNoticeMessage>(pTradingNoticeInfo);
}

void TraderSpiImpl::OnRtnErrorConditionalOrder(
      CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnErrorConditionalOrder()";

  pushMsg<RtnErrorConditionalOrderMessage>(pErrorConditionalOrder);
}

void TraderSpiImpl::OnRtnExecOrder(
      CThostFtdcExecOrderField *pExecOrder) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnExecOrder()";

  pushMsg<RtnExecOrderMessage>(pExecOrder);
}

void TraderSpiImpl::OnErrRtnExecOrderInsert(
      CThostFtdcInputExecOrderField *pInputExecOrder,
      CThostFtdcRspInfoField *pRspInfo) {
  TRADER_TRACE <<"TraderSpiImpl::OnErrRtnExecOrderInsert()";

  pushMsg<ErrRtnExecOrderInsertMessage>(pInputExecOrder, pRspInfo);
}

void TraderSpiImpl::OnErrRtnExecOrderAction(
      CThostFtdcExecOrderActionField *pExecOrderAction,
      CThostFtdcRspInfoField *pRspInfo) {
  TRADER_TRACE <<"TraderSpiImpl::OnErrRtnExecOrderAction()";

  pushMsg<ErrRtnExecOrderActionMessage>(pExecOrderAction, pRspInfo);
}

void TraderSpiImpl::OnErrRtnForQuoteInsert(
      CThostFtdcInputForQuoteField *pInputForQuote,
      CThostFtdcRspInfoField *pRspInfo) {
  TRADER_TRACE <<"TraderSpiImpl::OnErrRtnForQuoteInsert()";

  pushMsg<ErrRtnForQuoteInsertMessage>(pInputForQuote, pRspInfo);
}

void TraderSpiImpl::OnRtnQuote(
      CThostFtdcQuoteField *pQuote) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnQuote()";

  pushMsg<RtnQuoteMessage>(pQuote);
}

void TraderSpiImpl::OnErrRtnQuoteInsert(
      CThostFtdcInputQuoteField *pInputQuote,
      CThostFtdcRspInfoField *pRspInfo) {
  TRADER_TRACE <<"TraderSpiImpl::OnErrRtnQuoteInsert()";

  pushMsg<ErrRtnQuoteInsertMessage>(pInputQuote, pRspInfo);
}

void TraderSpiImpl::OnErrRtnQuoteAction(
      CThostFtdcQuoteActionField *pQuoteAction,
      CThostFtdcRspInfoField *pRspInfo) {
  TRADER_TRACE <<"TraderSpiImpl::OnErrRtnQuoteAction()";

  pushMsg<ErrRtnQuoteActionMessage>(pQuoteAction, pRspInfo);
}

void TraderSpiImpl::OnRtnForQuoteRsp(
      CThostFtdcForQuoteRspField *pForQuoteRsp) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnForQuoteRsp()";

  pushMsg<RtnForQuoteRspMessage>(pForQuoteRsp);
}

void TraderSpiImpl::OnRtnCFMMCTradingAccountToken(
      CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnCFMMCTradingAccountToken()";

  pushMsg<RtnCFMMCTradingAccountTokenMessage>(pCFMMCTradingAccountToken);
}

void TraderSpiImpl::OnRtnCombAction(
      CThostFtdcCombActionField *pCombAction) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnCombAction()";

  pushMsg<RtnCombActionMessage>(pCombAction);
}

void TraderSpiImpl::OnErrRtnCombActionInsert(
      CThostFtdcInputCombActionField *pInputCombAction,
      CThostFtdcRspInfoField *pRspInfo) {
  TRADER_TRACE <<"TraderSpiImpl::OnErrRtnCombActionInsert()";

  pushMsg<ErrRtnCombActionInsertMessage>(pInputCombAction, pRspInfo);
}

void TraderSpiImpl::OnRspQryContractBank(
      CThostFtdcContractBankField *pContractBank,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryContractBank()";

  pushMsg<RspQryContractBankMessage>(
                 pContractBank,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryParkedOrder(
      CThostFtdcParkedOrderField *pParkedOrder,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryParkedOrder()";

  pushMsg<RspQryParkedOrderMessage>(
                 pParkedOrder,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryParkedOrderAction(
      CThostFtdcParkedOrderActionField *pParkedOrderAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryParkedOrderAction()";

  pushMsg<RspQryParkedOrderActionMessage>(
                 pParkedOrderAction,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryTradingNotice(
      CThostFtdcTradingNoticeField *pTradingNotice,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryTradingNotice()";

  pushMsg<RspQryTradingNoticeMessage>(
                 pTradingNotice,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryBrokerTradingParams(
      CThostFtdcBrokerTradingParamsField *pBrokerTradingParams,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryBrokerTradingParams()";

  pushMsg<RspQryBrokerTradingParamsMessage>(
                 pBrokerTradingParams,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQryBrokerTradingAlgos(
      CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQryBrokerTradingAlgos()";

  pushMsg<RspQryBrokerTradingAlgosMessage>(
                 pBrokerTradingAlgos,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQueryCFMMCTradingAccountToken(
      CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQueryCFMMCTradingAccountToken()";

  pushMsg<RspQueryCFMMCTradingAccountTokenMessage>(
                 pQueryCFMMCTradingAccountToken,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRtnFromBankToFutureByBank(
      CThostFtdcRspTransferField *pRspTransfer) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnFromBankToFutureByBank()";

  pushMsg<RtnFromBankToFutureByBankMessage>(pRspTransfer);
}

void TraderSpiImpl::OnRtnFromFutureToBankByBank(
      CThostFtdcRspTransferField *pRspTransfer) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnFromFutureToBankByBank()";

  pushMsg<RtnFromFutureToBankByBankMessage>(pRspTransfer);
}

void TraderSpiImpl::OnRtnRepealFromBankToFutureByBank(
      CThostFtdcRspRepealField *pRspRepeal) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnRepealFromBankToFutureByBank()";

  pushMsg<RtnRepealFromBankToFutureByBankMessage>(pRspRepeal);
}

void TraderSpiImpl::OnRtnRepealFromFutureToBankByBank(
      CThostFtdcRspRepealField *pRspRepeal) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnRepealFromFutureToBankByBank()";

  pushMsg<RtnRepealFromFutureToBankByBankMessage>(pRspRepeal);
}

void TraderSpiImpl::OnRtnFromBankToFutureByFuture(
      CThostFtdcRspTransferField *pRspTransfer) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnFromBankToFutureByFuture()";

  pushMsg<RtnFromBankToFutureByFutureMessage>(pRspTransfer);
}

void TraderSpiImpl::OnRtnFromFutureToBankByFuture(
      CThostFtdcRspTransferField *pRspTransfer) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnFromFutureToBankByFuture()";

  pushMsg<RtnFromFutureToBankByFutureMessage>(pRspTransfer);
}

void TraderSpiImpl::OnRtnRepealFromBankToFutureByFutureManual(
      CThostFtdcRspRepealField *pRspRepeal) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnRepealFromBankToFutureByFutureManual()";

  pushMsg<RtnRepealFromBankToFutureByFutureManualMessage>(pRspRepeal);
}

void TraderSpiImpl::OnRtnRepealFromFutureToBankByFutureManual(
      CThostFtdcRspRepealField *pRspRepeal) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnRepealFromFutureToBankByFutureManual()";

  pushMsg<RtnRepealFromFutureToBankByFutureManualMessage>(pRspRepeal);
}

void TraderSpiImpl::OnRtnQueryBankBalanceByFuture(
      CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnQueryBankBalanceByFuture()";

  pushMsg<RtnQueryBankBalanceByFutureMessage>(pNotifyQueryAccount);
}

void TraderSpiImpl::OnErrRtnBankToFutureByFuture(
      CThostFtdcReqTransferField *pReqTransfer,
      CThostFtdcRspInfoField *pRspInfo) {
  TRADER_TRACE <<"TraderSpiImpl::OnErrRtnBankToFutureByFuture()";

  pushMsg<ErrRtnBankToFutureByFutureMessage>(pReqTransfer, pRspInfo);
}

void TraderSpiImpl::OnErrRtnFutureToBankByFuture(
      CThostFtdcReqTransferField *pReqTransfer,
      CThostFtdcRspInfoField *pRspInfo) {
  TRADER_TRACE <<"TraderSpiImpl::OnErrRtnFutureToBankByFuture()";

  pushMsg<ErrRtnFutureToBankByFutureMessage>(pReqTransfer, pRspInfo);
}

void TraderSpiImpl::OnErrRtnRepealBankToFutureByFutureManual(
      CThostFtdcReqRepealField *pReqRepeal,
      CThostFtdcRspInfoField *pRspInfo) {
  TRADER_TRACE <<"TraderSpiImpl::OnErrRtnRepealBankToFutureByFutureManual()";

  pushMsg<ErrRtnRepealBankToFutureByFutureManualMessage>(pReqRepeal, pRspInfo);
}

void TraderSpiImpl::OnErrRtnRepealFutureToBankByFutureManual(
      CThostFtdcReqRepealField *pReqRepeal,
      CThostFtdcRspInfoField *pRspInfo) {
  TRADER_TRACE <<"TraderSpiImpl::OnErrRtnRepealFutureToBankByFutureManual()";

  pushMsg<ErrRtnRepealFutureToBankByFutureManualMessage>(pReqRepeal, pRspInfo);
}

void TraderSpiImpl::OnErrRtnQueryBankBalanceByFuture(
      CThostFtdcReqQueryAccountField *pReqQueryAccount,
      CThostFtdcRspInfoField *pRspInfo) {
  TRADER_TRACE <<"TraderSpiImpl::OnErrRtnQueryBankBalanceByFuture()";

  pushMsg<ErrRtnQueryBankBalanceByFutureMessage>(pReqQueryAccount, pRspInfo);
}

void TraderSpiImpl::OnRtnRepealFromBankToFutureByFuture(
      CThostFtdcRspRepealField *pRspRepeal) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnRepealFromBankToFutureByFuture()";

  pushMsg<RtnRepealFromBankToFutureByFutureMessage>(pRspRepeal);
}

void TraderSpiImpl::OnRtnRepealFromFutureToBankByFuture(
      CThostFtdcRspRepealField *pRspRepeal) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnRepealFromFutureToBankByFuture()";

  pushMsg<RtnRepealFromFutureToBankByFutureMessage>(pRspRepeal);
}

void TraderSpiImpl::OnRspFromBankToFutureByFuture(
      CThostFtdcReqTransferField *pReqTransfer,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspFromBankToFutureByFuture()";

  pushMsg<RspFromBankToFutureByFutureMessage>(
                 pReqTransfer,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspFromFutureToBankByFuture(
      CThostFtdcReqTransferField *pReqTransfer,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspFromFutureToBankByFuture()";

  pushMsg<RspFromFutureToBankByFutureMessage>(
                 pReqTransfer,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRspQueryBankAccountMoneyByFuture(
      CThostFtdcReqQueryAccountField *pReqQueryAccount,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  TRADER_TRACE <<"TraderSpiImpl::OnRspQueryBankAccountMoneyByFuture()";

  pushMsg<RspQueryBankAccountMoneyByFutureMessage>(
                 pReqQueryAccount,
                 pRspInfo, nRequestID, bIsLast);
}

void TraderSpiImpl::OnRtnOpenAccountByBank(
      CThostFtdcOpenAccountField *pOpenAccount) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnOpenAccountByBank()";

  pushMsg<RtnOpenAccountByBankMessage>(pOpenAccount);
}

void TraderSpiImpl::OnRtnCancelAccountByBank(
      CThostFtdcCancelAccountField *pCancelAccount) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnCancelAccountByBank()";

  pushMsg<RtnCancelAccountByBankMessage>(pCancelAccount);
}

void TraderSpiImpl::OnRtnChangeAccountByBank(
      CThostFtdcChangeAccountField *pChangeAccount) {
  TRADER_TRACE <<"TraderSpiImpl::OnRtnChangeAccountByBank()";

  pushMsg<RtnChangeAccountByBankMessage>(pChangeAccount);
}



};  // namespace cata
