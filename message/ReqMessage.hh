// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_REQMESSAGE_HH
#define CATA_REQMESSAGE_HH

#include <memory>
#include <string>
#include "ThostFtdcUserApiStruct.h"
#include "Message.hh"
#include "ThostFtdcUserApiStructPrint.hh"
#include "json/json.hh"

namespace cata {

class ReqUserLoginMessage : public Message {
 public:
  ReqUserLoginMessage(
     CThostFtdcReqUserLoginField*
     pReqUserLoginField,
  int nRequestID):
      Message(REQ_USER_LOGIN_MESSAGE,
              "ReqUserLogin")
      request_id_(nRequestID) {
    if (pReqUserLoginField) {
      requserloginfield_.reset(
               new CThostFtdcReqUserLoginField());
      std::memcpy(requserloginfield_.get(),
                  pReqUserLoginField,
                  sizeof(CThostFtdcReqUserLoginField));
    }
  }

  virtual ~ReqUserLoginMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (requserloginfield_.get()) {
      std::stringstream ss;
      ss <<(*requserloginfield_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcReqUserLoginField*
     reqUserLoginField() const {
    return requserloginfield_.get();
  }

 private:
  std::unique_ptr<CThostFtdcReqUserLoginField>
                   requserloginfield_;
  int request_id_;
};

class ReqUserLogoutMessage : public Message {
 public:
  ReqUserLogoutMessage(
     CThostFtdcUserLogoutField*
     pUserLogout,
  int nRequestID):
      Message(REQ_USER_LOGOUT_MESSAGE,
              "ReqUserLogout")
      request_id_(nRequestID) {
    if (pUserLogout) {
      userlogout_.reset(
               new CThostFtdcUserLogoutField());
      std::memcpy(userlogout_.get(),
                  pUserLogout,
                  sizeof(CThostFtdcUserLogoutField));
    }
  }

  virtual ~ReqUserLogoutMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (userlogout_.get()) {
      std::stringstream ss;
      ss <<(*userlogout_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcUserLogoutField*
     userLogout() const {
    return userlogout_.get();
  }

 private:
  std::unique_ptr<CThostFtdcUserLogoutField>
                   userlogout_;
  int request_id_;
};

class ReqAuthenticateMessage : public Message {
 public:
  ReqAuthenticateMessage(
     CThostFtdcReqAuthenticateField*
     pReqAuthenticateField,
  int nRequestID):
      Message(REQ_AUTHENTICATE_MESSAGE,
              "ReqAuthenticate")
      request_id_(nRequestID) {
    if (pReqAuthenticateField) {
      reqauthenticatefield_.reset(
               new CThostFtdcReqAuthenticateField());
      std::memcpy(reqauthenticatefield_.get(),
                  pReqAuthenticateField,
                  sizeof(CThostFtdcReqAuthenticateField));
    }
  }

  virtual ~ReqAuthenticateMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (reqauthenticatefield_.get()) {
      std::stringstream ss;
      ss <<(*reqauthenticatefield_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcReqAuthenticateField*
     reqAuthenticateField() const {
    return reqauthenticatefield_.get();
  }

 private:
  std::unique_ptr<CThostFtdcReqAuthenticateField>
                   reqauthenticatefield_;
  int request_id_;
};

class ReqUserPasswordUpdateMessage : public Message {
 public:
  ReqUserPasswordUpdateMessage(
     CThostFtdcUserPasswordUpdateField*
     pUserPasswordUpdate,
  int nRequestID):
      Message(REQ_USER_PASSWORD_UPDATE_MESSAGE,
              "ReqUserPasswordUpdate")
      request_id_(nRequestID) {
    if (pUserPasswordUpdate) {
      userpasswordupdate_.reset(
               new CThostFtdcUserPasswordUpdateField());
      std::memcpy(userpasswordupdate_.get(),
                  pUserPasswordUpdate,
                  sizeof(CThostFtdcUserPasswordUpdateField));
    }
  }

  virtual ~ReqUserPasswordUpdateMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (userpasswordupdate_.get()) {
      std::stringstream ss;
      ss <<(*userpasswordupdate_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcUserPasswordUpdateField*
     userPasswordUpdate() const {
    return userpasswordupdate_.get();
  }

 private:
  std::unique_ptr<CThostFtdcUserPasswordUpdateField>
                   userpasswordupdate_;
  int request_id_;
};

class ReqTradingAccountPasswordUpdateMessage : public Message {
 public:
  ReqTradingAccountPasswordUpdateMessage(
     CThostFtdcTradingAccountPasswordUpdateField*
     pTradingAccountPasswordUpdate,
  int nRequestID):
      Message(REQ_TRADING_ACCOUNT_PASSWORD_UPDATE_MESSAGE,
              "ReqTradingAccountPasswordUpdate")
      request_id_(nRequestID) {
    if (pTradingAccountPasswordUpdate) {
      tradingaccountpasswordupdate_.reset(
               new CThostFtdcTradingAccountPasswordUpdateField());
      std::memcpy(tradingaccountpasswordupdate_.get(),
                  pTradingAccountPasswordUpdate,
                  sizeof(CThostFtdcTradingAccountPasswordUpdateField));
    }
  }

  virtual ~ReqTradingAccountPasswordUpdateMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (tradingaccountpasswordupdate_.get()) {
      std::stringstream ss;
      ss <<(*tradingaccountpasswordupdate_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcTradingAccountPasswordUpdateField*
     tradingAccountPasswordUpdate() const {
    return tradingaccountpasswordupdate_.get();
  }

 private:
  std::unique_ptr<CThostFtdcTradingAccountPasswordUpdateField>
                   tradingaccountpasswordupdate_;
  int request_id_;
};

class ReqOrderInsertMessage : public Message {
 public:
  ReqOrderInsertMessage(
     CThostFtdcInputOrderField*
     pInputOrder,
  int nRequestID):
      Message(REQ_ORDER_INSERT_MESSAGE,
              "ReqOrderInsert")
      request_id_(nRequestID) {
    if (pInputOrder) {
      inputorder_.reset(
               new CThostFtdcInputOrderField());
      std::memcpy(inputorder_.get(),
                  pInputOrder,
                  sizeof(CThostFtdcInputOrderField));
    }
  }

  virtual ~ReqOrderInsertMessage() {
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

  int requestID() const {
    return request_id_;
  }

  CThostFtdcInputOrderField*
     inputOrder() const {
    return inputorder_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInputOrderField>
                   inputorder_;
  int request_id_;
};

class ReqParkedOrderInsertMessage : public Message {
 public:
  ReqParkedOrderInsertMessage(
     CThostFtdcParkedOrderField*
     pParkedOrder,
  int nRequestID):
      Message(REQ_PARKED_ORDER_INSERT_MESSAGE,
              "ReqParkedOrderInsert")
      request_id_(nRequestID) {
    if (pParkedOrder) {
      parkedorder_.reset(
               new CThostFtdcParkedOrderField());
      std::memcpy(parkedorder_.get(),
                  pParkedOrder,
                  sizeof(CThostFtdcParkedOrderField));
    }
  }

  virtual ~ReqParkedOrderInsertMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (parkedorder_.get()) {
      std::stringstream ss;
      ss <<(*parkedorder_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcParkedOrderField*
     parkedOrder() const {
    return parkedorder_.get();
  }

 private:
  std::unique_ptr<CThostFtdcParkedOrderField>
                   parkedorder_;
  int request_id_;
};

class ReqParkedOrderActionMessage : public Message {
 public:
  ReqParkedOrderActionMessage(
     CThostFtdcParkedOrderActionField*
     pParkedOrderAction,
  int nRequestID):
      Message(REQ_PARKED_ORDER_ACTION_MESSAGE,
              "ReqParkedOrderAction")
      request_id_(nRequestID) {
    if (pParkedOrderAction) {
      parkedorderaction_.reset(
               new CThostFtdcParkedOrderActionField());
      std::memcpy(parkedorderaction_.get(),
                  pParkedOrderAction,
                  sizeof(CThostFtdcParkedOrderActionField));
    }
  }

  virtual ~ReqParkedOrderActionMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (parkedorderaction_.get()) {
      std::stringstream ss;
      ss <<(*parkedorderaction_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcParkedOrderActionField*
     parkedOrderAction() const {
    return parkedorderaction_.get();
  }

 private:
  std::unique_ptr<CThostFtdcParkedOrderActionField>
                   parkedorderaction_;
  int request_id_;
};

class ReqOrderActionMessage : public Message {
 public:
  ReqOrderActionMessage(
     CThostFtdcInputOrderActionField*
     pInputOrderAction,
  int nRequestID):
      Message(REQ_ORDER_ACTION_MESSAGE,
              "ReqOrderAction")
      request_id_(nRequestID) {
    if (pInputOrderAction) {
      inputorderaction_.reset(
               new CThostFtdcInputOrderActionField());
      std::memcpy(inputorderaction_.get(),
                  pInputOrderAction,
                  sizeof(CThostFtdcInputOrderActionField));
    }
  }

  virtual ~ReqOrderActionMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (inputorderaction_.get()) {
      std::stringstream ss;
      ss <<(*inputorderaction_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcInputOrderActionField*
     inputOrderAction() const {
    return inputorderaction_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInputOrderActionField>
                   inputorderaction_;
  int request_id_;
};

class ReqQueryMaxOrderVolumeMessage : public Message {
 public:
  ReqQueryMaxOrderVolumeMessage(
     CThostFtdcQueryMaxOrderVolumeField*
     pQueryMaxOrderVolume,
  int nRequestID):
      Message(REQ_QUERY_MAX_ORDER_VOLUME_MESSAGE,
              "ReqQueryMaxOrderVolume")
      request_id_(nRequestID) {
    if (pQueryMaxOrderVolume) {
      querymaxordervolume_.reset(
               new CThostFtdcQueryMaxOrderVolumeField());
      std::memcpy(querymaxordervolume_.get(),
                  pQueryMaxOrderVolume,
                  sizeof(CThostFtdcQueryMaxOrderVolumeField));
    }
  }

  virtual ~ReqQueryMaxOrderVolumeMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (querymaxordervolume_.get()) {
      std::stringstream ss;
      ss <<(*querymaxordervolume_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQueryMaxOrderVolumeField*
     queryMaxOrderVolume() const {
    return querymaxordervolume_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQueryMaxOrderVolumeField>
                   querymaxordervolume_;
  int request_id_;
};

class ReqSettlementInfoConfirmMessage : public Message {
 public:
  ReqSettlementInfoConfirmMessage(
     CThostFtdcSettlementInfoConfirmField*
     pSettlementInfoConfirm,
  int nRequestID):
      Message(REQ_SETTLEMENT_INFO_CONFIRM_MESSAGE,
              "ReqSettlementInfoConfirm")
      request_id_(nRequestID) {
    if (pSettlementInfoConfirm) {
      settlementinfoconfirm_.reset(
               new CThostFtdcSettlementInfoConfirmField());
      std::memcpy(settlementinfoconfirm_.get(),
                  pSettlementInfoConfirm,
                  sizeof(CThostFtdcSettlementInfoConfirmField));
    }
  }

  virtual ~ReqSettlementInfoConfirmMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (settlementinfoconfirm_.get()) {
      std::stringstream ss;
      ss <<(*settlementinfoconfirm_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcSettlementInfoConfirmField*
     settlementInfoConfirm() const {
    return settlementinfoconfirm_.get();
  }

 private:
  std::unique_ptr<CThostFtdcSettlementInfoConfirmField>
                   settlementinfoconfirm_;
  int request_id_;
};

class ReqRemoveParkedOrderMessage : public Message {
 public:
  ReqRemoveParkedOrderMessage(
     CThostFtdcRemoveParkedOrderField*
     pRemoveParkedOrder,
  int nRequestID):
      Message(REQ_REMOVE_PARKED_ORDER_MESSAGE,
              "ReqRemoveParkedOrder")
      request_id_(nRequestID) {
    if (pRemoveParkedOrder) {
      removeparkedorder_.reset(
               new CThostFtdcRemoveParkedOrderField());
      std::memcpy(removeparkedorder_.get(),
                  pRemoveParkedOrder,
                  sizeof(CThostFtdcRemoveParkedOrderField));
    }
  }

  virtual ~ReqRemoveParkedOrderMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (removeparkedorder_.get()) {
      std::stringstream ss;
      ss <<(*removeparkedorder_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcRemoveParkedOrderField*
     removeParkedOrder() const {
    return removeparkedorder_.get();
  }

 private:
  std::unique_ptr<CThostFtdcRemoveParkedOrderField>
                   removeparkedorder_;
  int request_id_;
};

class ReqRemoveParkedOrderActionMessage : public Message {
 public:
  ReqRemoveParkedOrderActionMessage(
     CThostFtdcRemoveParkedOrderActionField*
     pRemoveParkedOrderAction,
  int nRequestID):
      Message(REQ_REMOVE_PARKED_ORDER_ACTION_MESSAGE,
              "ReqRemoveParkedOrderAction")
      request_id_(nRequestID) {
    if (pRemoveParkedOrderAction) {
      removeparkedorderaction_.reset(
               new CThostFtdcRemoveParkedOrderActionField());
      std::memcpy(removeparkedorderaction_.get(),
                  pRemoveParkedOrderAction,
                  sizeof(CThostFtdcRemoveParkedOrderActionField));
    }
  }

  virtual ~ReqRemoveParkedOrderActionMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (removeparkedorderaction_.get()) {
      std::stringstream ss;
      ss <<(*removeparkedorderaction_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcRemoveParkedOrderActionField*
     removeParkedOrderAction() const {
    return removeparkedorderaction_.get();
  }

 private:
  std::unique_ptr<CThostFtdcRemoveParkedOrderActionField>
                   removeparkedorderaction_;
  int request_id_;
};

class ReqExecOrderInsertMessage : public Message {
 public:
  ReqExecOrderInsertMessage(
     CThostFtdcInputExecOrderField*
     pInputExecOrder,
  int nRequestID):
      Message(REQ_EXEC_ORDER_INSERT_MESSAGE,
              "ReqExecOrderInsert")
      request_id_(nRequestID) {
    if (pInputExecOrder) {
      inputexecorder_.reset(
               new CThostFtdcInputExecOrderField());
      std::memcpy(inputexecorder_.get(),
                  pInputExecOrder,
                  sizeof(CThostFtdcInputExecOrderField));
    }
  }

  virtual ~ReqExecOrderInsertMessage() {
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

  int requestID() const {
    return request_id_;
  }

  CThostFtdcInputExecOrderField*
     inputExecOrder() const {
    return inputexecorder_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInputExecOrderField>
                   inputexecorder_;
  int request_id_;
};

class ReqExecOrderActionMessage : public Message {
 public:
  ReqExecOrderActionMessage(
     CThostFtdcInputExecOrderActionField*
     pInputExecOrderAction,
  int nRequestID):
      Message(REQ_EXEC_ORDER_ACTION_MESSAGE,
              "ReqExecOrderAction")
      request_id_(nRequestID) {
    if (pInputExecOrderAction) {
      inputexecorderaction_.reset(
               new CThostFtdcInputExecOrderActionField());
      std::memcpy(inputexecorderaction_.get(),
                  pInputExecOrderAction,
                  sizeof(CThostFtdcInputExecOrderActionField));
    }
  }

  virtual ~ReqExecOrderActionMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (inputexecorderaction_.get()) {
      std::stringstream ss;
      ss <<(*inputexecorderaction_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcInputExecOrderActionField*
     inputExecOrderAction() const {
    return inputexecorderaction_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInputExecOrderActionField>
                   inputexecorderaction_;
  int request_id_;
};

class ReqForQuoteInsertMessage : public Message {
 public:
  ReqForQuoteInsertMessage(
     CThostFtdcInputForQuoteField*
     pInputForQuote,
  int nRequestID):
      Message(REQ_FOR_QUOTE_INSERT_MESSAGE,
              "ReqForQuoteInsert")
      request_id_(nRequestID) {
    if (pInputForQuote) {
      inputforquote_.reset(
               new CThostFtdcInputForQuoteField());
      std::memcpy(inputforquote_.get(),
                  pInputForQuote,
                  sizeof(CThostFtdcInputForQuoteField));
    }
  }

  virtual ~ReqForQuoteInsertMessage() {
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

  int requestID() const {
    return request_id_;
  }

  CThostFtdcInputForQuoteField*
     inputForQuote() const {
    return inputforquote_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInputForQuoteField>
                   inputforquote_;
  int request_id_;
};

class ReqQuoteInsertMessage : public Message {
 public:
  ReqQuoteInsertMessage(
     CThostFtdcInputQuoteField*
     pInputQuote,
  int nRequestID):
      Message(REQ_QUOTE_INSERT_MESSAGE,
              "ReqQuoteInsert")
      request_id_(nRequestID) {
    if (pInputQuote) {
      inputquote_.reset(
               new CThostFtdcInputQuoteField());
      std::memcpy(inputquote_.get(),
                  pInputQuote,
                  sizeof(CThostFtdcInputQuoteField));
    }
  }

  virtual ~ReqQuoteInsertMessage() {
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

  int requestID() const {
    return request_id_;
  }

  CThostFtdcInputQuoteField*
     inputQuote() const {
    return inputquote_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInputQuoteField>
                   inputquote_;
  int request_id_;
};

class ReqQuoteActionMessage : public Message {
 public:
  ReqQuoteActionMessage(
     CThostFtdcInputQuoteActionField*
     pInputQuoteAction,
  int nRequestID):
      Message(REQ_QUOTE_ACTION_MESSAGE,
              "ReqQuoteAction")
      request_id_(nRequestID) {
    if (pInputQuoteAction) {
      inputquoteaction_.reset(
               new CThostFtdcInputQuoteActionField());
      std::memcpy(inputquoteaction_.get(),
                  pInputQuoteAction,
                  sizeof(CThostFtdcInputQuoteActionField));
    }
  }

  virtual ~ReqQuoteActionMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (inputquoteaction_.get()) {
      std::stringstream ss;
      ss <<(*inputquoteaction_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcInputQuoteActionField*
     inputQuoteAction() const {
    return inputquoteaction_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInputQuoteActionField>
                   inputquoteaction_;
  int request_id_;
};

class ReqCombActionInsertMessage : public Message {
 public:
  ReqCombActionInsertMessage(
     CThostFtdcInputCombActionField*
     pInputCombAction,
  int nRequestID):
      Message(REQ_COMB_ACTION_INSERT_MESSAGE,
              "ReqCombActionInsert")
      request_id_(nRequestID) {
    if (pInputCombAction) {
      inputcombaction_.reset(
               new CThostFtdcInputCombActionField());
      std::memcpy(inputcombaction_.get(),
                  pInputCombAction,
                  sizeof(CThostFtdcInputCombActionField));
    }
  }

  virtual ~ReqCombActionInsertMessage() {
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

  int requestID() const {
    return request_id_;
  }

  CThostFtdcInputCombActionField*
     inputCombAction() const {
    return inputcombaction_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInputCombActionField>
                   inputcombaction_;
  int request_id_;
};

class ReqQryOrderMessage : public Message {
 public:
  ReqQryOrderMessage(
     CThostFtdcQryOrderField*
     pQryOrder,
  int nRequestID):
      Message(REQ_QRY_ORDER_MESSAGE,
              "ReqQryOrder")
      request_id_(nRequestID) {
    if (pQryOrder) {
      qryorder_.reset(
               new CThostFtdcQryOrderField());
      std::memcpy(qryorder_.get(),
                  pQryOrder,
                  sizeof(CThostFtdcQryOrderField));
    }
  }

  virtual ~ReqQryOrderMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryorder_.get()) {
      std::stringstream ss;
      ss <<(*qryorder_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryOrderField*
     qryOrder() const {
    return qryorder_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryOrderField>
                   qryorder_;
  int request_id_;
};

class ReqQryTradeMessage : public Message {
 public:
  ReqQryTradeMessage(
     CThostFtdcQryTradeField*
     pQryTrade,
  int nRequestID):
      Message(REQ_QRY_TRADE_MESSAGE,
              "ReqQryTrade")
      request_id_(nRequestID) {
    if (pQryTrade) {
      qrytrade_.reset(
               new CThostFtdcQryTradeField());
      std::memcpy(qrytrade_.get(),
                  pQryTrade,
                  sizeof(CThostFtdcQryTradeField));
    }
  }

  virtual ~ReqQryTradeMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qrytrade_.get()) {
      std::stringstream ss;
      ss <<(*qrytrade_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryTradeField*
     qryTrade() const {
    return qrytrade_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryTradeField>
                   qrytrade_;
  int request_id_;
};

class ReqQryInvestorPositionMessage : public Message {
 public:
  ReqQryInvestorPositionMessage(
     CThostFtdcQryInvestorPositionField*
     pQryInvestorPosition,
  int nRequestID):
      Message(REQ_QRY_INVESTOR_POSITION_MESSAGE,
              "ReqQryInvestorPosition")
      request_id_(nRequestID) {
    if (pQryInvestorPosition) {
      qryinvestorposition_.reset(
               new CThostFtdcQryInvestorPositionField());
      std::memcpy(qryinvestorposition_.get(),
                  pQryInvestorPosition,
                  sizeof(CThostFtdcQryInvestorPositionField));
    }
  }

  virtual ~ReqQryInvestorPositionMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryinvestorposition_.get()) {
      std::stringstream ss;
      ss <<(*qryinvestorposition_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryInvestorPositionField*
     qryInvestorPosition() const {
    return qryinvestorposition_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryInvestorPositionField>
                   qryinvestorposition_;
  int request_id_;
};

class ReqQryTradingAccountMessage : public Message {
 public:
  ReqQryTradingAccountMessage(
     CThostFtdcQryTradingAccountField*
     pQryTradingAccount,
  int nRequestID):
      Message(REQ_QRY_TRADING_ACCOUNT_MESSAGE,
              "ReqQryTradingAccount")
      request_id_(nRequestID) {
    if (pQryTradingAccount) {
      qrytradingaccount_.reset(
               new CThostFtdcQryTradingAccountField());
      std::memcpy(qrytradingaccount_.get(),
                  pQryTradingAccount,
                  sizeof(CThostFtdcQryTradingAccountField));
    }
  }

  virtual ~ReqQryTradingAccountMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qrytradingaccount_.get()) {
      std::stringstream ss;
      ss <<(*qrytradingaccount_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryTradingAccountField*
     qryTradingAccount() const {
    return qrytradingaccount_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryTradingAccountField>
                   qrytradingaccount_;
  int request_id_;
};

class ReqQryInvestorMessage : public Message {
 public:
  ReqQryInvestorMessage(
     CThostFtdcQryInvestorField*
     pQryInvestor,
  int nRequestID):
      Message(REQ_QRY_INVESTOR_MESSAGE,
              "ReqQryInvestor")
      request_id_(nRequestID) {
    if (pQryInvestor) {
      qryinvestor_.reset(
               new CThostFtdcQryInvestorField());
      std::memcpy(qryinvestor_.get(),
                  pQryInvestor,
                  sizeof(CThostFtdcQryInvestorField));
    }
  }

  virtual ~ReqQryInvestorMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryinvestor_.get()) {
      std::stringstream ss;
      ss <<(*qryinvestor_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryInvestorField*
     qryInvestor() const {
    return qryinvestor_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryInvestorField>
                   qryinvestor_;
  int request_id_;
};

class ReqQryTradingCodeMessage : public Message {
 public:
  ReqQryTradingCodeMessage(
     CThostFtdcQryTradingCodeField*
     pQryTradingCode,
  int nRequestID):
      Message(REQ_QRY_TRADING_CODE_MESSAGE,
              "ReqQryTradingCode")
      request_id_(nRequestID) {
    if (pQryTradingCode) {
      qrytradingcode_.reset(
               new CThostFtdcQryTradingCodeField());
      std::memcpy(qrytradingcode_.get(),
                  pQryTradingCode,
                  sizeof(CThostFtdcQryTradingCodeField));
    }
  }

  virtual ~ReqQryTradingCodeMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qrytradingcode_.get()) {
      std::stringstream ss;
      ss <<(*qrytradingcode_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryTradingCodeField*
     qryTradingCode() const {
    return qrytradingcode_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryTradingCodeField>
                   qrytradingcode_;
  int request_id_;
};

class ReqQryInstrumentMarginRateMessage : public Message {
 public:
  ReqQryInstrumentMarginRateMessage(
     CThostFtdcQryInstrumentMarginRateField*
     pQryInstrumentMarginRate,
  int nRequestID):
      Message(REQ_QRY_INSTRUMENT_MARGIN_RATE_MESSAGE,
              "ReqQryInstrumentMarginRate")
      request_id_(nRequestID) {
    if (pQryInstrumentMarginRate) {
      qryinstrumentmarginrate_.reset(
               new CThostFtdcQryInstrumentMarginRateField());
      std::memcpy(qryinstrumentmarginrate_.get(),
                  pQryInstrumentMarginRate,
                  sizeof(CThostFtdcQryInstrumentMarginRateField));
    }
  }

  virtual ~ReqQryInstrumentMarginRateMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryinstrumentmarginrate_.get()) {
      std::stringstream ss;
      ss <<(*qryinstrumentmarginrate_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryInstrumentMarginRateField*
     qryInstrumentMarginRate() const {
    return qryinstrumentmarginrate_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryInstrumentMarginRateField>
                   qryinstrumentmarginrate_;
  int request_id_;
};

class ReqQryInstrumentCommissionRateMessage : public Message {
 public:
  ReqQryInstrumentCommissionRateMessage(
     CThostFtdcQryInstrumentCommissionRateField*
     pQryInstrumentCommissionRate,
  int nRequestID):
      Message(REQ_QRY_INSTRUMENT_COMMISSION_RATE_MESSAGE,
              "ReqQryInstrumentCommissionRate")
      request_id_(nRequestID) {
    if (pQryInstrumentCommissionRate) {
      qryinstrumentcommissionrate_.reset(
               new CThostFtdcQryInstrumentCommissionRateField());
      std::memcpy(qryinstrumentcommissionrate_.get(),
                  pQryInstrumentCommissionRate,
                  sizeof(CThostFtdcQryInstrumentCommissionRateField));
    }
  }

  virtual ~ReqQryInstrumentCommissionRateMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryinstrumentcommissionrate_.get()) {
      std::stringstream ss;
      ss <<(*qryinstrumentcommissionrate_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryInstrumentCommissionRateField*
     qryInstrumentCommissionRate() const {
    return qryinstrumentcommissionrate_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryInstrumentCommissionRateField>
                   qryinstrumentcommissionrate_;
  int request_id_;
};

class ReqQryExchangeMessage : public Message {
 public:
  ReqQryExchangeMessage(
     CThostFtdcQryExchangeField*
     pQryExchange,
  int nRequestID):
      Message(REQ_QRY_EXCHANGE_MESSAGE,
              "ReqQryExchange")
      request_id_(nRequestID) {
    if (pQryExchange) {
      qryexchange_.reset(
               new CThostFtdcQryExchangeField());
      std::memcpy(qryexchange_.get(),
                  pQryExchange,
                  sizeof(CThostFtdcQryExchangeField));
    }
  }

  virtual ~ReqQryExchangeMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryexchange_.get()) {
      std::stringstream ss;
      ss <<(*qryexchange_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryExchangeField*
     qryExchange() const {
    return qryexchange_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryExchangeField>
                   qryexchange_;
  int request_id_;
};

class ReqQryProductMessage : public Message {
 public:
  ReqQryProductMessage(
     CThostFtdcQryProductField*
     pQryProduct,
  int nRequestID):
      Message(REQ_QRY_PRODUCT_MESSAGE,
              "ReqQryProduct")
      request_id_(nRequestID) {
    if (pQryProduct) {
      qryproduct_.reset(
               new CThostFtdcQryProductField());
      std::memcpy(qryproduct_.get(),
                  pQryProduct,
                  sizeof(CThostFtdcQryProductField));
    }
  }

  virtual ~ReqQryProductMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryproduct_.get()) {
      std::stringstream ss;
      ss <<(*qryproduct_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryProductField*
     qryProduct() const {
    return qryproduct_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryProductField>
                   qryproduct_;
  int request_id_;
};

class ReqQryInstrumentMessage : public Message {
 public:
  ReqQryInstrumentMessage(
     CThostFtdcQryInstrumentField*
     pQryInstrument,
  int nRequestID):
      Message(REQ_QRY_INSTRUMENT_MESSAGE,
              "ReqQryInstrument")
      request_id_(nRequestID) {
    if (pQryInstrument) {
      qryinstrument_.reset(
               new CThostFtdcQryInstrumentField());
      std::memcpy(qryinstrument_.get(),
                  pQryInstrument,
                  sizeof(CThostFtdcQryInstrumentField));
    }
  }

  virtual ~ReqQryInstrumentMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryinstrument_.get()) {
      std::stringstream ss;
      ss <<(*qryinstrument_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryInstrumentField*
     qryInstrument() const {
    return qryinstrument_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryInstrumentField>
                   qryinstrument_;
  int request_id_;
};

class ReqQryDepthMarketDataMessage : public Message {
 public:
  ReqQryDepthMarketDataMessage(
     CThostFtdcQryDepthMarketDataField*
     pQryDepthMarketData,
  int nRequestID):
      Message(REQ_QRY_DEPTH_MARKET_DATA_MESSAGE,
              "ReqQryDepthMarketData")
      request_id_(nRequestID) {
    if (pQryDepthMarketData) {
      qrydepthmarketdata_.reset(
               new CThostFtdcQryDepthMarketDataField());
      std::memcpy(qrydepthmarketdata_.get(),
                  pQryDepthMarketData,
                  sizeof(CThostFtdcQryDepthMarketDataField));
    }
  }

  virtual ~ReqQryDepthMarketDataMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qrydepthmarketdata_.get()) {
      std::stringstream ss;
      ss <<(*qrydepthmarketdata_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryDepthMarketDataField*
     qryDepthMarketData() const {
    return qrydepthmarketdata_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryDepthMarketDataField>
                   qrydepthmarketdata_;
  int request_id_;
};

class ReqQrySettlementInfoMessage : public Message {
 public:
  ReqQrySettlementInfoMessage(
     CThostFtdcQrySettlementInfoField*
     pQrySettlementInfo,
  int nRequestID):
      Message(REQ_QRY_SETTLEMENT_INFO_MESSAGE,
              "ReqQrySettlementInfo")
      request_id_(nRequestID) {
    if (pQrySettlementInfo) {
      qrysettlementinfo_.reset(
               new CThostFtdcQrySettlementInfoField());
      std::memcpy(qrysettlementinfo_.get(),
                  pQrySettlementInfo,
                  sizeof(CThostFtdcQrySettlementInfoField));
    }
  }

  virtual ~ReqQrySettlementInfoMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qrysettlementinfo_.get()) {
      std::stringstream ss;
      ss <<(*qrysettlementinfo_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQrySettlementInfoField*
     qrySettlementInfo() const {
    return qrysettlementinfo_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQrySettlementInfoField>
                   qrysettlementinfo_;
  int request_id_;
};

class ReqQryTransferBankMessage : public Message {
 public:
  ReqQryTransferBankMessage(
     CThostFtdcQryTransferBankField*
     pQryTransferBank,
  int nRequestID):
      Message(REQ_QRY_TRANSFER_BANK_MESSAGE,
              "ReqQryTransferBank")
      request_id_(nRequestID) {
    if (pQryTransferBank) {
      qrytransferbank_.reset(
               new CThostFtdcQryTransferBankField());
      std::memcpy(qrytransferbank_.get(),
                  pQryTransferBank,
                  sizeof(CThostFtdcQryTransferBankField));
    }
  }

  virtual ~ReqQryTransferBankMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qrytransferbank_.get()) {
      std::stringstream ss;
      ss <<(*qrytransferbank_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryTransferBankField*
     qryTransferBank() const {
    return qrytransferbank_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryTransferBankField>
                   qrytransferbank_;
  int request_id_;
};

class ReqQryInvestorPositionDetailMessage : public Message {
 public:
  ReqQryInvestorPositionDetailMessage(
     CThostFtdcQryInvestorPositionDetailField*
     pQryInvestorPositionDetail,
  int nRequestID):
      Message(REQ_QRY_INVESTOR_POSITION_DETAIL_MESSAGE,
              "ReqQryInvestorPositionDetail")
      request_id_(nRequestID) {
    if (pQryInvestorPositionDetail) {
      qryinvestorpositiondetail_.reset(
               new CThostFtdcQryInvestorPositionDetailField());
      std::memcpy(qryinvestorpositiondetail_.get(),
                  pQryInvestorPositionDetail,
                  sizeof(CThostFtdcQryInvestorPositionDetailField));
    }
  }

  virtual ~ReqQryInvestorPositionDetailMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryinvestorpositiondetail_.get()) {
      std::stringstream ss;
      ss <<(*qryinvestorpositiondetail_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryInvestorPositionDetailField*
     qryInvestorPositionDetail() const {
    return qryinvestorpositiondetail_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryInvestorPositionDetailField>
                   qryinvestorpositiondetail_;
  int request_id_;
};

class ReqQryNoticeMessage : public Message {
 public:
  ReqQryNoticeMessage(
     CThostFtdcQryNoticeField*
     pQryNotice,
  int nRequestID):
      Message(REQ_QRY_NOTICE_MESSAGE,
              "ReqQryNotice")
      request_id_(nRequestID) {
    if (pQryNotice) {
      qrynotice_.reset(
               new CThostFtdcQryNoticeField());
      std::memcpy(qrynotice_.get(),
                  pQryNotice,
                  sizeof(CThostFtdcQryNoticeField));
    }
  }

  virtual ~ReqQryNoticeMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qrynotice_.get()) {
      std::stringstream ss;
      ss <<(*qrynotice_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryNoticeField*
     qryNotice() const {
    return qrynotice_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryNoticeField>
                   qrynotice_;
  int request_id_;
};

class ReqQrySettlementInfoConfirmMessage : public Message {
 public:
  ReqQrySettlementInfoConfirmMessage(
     CThostFtdcQrySettlementInfoConfirmField*
     pQrySettlementInfoConfirm,
  int nRequestID):
      Message(REQ_QRY_SETTLEMENT_INFO_CONFIRM_MESSAGE,
              "ReqQrySettlementInfoConfirm")
      request_id_(nRequestID) {
    if (pQrySettlementInfoConfirm) {
      qrysettlementinfoconfirm_.reset(
               new CThostFtdcQrySettlementInfoConfirmField());
      std::memcpy(qrysettlementinfoconfirm_.get(),
                  pQrySettlementInfoConfirm,
                  sizeof(CThostFtdcQrySettlementInfoConfirmField));
    }
  }

  virtual ~ReqQrySettlementInfoConfirmMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qrysettlementinfoconfirm_.get()) {
      std::stringstream ss;
      ss <<(*qrysettlementinfoconfirm_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQrySettlementInfoConfirmField*
     qrySettlementInfoConfirm() const {
    return qrysettlementinfoconfirm_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQrySettlementInfoConfirmField>
                   qrysettlementinfoconfirm_;
  int request_id_;
};

class ReqQryInvestorPositionCombineDetailMessage : public Message {
 public:
  ReqQryInvestorPositionCombineDetailMessage(
     CThostFtdcQryInvestorPositionCombineDetailField*
     pQryInvestorPositionCombineDetail,
  int nRequestID):
      Message(REQ_QRY_INVESTOR_POSITION_COMBINE_DETAIL_MESSAGE,
              "ReqQryInvestorPositionCombineDetail")
      request_id_(nRequestID) {
    if (pQryInvestorPositionCombineDetail) {
      qryinvestorpositioncombinedetail_.reset(
               new CThostFtdcQryInvestorPositionCombineDetailField());
      std::memcpy(qryinvestorpositioncombinedetail_.get(),
                  pQryInvestorPositionCombineDetail,
                  sizeof(CThostFtdcQryInvestorPositionCombineDetailField));
    }
  }

  virtual ~ReqQryInvestorPositionCombineDetailMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryinvestorpositioncombinedetail_.get()) {
      std::stringstream ss;
      ss <<(*qryinvestorpositioncombinedetail_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryInvestorPositionCombineDetailField*
     qryInvestorPositionCombineDetail() const {
    return qryinvestorpositioncombinedetail_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryInvestorPositionCombineDetailField>
                   qryinvestorpositioncombinedetail_;
  int request_id_;
};

class ReqQryCFMMCTradingAccountKeyMessage : public Message {
 public:
  ReqQryCFMMCTradingAccountKeyMessage(
     CThostFtdcQryCFMMCTradingAccountKeyField*
     pQryCFMMCTradingAccountKey,
  int nRequestID):
      Message(REQ_QRY_C_F_M_M_C_TRADING_ACCOUNT_KEY_MESSAGE,
              "ReqQryCFMMCTradingAccountKey")
      request_id_(nRequestID) {
    if (pQryCFMMCTradingAccountKey) {
      qrycfmmctradingaccountkey_.reset(
               new CThostFtdcQryCFMMCTradingAccountKeyField());
      std::memcpy(qrycfmmctradingaccountkey_.get(),
                  pQryCFMMCTradingAccountKey,
                  sizeof(CThostFtdcQryCFMMCTradingAccountKeyField));
    }
  }

  virtual ~ReqQryCFMMCTradingAccountKeyMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qrycfmmctradingaccountkey_.get()) {
      std::stringstream ss;
      ss <<(*qrycfmmctradingaccountkey_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryCFMMCTradingAccountKeyField*
     qryCFMMCTradingAccountKey() const {
    return qrycfmmctradingaccountkey_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryCFMMCTradingAccountKeyField>
                   qrycfmmctradingaccountkey_;
  int request_id_;
};

class ReqQryEWarrantOffsetMessage : public Message {
 public:
  ReqQryEWarrantOffsetMessage(
     CThostFtdcQryEWarrantOffsetField*
     pQryEWarrantOffset,
  int nRequestID):
      Message(REQ_QRY_E_WARRANT_OFFSET_MESSAGE,
              "ReqQryEWarrantOffset")
      request_id_(nRequestID) {
    if (pQryEWarrantOffset) {
      qryewarrantoffset_.reset(
               new CThostFtdcQryEWarrantOffsetField());
      std::memcpy(qryewarrantoffset_.get(),
                  pQryEWarrantOffset,
                  sizeof(CThostFtdcQryEWarrantOffsetField));
    }
  }

  virtual ~ReqQryEWarrantOffsetMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryewarrantoffset_.get()) {
      std::stringstream ss;
      ss <<(*qryewarrantoffset_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryEWarrantOffsetField*
     qryEWarrantOffset() const {
    return qryewarrantoffset_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryEWarrantOffsetField>
                   qryewarrantoffset_;
  int request_id_;
};

class ReqQryInvestorProductGroupMarginMessage : public Message {
 public:
  ReqQryInvestorProductGroupMarginMessage(
     CThostFtdcQryInvestorProductGroupMarginField*
     pQryInvestorProductGroupMargin,
  int nRequestID):
      Message(REQ_QRY_INVESTOR_PRODUCT_GROUP_MARGIN_MESSAGE,
              "ReqQryInvestorProductGroupMargin")
      request_id_(nRequestID) {
    if (pQryInvestorProductGroupMargin) {
      qryinvestorproductgroupmargin_.reset(
               new CThostFtdcQryInvestorProductGroupMarginField());
      std::memcpy(qryinvestorproductgroupmargin_.get(),
                  pQryInvestorProductGroupMargin,
                  sizeof(CThostFtdcQryInvestorProductGroupMarginField));
    }
  }

  virtual ~ReqQryInvestorProductGroupMarginMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryinvestorproductgroupmargin_.get()) {
      std::stringstream ss;
      ss <<(*qryinvestorproductgroupmargin_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryInvestorProductGroupMarginField*
     qryInvestorProductGroupMargin() const {
    return qryinvestorproductgroupmargin_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryInvestorProductGroupMarginField>
                   qryinvestorproductgroupmargin_;
  int request_id_;
};

class ReqQryExchangeMarginRateMessage : public Message {
 public:
  ReqQryExchangeMarginRateMessage(
     CThostFtdcQryExchangeMarginRateField*
     pQryExchangeMarginRate,
  int nRequestID):
      Message(REQ_QRY_EXCHANGE_MARGIN_RATE_MESSAGE,
              "ReqQryExchangeMarginRate")
      request_id_(nRequestID) {
    if (pQryExchangeMarginRate) {
      qryexchangemarginrate_.reset(
               new CThostFtdcQryExchangeMarginRateField());
      std::memcpy(qryexchangemarginrate_.get(),
                  pQryExchangeMarginRate,
                  sizeof(CThostFtdcQryExchangeMarginRateField));
    }
  }

  virtual ~ReqQryExchangeMarginRateMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryexchangemarginrate_.get()) {
      std::stringstream ss;
      ss <<(*qryexchangemarginrate_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryExchangeMarginRateField*
     qryExchangeMarginRate() const {
    return qryexchangemarginrate_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryExchangeMarginRateField>
                   qryexchangemarginrate_;
  int request_id_;
};

class ReqQryExchangeMarginRateAdjustMessage : public Message {
 public:
  ReqQryExchangeMarginRateAdjustMessage(
     CThostFtdcQryExchangeMarginRateAdjustField*
     pQryExchangeMarginRateAdjust,
  int nRequestID):
      Message(REQ_QRY_EXCHANGE_MARGIN_RATE_ADJUST_MESSAGE,
              "ReqQryExchangeMarginRateAdjust")
      request_id_(nRequestID) {
    if (pQryExchangeMarginRateAdjust) {
      qryexchangemarginrateadjust_.reset(
               new CThostFtdcQryExchangeMarginRateAdjustField());
      std::memcpy(qryexchangemarginrateadjust_.get(),
                  pQryExchangeMarginRateAdjust,
                  sizeof(CThostFtdcQryExchangeMarginRateAdjustField));
    }
  }

  virtual ~ReqQryExchangeMarginRateAdjustMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryexchangemarginrateadjust_.get()) {
      std::stringstream ss;
      ss <<(*qryexchangemarginrateadjust_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryExchangeMarginRateAdjustField*
     qryExchangeMarginRateAdjust() const {
    return qryexchangemarginrateadjust_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryExchangeMarginRateAdjustField>
                   qryexchangemarginrateadjust_;
  int request_id_;
};

class ReqQryExchangeRateMessage : public Message {
 public:
  ReqQryExchangeRateMessage(
     CThostFtdcQryExchangeRateField*
     pQryExchangeRate,
  int nRequestID):
      Message(REQ_QRY_EXCHANGE_RATE_MESSAGE,
              "ReqQryExchangeRate")
      request_id_(nRequestID) {
    if (pQryExchangeRate) {
      qryexchangerate_.reset(
               new CThostFtdcQryExchangeRateField());
      std::memcpy(qryexchangerate_.get(),
                  pQryExchangeRate,
                  sizeof(CThostFtdcQryExchangeRateField));
    }
  }

  virtual ~ReqQryExchangeRateMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryexchangerate_.get()) {
      std::stringstream ss;
      ss <<(*qryexchangerate_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryExchangeRateField*
     qryExchangeRate() const {
    return qryexchangerate_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryExchangeRateField>
                   qryexchangerate_;
  int request_id_;
};

class ReqQrySecAgentACIDMapMessage : public Message {
 public:
  ReqQrySecAgentACIDMapMessage(
     CThostFtdcQrySecAgentACIDMapField*
     pQrySecAgentACIDMap,
  int nRequestID):
      Message(REQ_QRY_SEC_AGENT_A_C_I_D_MAP_MESSAGE,
              "ReqQrySecAgentACIDMap")
      request_id_(nRequestID) {
    if (pQrySecAgentACIDMap) {
      qrysecagentacidmap_.reset(
               new CThostFtdcQrySecAgentACIDMapField());
      std::memcpy(qrysecagentacidmap_.get(),
                  pQrySecAgentACIDMap,
                  sizeof(CThostFtdcQrySecAgentACIDMapField));
    }
  }

  virtual ~ReqQrySecAgentACIDMapMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qrysecagentacidmap_.get()) {
      std::stringstream ss;
      ss <<(*qrysecagentacidmap_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQrySecAgentACIDMapField*
     qrySecAgentACIDMap() const {
    return qrysecagentacidmap_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQrySecAgentACIDMapField>
                   qrysecagentacidmap_;
  int request_id_;
};

class ReqQryProductExchRateMessage : public Message {
 public:
  ReqQryProductExchRateMessage(
     CThostFtdcQryProductExchRateField*
     pQryProductExchRate,
  int nRequestID):
      Message(REQ_QRY_PRODUCT_EXCH_RATE_MESSAGE,
              "ReqQryProductExchRate")
      request_id_(nRequestID) {
    if (pQryProductExchRate) {
      qryproductexchrate_.reset(
               new CThostFtdcQryProductExchRateField());
      std::memcpy(qryproductexchrate_.get(),
                  pQryProductExchRate,
                  sizeof(CThostFtdcQryProductExchRateField));
    }
  }

  virtual ~ReqQryProductExchRateMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryproductexchrate_.get()) {
      std::stringstream ss;
      ss <<(*qryproductexchrate_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryProductExchRateField*
     qryProductExchRate() const {
    return qryproductexchrate_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryProductExchRateField>
                   qryproductexchrate_;
  int request_id_;
};

class ReqQryOptionInstrTradeCostMessage : public Message {
 public:
  ReqQryOptionInstrTradeCostMessage(
     CThostFtdcQryOptionInstrTradeCostField*
     pQryOptionInstrTradeCost,
  int nRequestID):
      Message(REQ_QRY_OPTION_INSTR_TRADE_COST_MESSAGE,
              "ReqQryOptionInstrTradeCost")
      request_id_(nRequestID) {
    if (pQryOptionInstrTradeCost) {
      qryoptioninstrtradecost_.reset(
               new CThostFtdcQryOptionInstrTradeCostField());
      std::memcpy(qryoptioninstrtradecost_.get(),
                  pQryOptionInstrTradeCost,
                  sizeof(CThostFtdcQryOptionInstrTradeCostField));
    }
  }

  virtual ~ReqQryOptionInstrTradeCostMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryoptioninstrtradecost_.get()) {
      std::stringstream ss;
      ss <<(*qryoptioninstrtradecost_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryOptionInstrTradeCostField*
     qryOptionInstrTradeCost() const {
    return qryoptioninstrtradecost_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryOptionInstrTradeCostField>
                   qryoptioninstrtradecost_;
  int request_id_;
};

class ReqQryOptionInstrCommRateMessage : public Message {
 public:
  ReqQryOptionInstrCommRateMessage(
     CThostFtdcQryOptionInstrCommRateField*
     pQryOptionInstrCommRate,
  int nRequestID):
      Message(REQ_QRY_OPTION_INSTR_COMM_RATE_MESSAGE,
              "ReqQryOptionInstrCommRate")
      request_id_(nRequestID) {
    if (pQryOptionInstrCommRate) {
      qryoptioninstrcommrate_.reset(
               new CThostFtdcQryOptionInstrCommRateField());
      std::memcpy(qryoptioninstrcommrate_.get(),
                  pQryOptionInstrCommRate,
                  sizeof(CThostFtdcQryOptionInstrCommRateField));
    }
  }

  virtual ~ReqQryOptionInstrCommRateMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryoptioninstrcommrate_.get()) {
      std::stringstream ss;
      ss <<(*qryoptioninstrcommrate_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryOptionInstrCommRateField*
     qryOptionInstrCommRate() const {
    return qryoptioninstrcommrate_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryOptionInstrCommRateField>
                   qryoptioninstrcommrate_;
  int request_id_;
};

class ReqQryExecOrderMessage : public Message {
 public:
  ReqQryExecOrderMessage(
     CThostFtdcQryExecOrderField*
     pQryExecOrder,
  int nRequestID):
      Message(REQ_QRY_EXEC_ORDER_MESSAGE,
              "ReqQryExecOrder")
      request_id_(nRequestID) {
    if (pQryExecOrder) {
      qryexecorder_.reset(
               new CThostFtdcQryExecOrderField());
      std::memcpy(qryexecorder_.get(),
                  pQryExecOrder,
                  sizeof(CThostFtdcQryExecOrderField));
    }
  }

  virtual ~ReqQryExecOrderMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryexecorder_.get()) {
      std::stringstream ss;
      ss <<(*qryexecorder_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryExecOrderField*
     qryExecOrder() const {
    return qryexecorder_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryExecOrderField>
                   qryexecorder_;
  int request_id_;
};

class ReqQryForQuoteMessage : public Message {
 public:
  ReqQryForQuoteMessage(
     CThostFtdcQryForQuoteField*
     pQryForQuote,
  int nRequestID):
      Message(REQ_QRY_FOR_QUOTE_MESSAGE,
              "ReqQryForQuote")
      request_id_(nRequestID) {
    if (pQryForQuote) {
      qryforquote_.reset(
               new CThostFtdcQryForQuoteField());
      std::memcpy(qryforquote_.get(),
                  pQryForQuote,
                  sizeof(CThostFtdcQryForQuoteField));
    }
  }

  virtual ~ReqQryForQuoteMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryforquote_.get()) {
      std::stringstream ss;
      ss <<(*qryforquote_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryForQuoteField*
     qryForQuote() const {
    return qryforquote_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryForQuoteField>
                   qryforquote_;
  int request_id_;
};

class ReqQryQuoteMessage : public Message {
 public:
  ReqQryQuoteMessage(
     CThostFtdcQryQuoteField*
     pQryQuote,
  int nRequestID):
      Message(REQ_QRY_QUOTE_MESSAGE,
              "ReqQryQuote")
      request_id_(nRequestID) {
    if (pQryQuote) {
      qryquote_.reset(
               new CThostFtdcQryQuoteField());
      std::memcpy(qryquote_.get(),
                  pQryQuote,
                  sizeof(CThostFtdcQryQuoteField));
    }
  }

  virtual ~ReqQryQuoteMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryquote_.get()) {
      std::stringstream ss;
      ss <<(*qryquote_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryQuoteField*
     qryQuote() const {
    return qryquote_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryQuoteField>
                   qryquote_;
  int request_id_;
};

class ReqQryCombInstrumentGuardMessage : public Message {
 public:
  ReqQryCombInstrumentGuardMessage(
     CThostFtdcQryCombInstrumentGuardField*
     pQryCombInstrumentGuard,
  int nRequestID):
      Message(REQ_QRY_COMB_INSTRUMENT_GUARD_MESSAGE,
              "ReqQryCombInstrumentGuard")
      request_id_(nRequestID) {
    if (pQryCombInstrumentGuard) {
      qrycombinstrumentguard_.reset(
               new CThostFtdcQryCombInstrumentGuardField());
      std::memcpy(qrycombinstrumentguard_.get(),
                  pQryCombInstrumentGuard,
                  sizeof(CThostFtdcQryCombInstrumentGuardField));
    }
  }

  virtual ~ReqQryCombInstrumentGuardMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qrycombinstrumentguard_.get()) {
      std::stringstream ss;
      ss <<(*qrycombinstrumentguard_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryCombInstrumentGuardField*
     qryCombInstrumentGuard() const {
    return qrycombinstrumentguard_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryCombInstrumentGuardField>
                   qrycombinstrumentguard_;
  int request_id_;
};

class ReqQryCombActionMessage : public Message {
 public:
  ReqQryCombActionMessage(
     CThostFtdcQryCombActionField*
     pQryCombAction,
  int nRequestID):
      Message(REQ_QRY_COMB_ACTION_MESSAGE,
              "ReqQryCombAction")
      request_id_(nRequestID) {
    if (pQryCombAction) {
      qrycombaction_.reset(
               new CThostFtdcQryCombActionField());
      std::memcpy(qrycombaction_.get(),
                  pQryCombAction,
                  sizeof(CThostFtdcQryCombActionField));
    }
  }

  virtual ~ReqQryCombActionMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qrycombaction_.get()) {
      std::stringstream ss;
      ss <<(*qrycombaction_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryCombActionField*
     qryCombAction() const {
    return qrycombaction_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryCombActionField>
                   qrycombaction_;
  int request_id_;
};

class ReqQryTransferSerialMessage : public Message {
 public:
  ReqQryTransferSerialMessage(
     CThostFtdcQryTransferSerialField*
     pQryTransferSerial,
  int nRequestID):
      Message(REQ_QRY_TRANSFER_SERIAL_MESSAGE,
              "ReqQryTransferSerial")
      request_id_(nRequestID) {
    if (pQryTransferSerial) {
      qrytransferserial_.reset(
               new CThostFtdcQryTransferSerialField());
      std::memcpy(qrytransferserial_.get(),
                  pQryTransferSerial,
                  sizeof(CThostFtdcQryTransferSerialField));
    }
  }

  virtual ~ReqQryTransferSerialMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qrytransferserial_.get()) {
      std::stringstream ss;
      ss <<(*qrytransferserial_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryTransferSerialField*
     qryTransferSerial() const {
    return qrytransferserial_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryTransferSerialField>
                   qrytransferserial_;
  int request_id_;
};

class ReqQryAccountregisterMessage : public Message {
 public:
  ReqQryAccountregisterMessage(
     CThostFtdcQryAccountregisterField*
     pQryAccountregister,
  int nRequestID):
      Message(REQ_QRY_ACCOUNTREGISTER_MESSAGE,
              "ReqQryAccountregister")
      request_id_(nRequestID) {
    if (pQryAccountregister) {
      qryaccountregister_.reset(
               new CThostFtdcQryAccountregisterField());
      std::memcpy(qryaccountregister_.get(),
                  pQryAccountregister,
                  sizeof(CThostFtdcQryAccountregisterField));
    }
  }

  virtual ~ReqQryAccountregisterMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryaccountregister_.get()) {
      std::stringstream ss;
      ss <<(*qryaccountregister_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryAccountregisterField*
     qryAccountregister() const {
    return qryaccountregister_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryAccountregisterField>
                   qryaccountregister_;
  int request_id_;
};

class ReqQryContractBankMessage : public Message {
 public:
  ReqQryContractBankMessage(
     CThostFtdcQryContractBankField*
     pQryContractBank,
  int nRequestID):
      Message(REQ_QRY_CONTRACT_BANK_MESSAGE,
              "ReqQryContractBank")
      request_id_(nRequestID) {
    if (pQryContractBank) {
      qrycontractbank_.reset(
               new CThostFtdcQryContractBankField());
      std::memcpy(qrycontractbank_.get(),
                  pQryContractBank,
                  sizeof(CThostFtdcQryContractBankField));
    }
  }

  virtual ~ReqQryContractBankMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qrycontractbank_.get()) {
      std::stringstream ss;
      ss <<(*qrycontractbank_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryContractBankField*
     qryContractBank() const {
    return qrycontractbank_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryContractBankField>
                   qrycontractbank_;
  int request_id_;
};

class ReqQryParkedOrderMessage : public Message {
 public:
  ReqQryParkedOrderMessage(
     CThostFtdcQryParkedOrderField*
     pQryParkedOrder,
  int nRequestID):
      Message(REQ_QRY_PARKED_ORDER_MESSAGE,
              "ReqQryParkedOrder")
      request_id_(nRequestID) {
    if (pQryParkedOrder) {
      qryparkedorder_.reset(
               new CThostFtdcQryParkedOrderField());
      std::memcpy(qryparkedorder_.get(),
                  pQryParkedOrder,
                  sizeof(CThostFtdcQryParkedOrderField));
    }
  }

  virtual ~ReqQryParkedOrderMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryparkedorder_.get()) {
      std::stringstream ss;
      ss <<(*qryparkedorder_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryParkedOrderField*
     qryParkedOrder() const {
    return qryparkedorder_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryParkedOrderField>
                   qryparkedorder_;
  int request_id_;
};

class ReqQryParkedOrderActionMessage : public Message {
 public:
  ReqQryParkedOrderActionMessage(
     CThostFtdcQryParkedOrderActionField*
     pQryParkedOrderAction,
  int nRequestID):
      Message(REQ_QRY_PARKED_ORDER_ACTION_MESSAGE,
              "ReqQryParkedOrderAction")
      request_id_(nRequestID) {
    if (pQryParkedOrderAction) {
      qryparkedorderaction_.reset(
               new CThostFtdcQryParkedOrderActionField());
      std::memcpy(qryparkedorderaction_.get(),
                  pQryParkedOrderAction,
                  sizeof(CThostFtdcQryParkedOrderActionField));
    }
  }

  virtual ~ReqQryParkedOrderActionMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qryparkedorderaction_.get()) {
      std::stringstream ss;
      ss <<(*qryparkedorderaction_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryParkedOrderActionField*
     qryParkedOrderAction() const {
    return qryparkedorderaction_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryParkedOrderActionField>
                   qryparkedorderaction_;
  int request_id_;
};

class ReqQryTradingNoticeMessage : public Message {
 public:
  ReqQryTradingNoticeMessage(
     CThostFtdcQryTradingNoticeField*
     pQryTradingNotice,
  int nRequestID):
      Message(REQ_QRY_TRADING_NOTICE_MESSAGE,
              "ReqQryTradingNotice")
      request_id_(nRequestID) {
    if (pQryTradingNotice) {
      qrytradingnotice_.reset(
               new CThostFtdcQryTradingNoticeField());
      std::memcpy(qrytradingnotice_.get(),
                  pQryTradingNotice,
                  sizeof(CThostFtdcQryTradingNoticeField));
    }
  }

  virtual ~ReqQryTradingNoticeMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qrytradingnotice_.get()) {
      std::stringstream ss;
      ss <<(*qrytradingnotice_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryTradingNoticeField*
     qryTradingNotice() const {
    return qrytradingnotice_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryTradingNoticeField>
                   qrytradingnotice_;
  int request_id_;
};

class ReqQryBrokerTradingParamsMessage : public Message {
 public:
  ReqQryBrokerTradingParamsMessage(
     CThostFtdcQryBrokerTradingParamsField*
     pQryBrokerTradingParams,
  int nRequestID):
      Message(REQ_QRY_BROKER_TRADING_PARAMS_MESSAGE,
              "ReqQryBrokerTradingParams")
      request_id_(nRequestID) {
    if (pQryBrokerTradingParams) {
      qrybrokertradingparams_.reset(
               new CThostFtdcQryBrokerTradingParamsField());
      std::memcpy(qrybrokertradingparams_.get(),
                  pQryBrokerTradingParams,
                  sizeof(CThostFtdcQryBrokerTradingParamsField));
    }
  }

  virtual ~ReqQryBrokerTradingParamsMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qrybrokertradingparams_.get()) {
      std::stringstream ss;
      ss <<(*qrybrokertradingparams_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryBrokerTradingParamsField*
     qryBrokerTradingParams() const {
    return qrybrokertradingparams_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryBrokerTradingParamsField>
                   qrybrokertradingparams_;
  int request_id_;
};

class ReqQryBrokerTradingAlgosMessage : public Message {
 public:
  ReqQryBrokerTradingAlgosMessage(
     CThostFtdcQryBrokerTradingAlgosField*
     pQryBrokerTradingAlgos,
  int nRequestID):
      Message(REQ_QRY_BROKER_TRADING_ALGOS_MESSAGE,
              "ReqQryBrokerTradingAlgos")
      request_id_(nRequestID) {
    if (pQryBrokerTradingAlgos) {
      qrybrokertradingalgos_.reset(
               new CThostFtdcQryBrokerTradingAlgosField());
      std::memcpy(qrybrokertradingalgos_.get(),
                  pQryBrokerTradingAlgos,
                  sizeof(CThostFtdcQryBrokerTradingAlgosField));
    }
  }

  virtual ~ReqQryBrokerTradingAlgosMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (qrybrokertradingalgos_.get()) {
      std::stringstream ss;
      ss <<(*qrybrokertradingalgos_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQryBrokerTradingAlgosField*
     qryBrokerTradingAlgos() const {
    return qrybrokertradingalgos_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQryBrokerTradingAlgosField>
                   qrybrokertradingalgos_;
  int request_id_;
};

class ReqQueryCFMMCTradingAccountTokenMessage : public Message {
 public:
  ReqQueryCFMMCTradingAccountTokenMessage(
     CThostFtdcQueryCFMMCTradingAccountTokenField*
     pQueryCFMMCTradingAccountToken,
  int nRequestID):
      Message(REQ_QUERY_C_F_M_M_C_TRADING_ACCOUNT_TOKEN_MESSAGE,
              "ReqQueryCFMMCTradingAccountToken")
      request_id_(nRequestID) {
    if (pQueryCFMMCTradingAccountToken) {
      querycfmmctradingaccounttoken_.reset(
               new CThostFtdcQueryCFMMCTradingAccountTokenField());
      std::memcpy(querycfmmctradingaccounttoken_.get(),
                  pQueryCFMMCTradingAccountToken,
                  sizeof(CThostFtdcQueryCFMMCTradingAccountTokenField));
    }
  }

  virtual ~ReqQueryCFMMCTradingAccountTokenMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (querycfmmctradingaccounttoken_.get()) {
      std::stringstream ss;
      ss <<(*querycfmmctradingaccounttoken_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    Message::toJSON(&msg_doc);
    json::addMember(doc, name(), &msg_doc);
  }

  int requestID() const {
    return request_id_;
  }

  CThostFtdcQueryCFMMCTradingAccountTokenField*
     queryCFMMCTradingAccountToken() const {
    return querycfmmctradingaccounttoken_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQueryCFMMCTradingAccountTokenField>
                   querycfmmctradingaccounttoken_;
  int request_id_;
};

class ReqFromBankToFutureByFutureMessage : public Message {
 public:
  ReqFromBankToFutureByFutureMessage(
     CThostFtdcReqTransferField*
     pReqTransfer,
  int nRequestID):
      Message(REQ_FROM_BANK_TO_FUTURE_BY_FUTURE_MESSAGE,
              "ReqFromBankToFutureByFuture")
      request_id_(nRequestID) {
    if (pReqTransfer) {
      reqtransfer_.reset(
               new CThostFtdcReqTransferField());
      std::memcpy(reqtransfer_.get(),
                  pReqTransfer,
                  sizeof(CThostFtdcReqTransferField));
    }
  }

  virtual ~ReqFromBankToFutureByFutureMessage() {
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

  int requestID() const {
    return request_id_;
  }

  CThostFtdcReqTransferField*
     reqTransfer() const {
    return reqtransfer_.get();
  }

 private:
  std::unique_ptr<CThostFtdcReqTransferField>
                   reqtransfer_;
  int request_id_;
};

class ReqFromFutureToBankByFutureMessage : public Message {
 public:
  ReqFromFutureToBankByFutureMessage(
     CThostFtdcReqTransferField*
     pReqTransfer,
  int nRequestID):
      Message(REQ_FROM_FUTURE_TO_BANK_BY_FUTURE_MESSAGE,
              "ReqFromFutureToBankByFuture")
      request_id_(nRequestID) {
    if (pReqTransfer) {
      reqtransfer_.reset(
               new CThostFtdcReqTransferField());
      std::memcpy(reqtransfer_.get(),
                  pReqTransfer,
                  sizeof(CThostFtdcReqTransferField));
    }
  }

  virtual ~ReqFromFutureToBankByFutureMessage() {
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

  int requestID() const {
    return request_id_;
  }

  CThostFtdcReqTransferField*
     reqTransfer() const {
    return reqtransfer_.get();
  }

 private:
  std::unique_ptr<CThostFtdcReqTransferField>
                   reqtransfer_;
  int request_id_;
};

class ReqQueryBankAccountMoneyByFutureMessage : public Message {
 public:
  ReqQueryBankAccountMoneyByFutureMessage(
     CThostFtdcReqQueryAccountField*
     pReqQueryAccount,
  int nRequestID):
      Message(REQ_QUERY_BANK_ACCOUNT_MONEY_BY_FUTURE_MESSAGE,
              "ReqQueryBankAccountMoneyByFuture")
      request_id_(nRequestID) {
    if (pReqQueryAccount) {
      reqqueryaccount_.reset(
               new CThostFtdcReqQueryAccountField());
      std::memcpy(reqqueryaccount_.get(),
                  pReqQueryAccount,
                  sizeof(CThostFtdcReqQueryAccountField));
    }
  }

  virtual ~ReqQueryBankAccountMoneyByFutureMessage() {
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

  int requestID() const {
    return request_id_;
  }

  CThostFtdcReqQueryAccountField*
     reqQueryAccount() const {
    return reqqueryaccount_.get();
  }

 private:
  std::unique_ptr<CThostFtdcReqQueryAccountField>
                   reqqueryaccount_;
  int request_id_;
};


};  // namespace cata

#endif
