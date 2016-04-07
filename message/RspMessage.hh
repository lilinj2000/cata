// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_RSPMESSAGE_HH
#define CATA_RSPMESSAGE_HH

#include <memory>
#include <string>
#include <sstream>
#include "ThostFtdcUserApiStruct.h"
#include "ThostFtdcUserApiStructPrint.hh"
#include "Message.hh"
#include "json/json.hh"

namespace cata {

class RspMessage : public Message {
 public:
  RspMessage(MessageID id, const std::string& name,
             CThostFtdcRspInfoField* pRspInfo,
             int nRequestID, bool bIsLast):
      Message(id, name),
      request_id_(nRequestID),
      is_last_(bIsLast) {
      if (pRspInfo) {
        rsp_info_.reset(new CThostFtdcRspInfoField());
        std::memcpy(rsp_info_.get(), pRspInfo, sizeof(CThostFtdcRspInfoField));
      }
  }

  virtual ~RspMessage() {
  }

  virtual std::string toString() const = 0;

  virtual void toJSON(json::Document* doc) const {
    assert(doc);

    if (rsp_info_.get()) {
      std::stringstream ss;
      ss <<(*rsp_info_);

      json::Document d;
      json::fromString(ss.str(), &d);

      json::appendDoc(doc, d);
    }

    std::string req_key = "request_id";
    json::addMember(doc, req_key, requestID());

    std::string last_key = "is_last";
    json::addMember(doc, last_key, isLast());

    Message::toJSON(doc);
  }

  CThostFtdcRspInfoField* rspInfo() const {
    return rsp_info_.get();
  }

  int requestID() const {
    return request_id_;
  }

  bool isLast() const {
    return is_last_;
  }

 private:
  std::unique_ptr<CThostFtdcRspInfoField> rsp_info_;
  int request_id_;
  bool is_last_;
};

class RspUserLoginMessage : public RspMessage {
 public:
  RspUserLoginMessage(
     CThostFtdcRspUserLoginField*
        pRspUserLogin,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_USER_LOGIN_MESSAGE,
                 "OnRspUserLogin",
                 pRspInfo, nRequestID, bIsLast) {
    if (pRspUserLogin) {
      rspuserlogin_.reset(
               new CThostFtdcRspUserLoginField());
      std::memcpy(rspuserlogin_.get(),
                  pRspUserLogin,
                  sizeof(CThostFtdcRspUserLoginField));
    }
  }

  virtual ~RspUserLoginMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (rspuserlogin_.get()) {
      std::stringstream ss;
      ss <<(*rspuserlogin_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcRspUserLoginField*
     rspUserLogin() const {
    return rspuserlogin_.get();
  }

 private:
  std::unique_ptr<CThostFtdcRspUserLoginField>
                   rspuserlogin_;
};

class RspUserLogoutMessage : public RspMessage {
 public:
  RspUserLogoutMessage(
     CThostFtdcUserLogoutField*
        pUserLogout,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_USER_LOGOUT_MESSAGE,
                 "OnRspUserLogout",
                 pRspInfo, nRequestID, bIsLast) {
    if (pUserLogout) {
      userlogout_.reset(
               new CThostFtdcUserLogoutField());
      std::memcpy(userlogout_.get(),
                  pUserLogout,
                  sizeof(CThostFtdcUserLogoutField));
    }
  }

  virtual ~RspUserLogoutMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcUserLogoutField*
     userLogout() const {
    return userlogout_.get();
  }

 private:
  std::unique_ptr<CThostFtdcUserLogoutField>
                   userlogout_;
};

class RspErrorMessage : public RspMessage {
 public:
  RspErrorMessage(
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_ERROR_MESSAGE,
                 "OnRspError",
                 pRspInfo, nRequestID, bIsLast) {
  }

  virtual ~RspErrorMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

 private:
};

class RspSubMarketDataMessage : public RspMessage {
 public:
  RspSubMarketDataMessage(
     CThostFtdcSpecificInstrumentField*
        pSpecificInstrument,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_SUB_MARKET_DATA_MESSAGE,
                 "OnRspSubMarketData",
                 pRspInfo, nRequestID, bIsLast) {
    if (pSpecificInstrument) {
      specificinstrument_.reset(
               new CThostFtdcSpecificInstrumentField());
      std::memcpy(specificinstrument_.get(),
                  pSpecificInstrument,
                  sizeof(CThostFtdcSpecificInstrumentField));
    }
  }

  virtual ~RspSubMarketDataMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (specificinstrument_.get()) {
      std::stringstream ss;
      ss <<(*specificinstrument_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcSpecificInstrumentField*
     specificInstrument() const {
    return specificinstrument_.get();
  }

 private:
  std::unique_ptr<CThostFtdcSpecificInstrumentField>
                   specificinstrument_;
};

class RspUnSubMarketDataMessage : public RspMessage {
 public:
  RspUnSubMarketDataMessage(
     CThostFtdcSpecificInstrumentField*
        pSpecificInstrument,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_UN_SUB_MARKET_DATA_MESSAGE,
                 "OnRspUnSubMarketData",
                 pRspInfo, nRequestID, bIsLast) {
    if (pSpecificInstrument) {
      specificinstrument_.reset(
               new CThostFtdcSpecificInstrumentField());
      std::memcpy(specificinstrument_.get(),
                  pSpecificInstrument,
                  sizeof(CThostFtdcSpecificInstrumentField));
    }
  }

  virtual ~RspUnSubMarketDataMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (specificinstrument_.get()) {
      std::stringstream ss;
      ss <<(*specificinstrument_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcSpecificInstrumentField*
     specificInstrument() const {
    return specificinstrument_.get();
  }

 private:
  std::unique_ptr<CThostFtdcSpecificInstrumentField>
                   specificinstrument_;
};

class RspSubForQuoteRspMessage : public RspMessage {
 public:
  RspSubForQuoteRspMessage(
     CThostFtdcSpecificInstrumentField*
        pSpecificInstrument,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_SUB_FOR_QUOTE_RSP_MESSAGE,
                 "OnRspSubForQuoteRsp",
                 pRspInfo, nRequestID, bIsLast) {
    if (pSpecificInstrument) {
      specificinstrument_.reset(
               new CThostFtdcSpecificInstrumentField());
      std::memcpy(specificinstrument_.get(),
                  pSpecificInstrument,
                  sizeof(CThostFtdcSpecificInstrumentField));
    }
  }

  virtual ~RspSubForQuoteRspMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (specificinstrument_.get()) {
      std::stringstream ss;
      ss <<(*specificinstrument_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcSpecificInstrumentField*
     specificInstrument() const {
    return specificinstrument_.get();
  }

 private:
  std::unique_ptr<CThostFtdcSpecificInstrumentField>
                   specificinstrument_;
};

class RspUnSubForQuoteRspMessage : public RspMessage {
 public:
  RspUnSubForQuoteRspMessage(
     CThostFtdcSpecificInstrumentField*
        pSpecificInstrument,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_UN_SUB_FOR_QUOTE_RSP_MESSAGE,
                 "OnRspUnSubForQuoteRsp",
                 pRspInfo, nRequestID, bIsLast) {
    if (pSpecificInstrument) {
      specificinstrument_.reset(
               new CThostFtdcSpecificInstrumentField());
      std::memcpy(specificinstrument_.get(),
                  pSpecificInstrument,
                  sizeof(CThostFtdcSpecificInstrumentField));
    }
  }

  virtual ~RspUnSubForQuoteRspMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (specificinstrument_.get()) {
      std::stringstream ss;
      ss <<(*specificinstrument_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcSpecificInstrumentField*
     specificInstrument() const {
    return specificinstrument_.get();
  }

 private:
  std::unique_ptr<CThostFtdcSpecificInstrumentField>
                   specificinstrument_;
};

class RspAuthenticateMessage : public RspMessage {
 public:
  RspAuthenticateMessage(
     CThostFtdcRspAuthenticateField*
        pRspAuthenticateField,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_AUTHENTICATE_MESSAGE,
                 "OnRspAuthenticate",
                 pRspInfo, nRequestID, bIsLast) {
    if (pRspAuthenticateField) {
      rspauthenticatefield_.reset(
               new CThostFtdcRspAuthenticateField());
      std::memcpy(rspauthenticatefield_.get(),
                  pRspAuthenticateField,
                  sizeof(CThostFtdcRspAuthenticateField));
    }
  }

  virtual ~RspAuthenticateMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (rspauthenticatefield_.get()) {
      std::stringstream ss;
      ss <<(*rspauthenticatefield_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcRspAuthenticateField*
     rspAuthenticateField() const {
    return rspauthenticatefield_.get();
  }

 private:
  std::unique_ptr<CThostFtdcRspAuthenticateField>
                   rspauthenticatefield_;
};

class RspUserPasswordUpdateMessage : public RspMessage {
 public:
  RspUserPasswordUpdateMessage(
     CThostFtdcUserPasswordUpdateField*
        pUserPasswordUpdate,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_USER_PASSWORD_UPDATE_MESSAGE,
                 "OnRspUserPasswordUpdate",
                 pRspInfo, nRequestID, bIsLast) {
    if (pUserPasswordUpdate) {
      userpasswordupdate_.reset(
               new CThostFtdcUserPasswordUpdateField());
      std::memcpy(userpasswordupdate_.get(),
                  pUserPasswordUpdate,
                  sizeof(CThostFtdcUserPasswordUpdateField));
    }
  }

  virtual ~RspUserPasswordUpdateMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcUserPasswordUpdateField*
     userPasswordUpdate() const {
    return userpasswordupdate_.get();
  }

 private:
  std::unique_ptr<CThostFtdcUserPasswordUpdateField>
                   userpasswordupdate_;
};

class RspTradingAccountPasswordUpdateMessage : public RspMessage {
 public:
  RspTradingAccountPasswordUpdateMessage(
     CThostFtdcTradingAccountPasswordUpdateField*
        pTradingAccountPasswordUpdate,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_TRADING_ACCOUNT_PASSWORD_UPDATE_MESSAGE,
                 "OnRspTradingAccountPasswordUpdate",
                 pRspInfo, nRequestID, bIsLast) {
    if (pTradingAccountPasswordUpdate) {
      tradingaccountpasswordupdate_.reset(
               new CThostFtdcTradingAccountPasswordUpdateField());
      std::memcpy(tradingaccountpasswordupdate_.get(),
                  pTradingAccountPasswordUpdate,
                  sizeof(CThostFtdcTradingAccountPasswordUpdateField));
    }
  }

  virtual ~RspTradingAccountPasswordUpdateMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcTradingAccountPasswordUpdateField*
     tradingAccountPasswordUpdate() const {
    return tradingaccountpasswordupdate_.get();
  }

 private:
  std::unique_ptr<CThostFtdcTradingAccountPasswordUpdateField>
                   tradingaccountpasswordupdate_;
};

class RspOrderInsertMessage : public RspMessage {
 public:
  RspOrderInsertMessage(
     CThostFtdcInputOrderField*
        pInputOrder,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_ORDER_INSERT_MESSAGE,
                 "OnRspOrderInsert",
                 pRspInfo, nRequestID, bIsLast) {
    if (pInputOrder) {
      inputorder_.reset(
               new CThostFtdcInputOrderField());
      std::memcpy(inputorder_.get(),
                  pInputOrder,
                  sizeof(CThostFtdcInputOrderField));
    }
  }

  virtual ~RspOrderInsertMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcInputOrderField*
     inputOrder() const {
    return inputorder_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInputOrderField>
                   inputorder_;
};

class RspParkedOrderInsertMessage : public RspMessage {
 public:
  RspParkedOrderInsertMessage(
     CThostFtdcParkedOrderField*
        pParkedOrder,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_PARKED_ORDER_INSERT_MESSAGE,
                 "OnRspParkedOrderInsert",
                 pRspInfo, nRequestID, bIsLast) {
    if (pParkedOrder) {
      parkedorder_.reset(
               new CThostFtdcParkedOrderField());
      std::memcpy(parkedorder_.get(),
                  pParkedOrder,
                  sizeof(CThostFtdcParkedOrderField));
    }
  }

  virtual ~RspParkedOrderInsertMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcParkedOrderField*
     parkedOrder() const {
    return parkedorder_.get();
  }

 private:
  std::unique_ptr<CThostFtdcParkedOrderField>
                   parkedorder_;
};

class RspParkedOrderActionMessage : public RspMessage {
 public:
  RspParkedOrderActionMessage(
     CThostFtdcParkedOrderActionField*
        pParkedOrderAction,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_PARKED_ORDER_ACTION_MESSAGE,
                 "OnRspParkedOrderAction",
                 pRspInfo, nRequestID, bIsLast) {
    if (pParkedOrderAction) {
      parkedorderaction_.reset(
               new CThostFtdcParkedOrderActionField());
      std::memcpy(parkedorderaction_.get(),
                  pParkedOrderAction,
                  sizeof(CThostFtdcParkedOrderActionField));
    }
  }

  virtual ~RspParkedOrderActionMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcParkedOrderActionField*
     parkedOrderAction() const {
    return parkedorderaction_.get();
  }

 private:
  std::unique_ptr<CThostFtdcParkedOrderActionField>
                   parkedorderaction_;
};

class RspOrderActionMessage : public RspMessage {
 public:
  RspOrderActionMessage(
     CThostFtdcInputOrderActionField*
        pInputOrderAction,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_ORDER_ACTION_MESSAGE,
                 "OnRspOrderAction",
                 pRspInfo, nRequestID, bIsLast) {
    if (pInputOrderAction) {
      inputorderaction_.reset(
               new CThostFtdcInputOrderActionField());
      std::memcpy(inputorderaction_.get(),
                  pInputOrderAction,
                  sizeof(CThostFtdcInputOrderActionField));
    }
  }

  virtual ~RspOrderActionMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcInputOrderActionField*
     inputOrderAction() const {
    return inputorderaction_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInputOrderActionField>
                   inputorderaction_;
};

class RspQueryMaxOrderVolumeMessage : public RspMessage {
 public:
  RspQueryMaxOrderVolumeMessage(
     CThostFtdcQueryMaxOrderVolumeField*
        pQueryMaxOrderVolume,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QUERY_MAX_ORDER_VOLUME_MESSAGE,
                 "OnRspQueryMaxOrderVolume",
                 pRspInfo, nRequestID, bIsLast) {
    if (pQueryMaxOrderVolume) {
      querymaxordervolume_.reset(
               new CThostFtdcQueryMaxOrderVolumeField());
      std::memcpy(querymaxordervolume_.get(),
                  pQueryMaxOrderVolume,
                  sizeof(CThostFtdcQueryMaxOrderVolumeField));
    }
  }

  virtual ~RspQueryMaxOrderVolumeMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcQueryMaxOrderVolumeField*
     queryMaxOrderVolume() const {
    return querymaxordervolume_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQueryMaxOrderVolumeField>
                   querymaxordervolume_;
};

class RspSettlementInfoConfirmMessage : public RspMessage {
 public:
  RspSettlementInfoConfirmMessage(
     CThostFtdcSettlementInfoConfirmField*
        pSettlementInfoConfirm,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_SETTLEMENT_INFO_CONFIRM_MESSAGE,
                 "OnRspSettlementInfoConfirm",
                 pRspInfo, nRequestID, bIsLast) {
    if (pSettlementInfoConfirm) {
      settlementinfoconfirm_.reset(
               new CThostFtdcSettlementInfoConfirmField());
      std::memcpy(settlementinfoconfirm_.get(),
                  pSettlementInfoConfirm,
                  sizeof(CThostFtdcSettlementInfoConfirmField));
    }
  }

  virtual ~RspSettlementInfoConfirmMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcSettlementInfoConfirmField*
     settlementInfoConfirm() const {
    return settlementinfoconfirm_.get();
  }

 private:
  std::unique_ptr<CThostFtdcSettlementInfoConfirmField>
                   settlementinfoconfirm_;
};

class RspRemoveParkedOrderMessage : public RspMessage {
 public:
  RspRemoveParkedOrderMessage(
     CThostFtdcRemoveParkedOrderField*
        pRemoveParkedOrder,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_REMOVE_PARKED_ORDER_MESSAGE,
                 "OnRspRemoveParkedOrder",
                 pRspInfo, nRequestID, bIsLast) {
    if (pRemoveParkedOrder) {
      removeparkedorder_.reset(
               new CThostFtdcRemoveParkedOrderField());
      std::memcpy(removeparkedorder_.get(),
                  pRemoveParkedOrder,
                  sizeof(CThostFtdcRemoveParkedOrderField));
    }
  }

  virtual ~RspRemoveParkedOrderMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcRemoveParkedOrderField*
     removeParkedOrder() const {
    return removeparkedorder_.get();
  }

 private:
  std::unique_ptr<CThostFtdcRemoveParkedOrderField>
                   removeparkedorder_;
};

class RspRemoveParkedOrderActionMessage : public RspMessage {
 public:
  RspRemoveParkedOrderActionMessage(
     CThostFtdcRemoveParkedOrderActionField*
        pRemoveParkedOrderAction,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_REMOVE_PARKED_ORDER_ACTION_MESSAGE,
                 "OnRspRemoveParkedOrderAction",
                 pRspInfo, nRequestID, bIsLast) {
    if (pRemoveParkedOrderAction) {
      removeparkedorderaction_.reset(
               new CThostFtdcRemoveParkedOrderActionField());
      std::memcpy(removeparkedorderaction_.get(),
                  pRemoveParkedOrderAction,
                  sizeof(CThostFtdcRemoveParkedOrderActionField));
    }
  }

  virtual ~RspRemoveParkedOrderActionMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcRemoveParkedOrderActionField*
     removeParkedOrderAction() const {
    return removeparkedorderaction_.get();
  }

 private:
  std::unique_ptr<CThostFtdcRemoveParkedOrderActionField>
                   removeparkedorderaction_;
};

class RspExecOrderInsertMessage : public RspMessage {
 public:
  RspExecOrderInsertMessage(
     CThostFtdcInputExecOrderField*
        pInputExecOrder,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_EXEC_ORDER_INSERT_MESSAGE,
                 "OnRspExecOrderInsert",
                 pRspInfo, nRequestID, bIsLast) {
    if (pInputExecOrder) {
      inputexecorder_.reset(
               new CThostFtdcInputExecOrderField());
      std::memcpy(inputexecorder_.get(),
                  pInputExecOrder,
                  sizeof(CThostFtdcInputExecOrderField));
    }
  }

  virtual ~RspExecOrderInsertMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcInputExecOrderField*
     inputExecOrder() const {
    return inputexecorder_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInputExecOrderField>
                   inputexecorder_;
};

class RspExecOrderActionMessage : public RspMessage {
 public:
  RspExecOrderActionMessage(
     CThostFtdcInputExecOrderActionField*
        pInputExecOrderAction,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_EXEC_ORDER_ACTION_MESSAGE,
                 "OnRspExecOrderAction",
                 pRspInfo, nRequestID, bIsLast) {
    if (pInputExecOrderAction) {
      inputexecorderaction_.reset(
               new CThostFtdcInputExecOrderActionField());
      std::memcpy(inputexecorderaction_.get(),
                  pInputExecOrderAction,
                  sizeof(CThostFtdcInputExecOrderActionField));
    }
  }

  virtual ~RspExecOrderActionMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcInputExecOrderActionField*
     inputExecOrderAction() const {
    return inputexecorderaction_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInputExecOrderActionField>
                   inputexecorderaction_;
};

class RspForQuoteInsertMessage : public RspMessage {
 public:
  RspForQuoteInsertMessage(
     CThostFtdcInputForQuoteField*
        pInputForQuote,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_FOR_QUOTE_INSERT_MESSAGE,
                 "OnRspForQuoteInsert",
                 pRspInfo, nRequestID, bIsLast) {
    if (pInputForQuote) {
      inputforquote_.reset(
               new CThostFtdcInputForQuoteField());
      std::memcpy(inputforquote_.get(),
                  pInputForQuote,
                  sizeof(CThostFtdcInputForQuoteField));
    }
  }

  virtual ~RspForQuoteInsertMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcInputForQuoteField*
     inputForQuote() const {
    return inputforquote_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInputForQuoteField>
                   inputforquote_;
};

class RspQuoteInsertMessage : public RspMessage {
 public:
  RspQuoteInsertMessage(
     CThostFtdcInputQuoteField*
        pInputQuote,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QUOTE_INSERT_MESSAGE,
                 "OnRspQuoteInsert",
                 pRspInfo, nRequestID, bIsLast) {
    if (pInputQuote) {
      inputquote_.reset(
               new CThostFtdcInputQuoteField());
      std::memcpy(inputquote_.get(),
                  pInputQuote,
                  sizeof(CThostFtdcInputQuoteField));
    }
  }

  virtual ~RspQuoteInsertMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcInputQuoteField*
     inputQuote() const {
    return inputquote_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInputQuoteField>
                   inputquote_;
};

class RspQuoteActionMessage : public RspMessage {
 public:
  RspQuoteActionMessage(
     CThostFtdcInputQuoteActionField*
        pInputQuoteAction,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QUOTE_ACTION_MESSAGE,
                 "OnRspQuoteAction",
                 pRspInfo, nRequestID, bIsLast) {
    if (pInputQuoteAction) {
      inputquoteaction_.reset(
               new CThostFtdcInputQuoteActionField());
      std::memcpy(inputquoteaction_.get(),
                  pInputQuoteAction,
                  sizeof(CThostFtdcInputQuoteActionField));
    }
  }

  virtual ~RspQuoteActionMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcInputQuoteActionField*
     inputQuoteAction() const {
    return inputquoteaction_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInputQuoteActionField>
                   inputquoteaction_;
};

class RspCombActionInsertMessage : public RspMessage {
 public:
  RspCombActionInsertMessage(
     CThostFtdcInputCombActionField*
        pInputCombAction,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_COMB_ACTION_INSERT_MESSAGE,
                 "OnRspCombActionInsert",
                 pRspInfo, nRequestID, bIsLast) {
    if (pInputCombAction) {
      inputcombaction_.reset(
               new CThostFtdcInputCombActionField());
      std::memcpy(inputcombaction_.get(),
                  pInputCombAction,
                  sizeof(CThostFtdcInputCombActionField));
    }
  }

  virtual ~RspCombActionInsertMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcInputCombActionField*
     inputCombAction() const {
    return inputcombaction_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInputCombActionField>
                   inputcombaction_;
};

class RspQryOrderMessage : public RspMessage {
 public:
  RspQryOrderMessage(
     CThostFtdcOrderField*
        pOrder,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_ORDER_MESSAGE,
                 "OnRspQryOrder",
                 pRspInfo, nRequestID, bIsLast) {
    if (pOrder) {
      order_.reset(
               new CThostFtdcOrderField());
      std::memcpy(order_.get(),
                  pOrder,
                  sizeof(CThostFtdcOrderField));
    }
  }

  virtual ~RspQryOrderMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcOrderField*
     order() const {
    return order_.get();
  }

 private:
  std::unique_ptr<CThostFtdcOrderField>
                   order_;
};

class RspQryTradeMessage : public RspMessage {
 public:
  RspQryTradeMessage(
     CThostFtdcTradeField*
        pTrade,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_TRADE_MESSAGE,
                 "OnRspQryTrade",
                 pRspInfo, nRequestID, bIsLast) {
    if (pTrade) {
      trade_.reset(
               new CThostFtdcTradeField());
      std::memcpy(trade_.get(),
                  pTrade,
                  sizeof(CThostFtdcTradeField));
    }
  }

  virtual ~RspQryTradeMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcTradeField*
     trade() const {
    return trade_.get();
  }

 private:
  std::unique_ptr<CThostFtdcTradeField>
                   trade_;
};

class RspQryInvestorPositionMessage : public RspMessage {
 public:
  RspQryInvestorPositionMessage(
     CThostFtdcInvestorPositionField*
        pInvestorPosition,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_INVESTOR_POSITION_MESSAGE,
                 "OnRspQryInvestorPosition",
                 pRspInfo, nRequestID, bIsLast) {
    if (pInvestorPosition) {
      investorposition_.reset(
               new CThostFtdcInvestorPositionField());
      std::memcpy(investorposition_.get(),
                  pInvestorPosition,
                  sizeof(CThostFtdcInvestorPositionField));
    }
  }

  virtual ~RspQryInvestorPositionMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (investorposition_.get()) {
      std::stringstream ss;
      ss <<(*investorposition_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcInvestorPositionField*
     investorPosition() const {
    return investorposition_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInvestorPositionField>
                   investorposition_;
};

class RspQryTradingAccountMessage : public RspMessage {
 public:
  RspQryTradingAccountMessage(
     CThostFtdcTradingAccountField*
        pTradingAccount,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_TRADING_ACCOUNT_MESSAGE,
                 "OnRspQryTradingAccount",
                 pRspInfo, nRequestID, bIsLast) {
    if (pTradingAccount) {
      tradingaccount_.reset(
               new CThostFtdcTradingAccountField());
      std::memcpy(tradingaccount_.get(),
                  pTradingAccount,
                  sizeof(CThostFtdcTradingAccountField));
    }
  }

  virtual ~RspQryTradingAccountMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (tradingaccount_.get()) {
      std::stringstream ss;
      ss <<(*tradingaccount_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcTradingAccountField*
     tradingAccount() const {
    return tradingaccount_.get();
  }

 private:
  std::unique_ptr<CThostFtdcTradingAccountField>
                   tradingaccount_;
};

class RspQryInvestorMessage : public RspMessage {
 public:
  RspQryInvestorMessage(
     CThostFtdcInvestorField*
        pInvestor,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_INVESTOR_MESSAGE,
                 "OnRspQryInvestor",
                 pRspInfo, nRequestID, bIsLast) {
    if (pInvestor) {
      investor_.reset(
               new CThostFtdcInvestorField());
      std::memcpy(investor_.get(),
                  pInvestor,
                  sizeof(CThostFtdcInvestorField));
    }
  }

  virtual ~RspQryInvestorMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (investor_.get()) {
      std::stringstream ss;
      ss <<(*investor_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcInvestorField*
     investor() const {
    return investor_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInvestorField>
                   investor_;
};

class RspQryTradingCodeMessage : public RspMessage {
 public:
  RspQryTradingCodeMessage(
     CThostFtdcTradingCodeField*
        pTradingCode,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_TRADING_CODE_MESSAGE,
                 "OnRspQryTradingCode",
                 pRspInfo, nRequestID, bIsLast) {
    if (pTradingCode) {
      tradingcode_.reset(
               new CThostFtdcTradingCodeField());
      std::memcpy(tradingcode_.get(),
                  pTradingCode,
                  sizeof(CThostFtdcTradingCodeField));
    }
  }

  virtual ~RspQryTradingCodeMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (tradingcode_.get()) {
      std::stringstream ss;
      ss <<(*tradingcode_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcTradingCodeField*
     tradingCode() const {
    return tradingcode_.get();
  }

 private:
  std::unique_ptr<CThostFtdcTradingCodeField>
                   tradingcode_;
};

class RspQryInstrumentMarginRateMessage : public RspMessage {
 public:
  RspQryInstrumentMarginRateMessage(
     CThostFtdcInstrumentMarginRateField*
        pInstrumentMarginRate,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_INSTRUMENT_MARGIN_RATE_MESSAGE,
                 "OnRspQryInstrumentMarginRate",
                 pRspInfo, nRequestID, bIsLast) {
    if (pInstrumentMarginRate) {
      instrumentmarginrate_.reset(
               new CThostFtdcInstrumentMarginRateField());
      std::memcpy(instrumentmarginrate_.get(),
                  pInstrumentMarginRate,
                  sizeof(CThostFtdcInstrumentMarginRateField));
    }
  }

  virtual ~RspQryInstrumentMarginRateMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (instrumentmarginrate_.get()) {
      std::stringstream ss;
      ss <<(*instrumentmarginrate_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcInstrumentMarginRateField*
     instrumentMarginRate() const {
    return instrumentmarginrate_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInstrumentMarginRateField>
                   instrumentmarginrate_;
};

class RspQryInstrumentCommissionRateMessage : public RspMessage {
 public:
  RspQryInstrumentCommissionRateMessage(
     CThostFtdcInstrumentCommissionRateField*
        pInstrumentCommissionRate,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_INSTRUMENT_COMMISSION_RATE_MESSAGE,
                 "OnRspQryInstrumentCommissionRate",
                 pRspInfo, nRequestID, bIsLast) {
    if (pInstrumentCommissionRate) {
      instrumentcommissionrate_.reset(
               new CThostFtdcInstrumentCommissionRateField());
      std::memcpy(instrumentcommissionrate_.get(),
                  pInstrumentCommissionRate,
                  sizeof(CThostFtdcInstrumentCommissionRateField));
    }
  }

  virtual ~RspQryInstrumentCommissionRateMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (instrumentcommissionrate_.get()) {
      std::stringstream ss;
      ss <<(*instrumentcommissionrate_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcInstrumentCommissionRateField*
     instrumentCommissionRate() const {
    return instrumentcommissionrate_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInstrumentCommissionRateField>
                   instrumentcommissionrate_;
};

class RspQryExchangeMessage : public RspMessage {
 public:
  RspQryExchangeMessage(
     CThostFtdcExchangeField*
        pExchange,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_EXCHANGE_MESSAGE,
                 "OnRspQryExchange",
                 pRspInfo, nRequestID, bIsLast) {
    if (pExchange) {
      exchange_.reset(
               new CThostFtdcExchangeField());
      std::memcpy(exchange_.get(),
                  pExchange,
                  sizeof(CThostFtdcExchangeField));
    }
  }

  virtual ~RspQryExchangeMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (exchange_.get()) {
      std::stringstream ss;
      ss <<(*exchange_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcExchangeField*
     exchange() const {
    return exchange_.get();
  }

 private:
  std::unique_ptr<CThostFtdcExchangeField>
                   exchange_;
};

class RspQryProductMessage : public RspMessage {
 public:
  RspQryProductMessage(
     CThostFtdcProductField*
        pProduct,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_PRODUCT_MESSAGE,
                 "OnRspQryProduct",
                 pRspInfo, nRequestID, bIsLast) {
    if (pProduct) {
      product_.reset(
               new CThostFtdcProductField());
      std::memcpy(product_.get(),
                  pProduct,
                  sizeof(CThostFtdcProductField));
    }
  }

  virtual ~RspQryProductMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (product_.get()) {
      std::stringstream ss;
      ss <<(*product_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcProductField*
     product() const {
    return product_.get();
  }

 private:
  std::unique_ptr<CThostFtdcProductField>
                   product_;
};

class RspQryInstrumentMessage : public RspMessage {
 public:
  RspQryInstrumentMessage(
     CThostFtdcInstrumentField*
        pInstrument,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_INSTRUMENT_MESSAGE,
                 "OnRspQryInstrument",
                 pRspInfo, nRequestID, bIsLast) {
    if (pInstrument) {
      instrument_.reset(
               new CThostFtdcInstrumentField());
      std::memcpy(instrument_.get(),
                  pInstrument,
                  sizeof(CThostFtdcInstrumentField));
    }
  }

  virtual ~RspQryInstrumentMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (instrument_.get()) {
      std::stringstream ss;
      ss <<(*instrument_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcInstrumentField*
     instrument() const {
    return instrument_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInstrumentField>
                   instrument_;
};

class RspQryDepthMarketDataMessage : public RspMessage {
 public:
  RspQryDepthMarketDataMessage(
     CThostFtdcDepthMarketDataField*
        pDepthMarketData,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_DEPTH_MARKET_DATA_MESSAGE,
                 "OnRspQryDepthMarketData",
                 pRspInfo, nRequestID, bIsLast) {
    if (pDepthMarketData) {
      depthmarketdata_.reset(
               new CThostFtdcDepthMarketDataField());
      std::memcpy(depthmarketdata_.get(),
                  pDepthMarketData,
                  sizeof(CThostFtdcDepthMarketDataField));
    }
  }

  virtual ~RspQryDepthMarketDataMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcDepthMarketDataField*
     depthMarketData() const {
    return depthmarketdata_.get();
  }

 private:
  std::unique_ptr<CThostFtdcDepthMarketDataField>
                   depthmarketdata_;
};

class RspQrySettlementInfoMessage : public RspMessage {
 public:
  RspQrySettlementInfoMessage(
     CThostFtdcSettlementInfoField*
        pSettlementInfo,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_SETTLEMENT_INFO_MESSAGE,
                 "OnRspQrySettlementInfo",
                 pRspInfo, nRequestID, bIsLast) {
    if (pSettlementInfo) {
      settlementinfo_.reset(
               new CThostFtdcSettlementInfoField());
      std::memcpy(settlementinfo_.get(),
                  pSettlementInfo,
                  sizeof(CThostFtdcSettlementInfoField));
    }
  }

  virtual ~RspQrySettlementInfoMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (settlementinfo_.get()) {
      std::stringstream ss;
      ss <<(*settlementinfo_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcSettlementInfoField*
     settlementInfo() const {
    return settlementinfo_.get();
  }

 private:
  std::unique_ptr<CThostFtdcSettlementInfoField>
                   settlementinfo_;
};

class RspQryTransferBankMessage : public RspMessage {
 public:
  RspQryTransferBankMessage(
     CThostFtdcTransferBankField*
        pTransferBank,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_TRANSFER_BANK_MESSAGE,
                 "OnRspQryTransferBank",
                 pRspInfo, nRequestID, bIsLast) {
    if (pTransferBank) {
      transferbank_.reset(
               new CThostFtdcTransferBankField());
      std::memcpy(transferbank_.get(),
                  pTransferBank,
                  sizeof(CThostFtdcTransferBankField));
    }
  }

  virtual ~RspQryTransferBankMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (transferbank_.get()) {
      std::stringstream ss;
      ss <<(*transferbank_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcTransferBankField*
     transferBank() const {
    return transferbank_.get();
  }

 private:
  std::unique_ptr<CThostFtdcTransferBankField>
                   transferbank_;
};

class RspQryInvestorPositionDetailMessage : public RspMessage {
 public:
  RspQryInvestorPositionDetailMessage(
     CThostFtdcInvestorPositionDetailField*
        pInvestorPositionDetail,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_INVESTOR_POSITION_DETAIL_MESSAGE,
                 "OnRspQryInvestorPositionDetail",
                 pRspInfo, nRequestID, bIsLast) {
    if (pInvestorPositionDetail) {
      investorpositiondetail_.reset(
               new CThostFtdcInvestorPositionDetailField());
      std::memcpy(investorpositiondetail_.get(),
                  pInvestorPositionDetail,
                  sizeof(CThostFtdcInvestorPositionDetailField));
    }
  }

  virtual ~RspQryInvestorPositionDetailMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (investorpositiondetail_.get()) {
      std::stringstream ss;
      ss <<(*investorpositiondetail_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcInvestorPositionDetailField*
     investorPositionDetail() const {
    return investorpositiondetail_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInvestorPositionDetailField>
                   investorpositiondetail_;
};

class RspQryNoticeMessage : public RspMessage {
 public:
  RspQryNoticeMessage(
     CThostFtdcNoticeField*
        pNotice,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_NOTICE_MESSAGE,
                 "OnRspQryNotice",
                 pRspInfo, nRequestID, bIsLast) {
    if (pNotice) {
      notice_.reset(
               new CThostFtdcNoticeField());
      std::memcpy(notice_.get(),
                  pNotice,
                  sizeof(CThostFtdcNoticeField));
    }
  }

  virtual ~RspQryNoticeMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (notice_.get()) {
      std::stringstream ss;
      ss <<(*notice_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcNoticeField*
     notice() const {
    return notice_.get();
  }

 private:
  std::unique_ptr<CThostFtdcNoticeField>
                   notice_;
};

class RspQrySettlementInfoConfirmMessage : public RspMessage {
 public:
  RspQrySettlementInfoConfirmMessage(
     CThostFtdcSettlementInfoConfirmField*
        pSettlementInfoConfirm,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_SETTLEMENT_INFO_CONFIRM_MESSAGE,
                 "OnRspQrySettlementInfoConfirm",
                 pRspInfo, nRequestID, bIsLast) {
    if (pSettlementInfoConfirm) {
      settlementinfoconfirm_.reset(
               new CThostFtdcSettlementInfoConfirmField());
      std::memcpy(settlementinfoconfirm_.get(),
                  pSettlementInfoConfirm,
                  sizeof(CThostFtdcSettlementInfoConfirmField));
    }
  }

  virtual ~RspQrySettlementInfoConfirmMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcSettlementInfoConfirmField*
     settlementInfoConfirm() const {
    return settlementinfoconfirm_.get();
  }

 private:
  std::unique_ptr<CThostFtdcSettlementInfoConfirmField>
                   settlementinfoconfirm_;
};

class RspQryInvestorPositionCombineDetailMessage : public RspMessage {
 public:
  RspQryInvestorPositionCombineDetailMessage(
     CThostFtdcInvestorPositionCombineDetailField*
        pInvestorPositionCombineDetail,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_INVESTOR_POSITION_COMBINE_DETAIL_MESSAGE,
                 "OnRspQryInvestorPositionCombineDetail",
                 pRspInfo, nRequestID, bIsLast) {
    if (pInvestorPositionCombineDetail) {
      investorpositioncombinedetail_.reset(
               new CThostFtdcInvestorPositionCombineDetailField());
      std::memcpy(investorpositioncombinedetail_.get(),
                  pInvestorPositionCombineDetail,
                  sizeof(CThostFtdcInvestorPositionCombineDetailField));
    }
  }

  virtual ~RspQryInvestorPositionCombineDetailMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (investorpositioncombinedetail_.get()) {
      std::stringstream ss;
      ss <<(*investorpositioncombinedetail_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcInvestorPositionCombineDetailField*
     investorPositionCombineDetail() const {
    return investorpositioncombinedetail_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInvestorPositionCombineDetailField>
                   investorpositioncombinedetail_;
};

class RspQryCFMMCTradingAccountKeyMessage : public RspMessage {
 public:
  RspQryCFMMCTradingAccountKeyMessage(
     CThostFtdcCFMMCTradingAccountKeyField*
        pCFMMCTradingAccountKey,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_C_F_M_M_C_TRADING_ACCOUNT_KEY_MESSAGE,
                 "OnRspQryCFMMCTradingAccountKey",
                 pRspInfo, nRequestID, bIsLast) {
    if (pCFMMCTradingAccountKey) {
      cfmmctradingaccountkey_.reset(
               new CThostFtdcCFMMCTradingAccountKeyField());
      std::memcpy(cfmmctradingaccountkey_.get(),
                  pCFMMCTradingAccountKey,
                  sizeof(CThostFtdcCFMMCTradingAccountKeyField));
    }
  }

  virtual ~RspQryCFMMCTradingAccountKeyMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (cfmmctradingaccountkey_.get()) {
      std::stringstream ss;
      ss <<(*cfmmctradingaccountkey_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcCFMMCTradingAccountKeyField*
     cFMMCTradingAccountKey() const {
    return cfmmctradingaccountkey_.get();
  }

 private:
  std::unique_ptr<CThostFtdcCFMMCTradingAccountKeyField>
                   cfmmctradingaccountkey_;
};

class RspQryEWarrantOffsetMessage : public RspMessage {
 public:
  RspQryEWarrantOffsetMessage(
     CThostFtdcEWarrantOffsetField*
        pEWarrantOffset,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_E_WARRANT_OFFSET_MESSAGE,
                 "OnRspQryEWarrantOffset",
                 pRspInfo, nRequestID, bIsLast) {
    if (pEWarrantOffset) {
      ewarrantoffset_.reset(
               new CThostFtdcEWarrantOffsetField());
      std::memcpy(ewarrantoffset_.get(),
                  pEWarrantOffset,
                  sizeof(CThostFtdcEWarrantOffsetField));
    }
  }

  virtual ~RspQryEWarrantOffsetMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (ewarrantoffset_.get()) {
      std::stringstream ss;
      ss <<(*ewarrantoffset_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcEWarrantOffsetField*
     eWarrantOffset() const {
    return ewarrantoffset_.get();
  }

 private:
  std::unique_ptr<CThostFtdcEWarrantOffsetField>
                   ewarrantoffset_;
};

class RspQryInvestorProductGroupMarginMessage : public RspMessage {
 public:
  RspQryInvestorProductGroupMarginMessage(
     CThostFtdcInvestorProductGroupMarginField*
        pInvestorProductGroupMargin,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_INVESTOR_PRODUCT_GROUP_MARGIN_MESSAGE,
                 "OnRspQryInvestorProductGroupMargin",
                 pRspInfo, nRequestID, bIsLast) {
    if (pInvestorProductGroupMargin) {
      investorproductgroupmargin_.reset(
               new CThostFtdcInvestorProductGroupMarginField());
      std::memcpy(investorproductgroupmargin_.get(),
                  pInvestorProductGroupMargin,
                  sizeof(CThostFtdcInvestorProductGroupMarginField));
    }
  }

  virtual ~RspQryInvestorProductGroupMarginMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (investorproductgroupmargin_.get()) {
      std::stringstream ss;
      ss <<(*investorproductgroupmargin_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcInvestorProductGroupMarginField*
     investorProductGroupMargin() const {
    return investorproductgroupmargin_.get();
  }

 private:
  std::unique_ptr<CThostFtdcInvestorProductGroupMarginField>
                   investorproductgroupmargin_;
};

class RspQryExchangeMarginRateMessage : public RspMessage {
 public:
  RspQryExchangeMarginRateMessage(
     CThostFtdcExchangeMarginRateField*
        pExchangeMarginRate,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_EXCHANGE_MARGIN_RATE_MESSAGE,
                 "OnRspQryExchangeMarginRate",
                 pRspInfo, nRequestID, bIsLast) {
    if (pExchangeMarginRate) {
      exchangemarginrate_.reset(
               new CThostFtdcExchangeMarginRateField());
      std::memcpy(exchangemarginrate_.get(),
                  pExchangeMarginRate,
                  sizeof(CThostFtdcExchangeMarginRateField));
    }
  }

  virtual ~RspQryExchangeMarginRateMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (exchangemarginrate_.get()) {
      std::stringstream ss;
      ss <<(*exchangemarginrate_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcExchangeMarginRateField*
     exchangeMarginRate() const {
    return exchangemarginrate_.get();
  }

 private:
  std::unique_ptr<CThostFtdcExchangeMarginRateField>
                   exchangemarginrate_;
};

class RspQryExchangeMarginRateAdjustMessage : public RspMessage {
 public:
  RspQryExchangeMarginRateAdjustMessage(
     CThostFtdcExchangeMarginRateAdjustField*
        pExchangeMarginRateAdjust,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_EXCHANGE_MARGIN_RATE_ADJUST_MESSAGE,
                 "OnRspQryExchangeMarginRateAdjust",
                 pRspInfo, nRequestID, bIsLast) {
    if (pExchangeMarginRateAdjust) {
      exchangemarginrateadjust_.reset(
               new CThostFtdcExchangeMarginRateAdjustField());
      std::memcpy(exchangemarginrateadjust_.get(),
                  pExchangeMarginRateAdjust,
                  sizeof(CThostFtdcExchangeMarginRateAdjustField));
    }
  }

  virtual ~RspQryExchangeMarginRateAdjustMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (exchangemarginrateadjust_.get()) {
      std::stringstream ss;
      ss <<(*exchangemarginrateadjust_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcExchangeMarginRateAdjustField*
     exchangeMarginRateAdjust() const {
    return exchangemarginrateadjust_.get();
  }

 private:
  std::unique_ptr<CThostFtdcExchangeMarginRateAdjustField>
                   exchangemarginrateadjust_;
};

class RspQryExchangeRateMessage : public RspMessage {
 public:
  RspQryExchangeRateMessage(
     CThostFtdcExchangeRateField*
        pExchangeRate,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_EXCHANGE_RATE_MESSAGE,
                 "OnRspQryExchangeRate",
                 pRspInfo, nRequestID, bIsLast) {
    if (pExchangeRate) {
      exchangerate_.reset(
               new CThostFtdcExchangeRateField());
      std::memcpy(exchangerate_.get(),
                  pExchangeRate,
                  sizeof(CThostFtdcExchangeRateField));
    }
  }

  virtual ~RspQryExchangeRateMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (exchangerate_.get()) {
      std::stringstream ss;
      ss <<(*exchangerate_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcExchangeRateField*
     exchangeRate() const {
    return exchangerate_.get();
  }

 private:
  std::unique_ptr<CThostFtdcExchangeRateField>
                   exchangerate_;
};

class RspQrySecAgentACIDMapMessage : public RspMessage {
 public:
  RspQrySecAgentACIDMapMessage(
     CThostFtdcSecAgentACIDMapField*
        pSecAgentACIDMap,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_SEC_AGENT_A_C_I_D_MAP_MESSAGE,
                 "OnRspQrySecAgentACIDMap",
                 pRspInfo, nRequestID, bIsLast) {
    if (pSecAgentACIDMap) {
      secagentacidmap_.reset(
               new CThostFtdcSecAgentACIDMapField());
      std::memcpy(secagentacidmap_.get(),
                  pSecAgentACIDMap,
                  sizeof(CThostFtdcSecAgentACIDMapField));
    }
  }

  virtual ~RspQrySecAgentACIDMapMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (secagentacidmap_.get()) {
      std::stringstream ss;
      ss <<(*secagentacidmap_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcSecAgentACIDMapField*
     secAgentACIDMap() const {
    return secagentacidmap_.get();
  }

 private:
  std::unique_ptr<CThostFtdcSecAgentACIDMapField>
                   secagentacidmap_;
};

class RspQryProductExchRateMessage : public RspMessage {
 public:
  RspQryProductExchRateMessage(
     CThostFtdcProductExchRateField*
        pProductExchRate,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_PRODUCT_EXCH_RATE_MESSAGE,
                 "OnRspQryProductExchRate",
                 pRspInfo, nRequestID, bIsLast) {
    if (pProductExchRate) {
      productexchrate_.reset(
               new CThostFtdcProductExchRateField());
      std::memcpy(productexchrate_.get(),
                  pProductExchRate,
                  sizeof(CThostFtdcProductExchRateField));
    }
  }

  virtual ~RspQryProductExchRateMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (productexchrate_.get()) {
      std::stringstream ss;
      ss <<(*productexchrate_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcProductExchRateField*
     productExchRate() const {
    return productexchrate_.get();
  }

 private:
  std::unique_ptr<CThostFtdcProductExchRateField>
                   productexchrate_;
};

class RspQryOptionInstrTradeCostMessage : public RspMessage {
 public:
  RspQryOptionInstrTradeCostMessage(
     CThostFtdcOptionInstrTradeCostField*
        pOptionInstrTradeCost,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_OPTION_INSTR_TRADE_COST_MESSAGE,
                 "OnRspQryOptionInstrTradeCost",
                 pRspInfo, nRequestID, bIsLast) {
    if (pOptionInstrTradeCost) {
      optioninstrtradecost_.reset(
               new CThostFtdcOptionInstrTradeCostField());
      std::memcpy(optioninstrtradecost_.get(),
                  pOptionInstrTradeCost,
                  sizeof(CThostFtdcOptionInstrTradeCostField));
    }
  }

  virtual ~RspQryOptionInstrTradeCostMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (optioninstrtradecost_.get()) {
      std::stringstream ss;
      ss <<(*optioninstrtradecost_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcOptionInstrTradeCostField*
     optionInstrTradeCost() const {
    return optioninstrtradecost_.get();
  }

 private:
  std::unique_ptr<CThostFtdcOptionInstrTradeCostField>
                   optioninstrtradecost_;
};

class RspQryOptionInstrCommRateMessage : public RspMessage {
 public:
  RspQryOptionInstrCommRateMessage(
     CThostFtdcOptionInstrCommRateField*
        pOptionInstrCommRate,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_OPTION_INSTR_COMM_RATE_MESSAGE,
                 "OnRspQryOptionInstrCommRate",
                 pRspInfo, nRequestID, bIsLast) {
    if (pOptionInstrCommRate) {
      optioninstrcommrate_.reset(
               new CThostFtdcOptionInstrCommRateField());
      std::memcpy(optioninstrcommrate_.get(),
                  pOptionInstrCommRate,
                  sizeof(CThostFtdcOptionInstrCommRateField));
    }
  }

  virtual ~RspQryOptionInstrCommRateMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (optioninstrcommrate_.get()) {
      std::stringstream ss;
      ss <<(*optioninstrcommrate_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcOptionInstrCommRateField*
     optionInstrCommRate() const {
    return optioninstrcommrate_.get();
  }

 private:
  std::unique_ptr<CThostFtdcOptionInstrCommRateField>
                   optioninstrcommrate_;
};

class RspQryExecOrderMessage : public RspMessage {
 public:
  RspQryExecOrderMessage(
     CThostFtdcExecOrderField*
        pExecOrder,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_EXEC_ORDER_MESSAGE,
                 "OnRspQryExecOrder",
                 pRspInfo, nRequestID, bIsLast) {
    if (pExecOrder) {
      execorder_.reset(
               new CThostFtdcExecOrderField());
      std::memcpy(execorder_.get(),
                  pExecOrder,
                  sizeof(CThostFtdcExecOrderField));
    }
  }

  virtual ~RspQryExecOrderMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcExecOrderField*
     execOrder() const {
    return execorder_.get();
  }

 private:
  std::unique_ptr<CThostFtdcExecOrderField>
                   execorder_;
};

class RspQryForQuoteMessage : public RspMessage {
 public:
  RspQryForQuoteMessage(
     CThostFtdcForQuoteField*
        pForQuote,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_FOR_QUOTE_MESSAGE,
                 "OnRspQryForQuote",
                 pRspInfo, nRequestID, bIsLast) {
    if (pForQuote) {
      forquote_.reset(
               new CThostFtdcForQuoteField());
      std::memcpy(forquote_.get(),
                  pForQuote,
                  sizeof(CThostFtdcForQuoteField));
    }
  }

  virtual ~RspQryForQuoteMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (forquote_.get()) {
      std::stringstream ss;
      ss <<(*forquote_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcForQuoteField*
     forQuote() const {
    return forquote_.get();
  }

 private:
  std::unique_ptr<CThostFtdcForQuoteField>
                   forquote_;
};

class RspQryQuoteMessage : public RspMessage {
 public:
  RspQryQuoteMessage(
     CThostFtdcQuoteField*
        pQuote,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_QUOTE_MESSAGE,
                 "OnRspQryQuote",
                 pRspInfo, nRequestID, bIsLast) {
    if (pQuote) {
      quote_.reset(
               new CThostFtdcQuoteField());
      std::memcpy(quote_.get(),
                  pQuote,
                  sizeof(CThostFtdcQuoteField));
    }
  }

  virtual ~RspQryQuoteMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcQuoteField*
     quote() const {
    return quote_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQuoteField>
                   quote_;
};

class RspQryCombInstrumentGuardMessage : public RspMessage {
 public:
  RspQryCombInstrumentGuardMessage(
     CThostFtdcCombInstrumentGuardField*
        pCombInstrumentGuard,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_COMB_INSTRUMENT_GUARD_MESSAGE,
                 "OnRspQryCombInstrumentGuard",
                 pRspInfo, nRequestID, bIsLast) {
    if (pCombInstrumentGuard) {
      combinstrumentguard_.reset(
               new CThostFtdcCombInstrumentGuardField());
      std::memcpy(combinstrumentguard_.get(),
                  pCombInstrumentGuard,
                  sizeof(CThostFtdcCombInstrumentGuardField));
    }
  }

  virtual ~RspQryCombInstrumentGuardMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (combinstrumentguard_.get()) {
      std::stringstream ss;
      ss <<(*combinstrumentguard_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcCombInstrumentGuardField*
     combInstrumentGuard() const {
    return combinstrumentguard_.get();
  }

 private:
  std::unique_ptr<CThostFtdcCombInstrumentGuardField>
                   combinstrumentguard_;
};

class RspQryCombActionMessage : public RspMessage {
 public:
  RspQryCombActionMessage(
     CThostFtdcCombActionField*
        pCombAction,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_COMB_ACTION_MESSAGE,
                 "OnRspQryCombAction",
                 pRspInfo, nRequestID, bIsLast) {
    if (pCombAction) {
      combaction_.reset(
               new CThostFtdcCombActionField());
      std::memcpy(combaction_.get(),
                  pCombAction,
                  sizeof(CThostFtdcCombActionField));
    }
  }

  virtual ~RspQryCombActionMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcCombActionField*
     combAction() const {
    return combaction_.get();
  }

 private:
  std::unique_ptr<CThostFtdcCombActionField>
                   combaction_;
};

class RspQryTransferSerialMessage : public RspMessage {
 public:
  RspQryTransferSerialMessage(
     CThostFtdcTransferSerialField*
        pTransferSerial,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_TRANSFER_SERIAL_MESSAGE,
                 "OnRspQryTransferSerial",
                 pRspInfo, nRequestID, bIsLast) {
    if (pTransferSerial) {
      transferserial_.reset(
               new CThostFtdcTransferSerialField());
      std::memcpy(transferserial_.get(),
                  pTransferSerial,
                  sizeof(CThostFtdcTransferSerialField));
    }
  }

  virtual ~RspQryTransferSerialMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (transferserial_.get()) {
      std::stringstream ss;
      ss <<(*transferserial_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcTransferSerialField*
     transferSerial() const {
    return transferserial_.get();
  }

 private:
  std::unique_ptr<CThostFtdcTransferSerialField>
                   transferserial_;
};

class RspQryAccountregisterMessage : public RspMessage {
 public:
  RspQryAccountregisterMessage(
     CThostFtdcAccountregisterField*
        pAccountregister,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_ACCOUNTREGISTER_MESSAGE,
                 "OnRspQryAccountregister",
                 pRspInfo, nRequestID, bIsLast) {
    if (pAccountregister) {
      accountregister_.reset(
               new CThostFtdcAccountregisterField());
      std::memcpy(accountregister_.get(),
                  pAccountregister,
                  sizeof(CThostFtdcAccountregisterField));
    }
  }

  virtual ~RspQryAccountregisterMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (accountregister_.get()) {
      std::stringstream ss;
      ss <<(*accountregister_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcAccountregisterField*
     accountregister() const {
    return accountregister_.get();
  }

 private:
  std::unique_ptr<CThostFtdcAccountregisterField>
                   accountregister_;
};

class RspQryContractBankMessage : public RspMessage {
 public:
  RspQryContractBankMessage(
     CThostFtdcContractBankField*
        pContractBank,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_CONTRACT_BANK_MESSAGE,
                 "OnRspQryContractBank",
                 pRspInfo, nRequestID, bIsLast) {
    if (pContractBank) {
      contractbank_.reset(
               new CThostFtdcContractBankField());
      std::memcpy(contractbank_.get(),
                  pContractBank,
                  sizeof(CThostFtdcContractBankField));
    }
  }

  virtual ~RspQryContractBankMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (contractbank_.get()) {
      std::stringstream ss;
      ss <<(*contractbank_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcContractBankField*
     contractBank() const {
    return contractbank_.get();
  }

 private:
  std::unique_ptr<CThostFtdcContractBankField>
                   contractbank_;
};

class RspQryParkedOrderMessage : public RspMessage {
 public:
  RspQryParkedOrderMessage(
     CThostFtdcParkedOrderField*
        pParkedOrder,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_PARKED_ORDER_MESSAGE,
                 "OnRspQryParkedOrder",
                 pRspInfo, nRequestID, bIsLast) {
    if (pParkedOrder) {
      parkedorder_.reset(
               new CThostFtdcParkedOrderField());
      std::memcpy(parkedorder_.get(),
                  pParkedOrder,
                  sizeof(CThostFtdcParkedOrderField));
    }
  }

  virtual ~RspQryParkedOrderMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcParkedOrderField*
     parkedOrder() const {
    return parkedorder_.get();
  }

 private:
  std::unique_ptr<CThostFtdcParkedOrderField>
                   parkedorder_;
};

class RspQryParkedOrderActionMessage : public RspMessage {
 public:
  RspQryParkedOrderActionMessage(
     CThostFtdcParkedOrderActionField*
        pParkedOrderAction,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_PARKED_ORDER_ACTION_MESSAGE,
                 "OnRspQryParkedOrderAction",
                 pRspInfo, nRequestID, bIsLast) {
    if (pParkedOrderAction) {
      parkedorderaction_.reset(
               new CThostFtdcParkedOrderActionField());
      std::memcpy(parkedorderaction_.get(),
                  pParkedOrderAction,
                  sizeof(CThostFtdcParkedOrderActionField));
    }
  }

  virtual ~RspQryParkedOrderActionMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcParkedOrderActionField*
     parkedOrderAction() const {
    return parkedorderaction_.get();
  }

 private:
  std::unique_ptr<CThostFtdcParkedOrderActionField>
                   parkedorderaction_;
};

class RspQryTradingNoticeMessage : public RspMessage {
 public:
  RspQryTradingNoticeMessage(
     CThostFtdcTradingNoticeField*
        pTradingNotice,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_TRADING_NOTICE_MESSAGE,
                 "OnRspQryTradingNotice",
                 pRspInfo, nRequestID, bIsLast) {
    if (pTradingNotice) {
      tradingnotice_.reset(
               new CThostFtdcTradingNoticeField());
      std::memcpy(tradingnotice_.get(),
                  pTradingNotice,
                  sizeof(CThostFtdcTradingNoticeField));
    }
  }

  virtual ~RspQryTradingNoticeMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (tradingnotice_.get()) {
      std::stringstream ss;
      ss <<(*tradingnotice_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcTradingNoticeField*
     tradingNotice() const {
    return tradingnotice_.get();
  }

 private:
  std::unique_ptr<CThostFtdcTradingNoticeField>
                   tradingnotice_;
};

class RspQryBrokerTradingParamsMessage : public RspMessage {
 public:
  RspQryBrokerTradingParamsMessage(
     CThostFtdcBrokerTradingParamsField*
        pBrokerTradingParams,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_BROKER_TRADING_PARAMS_MESSAGE,
                 "OnRspQryBrokerTradingParams",
                 pRspInfo, nRequestID, bIsLast) {
    if (pBrokerTradingParams) {
      brokertradingparams_.reset(
               new CThostFtdcBrokerTradingParamsField());
      std::memcpy(brokertradingparams_.get(),
                  pBrokerTradingParams,
                  sizeof(CThostFtdcBrokerTradingParamsField));
    }
  }

  virtual ~RspQryBrokerTradingParamsMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (brokertradingparams_.get()) {
      std::stringstream ss;
      ss <<(*brokertradingparams_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcBrokerTradingParamsField*
     brokerTradingParams() const {
    return brokertradingparams_.get();
  }

 private:
  std::unique_ptr<CThostFtdcBrokerTradingParamsField>
                   brokertradingparams_;
};

class RspQryBrokerTradingAlgosMessage : public RspMessage {
 public:
  RspQryBrokerTradingAlgosMessage(
     CThostFtdcBrokerTradingAlgosField*
        pBrokerTradingAlgos,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_BROKER_TRADING_ALGOS_MESSAGE,
                 "OnRspQryBrokerTradingAlgos",
                 pRspInfo, nRequestID, bIsLast) {
    if (pBrokerTradingAlgos) {
      brokertradingalgos_.reset(
               new CThostFtdcBrokerTradingAlgosField());
      std::memcpy(brokertradingalgos_.get(),
                  pBrokerTradingAlgos,
                  sizeof(CThostFtdcBrokerTradingAlgosField));
    }
  }

  virtual ~RspQryBrokerTradingAlgosMessage() {
  }

  virtual std::string toString() const {
    json::Document doc;
    toJSON(&doc);
    return json::toString(doc);
  }

  virtual void toJSON(json::Document* doc) const {
    assert(doc);
    json::Document msg_doc;
    if (brokertradingalgos_.get()) {
      std::stringstream ss;
      ss <<(*brokertradingalgos_);
      json::Document d;
      json::fromString(ss.str(), &d);
      json::appendDoc(&msg_doc, d);
    }

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcBrokerTradingAlgosField*
     brokerTradingAlgos() const {
    return brokertradingalgos_.get();
  }

 private:
  std::unique_ptr<CThostFtdcBrokerTradingAlgosField>
                   brokertradingalgos_;
};

class RspQueryCFMMCTradingAccountTokenMessage : public RspMessage {
 public:
  RspQueryCFMMCTradingAccountTokenMessage(
     CThostFtdcQueryCFMMCTradingAccountTokenField*
        pQueryCFMMCTradingAccountToken,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QUERY_C_F_M_M_C_TRADING_ACCOUNT_TOKEN_MESSAGE,
                 "OnRspQueryCFMMCTradingAccountToken",
                 pRspInfo, nRequestID, bIsLast) {
    if (pQueryCFMMCTradingAccountToken) {
      querycfmmctradingaccounttoken_.reset(
               new CThostFtdcQueryCFMMCTradingAccountTokenField());
      std::memcpy(querycfmmctradingaccounttoken_.get(),
                  pQueryCFMMCTradingAccountToken,
                  sizeof(CThostFtdcQueryCFMMCTradingAccountTokenField));
    }
  }

  virtual ~RspQueryCFMMCTradingAccountTokenMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcQueryCFMMCTradingAccountTokenField*
     queryCFMMCTradingAccountToken() const {
    return querycfmmctradingaccounttoken_.get();
  }

 private:
  std::unique_ptr<CThostFtdcQueryCFMMCTradingAccountTokenField>
                   querycfmmctradingaccounttoken_;
};

class RspFromBankToFutureByFutureMessage : public RspMessage {
 public:
  RspFromBankToFutureByFutureMessage(
     CThostFtdcReqTransferField*
        pReqTransfer,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_FROM_BANK_TO_FUTURE_BY_FUTURE_MESSAGE,
                 "OnRspFromBankToFutureByFuture",
                 pRspInfo, nRequestID, bIsLast) {
    if (pReqTransfer) {
      reqtransfer_.reset(
               new CThostFtdcReqTransferField());
      std::memcpy(reqtransfer_.get(),
                  pReqTransfer,
                  sizeof(CThostFtdcReqTransferField));
    }
  }

  virtual ~RspFromBankToFutureByFutureMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcReqTransferField*
     reqTransfer() const {
    return reqtransfer_.get();
  }

 private:
  std::unique_ptr<CThostFtdcReqTransferField>
                   reqtransfer_;
};

class RspFromFutureToBankByFutureMessage : public RspMessage {
 public:
  RspFromFutureToBankByFutureMessage(
     CThostFtdcReqTransferField*
        pReqTransfer,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_FROM_FUTURE_TO_BANK_BY_FUTURE_MESSAGE,
                 "OnRspFromFutureToBankByFuture",
                 pRspInfo, nRequestID, bIsLast) {
    if (pReqTransfer) {
      reqtransfer_.reset(
               new CThostFtdcReqTransferField());
      std::memcpy(reqtransfer_.get(),
                  pReqTransfer,
                  sizeof(CThostFtdcReqTransferField));
    }
  }

  virtual ~RspFromFutureToBankByFutureMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcReqTransferField*
     reqTransfer() const {
    return reqtransfer_.get();
  }

 private:
  std::unique_ptr<CThostFtdcReqTransferField>
                   reqtransfer_;
};

class RspQueryBankAccountMoneyByFutureMessage : public RspMessage {
 public:
  RspQueryBankAccountMoneyByFutureMessage(
     CThostFtdcReqQueryAccountField*
        pReqQueryAccount,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QUERY_BANK_ACCOUNT_MONEY_BY_FUTURE_MESSAGE,
                 "OnRspQueryBankAccountMoneyByFuture",
                 pRspInfo, nRequestID, bIsLast) {
    if (pReqQueryAccount) {
      reqqueryaccount_.reset(
               new CThostFtdcReqQueryAccountField());
      std::memcpy(reqqueryaccount_.get(),
                  pReqQueryAccount,
                  sizeof(CThostFtdcReqQueryAccountField));
    }
  }

  virtual ~RspQueryBankAccountMoneyByFutureMessage() {
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

    RspMessage::toJSON(&msg_doc);
    json::addMember<const json::Document&>(doc, name(), msg_doc);
  }

  CThostFtdcReqQueryAccountField*
     reqQueryAccount() const {
    return reqqueryaccount_.get();
  }

 private:
  std::unique_ptr<CThostFtdcReqQueryAccountField>
                   reqqueryaccount_;
};


};  // namespace cata

#endif
