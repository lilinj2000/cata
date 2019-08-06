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
// File: trader_service.h
// -----------------------------------------------------------------------------
//
// [file_descrition]
//
// Example:
//
//   ... ...
//
//

#ifndef CATA_TRADER_SERVICE_H_
#define CATA_TRADER_SERVICE_H_

#include "soil/json.h"
#include "soil/log.h"
#include <string>

namespace cata {

class TraderCallback {
public:
  virtual void onRspAuthenticate(const std::string &theRspAuthenticateField,
                                 const std::string &theRspInfo, int nRequestID,
                                 bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theRspAuthenticateField);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspUserPasswordUpdate(const std::string &theUserPasswordUpdate,
                                       const std::string &theRspInfo,
                                       int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theUserPasswordUpdate);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspTradingAccountPasswordUpdate(
      const std::string &theTradingAccountPasswordUpdate,
      const std::string &theRspInfo, int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theTradingAccountPasswordUpdate);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspUserAuthMethod(const std::string &theRspUserAuthMethod,
                                   const std::string &theRspInfo,
                                   int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theRspUserAuthMethod);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspGenUserCaptcha(const std::string &theRspGenUserCaptcha,
                                   const std::string &theRspInfo,
                                   int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theRspGenUserCaptcha);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspGenUserText(const std::string &theRspGenUserText,
                                const std::string &theRspInfo, int nRequestID,
                                bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theRspGenUserText);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspOrderInsert(const std::string &theInputOrder,
                                const std::string &theRspInfo, int nRequestID,
                                bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInputOrder);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspParkedOrderInsert(const std::string &theParkedOrder,
                                      const std::string &theRspInfo,
                                      int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theParkedOrder);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspParkedOrderAction(const std::string &theParkedOrderAction,
                                      const std::string &theRspInfo,
                                      int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theParkedOrderAction);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspOrderAction(const std::string &theInputOrderAction,
                                const std::string &theRspInfo, int nRequestID,
                                bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInputOrderAction);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspQueryMaxOrderVolume(const std::string &theQueryMaxOrderVolume,
                           const std::string &theRspInfo, int nRequestID,
                           bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theQueryMaxOrderVolume);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspSettlementInfoConfirm(const std::string &theSettlementInfoConfirm,
                             const std::string &theRspInfo, int nRequestID,
                             bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theSettlementInfoConfirm);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspRemoveParkedOrder(const std::string &theRemoveParkedOrder,
                                      const std::string &theRspInfo,
                                      int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theRemoveParkedOrder);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspRemoveParkedOrderAction(const std::string &theRemoveParkedOrderAction,
                               const std::string &theRspInfo, int nRequestID,
                               bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theRemoveParkedOrderAction);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspExecOrderInsert(const std::string &theInputExecOrder,
                                    const std::string &theRspInfo,
                                    int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInputExecOrder);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspExecOrderAction(const std::string &theInputExecOrderAction,
                                    const std::string &theRspInfo,
                                    int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInputExecOrderAction);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspForQuoteInsert(const std::string &theInputForQuote,
                                   const std::string &theRspInfo,
                                   int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInputForQuote);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQuoteInsert(const std::string &theInputQuote,
                                const std::string &theRspInfo, int nRequestID,
                                bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInputQuote);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQuoteAction(const std::string &theInputQuoteAction,
                                const std::string &theRspInfo, int nRequestID,
                                bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInputQuoteAction);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspBatchOrderAction(const std::string &theInputBatchOrderAction,
                        const std::string &theRspInfo, int nRequestID,
                        bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInputBatchOrderAction);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspOptionSelfCloseInsert(const std::string &theInputOptionSelfClose,
                             const std::string &theRspInfo, int nRequestID,
                             bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInputOptionSelfClose);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspOptionSelfCloseAction(const std::string &theInputOptionSelfCloseAction,
                             const std::string &theRspInfo, int nRequestID,
                             bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInputOptionSelfCloseAction);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspCombActionInsert(const std::string &theInputCombAction,
                                     const std::string &theRspInfo,
                                     int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInputCombAction);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryOrder(const std::string &theOrder,
                             const std::string &theRspInfo, int nRequestID,
                             bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theOrder);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryTrade(const std::string &theTrade,
                             const std::string &theRspInfo, int nRequestID,
                             bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theTrade);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryInvestorPosition(const std::string &theInvestorPosition,
                                        const std::string &theRspInfo,
                                        int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInvestorPosition);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryTradingAccount(const std::string &theTradingAccount,
                                      const std::string &theRspInfo,
                                      int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theTradingAccount);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryInvestor(const std::string &theInvestor,
                                const std::string &theRspInfo, int nRequestID,
                                bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInvestor);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryTradingCode(const std::string &theTradingCode,
                                   const std::string &theRspInfo,
                                   int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theTradingCode);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspQryInstrumentMarginRate(const std::string &theInstrumentMarginRate,
                               const std::string &theRspInfo, int nRequestID,
                               bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInstrumentMarginRate);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryInstrumentCommissionRate(
      const std::string &theInstrumentCommissionRate,
      const std::string &theRspInfo, int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInstrumentCommissionRate);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryExchange(const std::string &theExchange,
                                const std::string &theRspInfo, int nRequestID,
                                bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theExchange);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryProduct(const std::string &theProduct,
                               const std::string &theRspInfo, int nRequestID,
                               bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theProduct);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryInstrument(const std::string &theInstrument,
                                  const std::string &theRspInfo, int nRequestID,
                                  bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInstrument);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryDepthMarketData(const std::string &theDepthMarketData,
                                       const std::string &theRspInfo,
                                       int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theDepthMarketData);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQrySettlementInfo(const std::string &theSettlementInfo,
                                      const std::string &theRspInfo,
                                      int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theSettlementInfo);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryTransferBank(const std::string &theTransferBank,
                                    const std::string &theRspInfo,
                                    int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theTransferBank);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspQryInvestorPositionDetail(const std::string &theInvestorPositionDetail,
                                 const std::string &theRspInfo, int nRequestID,
                                 bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInvestorPositionDetail);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryNotice(const std::string &theNotice,
                              const std::string &theRspInfo, int nRequestID,
                              bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theNotice);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspQrySettlementInfoConfirm(const std::string &theSettlementInfoConfirm,
                                const std::string &theRspInfo, int nRequestID,
                                bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theSettlementInfoConfirm);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryInvestorPositionCombineDetail(
      const std::string &theInvestorPositionCombineDetail,
      const std::string &theRspInfo, int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInvestorPositionCombineDetail);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspQryCFMMCTradingAccountKey(const std::string &theCFMMCTradingAccountKey,
                                 const std::string &theRspInfo, int nRequestID,
                                 bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theCFMMCTradingAccountKey);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryEWarrantOffset(const std::string &theEWarrantOffset,
                                      const std::string &theRspInfo,
                                      int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theEWarrantOffset);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryInvestorProductGroupMargin(
      const std::string &theInvestorProductGroupMargin,
      const std::string &theRspInfo, int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInvestorProductGroupMargin);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspQryExchangeMarginRate(const std::string &theExchangeMarginRate,
                             const std::string &theRspInfo, int nRequestID,
                             bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theExchangeMarginRate);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryExchangeMarginRateAdjust(
      const std::string &theExchangeMarginRateAdjust,
      const std::string &theRspInfo, int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theExchangeMarginRateAdjust);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryExchangeRate(const std::string &theExchangeRate,
                                    const std::string &theRspInfo,
                                    int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theExchangeRate);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQrySecAgentACIDMap(const std::string &theSecAgentACIDMap,
                                       const std::string &theRspInfo,
                                       int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theSecAgentACIDMap);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryProductExchRate(const std::string &theProductExchRate,
                                       const std::string &theRspInfo,
                                       int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theProductExchRate);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryProductGroup(const std::string &theProductGroup,
                                    const std::string &theRspInfo,
                                    int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theProductGroup);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryMMInstrumentCommissionRate(
      const std::string &theMMInstrumentCommissionRate,
      const std::string &theRspInfo, int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theMMInstrumentCommissionRate);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspQryMMOptionInstrCommRate(const std::string &theMMOptionInstrCommRate,
                                const std::string &theRspInfo, int nRequestID,
                                bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theMMOptionInstrCommRate);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspQryInstrumentOrderCommRate(const std::string &theInstrumentOrderCommRate,
                                  const std::string &theRspInfo, int nRequestID,
                                  bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInstrumentOrderCommRate);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspQrySecAgentTradingAccount(const std::string &theTradingAccount,
                                 const std::string &theRspInfo, int nRequestID,
                                 bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theTradingAccount);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspQrySecAgentCheckMode(const std::string &theSecAgentCheckMode,
                            const std::string &theRspInfo, int nRequestID,
                            bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theSecAgentCheckMode);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspQrySecAgentTradeInfo(const std::string &theSecAgentTradeInfo,
                            const std::string &theRspInfo, int nRequestID,
                            bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theSecAgentTradeInfo);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspQryOptionInstrTradeCost(const std::string &theOptionInstrTradeCost,
                               const std::string &theRspInfo, int nRequestID,
                               bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theOptionInstrTradeCost);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspQryOptionInstrCommRate(const std::string &theOptionInstrCommRate,
                              const std::string &theRspInfo, int nRequestID,
                              bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theOptionInstrCommRate);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryExecOrder(const std::string &theExecOrder,
                                 const std::string &theRspInfo, int nRequestID,
                                 bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theExecOrder);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryForQuote(const std::string &theForQuote,
                                const std::string &theRspInfo, int nRequestID,
                                bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theForQuote);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryQuote(const std::string &theQuote,
                             const std::string &theRspInfo, int nRequestID,
                             bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theQuote);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryOptionSelfClose(const std::string &theOptionSelfClose,
                                       const std::string &theRspInfo,
                                       int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theOptionSelfClose);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryInvestUnit(const std::string &theInvestUnit,
                                  const std::string &theRspInfo, int nRequestID,
                                  bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInvestUnit);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspQryCombInstrumentGuard(const std::string &theCombInstrumentGuard,
                              const std::string &theRspInfo, int nRequestID,
                              bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theCombInstrumentGuard);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryCombAction(const std::string &theCombAction,
                                  const std::string &theRspInfo, int nRequestID,
                                  bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theCombAction);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryTransferSerial(const std::string &theTransferSerial,
                                      const std::string &theRspInfo,
                                      int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theTransferSerial);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryAccountregister(const std::string &theAccountregister,
                                       const std::string &theRspInfo,
                                       int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theAccountregister);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspError(const std::string &theRspInfo, int nRequestID,
                          bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRtnOrder(const std::string &theOrder) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theOrder);
  }

  virtual void onRtnTrade(const std::string &theTrade) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theTrade);
  }

  virtual void onRtnInstrumentStatus(const std::string &theInstrumentStatus) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theInstrumentStatus);
  }

  virtual void onRtnBulletin(const std::string &theBulletin) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theBulletin);
  }

  virtual void onRtnTradingNotice(const std::string &theTradingNoticeInfo) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theTradingNoticeInfo);
  }

  virtual void
  onRtnErrorConditionalOrder(const std::string &theErrorConditionalOrder) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theErrorConditionalOrder);
  }

  virtual void onRtnExecOrder(const std::string &theExecOrder) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theExecOrder);
  }

  virtual void onRtnQuote(const std::string &theQuote) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theQuote);
  }

  virtual void onRtnForQuoteRsp(const std::string &theForQuoteRsp) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theForQuoteRsp);
  }

  virtual void onRtnCFMMCTradingAccountToken(
      const std::string &theCFMMCTradingAccountToken) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theCFMMCTradingAccountToken);
  }

  virtual void onRtnOptionSelfClose(const std::string &theOptionSelfClose) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theOptionSelfClose);
  }

  virtual void onRtnCombAction(const std::string &theCombAction) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theCombAction);
  }

  virtual void onRspQryContractBank(const std::string &theContractBank,
                                    const std::string &theRspInfo,
                                    int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theContractBank);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryParkedOrder(const std::string &theParkedOrder,
                                   const std::string &theRspInfo,
                                   int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theParkedOrder);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspQryParkedOrderAction(const std::string &theParkedOrderAction,
                            const std::string &theRspInfo, int nRequestID,
                            bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theParkedOrderAction);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQryTradingNotice(const std::string &theTradingNotice,
                                     const std::string &theRspInfo,
                                     int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theTradingNotice);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspQryBrokerTradingParams(const std::string &theBrokerTradingParams,
                              const std::string &theRspInfo, int nRequestID,
                              bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theBrokerTradingParams);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspQryBrokerTradingAlgos(const std::string &theBrokerTradingAlgos,
                             const std::string &theRspInfo, int nRequestID,
                             bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theBrokerTradingAlgos);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspQueryCFMMCTradingAccountToken(
      const std::string &theQueryCFMMCTradingAccountToken,
      const std::string &theRspInfo, int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theQueryCFMMCTradingAccountToken);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRtnFromBankToFutureByBank(const std::string &theRspTransfer) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theRspTransfer);
  }

  virtual void onRtnFromFutureToBankByBank(const std::string &theRspTransfer) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theRspTransfer);
  }

  virtual void
  onRtnRepealFromBankToFutureByBank(const std::string &theRspRepeal) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theRspRepeal);
  }

  virtual void
  onRtnRepealFromFutureToBankByBank(const std::string &theRspRepeal) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theRspRepeal);
  }

  virtual void
  onRtnFromBankToFutureByFuture(const std::string &theRspTransfer) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theRspTransfer);
  }

  virtual void
  onRtnFromFutureToBankByFuture(const std::string &theRspTransfer) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theRspTransfer);
  }

  virtual void
  onRtnRepealFromBankToFutureByFutureManual(const std::string &theRspRepeal) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theRspRepeal);
  }

  virtual void
  onRtnRepealFromFutureToBankByFutureManual(const std::string &theRspRepeal) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theRspRepeal);
  }

  virtual void
  onRtnQueryBankBalanceByFuture(const std::string &theNotifyQueryAccount) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theNotifyQueryAccount);
  }

  virtual void
  onRtnRepealFromBankToFutureByFuture(const std::string &theRspRepeal) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theRspRepeal);
  }

  virtual void
  onRtnRepealFromFutureToBankByFuture(const std::string &theRspRepeal) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theRspRepeal);
  }

  virtual void onRspFromBankToFutureByFuture(const std::string &theReqTransfer,
                                             const std::string &theRspInfo,
                                             int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theReqTransfer);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspFromFutureToBankByFuture(const std::string &theReqTransfer,
                                             const std::string &theRspInfo,
                                             int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theReqTransfer);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void
  onRspQueryBankAccountMoneyByFuture(const std::string &theReqQueryAccount,
                                     const std::string &theRspInfo,
                                     int nRequestID, bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theReqQueryAccount);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRtnOpenAccountByBank(const std::string &theOpenAccount) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theOpenAccount);
  }

  virtual void onRtnCancelAccountByBank(const std::string &theCancelAccount) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theCancelAccount);
  }

  virtual void onRtnChangeAccountByBank(const std::string &theChangeAccount) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theChangeAccount);
  }

  virtual ~TraderCallback() {}
};

class TraderService {
public:
  virtual std::string tradingDay() = 0;

  virtual int32_t openBuyOrder(const std::string &instru, double price,
                               int volume) = 0;

  virtual int32_t openBuyOrderFAK(const std::string &instru, double price,
                                  int volume) = 0;

  virtual int32_t openBuyOrderFOK(const std::string &instru, double price,
                                  int volume) = 0;

  virtual int32_t closeBuyOrder(const std::string &instru, double price,
                                int volume) = 0;

  virtual int32_t closeBuyOrderFAK(const std::string &instru, double price,
                                   int volume) = 0;

  virtual int32_t closeBuyOrderFOK(const std::string &instru, double price,
                                   int volume) = 0;

  virtual int32_t openSellOrder(const std::string &instru, double price,
                                int volume) = 0;

  virtual int32_t openSellOrderFAK(const std::string &instru, double price,
                                   int volume) = 0;

  virtual int32_t openSellOrderFOK(const std::string &instru, double price,
                                   int volume) = 0;

  virtual int32_t closeSellOrder(const std::string &instru, double price,
                                 int volume) = 0;

  virtual int32_t closeSellOrderFAK(const std::string &instru, double price,
                                    int volume) = 0;

  virtual int32_t closeSellOrderFOK(const std::string &instru, double price,
                                    int volume) = 0;

  virtual void cancelOrder(int32_t order_ref, const std::string &instru) = 0;

  virtual void cancelOrder(const std::string &exchange_id,
                           const std::string &order_sys_id,
                           const std::string &instru) = 0;

  virtual void queryOrder(const std::string &instru,
                          const std::string &exchange,
                          const std::string &order_sys_id,
                          const std::string &start_time,
                          const std::string &stop_time) = 0;

  virtual void queryTrade(const std::string &instru,
                          const std::string &exchange,
                          const std::string &trade_id,
                          const std::string &start_time,
                          const std::string &stop_time) = 0;

  virtual void queryPosition(const std::string &instru) = 0;

  virtual void queryAccount(const std::string &currency_id) = 0;

  virtual void queryInvestor() = 0;

  virtual void queryTradingCode(const std::string &exchange) = 0;

  virtual void queryInstruMarginRate(const std::string &instru) = 0;

  virtual void queryInstruCommissionRate(const std::string &instru) = 0;

  virtual void queryExchange(const std::string &exchange) = 0;

  virtual void queryProduct(const std::string &product_id) = 0;

  virtual void queryInstrument(const std::string &instru,
                               const std::string &exchange,
                               const std::string &exchange_instru_id,
                               const std::string &product_id) = 0;

  virtual void queryDepthMarketData(const std::string &instru) = 0;

  virtual void queryExchangeMarginRate(const std::string &instru) = 0;

  virtual void queryExchangeMarginRateAdjust(const std::string &instru) = 0;

  virtual ~TraderService() {}

  static TraderService *create(const rapidjson::Document &doc,
                               TraderCallback *callback);
};

}; // namespace cata

#endif // CATA_TRADER_SERVICE_H_
