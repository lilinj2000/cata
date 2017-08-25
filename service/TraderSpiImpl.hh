// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_TRADERSPI_IMPL_HH
#define CATA_TRADERSPI_IMPL_HH

#include <memory>
#include "ThostFtdcTraderApi.h"
#include "TraderServiceImpl.hh"

namespace cata {

class TraderServiceImpl;

class TraderSpiImpl : public CThostFtdcTraderSpi {
 public:
  explicit TraderSpiImpl(TraderServiceImpl* service);

  virtual ~TraderSpiImpl();

  // interface from CThostFtdcTraderSpi
  virtual void OnFrontConnected();

  virtual void OnFrontDisconnected(int nReason);

  virtual void OnHeartBeatWarning(int nTimeLapse);

  virtual void OnRspAuthenticate(
      CThostFtdcRspAuthenticateField *pRspAuthenticateField,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspUserLogin(
      CThostFtdcRspUserLoginField *pRspUserLogin,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspUserLogout(
      CThostFtdcUserLogoutField *pUserLogout,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspUserPasswordUpdate(
      CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspTradingAccountPasswordUpdate(
      CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspOrderInsert(
      CThostFtdcInputOrderField *pInputOrder,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspParkedOrderInsert(
      CThostFtdcParkedOrderField *pParkedOrder,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspParkedOrderAction(
      CThostFtdcParkedOrderActionField *pParkedOrderAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspOrderAction(
      CThostFtdcInputOrderActionField *pInputOrderAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQueryMaxOrderVolume(
      CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspSettlementInfoConfirm(
      CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspRemoveParkedOrder(
      CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspRemoveParkedOrderAction(
      CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspExecOrderInsert(
      CThostFtdcInputExecOrderField *pInputExecOrder,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspExecOrderAction(
      CThostFtdcInputExecOrderActionField *pInputExecOrderAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspForQuoteInsert(
      CThostFtdcInputForQuoteField *pInputForQuote,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQuoteInsert(
      CThostFtdcInputQuoteField *pInputQuote,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQuoteAction(
      CThostFtdcInputQuoteActionField *pInputQuoteAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspCombActionInsert(
      CThostFtdcInputCombActionField *pInputCombAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryOrder(
      CThostFtdcOrderField *pOrder,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryTrade(
      CThostFtdcTradeField *pTrade,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryInvestorPosition(
      CThostFtdcInvestorPositionField *pInvestorPosition,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryTradingAccount(
      CThostFtdcTradingAccountField *pTradingAccount,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryInvestor(
      CThostFtdcInvestorField *pInvestor,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryTradingCode(
      CThostFtdcTradingCodeField *pTradingCode,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryInstrumentMarginRate(
      CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryInstrumentCommissionRate(
      CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryExchange(
      CThostFtdcExchangeField *pExchange,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryProduct(
      CThostFtdcProductField *pProduct,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryInstrument(
      CThostFtdcInstrumentField *pInstrument,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryDepthMarketData(
      CThostFtdcDepthMarketDataField *pDepthMarketData,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQrySettlementInfo(
      CThostFtdcSettlementInfoField *pSettlementInfo,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryTransferBank(
      CThostFtdcTransferBankField *pTransferBank,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryInvestorPositionDetail(
      CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryNotice(
      CThostFtdcNoticeField *pNotice,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQrySettlementInfoConfirm(
      CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryInvestorPositionCombineDetail(
      CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryCFMMCTradingAccountKey(
      CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryEWarrantOffset(
      CThostFtdcEWarrantOffsetField *pEWarrantOffset,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryInvestorProductGroupMargin(
      CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryExchangeMarginRate(
      CThostFtdcExchangeMarginRateField *pExchangeMarginRate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryExchangeMarginRateAdjust(
      CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryExchangeRate(
      CThostFtdcExchangeRateField *pExchangeRate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQrySecAgentACIDMap(
      CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryProductExchRate(
      CThostFtdcProductExchRateField *pProductExchRate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryOptionInstrTradeCost(
      CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryOptionInstrCommRate(
      CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryExecOrder(
      CThostFtdcExecOrderField *pExecOrder,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryForQuote(
      CThostFtdcForQuoteField *pForQuote,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryQuote(
      CThostFtdcQuoteField *pQuote,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryCombInstrumentGuard(
      CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryCombAction(
      CThostFtdcCombActionField *pCombAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryTransferSerial(
      CThostFtdcTransferSerialField *pTransferSerial,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryAccountregister(
      CThostFtdcAccountregisterField *pAccountregister,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspError(
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRtnOrder(
      CThostFtdcOrderField *pOrder);

  virtual void OnRtnTrade(
      CThostFtdcTradeField *pTrade);

  virtual void OnErrRtnOrderInsert(
      CThostFtdcInputOrderField *pInputOrder,
      CThostFtdcRspInfoField *pRspInfo);

  virtual void OnErrRtnOrderAction(
      CThostFtdcOrderActionField *pOrderAction,
      CThostFtdcRspInfoField *pRspInfo);

  virtual void OnRtnInstrumentStatus(
      CThostFtdcInstrumentStatusField *pInstrumentStatus);

  virtual void OnRtnTradingNotice(
      CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo);

  virtual void OnRtnErrorConditionalOrder(
      CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder);

  virtual void OnRtnExecOrder(
      CThostFtdcExecOrderField *pExecOrder);

  virtual void OnErrRtnExecOrderInsert(
      CThostFtdcInputExecOrderField *pInputExecOrder,
      CThostFtdcRspInfoField *pRspInfo);

  virtual void OnErrRtnExecOrderAction(
      CThostFtdcExecOrderActionField *pExecOrderAction,
      CThostFtdcRspInfoField *pRspInfo);

  virtual void OnErrRtnForQuoteInsert(
      CThostFtdcInputForQuoteField *pInputForQuote,
      CThostFtdcRspInfoField *pRspInfo);

  virtual void OnRtnQuote(
      CThostFtdcQuoteField *pQuote);

  virtual void OnErrRtnQuoteInsert(
      CThostFtdcInputQuoteField *pInputQuote,
      CThostFtdcRspInfoField *pRspInfo);

  virtual void OnErrRtnQuoteAction(
      CThostFtdcQuoteActionField *pQuoteAction,
      CThostFtdcRspInfoField *pRspInfo);

  virtual void OnRtnForQuoteRsp(
      CThostFtdcForQuoteRspField *pForQuoteRsp);

  virtual void OnRtnCFMMCTradingAccountToken(
      CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken);

  virtual void OnRtnCombAction(
      CThostFtdcCombActionField *pCombAction);

  virtual void OnErrRtnCombActionInsert(
      CThostFtdcInputCombActionField *pInputCombAction,
      CThostFtdcRspInfoField *pRspInfo);

  virtual void OnRspQryContractBank(
      CThostFtdcContractBankField *pContractBank,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryParkedOrder(
      CThostFtdcParkedOrderField *pParkedOrder,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryParkedOrderAction(
      CThostFtdcParkedOrderActionField *pParkedOrderAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryTradingNotice(
      CThostFtdcTradingNoticeField *pTradingNotice,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryBrokerTradingParams(
      CThostFtdcBrokerTradingParamsField *pBrokerTradingParams,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQryBrokerTradingAlgos(
      CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQueryCFMMCTradingAccountToken(
      CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRtnFromBankToFutureByBank(
      CThostFtdcRspTransferField *pRspTransfer);

  virtual void OnRtnFromFutureToBankByBank(
      CThostFtdcRspTransferField *pRspTransfer);

  virtual void OnRtnRepealFromBankToFutureByBank(
      CThostFtdcRspRepealField *pRspRepeal);

  virtual void OnRtnRepealFromFutureToBankByBank(
      CThostFtdcRspRepealField *pRspRepeal);

  virtual void OnRtnFromBankToFutureByFuture(
      CThostFtdcRspTransferField *pRspTransfer);

  virtual void OnRtnFromFutureToBankByFuture(
      CThostFtdcRspTransferField *pRspTransfer);

  virtual void OnRtnRepealFromBankToFutureByFutureManual(
      CThostFtdcRspRepealField *pRspRepeal);

  virtual void OnRtnRepealFromFutureToBankByFutureManual(
      CThostFtdcRspRepealField *pRspRepeal);

  virtual void OnRtnQueryBankBalanceByFuture(
      CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount);

  virtual void OnErrRtnBankToFutureByFuture(
      CThostFtdcReqTransferField *pReqTransfer,
      CThostFtdcRspInfoField *pRspInfo);

  virtual void OnErrRtnFutureToBankByFuture(
      CThostFtdcReqTransferField *pReqTransfer,
      CThostFtdcRspInfoField *pRspInfo);

  virtual void OnErrRtnRepealBankToFutureByFutureManual(
      CThostFtdcReqRepealField *pReqRepeal,
      CThostFtdcRspInfoField *pRspInfo);

  virtual void OnErrRtnRepealFutureToBankByFutureManual(
      CThostFtdcReqRepealField *pReqRepeal,
      CThostFtdcRspInfoField *pRspInfo);

  virtual void OnErrRtnQueryBankBalanceByFuture(
      CThostFtdcReqQueryAccountField *pReqQueryAccount,
      CThostFtdcRspInfoField *pRspInfo);

  virtual void OnRtnRepealFromBankToFutureByFuture(
      CThostFtdcRspRepealField *pRspRepeal);

  virtual void OnRtnRepealFromFutureToBankByFuture(
      CThostFtdcRspRepealField *pRspRepeal);

  virtual void OnRspFromBankToFutureByFuture(
      CThostFtdcReqTransferField *pReqTransfer,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspFromFutureToBankByFuture(
      CThostFtdcReqTransferField *pReqTransfer,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRspQueryBankAccountMoneyByFuture(
      CThostFtdcReqQueryAccountField *pReqQueryAccount,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast);

  virtual void OnRtnOpenAccountByBank(
      CThostFtdcOpenAccountField *pOpenAccount);

  virtual void OnRtnCancelAccountByBank(
      CThostFtdcCancelAccountField *pCancelAccount);

  virtual void OnRtnChangeAccountByBank(
      CThostFtdcChangeAccountField *pChangeAccount);

 protected:
  bool isRspError(CThostFtdcRspInfoField *pRspInfo);

  TraderCallback* callback() {
    return service_->callback();
  }

 private:
  TraderServiceImpl* service_;
};

};  // namespace cata

#endif
