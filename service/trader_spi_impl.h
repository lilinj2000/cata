// Copyright 2017 The Cata Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// -----------------------------------------------------------------------------
// File: [file_name]
// -----------------------------------------------------------------------------
//
// [file_descrition]
//
// Example:
//
//   ... ...
//
//

#ifndef SERVICE_TRADER_SPI_IMPL_H_
#define SERVICE_TRADER_SPI_IMPL_H_

#include "ThostFtdcTraderApi.h"
#include "service/trader_service_impl.h"
#include <memory>

namespace cata {

class TraderServiceImpl;

class TraderSpiImpl : public CThostFtdcTraderSpi {
public:
  explicit TraderSpiImpl(TraderServiceImpl *service);

  virtual ~TraderSpiImpl();

  // interface from CThostFtdcTraderSpi
  virtual void OnFrontConnected();

  virtual void OnFrontDisconnected(int nReason);

  virtual void OnHeartBeatWarning(int nTimeLapse);

  virtual void
  OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField,
                    CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                    bool bIsLast);

  virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin,
                              CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                              bool bIsLast);

  virtual void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout,
                               CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                               bool bIsLast);

  virtual void OnRspUserPasswordUpdate(
      CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void
  OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField
                                        *pTradingAccountPasswordUpdate,
                                    CThostFtdcRspInfoField *pRspInfo,
                                    int nRequestID, bool bIsLast);

  virtual void
  OnRspUserAuthMethod(CThostFtdcRspUserAuthMethodField *pRspUserAuthMethod,
                      CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                      bool bIsLast);

  virtual void
  OnRspGenUserCaptcha(CThostFtdcRspGenUserCaptchaField *pRspGenUserCaptcha,
                      CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                      bool bIsLast);

  virtual void OnRspGenUserText(CThostFtdcRspGenUserTextField *pRspGenUserText,
                                CThostFtdcRspInfoField *pRspInfo,
                                int nRequestID, bool bIsLast);

  virtual void OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder,
                                CThostFtdcRspInfoField *pRspInfo,
                                int nRequestID, bool bIsLast);

  virtual void OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder,
                                      CThostFtdcRspInfoField *pRspInfo,
                                      int nRequestID, bool bIsLast);

  virtual void
  OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction,
                         CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                         bool bIsLast);

  virtual void
  OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction,
                   CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                   bool bIsLast);

  virtual void OnRspQueryMaxOrderVolume(
      CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspSettlementInfoConfirm(
      CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void
  OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder,
                         CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                         bool bIsLast);

  virtual void OnRspRemoveParkedOrderAction(
      CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void
  OnRspExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder,
                       CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                       bool bIsLast);

  virtual void OnRspExecOrderAction(
      CThostFtdcInputExecOrderActionField *pInputExecOrderAction,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote,
                                   CThostFtdcRspInfoField *pRspInfo,
                                   int nRequestID, bool bIsLast);

  virtual void OnRspQuoteInsert(CThostFtdcInputQuoteField *pInputQuote,
                                CThostFtdcRspInfoField *pRspInfo,
                                int nRequestID, bool bIsLast);

  virtual void
  OnRspQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction,
                   CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                   bool bIsLast);

  virtual void OnRspBatchOrderAction(
      CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspOptionSelfCloseInsert(
      CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspOptionSelfCloseAction(
      CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void
  OnRspCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction,
                        CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                        bool bIsLast);

  virtual void OnRspQryOrder(CThostFtdcOrderField *pOrder,
                             CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                             bool bIsLast);

  virtual void OnRspQryTrade(CThostFtdcTradeField *pTrade,
                             CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                             bool bIsLast);

  virtual void
  OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition,
                           CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                           bool bIsLast);

  virtual void
  OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount,
                         CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                         bool bIsLast);

  virtual void OnRspQryInvestor(CThostFtdcInvestorField *pInvestor,
                                CThostFtdcRspInfoField *pRspInfo,
                                int nRequestID, bool bIsLast);

  virtual void OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode,
                                   CThostFtdcRspInfoField *pRspInfo,
                                   int nRequestID, bool bIsLast);

  virtual void OnRspQryInstrumentMarginRate(
      CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQryInstrumentCommissionRate(
      CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQryExchange(CThostFtdcExchangeField *pExchange,
                                CThostFtdcRspInfoField *pRspInfo,
                                int nRequestID, bool bIsLast);

  virtual void OnRspQryProduct(CThostFtdcProductField *pProduct,
                               CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                               bool bIsLast);

  virtual void OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument,
                                  CThostFtdcRspInfoField *pRspInfo,
                                  int nRequestID, bool bIsLast);

  virtual void
  OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData,
                          CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                          bool bIsLast);

  virtual void
  OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo,
                         CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                         bool bIsLast);

  virtual void OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank,
                                    CThostFtdcRspInfoField *pRspInfo,
                                    int nRequestID, bool bIsLast);

  virtual void OnRspQryInvestorPositionDetail(
      CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQryNotice(CThostFtdcNoticeField *pNotice,
                              CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                              bool bIsLast);

  virtual void OnRspQrySettlementInfoConfirm(
      CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQryInvestorPositionCombineDetail(
      CThostFtdcInvestorPositionCombineDetailField
          *pInvestorPositionCombineDetail,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQryCFMMCTradingAccountKey(
      CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void
  OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset,
                         CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                         bool bIsLast);

  virtual void OnRspQryInvestorProductGroupMargin(
      CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQryExchangeMarginRate(
      CThostFtdcExchangeMarginRateField *pExchangeMarginRate,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQryExchangeMarginRateAdjust(
      CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQryExchangeRate(CThostFtdcExchangeRateField *pExchangeRate,
                                    CThostFtdcRspInfoField *pRspInfo,
                                    int nRequestID, bool bIsLast);

  virtual void
  OnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap,
                          CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                          bool bIsLast);

  virtual void
  OnRspQryProductExchRate(CThostFtdcProductExchRateField *pProductExchRate,
                          CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                          bool bIsLast);

  virtual void OnRspQryProductGroup(CThostFtdcProductGroupField *pProductGroup,
                                    CThostFtdcRspInfoField *pRspInfo,
                                    int nRequestID, bool bIsLast);

  virtual void OnRspQryMMInstrumentCommissionRate(
      CThostFtdcMMInstrumentCommissionRateField *pMMInstrumentCommissionRate,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQryMMOptionInstrCommRate(
      CThostFtdcMMOptionInstrCommRateField *pMMOptionInstrCommRate,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQryInstrumentOrderCommRate(
      CThostFtdcInstrumentOrderCommRateField *pInstrumentOrderCommRate,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void
  OnRspQrySecAgentTradingAccount(CThostFtdcTradingAccountField *pTradingAccount,
                                 CThostFtdcRspInfoField *pRspInfo,
                                 int nRequestID, bool bIsLast);

  virtual void OnRspQrySecAgentCheckMode(
      CThostFtdcSecAgentCheckModeField *pSecAgentCheckMode,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQrySecAgentTradeInfo(
      CThostFtdcSecAgentTradeInfoField *pSecAgentTradeInfo,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQryOptionInstrTradeCost(
      CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQryOptionInstrCommRate(
      CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQryExecOrder(CThostFtdcExecOrderField *pExecOrder,
                                 CThostFtdcRspInfoField *pRspInfo,
                                 int nRequestID, bool bIsLast);

  virtual void OnRspQryForQuote(CThostFtdcForQuoteField *pForQuote,
                                CThostFtdcRspInfoField *pRspInfo,
                                int nRequestID, bool bIsLast);

  virtual void OnRspQryQuote(CThostFtdcQuoteField *pQuote,
                             CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                             bool bIsLast);

  virtual void
  OnRspQryOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose,
                          CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                          bool bIsLast);

  virtual void OnRspQryInvestUnit(CThostFtdcInvestUnitField *pInvestUnit,
                                  CThostFtdcRspInfoField *pRspInfo,
                                  int nRequestID, bool bIsLast);

  virtual void OnRspQryCombInstrumentGuard(
      CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQryCombAction(CThostFtdcCombActionField *pCombAction,
                                  CThostFtdcRspInfoField *pRspInfo,
                                  int nRequestID, bool bIsLast);

  virtual void
  OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial,
                         CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                         bool bIsLast);

  virtual void
  OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister,
                          CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                          bool bIsLast);

  virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                          bool bIsLast);

  virtual void OnRtnOrder(CThostFtdcOrderField *pOrder);

  virtual void OnRtnTrade(CThostFtdcTradeField *pTrade);

  virtual void
  OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus);

  virtual void OnRtnBulletin(CThostFtdcBulletinField *pBulletin);

  virtual void
  OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo);

  virtual void OnRtnErrorConditionalOrder(
      CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder);

  virtual void OnRtnExecOrder(CThostFtdcExecOrderField *pExecOrder);

  virtual void OnRtnQuote(CThostFtdcQuoteField *pQuote);

  virtual void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp);

  virtual void OnRtnCFMMCTradingAccountToken(
      CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken);

  virtual void
  OnRtnOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose);

  virtual void OnRtnCombAction(CThostFtdcCombActionField *pCombAction);

  virtual void OnRspQryContractBank(CThostFtdcContractBankField *pContractBank,
                                    CThostFtdcRspInfoField *pRspInfo,
                                    int nRequestID, bool bIsLast);

  virtual void OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder,
                                   CThostFtdcRspInfoField *pRspInfo,
                                   int nRequestID, bool bIsLast);

  virtual void OnRspQryParkedOrderAction(
      CThostFtdcParkedOrderActionField *pParkedOrderAction,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void
  OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice,
                        CThostFtdcRspInfoField *pRspInfo, int nRequestID,
                        bool bIsLast);

  virtual void OnRspQryBrokerTradingParams(
      CThostFtdcBrokerTradingParamsField *pBrokerTradingParams,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQryBrokerTradingAlgos(
      CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQueryCFMMCTradingAccountToken(
      CThostFtdcQueryCFMMCTradingAccountTokenField
          *pQueryCFMMCTradingAccountToken,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void
  OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer);

  virtual void
  OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer);

  virtual void
  OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal);

  virtual void
  OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal);

  virtual void
  OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer);

  virtual void
  OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer);

  virtual void OnRtnRepealFromBankToFutureByFutureManual(
      CThostFtdcRspRepealField *pRspRepeal);

  virtual void OnRtnRepealFromFutureToBankByFutureManual(
      CThostFtdcRspRepealField *pRspRepeal);

  virtual void OnRtnQueryBankBalanceByFuture(
      CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount);

  virtual void
  OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal);

  virtual void
  OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal);

  virtual void
  OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer,
                                CThostFtdcRspInfoField *pRspInfo,
                                int nRequestID, bool bIsLast);

  virtual void
  OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer,
                                CThostFtdcRspInfoField *pRspInfo,
                                int nRequestID, bool bIsLast);

  virtual void OnRspQueryBankAccountMoneyByFuture(
      CThostFtdcReqQueryAccountField *pReqQueryAccount,
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount);

  virtual void
  OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount);

  virtual void
  OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount);

protected:
  bool isRspError(CThostFtdcRspInfoField *pRspInfo);

  TraderCallback *callback() { return service_->callback(); }

private:
  TraderServiceImpl *service_;
};

}; // namespace cata

#endif // SERVICE_TRADER_SPI_IMPL_H_
