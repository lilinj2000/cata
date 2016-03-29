// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_RTNMESSAGE_HH
#define CATA_RTNMESSAGE_HH

#include <memory>
#include "ThostFtdcUserApiStruct.h"
#include "Message.hh"

namespace cata {

class RtnDepthMarketDataMessage : public Message {
  explicit RtnDepthMarketDataMessage(
     CThostFtdcDepthMarketDataField* pDepthMarketData):
      Message(RTN_DEPTH_MARKET_DATA_MESSAGE) {
    depthmarketdata_.reset(
             new CThostFtdcDepthMarketDataField());
    std::memcpy(depthmarketdata_.get(),
                pDepthMarketData,
                sizeof(CThostFtdcDepthMarketDataField));
  }

  virtual ~RtnDepthMarketDataMessage() {
  }

  CThostFtdcDepthMarketDataField*
     depthMarketData() const {
    return depthmarketdata_.get();
  }

 private:
  std::unique_ptr<CThostFtdcDepthMarketDataField>
                   depthmarketdata_;
};

class RtnForQuoteRspMessage : public Message {
  explicit RtnForQuoteRspMessage(
     CThostFtdcForQuoteRspField* pForQuoteRsp):
      Message(RTN_FOR_QUOTE_RSP_MESSAGE) {
    forquotersp_.reset(
             new CThostFtdcForQuoteRspField());
    std::memcpy(forquotersp_.get(),
                pForQuoteRsp,
                sizeof(CThostFtdcForQuoteRspField));
  }

  virtual ~RtnForQuoteRspMessage() {
  }

  CThostFtdcForQuoteRspField*
     forQuoteRsp() const {
    return forquotersp_.get();
  }

 private:
  std::unique_ptr<CThostFtdcForQuoteRspField>
                   forquotersp_;
};

class RtnOrderMessage : public Message {
  explicit RtnOrderMessage(
     CThostFtdcOrderField* pOrder):
      Message(RTN_ORDER_MESSAGE) {
    order_.reset(
             new CThostFtdcOrderField());
    std::memcpy(order_.get(),
                pOrder,
                sizeof(CThostFtdcOrderField));
  }

  virtual ~RtnOrderMessage() {
  }

  CThostFtdcOrderField*
     order() const {
    return order_.get();
  }

 private:
  std::unique_ptr<CThostFtdcOrderField>
                   order_;
};

class RtnTradeMessage : public Message {
  explicit RtnTradeMessage(
     CThostFtdcTradeField* pTrade):
      Message(RTN_TRADE_MESSAGE) {
    trade_.reset(
             new CThostFtdcTradeField());
    std::memcpy(trade_.get(),
                pTrade,
                sizeof(CThostFtdcTradeField));
  }

  virtual ~RtnTradeMessage() {
  }

  CThostFtdcTradeField*
     trade() const {
    return trade_.get();
  }

 private:
  std::unique_ptr<CThostFtdcTradeField>
                   trade_;
};

class ErrRtnOrderInsertMessage : public Message {
  ErrRtnOrderInsertMessage(
     CThostFtdcInputOrderField* pInputOrder,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_ORDER_INSERT_MESSAGE) {
    rspinfo_.reset(new CThostFtdcRspInfoField());
    std::memcpy(rspinfo_.get(), pRspInfo,
                sizeof(CThostFtdcRspInfoField));

    inputorder_.reset(
             new CThostFtdcInputOrderField());
    std::memcpy(inputorder_.get(),
                pInputOrder,
                sizeof(CThostFtdcInputOrderField));
  }

  virtual ~ErrRtnOrderInsertMessage() {
  }

  CThostFtdcRspInfoField* rspInfo() const {
    return rspinfo_.get();
  }

  CThostFtdcInputOrderField*
     inputOrder() const {
    return inputorder_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInputOrderField>
                   inputorder_;
  std::unique_ptr<CThostFtdcRspInfoField> rspinfo_;
};

class ErrRtnOrderActionMessage : public Message {
  ErrRtnOrderActionMessage(
     CThostFtdcOrderActionField* pOrderAction,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_ORDER_ACTION_MESSAGE) {
    rspinfo_.reset(new CThostFtdcRspInfoField());
    std::memcpy(rspinfo_.get(), pRspInfo,
                sizeof(CThostFtdcRspInfoField));

    orderaction_.reset(
             new CThostFtdcOrderActionField());
    std::memcpy(orderaction_.get(),
                pOrderAction,
                sizeof(CThostFtdcOrderActionField));
  }

  virtual ~ErrRtnOrderActionMessage() {
  }

  CThostFtdcRspInfoField* rspInfo() const {
    return rspinfo_.get();
  }

  CThostFtdcOrderActionField*
     orderAction() const {
    return orderaction_.get();
  }

 private:
  std::unique_ptr<CThostFtdcOrderActionField>
                   orderaction_;
  std::unique_ptr<CThostFtdcRspInfoField> rspinfo_;
};

class RtnInstrumentStatusMessage : public Message {
  explicit RtnInstrumentStatusMessage(
     CThostFtdcInstrumentStatusField* pInstrumentStatus):
      Message(RTN_INSTRUMENT_STATUS_MESSAGE) {
    instrumentstatus_.reset(
             new CThostFtdcInstrumentStatusField());
    std::memcpy(instrumentstatus_.get(),
                pInstrumentStatus,
                sizeof(CThostFtdcInstrumentStatusField));
  }

  virtual ~RtnInstrumentStatusMessage() {
  }

  CThostFtdcInstrumentStatusField*
     instrumentStatus() const {
    return instrumentstatus_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInstrumentStatusField>
                   instrumentstatus_;
};

class RtnTradingNoticeMessage : public Message {
  explicit RtnTradingNoticeMessage(
     CThostFtdcTradingNoticeInfoField* pTradingNoticeInfo):
      Message(RTN_TRADING_NOTICE_MESSAGE) {
    tradingnoticeinfo_.reset(
             new CThostFtdcTradingNoticeInfoField());
    std::memcpy(tradingnoticeinfo_.get(),
                pTradingNoticeInfo,
                sizeof(CThostFtdcTradingNoticeInfoField));
  }

  virtual ~RtnTradingNoticeMessage() {
  }

  CThostFtdcTradingNoticeInfoField*
     tradingNoticeInfo() const {
    return tradingnoticeinfo_.get();
  }

 private:
  std::unique_ptr<CThostFtdcTradingNoticeInfoField>
                   tradingnoticeinfo_;
};

class RtnErrorConditionalOrderMessage : public Message {
  explicit RtnErrorConditionalOrderMessage(
     CThostFtdcErrorConditionalOrderField* pErrorConditionalOrder):
      Message(RTN_ERROR_CONDITIONAL_ORDER_MESSAGE) {
    errorconditionalorder_.reset(
             new CThostFtdcErrorConditionalOrderField());
    std::memcpy(errorconditionalorder_.get(),
                pErrorConditionalOrder,
                sizeof(CThostFtdcErrorConditionalOrderField));
  }

  virtual ~RtnErrorConditionalOrderMessage() {
  }

  CThostFtdcErrorConditionalOrderField*
     errorConditionalOrder() const {
    return errorconditionalorder_.get();
  }

 private:
  std::unique_ptr<CThostFtdcErrorConditionalOrderField>
                   errorconditionalorder_;
};

class RtnExecOrderMessage : public Message {
  explicit RtnExecOrderMessage(
     CThostFtdcExecOrderField* pExecOrder):
      Message(RTN_EXEC_ORDER_MESSAGE) {
    execorder_.reset(
             new CThostFtdcExecOrderField());
    std::memcpy(execorder_.get(),
                pExecOrder,
                sizeof(CThostFtdcExecOrderField));
  }

  virtual ~RtnExecOrderMessage() {
  }

  CThostFtdcExecOrderField*
     execOrder() const {
    return execorder_.get();
  }

 private:
  std::unique_ptr<CThostFtdcExecOrderField>
                   execorder_;
};

class ErrRtnExecOrderInsertMessage : public Message {
  ErrRtnExecOrderInsertMessage(
     CThostFtdcInputExecOrderField* pInputExecOrder,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_EXEC_ORDER_INSERT_MESSAGE) {
    rspinfo_.reset(new CThostFtdcRspInfoField());
    std::memcpy(rspinfo_.get(), pRspInfo,
                sizeof(CThostFtdcRspInfoField));

    inputexecorder_.reset(
             new CThostFtdcInputExecOrderField());
    std::memcpy(inputexecorder_.get(),
                pInputExecOrder,
                sizeof(CThostFtdcInputExecOrderField));
  }

  virtual ~ErrRtnExecOrderInsertMessage() {
  }

  CThostFtdcRspInfoField* rspInfo() const {
    return rspinfo_.get();
  }

  CThostFtdcInputExecOrderField*
     inputExecOrder() const {
    return inputexecorder_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInputExecOrderField>
                   inputexecorder_;
  std::unique_ptr<CThostFtdcRspInfoField> rspinfo_;
};

class ErrRtnExecOrderActionMessage : public Message {
  ErrRtnExecOrderActionMessage(
     CThostFtdcExecOrderActionField* pExecOrderAction,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_EXEC_ORDER_ACTION_MESSAGE) {
    rspinfo_.reset(new CThostFtdcRspInfoField());
    std::memcpy(rspinfo_.get(), pRspInfo,
                sizeof(CThostFtdcRspInfoField));

    execorderaction_.reset(
             new CThostFtdcExecOrderActionField());
    std::memcpy(execorderaction_.get(),
                pExecOrderAction,
                sizeof(CThostFtdcExecOrderActionField));
  }

  virtual ~ErrRtnExecOrderActionMessage() {
  }

  CThostFtdcRspInfoField* rspInfo() const {
    return rspinfo_.get();
  }

  CThostFtdcExecOrderActionField*
     execOrderAction() const {
    return execorderaction_.get();
  }

 private:
  std::unique_ptr<CThostFtdcExecOrderActionField>
                   execorderaction_;
  std::unique_ptr<CThostFtdcRspInfoField> rspinfo_;
};

class ErrRtnForQuoteInsertMessage : public Message {
  ErrRtnForQuoteInsertMessage(
     CThostFtdcInputForQuoteField* pInputForQuote,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_FOR_QUOTE_INSERT_MESSAGE) {
    rspinfo_.reset(new CThostFtdcRspInfoField());
    std::memcpy(rspinfo_.get(), pRspInfo,
                sizeof(CThostFtdcRspInfoField));

    inputforquote_.reset(
             new CThostFtdcInputForQuoteField());
    std::memcpy(inputforquote_.get(),
                pInputForQuote,
                sizeof(CThostFtdcInputForQuoteField));
  }

  virtual ~ErrRtnForQuoteInsertMessage() {
  }

  CThostFtdcRspInfoField* rspInfo() const {
    return rspinfo_.get();
  }

  CThostFtdcInputForQuoteField*
     inputForQuote() const {
    return inputforquote_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInputForQuoteField>
                   inputforquote_;
  std::unique_ptr<CThostFtdcRspInfoField> rspinfo_;
};

class RtnQuoteMessage : public Message {
  explicit RtnQuoteMessage(
     CThostFtdcQuoteField* pQuote):
      Message(RTN_QUOTE_MESSAGE) {
    quote_.reset(
             new CThostFtdcQuoteField());
    std::memcpy(quote_.get(),
                pQuote,
                sizeof(CThostFtdcQuoteField));
  }

  virtual ~RtnQuoteMessage() {
  }

  CThostFtdcQuoteField*
     quote() const {
    return quote_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQuoteField>
                   quote_;
};

class ErrRtnQuoteInsertMessage : public Message {
  ErrRtnQuoteInsertMessage(
     CThostFtdcInputQuoteField* pInputQuote,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_QUOTE_INSERT_MESSAGE) {
    rspinfo_.reset(new CThostFtdcRspInfoField());
    std::memcpy(rspinfo_.get(), pRspInfo,
                sizeof(CThostFtdcRspInfoField));

    inputquote_.reset(
             new CThostFtdcInputQuoteField());
    std::memcpy(inputquote_.get(),
                pInputQuote,
                sizeof(CThostFtdcInputQuoteField));
  }

  virtual ~ErrRtnQuoteInsertMessage() {
  }

  CThostFtdcRspInfoField* rspInfo() const {
    return rspinfo_.get();
  }

  CThostFtdcInputQuoteField*
     inputQuote() const {
    return inputquote_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInputQuoteField>
                   inputquote_;
  std::unique_ptr<CThostFtdcRspInfoField> rspinfo_;
};

class ErrRtnQuoteActionMessage : public Message {
  ErrRtnQuoteActionMessage(
     CThostFtdcQuoteActionField* pQuoteAction,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_QUOTE_ACTION_MESSAGE) {
    rspinfo_.reset(new CThostFtdcRspInfoField());
    std::memcpy(rspinfo_.get(), pRspInfo,
                sizeof(CThostFtdcRspInfoField));

    quoteaction_.reset(
             new CThostFtdcQuoteActionField());
    std::memcpy(quoteaction_.get(),
                pQuoteAction,
                sizeof(CThostFtdcQuoteActionField));
  }

  virtual ~ErrRtnQuoteActionMessage() {
  }

  CThostFtdcRspInfoField* rspInfo() const {
    return rspinfo_.get();
  }

  CThostFtdcQuoteActionField*
     quoteAction() const {
    return quoteaction_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQuoteActionField>
                   quoteaction_;
  std::unique_ptr<CThostFtdcRspInfoField> rspinfo_;
};

class RtnCFMMCTradingAccountTokenMessage : public Message {
  explicit RtnCFMMCTradingAccountTokenMessage(
     CThostFtdcCFMMCTradingAccountTokenField* pCFMMCTradingAccountToken):
      Message(RTN_C_F_M_M_C_TRADING_ACCOUNT_TOKEN_MESSAGE) {
    cfmmctradingaccounttoken_.reset(
             new CThostFtdcCFMMCTradingAccountTokenField());
    std::memcpy(cfmmctradingaccounttoken_.get(),
                pCFMMCTradingAccountToken,
                sizeof(CThostFtdcCFMMCTradingAccountTokenField));
  }

  virtual ~RtnCFMMCTradingAccountTokenMessage() {
  }

  CThostFtdcCFMMCTradingAccountTokenField*
     cFMMCTradingAccountToken() const {
    return cfmmctradingaccounttoken_.get();
  }

 private:
  std::unique_ptr<CThostFtdcCFMMCTradingAccountTokenField>
                   cfmmctradingaccounttoken_;
};

class RtnCombActionMessage : public Message {
  explicit RtnCombActionMessage(
     CThostFtdcCombActionField* pCombAction):
      Message(RTN_COMB_ACTION_MESSAGE) {
    combaction_.reset(
             new CThostFtdcCombActionField());
    std::memcpy(combaction_.get(),
                pCombAction,
                sizeof(CThostFtdcCombActionField));
  }

  virtual ~RtnCombActionMessage() {
  }

  CThostFtdcCombActionField*
     combAction() const {
    return combaction_.get();
  }

 private:
  std::unique_ptr<CThostFtdcCombActionField>
                   combaction_;
};

class ErrRtnCombActionInsertMessage : public Message {
  ErrRtnCombActionInsertMessage(
     CThostFtdcInputCombActionField* pInputCombAction,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_COMB_ACTION_INSERT_MESSAGE) {
    rspinfo_.reset(new CThostFtdcRspInfoField());
    std::memcpy(rspinfo_.get(), pRspInfo,
                sizeof(CThostFtdcRspInfoField));

    inputcombaction_.reset(
             new CThostFtdcInputCombActionField());
    std::memcpy(inputcombaction_.get(),
                pInputCombAction,
                sizeof(CThostFtdcInputCombActionField));
  }

  virtual ~ErrRtnCombActionInsertMessage() {
  }

  CThostFtdcRspInfoField* rspInfo() const {
    return rspinfo_.get();
  }

  CThostFtdcInputCombActionField*
     inputCombAction() const {
    return inputcombaction_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInputCombActionField>
                   inputcombaction_;
  std::unique_ptr<CThostFtdcRspInfoField> rspinfo_;
};

class RtnFromBankToFutureByBankMessage : public Message {
  explicit RtnFromBankToFutureByBankMessage(
     CThostFtdcRspTransferField* pRspTransfer):
      Message(RTN_FROM_BANK_TO_FUTURE_BY_BANK_MESSAGE) {
    rsptransfer_.reset(
             new CThostFtdcRspTransferField());
    std::memcpy(rsptransfer_.get(),
                pRspTransfer,
                sizeof(CThostFtdcRspTransferField));
  }

  virtual ~RtnFromBankToFutureByBankMessage() {
  }

  CThostFtdcRspTransferField*
     rspTransfer() const {
    return rsptransfer_.get();
  }

 private:
  std::unique_ptr<CThostFtdcRspTransferField>
                   rsptransfer_;
};

class RtnFromFutureToBankByBankMessage : public Message {
  explicit RtnFromFutureToBankByBankMessage(
     CThostFtdcRspTransferField* pRspTransfer):
      Message(RTN_FROM_FUTURE_TO_BANK_BY_BANK_MESSAGE) {
    rsptransfer_.reset(
             new CThostFtdcRspTransferField());
    std::memcpy(rsptransfer_.get(),
                pRspTransfer,
                sizeof(CThostFtdcRspTransferField));
  }

  virtual ~RtnFromFutureToBankByBankMessage() {
  }

  CThostFtdcRspTransferField*
     rspTransfer() const {
    return rsptransfer_.get();
  }

 private:
  std::unique_ptr<CThostFtdcRspTransferField>
                   rsptransfer_;
};

class RtnRepealFromBankToFutureByBankMessage : public Message {
  explicit RtnRepealFromBankToFutureByBankMessage(
     CThostFtdcRspRepealField* pRspRepeal):
      Message(RTN_REPEAL_FROM_BANK_TO_FUTURE_BY_BANK_MESSAGE) {
    rsprepeal_.reset(
             new CThostFtdcRspRepealField());
    std::memcpy(rsprepeal_.get(),
                pRspRepeal,
                sizeof(CThostFtdcRspRepealField));
  }

  virtual ~RtnRepealFromBankToFutureByBankMessage() {
  }

  CThostFtdcRspRepealField*
     rspRepeal() const {
    return rsprepeal_.get();
  }

 private:
  std::unique_ptr<CThostFtdcRspRepealField>
                   rsprepeal_;
};

class RtnRepealFromFutureToBankByBankMessage : public Message {
  explicit RtnRepealFromFutureToBankByBankMessage(
     CThostFtdcRspRepealField* pRspRepeal):
      Message(RTN_REPEAL_FROM_FUTURE_TO_BANK_BY_BANK_MESSAGE) {
    rsprepeal_.reset(
             new CThostFtdcRspRepealField());
    std::memcpy(rsprepeal_.get(),
                pRspRepeal,
                sizeof(CThostFtdcRspRepealField));
  }

  virtual ~RtnRepealFromFutureToBankByBankMessage() {
  }

  CThostFtdcRspRepealField*
     rspRepeal() const {
    return rsprepeal_.get();
  }

 private:
  std::unique_ptr<CThostFtdcRspRepealField>
                   rsprepeal_;
};

class RtnFromBankToFutureByFutureMessage : public Message {
  explicit RtnFromBankToFutureByFutureMessage(
     CThostFtdcRspTransferField* pRspTransfer):
      Message(RTN_FROM_BANK_TO_FUTURE_BY_FUTURE_MESSAGE) {
    rsptransfer_.reset(
             new CThostFtdcRspTransferField());
    std::memcpy(rsptransfer_.get(),
                pRspTransfer,
                sizeof(CThostFtdcRspTransferField));
  }

  virtual ~RtnFromBankToFutureByFutureMessage() {
  }

  CThostFtdcRspTransferField*
     rspTransfer() const {
    return rsptransfer_.get();
  }

 private:
  std::unique_ptr<CThostFtdcRspTransferField>
                   rsptransfer_;
};

class RtnFromFutureToBankByFutureMessage : public Message {
  explicit RtnFromFutureToBankByFutureMessage(
     CThostFtdcRspTransferField* pRspTransfer):
      Message(RTN_FROM_FUTURE_TO_BANK_BY_FUTURE_MESSAGE) {
    rsptransfer_.reset(
             new CThostFtdcRspTransferField());
    std::memcpy(rsptransfer_.get(),
                pRspTransfer,
                sizeof(CThostFtdcRspTransferField));
  }

  virtual ~RtnFromFutureToBankByFutureMessage() {
  }

  CThostFtdcRspTransferField*
     rspTransfer() const {
    return rsptransfer_.get();
  }

 private:
  std::unique_ptr<CThostFtdcRspTransferField>
                   rsptransfer_;
};

class RtnRepealFromBankToFutureByFutureManualMessage : public Message {
  explicit RtnRepealFromBankToFutureByFutureManualMessage(
     CThostFtdcRspRepealField* pRspRepeal):
      Message(RTN_REPEAL_FROM_BANK_TO_FUTURE_BY_FUTURE_MANUAL_MESSAGE) {
    rsprepeal_.reset(
             new CThostFtdcRspRepealField());
    std::memcpy(rsprepeal_.get(),
                pRspRepeal,
                sizeof(CThostFtdcRspRepealField));
  }

  virtual ~RtnRepealFromBankToFutureByFutureManualMessage() {
  }

  CThostFtdcRspRepealField*
     rspRepeal() const {
    return rsprepeal_.get();
  }

 private:
  std::unique_ptr<CThostFtdcRspRepealField>
                   rsprepeal_;
};

class RtnRepealFromFutureToBankByFutureManualMessage : public Message {
  explicit RtnRepealFromFutureToBankByFutureManualMessage(
     CThostFtdcRspRepealField* pRspRepeal):
      Message(RTN_REPEAL_FROM_FUTURE_TO_BANK_BY_FUTURE_MANUAL_MESSAGE) {
    rsprepeal_.reset(
             new CThostFtdcRspRepealField());
    std::memcpy(rsprepeal_.get(),
                pRspRepeal,
                sizeof(CThostFtdcRspRepealField));
  }

  virtual ~RtnRepealFromFutureToBankByFutureManualMessage() {
  }

  CThostFtdcRspRepealField*
     rspRepeal() const {
    return rsprepeal_.get();
  }

 private:
  std::unique_ptr<CThostFtdcRspRepealField>
                   rsprepeal_;
};

class RtnQueryBankBalanceByFutureMessage : public Message {
  explicit RtnQueryBankBalanceByFutureMessage(
     CThostFtdcNotifyQueryAccountField* pNotifyQueryAccount):
      Message(RTN_QUERY_BANK_BALANCE_BY_FUTURE_MESSAGE) {
    notifyqueryaccount_.reset(
             new CThostFtdcNotifyQueryAccountField());
    std::memcpy(notifyqueryaccount_.get(),
                pNotifyQueryAccount,
                sizeof(CThostFtdcNotifyQueryAccountField));
  }

  virtual ~RtnQueryBankBalanceByFutureMessage() {
  }

  CThostFtdcNotifyQueryAccountField*
     notifyQueryAccount() const {
    return notifyqueryaccount_.get();
  }

 private:
  std::unique_ptr<CThostFtdcNotifyQueryAccountField>
                   notifyqueryaccount_;
};

class ErrRtnBankToFutureByFutureMessage : public Message {
  ErrRtnBankToFutureByFutureMessage(
     CThostFtdcReqTransferField* pReqTransfer,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_BANK_TO_FUTURE_BY_FUTURE_MESSAGE) {
    rspinfo_.reset(new CThostFtdcRspInfoField());
    std::memcpy(rspinfo_.get(), pRspInfo,
                sizeof(CThostFtdcRspInfoField));

    reqtransfer_.reset(
             new CThostFtdcReqTransferField());
    std::memcpy(reqtransfer_.get(),
                pReqTransfer,
                sizeof(CThostFtdcReqTransferField));
  }

  virtual ~ErrRtnBankToFutureByFutureMessage() {
  }

  CThostFtdcRspInfoField* rspInfo() const {
    return rspinfo_.get();
  }

  CThostFtdcReqTransferField*
     reqTransfer() const {
    return reqtransfer_.get();
  }

 private:
  std::unique_ptr<CThostFtdcReqTransferField>
                   reqtransfer_;
  std::unique_ptr<CThostFtdcRspInfoField> rspinfo_;
};

class ErrRtnFutureToBankByFutureMessage : public Message {
  ErrRtnFutureToBankByFutureMessage(
     CThostFtdcReqTransferField* pReqTransfer,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_FUTURE_TO_BANK_BY_FUTURE_MESSAGE) {
    rspinfo_.reset(new CThostFtdcRspInfoField());
    std::memcpy(rspinfo_.get(), pRspInfo,
                sizeof(CThostFtdcRspInfoField));

    reqtransfer_.reset(
             new CThostFtdcReqTransferField());
    std::memcpy(reqtransfer_.get(),
                pReqTransfer,
                sizeof(CThostFtdcReqTransferField));
  }

  virtual ~ErrRtnFutureToBankByFutureMessage() {
  }

  CThostFtdcRspInfoField* rspInfo() const {
    return rspinfo_.get();
  }

  CThostFtdcReqTransferField*
     reqTransfer() const {
    return reqtransfer_.get();
  }

 private:
  std::unique_ptr<CThostFtdcReqTransferField>
                   reqtransfer_;
  std::unique_ptr<CThostFtdcRspInfoField> rspinfo_;
};

class ErrRtnRepealBankToFutureByFutureManualMessage : public Message {
  ErrRtnRepealBankToFutureByFutureManualMessage(
     CThostFtdcReqRepealField* pReqRepeal,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_REPEAL_BANK_TO_FUTURE_BY_FUTURE_MANUAL_MESSAGE) {
    rspinfo_.reset(new CThostFtdcRspInfoField());
    std::memcpy(rspinfo_.get(), pRspInfo,
                sizeof(CThostFtdcRspInfoField));

    reqrepeal_.reset(
             new CThostFtdcReqRepealField());
    std::memcpy(reqrepeal_.get(),
                pReqRepeal,
                sizeof(CThostFtdcReqRepealField));
  }

  virtual ~ErrRtnRepealBankToFutureByFutureManualMessage() {
  }

  CThostFtdcRspInfoField* rspInfo() const {
    return rspinfo_.get();
  }

  CThostFtdcReqRepealField*
     reqRepeal() const {
    return reqrepeal_.get();
  }

 private:
  std::unique_ptr<CThostFtdcReqRepealField>
                   reqrepeal_;
  std::unique_ptr<CThostFtdcRspInfoField> rspinfo_;
};

class ErrRtnRepealFutureToBankByFutureManualMessage : public Message {
  ErrRtnRepealFutureToBankByFutureManualMessage(
     CThostFtdcReqRepealField* pReqRepeal,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_REPEAL_FUTURE_TO_BANK_BY_FUTURE_MANUAL_MESSAGE) {
    rspinfo_.reset(new CThostFtdcRspInfoField());
    std::memcpy(rspinfo_.get(), pRspInfo,
                sizeof(CThostFtdcRspInfoField));

    reqrepeal_.reset(
             new CThostFtdcReqRepealField());
    std::memcpy(reqrepeal_.get(),
                pReqRepeal,
                sizeof(CThostFtdcReqRepealField));
  }

  virtual ~ErrRtnRepealFutureToBankByFutureManualMessage() {
  }

  CThostFtdcRspInfoField* rspInfo() const {
    return rspinfo_.get();
  }

  CThostFtdcReqRepealField*
     reqRepeal() const {
    return reqrepeal_.get();
  }

 private:
  std::unique_ptr<CThostFtdcReqRepealField>
                   reqrepeal_;
  std::unique_ptr<CThostFtdcRspInfoField> rspinfo_;
};

class ErrRtnQueryBankBalanceByFutureMessage : public Message {
  ErrRtnQueryBankBalanceByFutureMessage(
     CThostFtdcReqQueryAccountField* pReqQueryAccount,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_QUERY_BANK_BALANCE_BY_FUTURE_MESSAGE) {
    rspinfo_.reset(new CThostFtdcRspInfoField());
    std::memcpy(rspinfo_.get(), pRspInfo,
                sizeof(CThostFtdcRspInfoField));

    reqqueryaccount_.reset(
             new CThostFtdcReqQueryAccountField());
    std::memcpy(reqqueryaccount_.get(),
                pReqQueryAccount,
                sizeof(CThostFtdcReqQueryAccountField));
  }

  virtual ~ErrRtnQueryBankBalanceByFutureMessage() {
  }

  CThostFtdcRspInfoField* rspInfo() const {
    return rspinfo_.get();
  }

  CThostFtdcReqQueryAccountField*
     reqQueryAccount() const {
    return reqqueryaccount_.get();
  }

 private:
  std::unique_ptr<CThostFtdcReqQueryAccountField>
                   reqqueryaccount_;
  std::unique_ptr<CThostFtdcRspInfoField> rspinfo_;
};

class RtnRepealFromBankToFutureByFutureMessage : public Message {
  explicit RtnRepealFromBankToFutureByFutureMessage(
     CThostFtdcRspRepealField* pRspRepeal):
      Message(RTN_REPEAL_FROM_BANK_TO_FUTURE_BY_FUTURE_MESSAGE) {
    rsprepeal_.reset(
             new CThostFtdcRspRepealField());
    std::memcpy(rsprepeal_.get(),
                pRspRepeal,
                sizeof(CThostFtdcRspRepealField));
  }

  virtual ~RtnRepealFromBankToFutureByFutureMessage() {
  }

  CThostFtdcRspRepealField*
     rspRepeal() const {
    return rsprepeal_.get();
  }

 private:
  std::unique_ptr<CThostFtdcRspRepealField>
                   rsprepeal_;
};

class RtnRepealFromFutureToBankByFutureMessage : public Message {
  explicit RtnRepealFromFutureToBankByFutureMessage(
     CThostFtdcRspRepealField* pRspRepeal):
      Message(RTN_REPEAL_FROM_FUTURE_TO_BANK_BY_FUTURE_MESSAGE) {
    rsprepeal_.reset(
             new CThostFtdcRspRepealField());
    std::memcpy(rsprepeal_.get(),
                pRspRepeal,
                sizeof(CThostFtdcRspRepealField));
  }

  virtual ~RtnRepealFromFutureToBankByFutureMessage() {
  }

  CThostFtdcRspRepealField*
     rspRepeal() const {
    return rsprepeal_.get();
  }

 private:
  std::unique_ptr<CThostFtdcRspRepealField>
                   rsprepeal_;
};

class RtnOpenAccountByBankMessage : public Message {
  explicit RtnOpenAccountByBankMessage(
     CThostFtdcOpenAccountField* pOpenAccount):
      Message(RTN_OPEN_ACCOUNT_BY_BANK_MESSAGE) {
    openaccount_.reset(
             new CThostFtdcOpenAccountField());
    std::memcpy(openaccount_.get(),
                pOpenAccount,
                sizeof(CThostFtdcOpenAccountField));
  }

  virtual ~RtnOpenAccountByBankMessage() {
  }

  CThostFtdcOpenAccountField*
     openAccount() const {
    return openaccount_.get();
  }

 private:
  std::unique_ptr<CThostFtdcOpenAccountField>
                   openaccount_;
};

class RtnCancelAccountByBankMessage : public Message {
  explicit RtnCancelAccountByBankMessage(
     CThostFtdcCancelAccountField* pCancelAccount):
      Message(RTN_CANCEL_ACCOUNT_BY_BANK_MESSAGE) {
    cancelaccount_.reset(
             new CThostFtdcCancelAccountField());
    std::memcpy(cancelaccount_.get(),
                pCancelAccount,
                sizeof(CThostFtdcCancelAccountField));
  }

  virtual ~RtnCancelAccountByBankMessage() {
  }

  CThostFtdcCancelAccountField*
     cancelAccount() const {
    return cancelaccount_.get();
  }

 private:
  std::unique_ptr<CThostFtdcCancelAccountField>
                   cancelaccount_;
};

class RtnChangeAccountByBankMessage : public Message {
  explicit RtnChangeAccountByBankMessage(
     CThostFtdcChangeAccountField* pChangeAccount):
      Message(RTN_CHANGE_ACCOUNT_BY_BANK_MESSAGE) {
    changeaccount_.reset(
             new CThostFtdcChangeAccountField());
    std::memcpy(changeaccount_.get(),
                pChangeAccount,
                sizeof(CThostFtdcChangeAccountField));
  }

  virtual ~RtnChangeAccountByBankMessage() {
  }

  CThostFtdcChangeAccountField*
     changeAccount() const {
    return changeaccount_.get();
  }

 private:
  std::unique_ptr<CThostFtdcChangeAccountField>
                   changeaccount_;
};


};  // namespace cata

#endif
