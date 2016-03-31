// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_RTNMESSAGE_HH
#define CATA_RTNMESSAGE_HH

#include <memory>
#include <string>
#include <sstream>
#include "ThostFtdcUserApiStruct.h"
#include "Message.hh"
#include "ThostFtdcUserApiStructPrint.hh"
#include "json/json.hh"

namespace cata {

class RtnDepthMarketDataMessage : public Message {
 public:
  explicit RtnDepthMarketDataMessage(
     CThostFtdcDepthMarketDataField* pDepthMarketData):
      Message(RTN_DEPTH_MARKET_DATA_MESSAGE,
              "OnRtnDepthMarketData") {
    if (pDepthMarketData) {
      depthmarketdata_.reset(
               new CThostFtdcDepthMarketDataField());
      std::memcpy(depthmarketdata_.get(),
                  pDepthMarketData,
                  sizeof(CThostFtdcDepthMarketDataField));
    }
  }

  virtual ~RtnDepthMarketDataMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (depthmarketdata_.get()) {
      std::stringstream ss;
      ss <<(*depthmarketdata_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnForQuoteRspMessage(
     CThostFtdcForQuoteRspField* pForQuoteRsp):
      Message(RTN_FOR_QUOTE_RSP_MESSAGE,
              "OnRtnForQuoteRsp") {
    if (pForQuoteRsp) {
      forquotersp_.reset(
               new CThostFtdcForQuoteRspField());
      std::memcpy(forquotersp_.get(),
                  pForQuoteRsp,
                  sizeof(CThostFtdcForQuoteRspField));
    }
  }

  virtual ~RtnForQuoteRspMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (forquotersp_.get()) {
      std::stringstream ss;
      ss <<(*forquotersp_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnOrderMessage(
     CThostFtdcOrderField* pOrder):
      Message(RTN_ORDER_MESSAGE,
              "OnRtnOrder") {
    if (pOrder) {
      order_.reset(
               new CThostFtdcOrderField());
      std::memcpy(order_.get(),
                  pOrder,
                  sizeof(CThostFtdcOrderField));
    }
  }

  virtual ~RtnOrderMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (order_.get()) {
      std::stringstream ss;
      ss <<(*order_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnTradeMessage(
     CThostFtdcTradeField* pTrade):
      Message(RTN_TRADE_MESSAGE,
              "OnRtnTrade") {
    if (pTrade) {
      trade_.reset(
               new CThostFtdcTradeField());
      std::memcpy(trade_.get(),
                  pTrade,
                  sizeof(CThostFtdcTradeField));
    }
  }

  virtual ~RtnTradeMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (trade_.get()) {
      std::stringstream ss;
      ss <<(*trade_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  ErrRtnOrderInsertMessage(
     CThostFtdcInputOrderField* pInputOrder,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_ORDER_INSERT_MESSAGE,
              "OnErrRtnOrderInsert") {
    if (pRspInfo) {
      rspinfo_.reset(new CThostFtdcRspInfoField());
      std::memcpy(rspinfo_.get(), pRspInfo,
                  sizeof(CThostFtdcRspInfoField));
    }

    if (pInputOrder) {
      inputorder_.reset(
               new CThostFtdcInputOrderField());
      std::memcpy(inputorder_.get(),
                  pInputOrder,
                  sizeof(CThostFtdcInputOrderField));
    }
  }

  virtual ~ErrRtnOrderInsertMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (inputorder_.get()) {
      std::stringstream ss;
      ss <<(*inputorder_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  ErrRtnOrderActionMessage(
     CThostFtdcOrderActionField* pOrderAction,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_ORDER_ACTION_MESSAGE,
              "OnErrRtnOrderAction") {
    if (pRspInfo) {
      rspinfo_.reset(new CThostFtdcRspInfoField());
      std::memcpy(rspinfo_.get(), pRspInfo,
                  sizeof(CThostFtdcRspInfoField));
    }

    if (pOrderAction) {
      orderaction_.reset(
               new CThostFtdcOrderActionField());
      std::memcpy(orderaction_.get(),
                  pOrderAction,
                  sizeof(CThostFtdcOrderActionField));
    }
  }

  virtual ~ErrRtnOrderActionMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (orderaction_.get()) {
      std::stringstream ss;
      ss <<(*orderaction_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnInstrumentStatusMessage(
     CThostFtdcInstrumentStatusField* pInstrumentStatus):
      Message(RTN_INSTRUMENT_STATUS_MESSAGE,
              "OnRtnInstrumentStatus") {
    if (pInstrumentStatus) {
      instrumentstatus_.reset(
               new CThostFtdcInstrumentStatusField());
      std::memcpy(instrumentstatus_.get(),
                  pInstrumentStatus,
                  sizeof(CThostFtdcInstrumentStatusField));
    }
  }

  virtual ~RtnInstrumentStatusMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (instrumentstatus_.get()) {
      std::stringstream ss;
      ss <<(*instrumentstatus_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnTradingNoticeMessage(
     CThostFtdcTradingNoticeInfoField* pTradingNoticeInfo):
      Message(RTN_TRADING_NOTICE_MESSAGE,
              "OnRtnTradingNotice") {
    if (pTradingNoticeInfo) {
      tradingnoticeinfo_.reset(
               new CThostFtdcTradingNoticeInfoField());
      std::memcpy(tradingnoticeinfo_.get(),
                  pTradingNoticeInfo,
                  sizeof(CThostFtdcTradingNoticeInfoField));
    }
  }

  virtual ~RtnTradingNoticeMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (tradingnoticeinfo_.get()) {
      std::stringstream ss;
      ss <<(*tradingnoticeinfo_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnErrorConditionalOrderMessage(
     CThostFtdcErrorConditionalOrderField* pErrorConditionalOrder):
      Message(RTN_ERROR_CONDITIONAL_ORDER_MESSAGE,
              "OnRtnErrorConditionalOrder") {
    if (pErrorConditionalOrder) {
      errorconditionalorder_.reset(
               new CThostFtdcErrorConditionalOrderField());
      std::memcpy(errorconditionalorder_.get(),
                  pErrorConditionalOrder,
                  sizeof(CThostFtdcErrorConditionalOrderField));
    }
  }

  virtual ~RtnErrorConditionalOrderMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (errorconditionalorder_.get()) {
      std::stringstream ss;
      ss <<(*errorconditionalorder_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnExecOrderMessage(
     CThostFtdcExecOrderField* pExecOrder):
      Message(RTN_EXEC_ORDER_MESSAGE,
              "OnRtnExecOrder") {
    if (pExecOrder) {
      execorder_.reset(
               new CThostFtdcExecOrderField());
      std::memcpy(execorder_.get(),
                  pExecOrder,
                  sizeof(CThostFtdcExecOrderField));
    }
  }

  virtual ~RtnExecOrderMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (execorder_.get()) {
      std::stringstream ss;
      ss <<(*execorder_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  ErrRtnExecOrderInsertMessage(
     CThostFtdcInputExecOrderField* pInputExecOrder,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_EXEC_ORDER_INSERT_MESSAGE,
              "OnErrRtnExecOrderInsert") {
    if (pRspInfo) {
      rspinfo_.reset(new CThostFtdcRspInfoField());
      std::memcpy(rspinfo_.get(), pRspInfo,
                  sizeof(CThostFtdcRspInfoField));
    }

    if (pInputExecOrder) {
      inputexecorder_.reset(
               new CThostFtdcInputExecOrderField());
      std::memcpy(inputexecorder_.get(),
                  pInputExecOrder,
                  sizeof(CThostFtdcInputExecOrderField));
    }
  }

  virtual ~ErrRtnExecOrderInsertMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (inputexecorder_.get()) {
      std::stringstream ss;
      ss <<(*inputexecorder_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  ErrRtnExecOrderActionMessage(
     CThostFtdcExecOrderActionField* pExecOrderAction,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_EXEC_ORDER_ACTION_MESSAGE,
              "OnErrRtnExecOrderAction") {
    if (pRspInfo) {
      rspinfo_.reset(new CThostFtdcRspInfoField());
      std::memcpy(rspinfo_.get(), pRspInfo,
                  sizeof(CThostFtdcRspInfoField));
    }

    if (pExecOrderAction) {
      execorderaction_.reset(
               new CThostFtdcExecOrderActionField());
      std::memcpy(execorderaction_.get(),
                  pExecOrderAction,
                  sizeof(CThostFtdcExecOrderActionField));
    }
  }

  virtual ~ErrRtnExecOrderActionMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (execorderaction_.get()) {
      std::stringstream ss;
      ss <<(*execorderaction_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  ErrRtnForQuoteInsertMessage(
     CThostFtdcInputForQuoteField* pInputForQuote,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_FOR_QUOTE_INSERT_MESSAGE,
              "OnErrRtnForQuoteInsert") {
    if (pRspInfo) {
      rspinfo_.reset(new CThostFtdcRspInfoField());
      std::memcpy(rspinfo_.get(), pRspInfo,
                  sizeof(CThostFtdcRspInfoField));
    }

    if (pInputForQuote) {
      inputforquote_.reset(
               new CThostFtdcInputForQuoteField());
      std::memcpy(inputforquote_.get(),
                  pInputForQuote,
                  sizeof(CThostFtdcInputForQuoteField));
    }
  }

  virtual ~ErrRtnForQuoteInsertMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (inputforquote_.get()) {
      std::stringstream ss;
      ss <<(*inputforquote_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnQuoteMessage(
     CThostFtdcQuoteField* pQuote):
      Message(RTN_QUOTE_MESSAGE,
              "OnRtnQuote") {
    if (pQuote) {
      quote_.reset(
               new CThostFtdcQuoteField());
      std::memcpy(quote_.get(),
                  pQuote,
                  sizeof(CThostFtdcQuoteField));
    }
  }

  virtual ~RtnQuoteMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (quote_.get()) {
      std::stringstream ss;
      ss <<(*quote_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  ErrRtnQuoteInsertMessage(
     CThostFtdcInputQuoteField* pInputQuote,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_QUOTE_INSERT_MESSAGE,
              "OnErrRtnQuoteInsert") {
    if (pRspInfo) {
      rspinfo_.reset(new CThostFtdcRspInfoField());
      std::memcpy(rspinfo_.get(), pRspInfo,
                  sizeof(CThostFtdcRspInfoField));
    }

    if (pInputQuote) {
      inputquote_.reset(
               new CThostFtdcInputQuoteField());
      std::memcpy(inputquote_.get(),
                  pInputQuote,
                  sizeof(CThostFtdcInputQuoteField));
    }
  }

  virtual ~ErrRtnQuoteInsertMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (inputquote_.get()) {
      std::stringstream ss;
      ss <<(*inputquote_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  ErrRtnQuoteActionMessage(
     CThostFtdcQuoteActionField* pQuoteAction,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_QUOTE_ACTION_MESSAGE,
              "OnErrRtnQuoteAction") {
    if (pRspInfo) {
      rspinfo_.reset(new CThostFtdcRspInfoField());
      std::memcpy(rspinfo_.get(), pRspInfo,
                  sizeof(CThostFtdcRspInfoField));
    }

    if (pQuoteAction) {
      quoteaction_.reset(
               new CThostFtdcQuoteActionField());
      std::memcpy(quoteaction_.get(),
                  pQuoteAction,
                  sizeof(CThostFtdcQuoteActionField));
    }
  }

  virtual ~ErrRtnQuoteActionMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (quoteaction_.get()) {
      std::stringstream ss;
      ss <<(*quoteaction_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnCFMMCTradingAccountTokenMessage(
     CThostFtdcCFMMCTradingAccountTokenField* pCFMMCTradingAccountToken):
      Message(RTN_C_F_M_M_C_TRADING_ACCOUNT_TOKEN_MESSAGE,
              "OnRtnCFMMCTradingAccountToken") {
    if (pCFMMCTradingAccountToken) {
      cfmmctradingaccounttoken_.reset(
               new CThostFtdcCFMMCTradingAccountTokenField());
      std::memcpy(cfmmctradingaccounttoken_.get(),
                  pCFMMCTradingAccountToken,
                  sizeof(CThostFtdcCFMMCTradingAccountTokenField));
    }
  }

  virtual ~RtnCFMMCTradingAccountTokenMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (cfmmctradingaccounttoken_.get()) {
      std::stringstream ss;
      ss <<(*cfmmctradingaccounttoken_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnCombActionMessage(
     CThostFtdcCombActionField* pCombAction):
      Message(RTN_COMB_ACTION_MESSAGE,
              "OnRtnCombAction") {
    if (pCombAction) {
      combaction_.reset(
               new CThostFtdcCombActionField());
      std::memcpy(combaction_.get(),
                  pCombAction,
                  sizeof(CThostFtdcCombActionField));
    }
  }

  virtual ~RtnCombActionMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (combaction_.get()) {
      std::stringstream ss;
      ss <<(*combaction_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  ErrRtnCombActionInsertMessage(
     CThostFtdcInputCombActionField* pInputCombAction,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_COMB_ACTION_INSERT_MESSAGE,
              "OnErrRtnCombActionInsert") {
    if (pRspInfo) {
      rspinfo_.reset(new CThostFtdcRspInfoField());
      std::memcpy(rspinfo_.get(), pRspInfo,
                  sizeof(CThostFtdcRspInfoField));
    }

    if (pInputCombAction) {
      inputcombaction_.reset(
               new CThostFtdcInputCombActionField());
      std::memcpy(inputcombaction_.get(),
                  pInputCombAction,
                  sizeof(CThostFtdcInputCombActionField));
    }
  }

  virtual ~ErrRtnCombActionInsertMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (inputcombaction_.get()) {
      std::stringstream ss;
      ss <<(*inputcombaction_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnFromBankToFutureByBankMessage(
     CThostFtdcRspTransferField* pRspTransfer):
      Message(RTN_FROM_BANK_TO_FUTURE_BY_BANK_MESSAGE,
              "OnRtnFromBankToFutureByBank") {
    if (pRspTransfer) {
      rsptransfer_.reset(
               new CThostFtdcRspTransferField());
      std::memcpy(rsptransfer_.get(),
                  pRspTransfer,
                  sizeof(CThostFtdcRspTransferField));
    }
  }

  virtual ~RtnFromBankToFutureByBankMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (rsptransfer_.get()) {
      std::stringstream ss;
      ss <<(*rsptransfer_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnFromFutureToBankByBankMessage(
     CThostFtdcRspTransferField* pRspTransfer):
      Message(RTN_FROM_FUTURE_TO_BANK_BY_BANK_MESSAGE,
              "OnRtnFromFutureToBankByBank") {
    if (pRspTransfer) {
      rsptransfer_.reset(
               new CThostFtdcRspTransferField());
      std::memcpy(rsptransfer_.get(),
                  pRspTransfer,
                  sizeof(CThostFtdcRspTransferField));
    }
  }

  virtual ~RtnFromFutureToBankByBankMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (rsptransfer_.get()) {
      std::stringstream ss;
      ss <<(*rsptransfer_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnRepealFromBankToFutureByBankMessage(
     CThostFtdcRspRepealField* pRspRepeal):
      Message(RTN_REPEAL_FROM_BANK_TO_FUTURE_BY_BANK_MESSAGE,
              "OnRtnRepealFromBankToFutureByBank") {
    if (pRspRepeal) {
      rsprepeal_.reset(
               new CThostFtdcRspRepealField());
      std::memcpy(rsprepeal_.get(),
                  pRspRepeal,
                  sizeof(CThostFtdcRspRepealField));
    }
  }

  virtual ~RtnRepealFromBankToFutureByBankMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (rsprepeal_.get()) {
      std::stringstream ss;
      ss <<(*rsprepeal_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnRepealFromFutureToBankByBankMessage(
     CThostFtdcRspRepealField* pRspRepeal):
      Message(RTN_REPEAL_FROM_FUTURE_TO_BANK_BY_BANK_MESSAGE,
              "OnRtnRepealFromFutureToBankByBank") {
    if (pRspRepeal) {
      rsprepeal_.reset(
               new CThostFtdcRspRepealField());
      std::memcpy(rsprepeal_.get(),
                  pRspRepeal,
                  sizeof(CThostFtdcRspRepealField));
    }
  }

  virtual ~RtnRepealFromFutureToBankByBankMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (rsprepeal_.get()) {
      std::stringstream ss;
      ss <<(*rsprepeal_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnFromBankToFutureByFutureMessage(
     CThostFtdcRspTransferField* pRspTransfer):
      Message(RTN_FROM_BANK_TO_FUTURE_BY_FUTURE_MESSAGE,
              "OnRtnFromBankToFutureByFuture") {
    if (pRspTransfer) {
      rsptransfer_.reset(
               new CThostFtdcRspTransferField());
      std::memcpy(rsptransfer_.get(),
                  pRspTransfer,
                  sizeof(CThostFtdcRspTransferField));
    }
  }

  virtual ~RtnFromBankToFutureByFutureMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (rsptransfer_.get()) {
      std::stringstream ss;
      ss <<(*rsptransfer_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnFromFutureToBankByFutureMessage(
     CThostFtdcRspTransferField* pRspTransfer):
      Message(RTN_FROM_FUTURE_TO_BANK_BY_FUTURE_MESSAGE,
              "OnRtnFromFutureToBankByFuture") {
    if (pRspTransfer) {
      rsptransfer_.reset(
               new CThostFtdcRspTransferField());
      std::memcpy(rsptransfer_.get(),
                  pRspTransfer,
                  sizeof(CThostFtdcRspTransferField));
    }
  }

  virtual ~RtnFromFutureToBankByFutureMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (rsptransfer_.get()) {
      std::stringstream ss;
      ss <<(*rsptransfer_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnRepealFromBankToFutureByFutureManualMessage(
     CThostFtdcRspRepealField* pRspRepeal):
      Message(RTN_REPEAL_FROM_BANK_TO_FUTURE_BY_FUTURE_MANUAL_MESSAGE,
              "OnRtnRepealFromBankToFutureByFutureManual") {
    if (pRspRepeal) {
      rsprepeal_.reset(
               new CThostFtdcRspRepealField());
      std::memcpy(rsprepeal_.get(),
                  pRspRepeal,
                  sizeof(CThostFtdcRspRepealField));
    }
  }

  virtual ~RtnRepealFromBankToFutureByFutureManualMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (rsprepeal_.get()) {
      std::stringstream ss;
      ss <<(*rsprepeal_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnRepealFromFutureToBankByFutureManualMessage(
     CThostFtdcRspRepealField* pRspRepeal):
      Message(RTN_REPEAL_FROM_FUTURE_TO_BANK_BY_FUTURE_MANUAL_MESSAGE,
              "OnRtnRepealFromFutureToBankByFutureManual") {
    if (pRspRepeal) {
      rsprepeal_.reset(
               new CThostFtdcRspRepealField());
      std::memcpy(rsprepeal_.get(),
                  pRspRepeal,
                  sizeof(CThostFtdcRspRepealField));
    }
  }

  virtual ~RtnRepealFromFutureToBankByFutureManualMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (rsprepeal_.get()) {
      std::stringstream ss;
      ss <<(*rsprepeal_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnQueryBankBalanceByFutureMessage(
     CThostFtdcNotifyQueryAccountField* pNotifyQueryAccount):
      Message(RTN_QUERY_BANK_BALANCE_BY_FUTURE_MESSAGE,
              "OnRtnQueryBankBalanceByFuture") {
    if (pNotifyQueryAccount) {
      notifyqueryaccount_.reset(
               new CThostFtdcNotifyQueryAccountField());
      std::memcpy(notifyqueryaccount_.get(),
                  pNotifyQueryAccount,
                  sizeof(CThostFtdcNotifyQueryAccountField));
    }
  }

  virtual ~RtnQueryBankBalanceByFutureMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (notifyqueryaccount_.get()) {
      std::stringstream ss;
      ss <<(*notifyqueryaccount_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  ErrRtnBankToFutureByFutureMessage(
     CThostFtdcReqTransferField* pReqTransfer,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_BANK_TO_FUTURE_BY_FUTURE_MESSAGE,
              "OnErrRtnBankToFutureByFuture") {
    if (pRspInfo) {
      rspinfo_.reset(new CThostFtdcRspInfoField());
      std::memcpy(rspinfo_.get(), pRspInfo,
                  sizeof(CThostFtdcRspInfoField));
    }

    if (pReqTransfer) {
      reqtransfer_.reset(
               new CThostFtdcReqTransferField());
      std::memcpy(reqtransfer_.get(),
                  pReqTransfer,
                  sizeof(CThostFtdcReqTransferField));
    }
  }

  virtual ~ErrRtnBankToFutureByFutureMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (reqtransfer_.get()) {
      std::stringstream ss;
      ss <<(*reqtransfer_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  ErrRtnFutureToBankByFutureMessage(
     CThostFtdcReqTransferField* pReqTransfer,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_FUTURE_TO_BANK_BY_FUTURE_MESSAGE,
              "OnErrRtnFutureToBankByFuture") {
    if (pRspInfo) {
      rspinfo_.reset(new CThostFtdcRspInfoField());
      std::memcpy(rspinfo_.get(), pRspInfo,
                  sizeof(CThostFtdcRspInfoField));
    }

    if (pReqTransfer) {
      reqtransfer_.reset(
               new CThostFtdcReqTransferField());
      std::memcpy(reqtransfer_.get(),
                  pReqTransfer,
                  sizeof(CThostFtdcReqTransferField));
    }
  }

  virtual ~ErrRtnFutureToBankByFutureMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (reqtransfer_.get()) {
      std::stringstream ss;
      ss <<(*reqtransfer_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  ErrRtnRepealBankToFutureByFutureManualMessage(
     CThostFtdcReqRepealField* pReqRepeal,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_REPEAL_BANK_TO_FUTURE_BY_FUTURE_MANUAL_MESSAGE,
              "OnErrRtnRepealBankToFutureByFutureManual") {
    if (pRspInfo) {
      rspinfo_.reset(new CThostFtdcRspInfoField());
      std::memcpy(rspinfo_.get(), pRspInfo,
                  sizeof(CThostFtdcRspInfoField));
    }

    if (pReqRepeal) {
      reqrepeal_.reset(
               new CThostFtdcReqRepealField());
      std::memcpy(reqrepeal_.get(),
                  pReqRepeal,
                  sizeof(CThostFtdcReqRepealField));
    }
  }

  virtual ~ErrRtnRepealBankToFutureByFutureManualMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (reqrepeal_.get()) {
      std::stringstream ss;
      ss <<(*reqrepeal_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  ErrRtnRepealFutureToBankByFutureManualMessage(
     CThostFtdcReqRepealField* pReqRepeal,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_REPEAL_FUTURE_TO_BANK_BY_FUTURE_MANUAL_MESSAGE,
              "OnErrRtnRepealFutureToBankByFutureManual") {
    if (pRspInfo) {
      rspinfo_.reset(new CThostFtdcRspInfoField());
      std::memcpy(rspinfo_.get(), pRspInfo,
                  sizeof(CThostFtdcRspInfoField));
    }

    if (pReqRepeal) {
      reqrepeal_.reset(
               new CThostFtdcReqRepealField());
      std::memcpy(reqrepeal_.get(),
                  pReqRepeal,
                  sizeof(CThostFtdcReqRepealField));
    }
  }

  virtual ~ErrRtnRepealFutureToBankByFutureManualMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (reqrepeal_.get()) {
      std::stringstream ss;
      ss <<(*reqrepeal_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  ErrRtnQueryBankBalanceByFutureMessage(
     CThostFtdcReqQueryAccountField* pReqQueryAccount,
  CThostFtdcRspInfoField* pRspInfo):
      Message(ERR_RTN_QUERY_BANK_BALANCE_BY_FUTURE_MESSAGE,
              "OnErrRtnQueryBankBalanceByFuture") {
    if (pRspInfo) {
      rspinfo_.reset(new CThostFtdcRspInfoField());
      std::memcpy(rspinfo_.get(), pRspInfo,
                  sizeof(CThostFtdcRspInfoField));
    }

    if (pReqQueryAccount) {
      reqqueryaccount_.reset(
               new CThostFtdcReqQueryAccountField());
      std::memcpy(reqqueryaccount_.get(),
                  pReqQueryAccount,
                  sizeof(CThostFtdcReqQueryAccountField));
    }
  }

  virtual ~ErrRtnQueryBankBalanceByFutureMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (reqqueryaccount_.get()) {
      std::stringstream ss;
      ss <<(*reqqueryaccount_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnRepealFromBankToFutureByFutureMessage(
     CThostFtdcRspRepealField* pRspRepeal):
      Message(RTN_REPEAL_FROM_BANK_TO_FUTURE_BY_FUTURE_MESSAGE,
              "OnRtnRepealFromBankToFutureByFuture") {
    if (pRspRepeal) {
      rsprepeal_.reset(
               new CThostFtdcRspRepealField());
      std::memcpy(rsprepeal_.get(),
                  pRspRepeal,
                  sizeof(CThostFtdcRspRepealField));
    }
  }

  virtual ~RtnRepealFromBankToFutureByFutureMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (rsprepeal_.get()) {
      std::stringstream ss;
      ss <<(*rsprepeal_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnRepealFromFutureToBankByFutureMessage(
     CThostFtdcRspRepealField* pRspRepeal):
      Message(RTN_REPEAL_FROM_FUTURE_TO_BANK_BY_FUTURE_MESSAGE,
              "OnRtnRepealFromFutureToBankByFuture") {
    if (pRspRepeal) {
      rsprepeal_.reset(
               new CThostFtdcRspRepealField());
      std::memcpy(rsprepeal_.get(),
                  pRspRepeal,
                  sizeof(CThostFtdcRspRepealField));
    }
  }

  virtual ~RtnRepealFromFutureToBankByFutureMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (rsprepeal_.get()) {
      std::stringstream ss;
      ss <<(*rsprepeal_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnOpenAccountByBankMessage(
     CThostFtdcOpenAccountField* pOpenAccount):
      Message(RTN_OPEN_ACCOUNT_BY_BANK_MESSAGE,
              "OnRtnOpenAccountByBank") {
    if (pOpenAccount) {
      openaccount_.reset(
               new CThostFtdcOpenAccountField());
      std::memcpy(openaccount_.get(),
                  pOpenAccount,
                  sizeof(CThostFtdcOpenAccountField));
    }
  }

  virtual ~RtnOpenAccountByBankMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (openaccount_.get()) {
      std::stringstream ss;
      ss <<(*openaccount_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnCancelAccountByBankMessage(
     CThostFtdcCancelAccountField* pCancelAccount):
      Message(RTN_CANCEL_ACCOUNT_BY_BANK_MESSAGE,
              "OnRtnCancelAccountByBank") {
    if (pCancelAccount) {
      cancelaccount_.reset(
               new CThostFtdcCancelAccountField());
      std::memcpy(cancelaccount_.get(),
                  pCancelAccount,
                  sizeof(CThostFtdcCancelAccountField));
    }
  }

  virtual ~RtnCancelAccountByBankMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (cancelaccount_.get()) {
      std::stringstream ss;
      ss <<(*cancelaccount_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
 public:
  explicit RtnChangeAccountByBankMessage(
     CThostFtdcChangeAccountField* pChangeAccount):
      Message(RTN_CHANGE_ACCOUNT_BY_BANK_MESSAGE,
              "OnRtnChangeAccountByBank") {
    if (pChangeAccount) {
      changeaccount_.reset(
               new CThostFtdcChangeAccountField());
      std::memcpy(changeaccount_.get(),
                  pChangeAccount,
                  sizeof(CThostFtdcChangeAccountField));
    }
  }

  virtual ~RtnChangeAccountByBankMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (changeaccount_.get()) {
      std::stringstream ss;
      ss <<(*changeaccount_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
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
