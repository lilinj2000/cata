// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_REQMESSAGE_HH
#define CATA_REQMESSAGE_HH

#include <memory>
#include "ThostFtdcUserApiStruct.h"
#include "Message.hh"

namespace cata {

class ReqUserLoginMessage : public Message {
  ReqUserLoginMessage(
     CThostFtdcReqUserLoginField*
     pReqUserLoginField,
  int nRequestID):
      Message(REQ_USER_LOGIN_MESSAGE)
      request_id_(nRequestID) {
    requserloginfield_.reset(
             new CThostFtdcReqUserLoginField());
    std::memcpy(requserloginfield_.get(),
                pReqUserLoginField,
                sizeof(CThostFtdcReqUserLoginField));
  }

  virtual ~ReqUserLoginMessage() {
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
  ReqUserLogoutMessage(
     CThostFtdcUserLogoutField*
     pUserLogout,
  int nRequestID):
      Message(REQ_USER_LOGOUT_MESSAGE)
      request_id_(nRequestID) {
    userlogout_.reset(
             new CThostFtdcUserLogoutField());
    std::memcpy(userlogout_.get(),
                pUserLogout,
                sizeof(CThostFtdcUserLogoutField));
  }

  virtual ~ReqUserLogoutMessage() {
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
  ReqAuthenticateMessage(
     CThostFtdcReqAuthenticateField*
     pReqAuthenticateField,
  int nRequestID):
      Message(REQ_AUTHENTICATE_MESSAGE)
      request_id_(nRequestID) {
    reqauthenticatefield_.reset(
             new CThostFtdcReqAuthenticateField());
    std::memcpy(reqauthenticatefield_.get(),
                pReqAuthenticateField,
                sizeof(CThostFtdcReqAuthenticateField));
  }

  virtual ~ReqAuthenticateMessage() {
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
  ReqUserPasswordUpdateMessage(
     CThostFtdcUserPasswordUpdateField*
     pUserPasswordUpdate,
  int nRequestID):
      Message(REQ_USER_PASSWORD_UPDATE_MESSAGE)
      request_id_(nRequestID) {
    userpasswordupdate_.reset(
             new CThostFtdcUserPasswordUpdateField());
    std::memcpy(userpasswordupdate_.get(),
                pUserPasswordUpdate,
                sizeof(CThostFtdcUserPasswordUpdateField));
  }

  virtual ~ReqUserPasswordUpdateMessage() {
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
  ReqTradingAccountPasswordUpdateMessage(
     CThostFtdcTradingAccountPasswordUpdateField*
     pTradingAccountPasswordUpdate,
  int nRequestID):
      Message(REQ_TRADING_ACCOUNT_PASSWORD_UPDATE_MESSAGE)
      request_id_(nRequestID) {
    tradingaccountpasswordupdate_.reset(
             new CThostFtdcTradingAccountPasswordUpdateField());
    std::memcpy(tradingaccountpasswordupdate_.get(),
                pTradingAccountPasswordUpdate,
                sizeof(CThostFtdcTradingAccountPasswordUpdateField));
  }

  virtual ~ReqTradingAccountPasswordUpdateMessage() {
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
  ReqOrderInsertMessage(
     CThostFtdcInputOrderField*
     pInputOrder,
  int nRequestID):
      Message(REQ_ORDER_INSERT_MESSAGE)
      request_id_(nRequestID) {
    inputorder_.reset(
             new CThostFtdcInputOrderField());
    std::memcpy(inputorder_.get(),
                pInputOrder,
                sizeof(CThostFtdcInputOrderField));
  }

  virtual ~ReqOrderInsertMessage() {
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
  ReqParkedOrderInsertMessage(
     CThostFtdcParkedOrderField*
     pParkedOrder,
  int nRequestID):
      Message(REQ_PARKED_ORDER_INSERT_MESSAGE)
      request_id_(nRequestID) {
    parkedorder_.reset(
             new CThostFtdcParkedOrderField());
    std::memcpy(parkedorder_.get(),
                pParkedOrder,
                sizeof(CThostFtdcParkedOrderField));
  }

  virtual ~ReqParkedOrderInsertMessage() {
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
  ReqParkedOrderActionMessage(
     CThostFtdcParkedOrderActionField*
     pParkedOrderAction,
  int nRequestID):
      Message(REQ_PARKED_ORDER_ACTION_MESSAGE)
      request_id_(nRequestID) {
    parkedorderaction_.reset(
             new CThostFtdcParkedOrderActionField());
    std::memcpy(parkedorderaction_.get(),
                pParkedOrderAction,
                sizeof(CThostFtdcParkedOrderActionField));
  }

  virtual ~ReqParkedOrderActionMessage() {
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
  ReqOrderActionMessage(
     CThostFtdcInputOrderActionField*
     pInputOrderAction,
  int nRequestID):
      Message(REQ_ORDER_ACTION_MESSAGE)
      request_id_(nRequestID) {
    inputorderaction_.reset(
             new CThostFtdcInputOrderActionField());
    std::memcpy(inputorderaction_.get(),
                pInputOrderAction,
                sizeof(CThostFtdcInputOrderActionField));
  }

  virtual ~ReqOrderActionMessage() {
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
  ReqQueryMaxOrderVolumeMessage(
     CThostFtdcQueryMaxOrderVolumeField*
     pQueryMaxOrderVolume,
  int nRequestID):
      Message(REQ_QUERY_MAX_ORDER_VOLUME_MESSAGE)
      request_id_(nRequestID) {
    querymaxordervolume_.reset(
             new CThostFtdcQueryMaxOrderVolumeField());
    std::memcpy(querymaxordervolume_.get(),
                pQueryMaxOrderVolume,
                sizeof(CThostFtdcQueryMaxOrderVolumeField));
  }

  virtual ~ReqQueryMaxOrderVolumeMessage() {
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
  ReqSettlementInfoConfirmMessage(
     CThostFtdcSettlementInfoConfirmField*
     pSettlementInfoConfirm,
  int nRequestID):
      Message(REQ_SETTLEMENT_INFO_CONFIRM_MESSAGE)
      request_id_(nRequestID) {
    settlementinfoconfirm_.reset(
             new CThostFtdcSettlementInfoConfirmField());
    std::memcpy(settlementinfoconfirm_.get(),
                pSettlementInfoConfirm,
                sizeof(CThostFtdcSettlementInfoConfirmField));
  }

  virtual ~ReqSettlementInfoConfirmMessage() {
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
  ReqRemoveParkedOrderMessage(
     CThostFtdcRemoveParkedOrderField*
     pRemoveParkedOrder,
  int nRequestID):
      Message(REQ_REMOVE_PARKED_ORDER_MESSAGE)
      request_id_(nRequestID) {
    removeparkedorder_.reset(
             new CThostFtdcRemoveParkedOrderField());
    std::memcpy(removeparkedorder_.get(),
                pRemoveParkedOrder,
                sizeof(CThostFtdcRemoveParkedOrderField));
  }

  virtual ~ReqRemoveParkedOrderMessage() {
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
  ReqRemoveParkedOrderActionMessage(
     CThostFtdcRemoveParkedOrderActionField*
     pRemoveParkedOrderAction,
  int nRequestID):
      Message(REQ_REMOVE_PARKED_ORDER_ACTION_MESSAGE)
      request_id_(nRequestID) {
    removeparkedorderaction_.reset(
             new CThostFtdcRemoveParkedOrderActionField());
    std::memcpy(removeparkedorderaction_.get(),
                pRemoveParkedOrderAction,
                sizeof(CThostFtdcRemoveParkedOrderActionField));
  }

  virtual ~ReqRemoveParkedOrderActionMessage() {
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
  ReqExecOrderInsertMessage(
     CThostFtdcInputExecOrderField*
     pInputExecOrder,
  int nRequestID):
      Message(REQ_EXEC_ORDER_INSERT_MESSAGE)
      request_id_(nRequestID) {
    inputexecorder_.reset(
             new CThostFtdcInputExecOrderField());
    std::memcpy(inputexecorder_.get(),
                pInputExecOrder,
                sizeof(CThostFtdcInputExecOrderField));
  }

  virtual ~ReqExecOrderInsertMessage() {
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
  ReqExecOrderActionMessage(
     CThostFtdcInputExecOrderActionField*
     pInputExecOrderAction,
  int nRequestID):
      Message(REQ_EXEC_ORDER_ACTION_MESSAGE)
      request_id_(nRequestID) {
    inputexecorderaction_.reset(
             new CThostFtdcInputExecOrderActionField());
    std::memcpy(inputexecorderaction_.get(),
                pInputExecOrderAction,
                sizeof(CThostFtdcInputExecOrderActionField));
  }

  virtual ~ReqExecOrderActionMessage() {
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
  ReqForQuoteInsertMessage(
     CThostFtdcInputForQuoteField*
     pInputForQuote,
  int nRequestID):
      Message(REQ_FOR_QUOTE_INSERT_MESSAGE)
      request_id_(nRequestID) {
    inputforquote_.reset(
             new CThostFtdcInputForQuoteField());
    std::memcpy(inputforquote_.get(),
                pInputForQuote,
                sizeof(CThostFtdcInputForQuoteField));
  }

  virtual ~ReqForQuoteInsertMessage() {
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
  ReqQuoteInsertMessage(
     CThostFtdcInputQuoteField*
     pInputQuote,
  int nRequestID):
      Message(REQ_QUOTE_INSERT_MESSAGE)
      request_id_(nRequestID) {
    inputquote_.reset(
             new CThostFtdcInputQuoteField());
    std::memcpy(inputquote_.get(),
                pInputQuote,
                sizeof(CThostFtdcInputQuoteField));
  }

  virtual ~ReqQuoteInsertMessage() {
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
  ReqQuoteActionMessage(
     CThostFtdcInputQuoteActionField*
     pInputQuoteAction,
  int nRequestID):
      Message(REQ_QUOTE_ACTION_MESSAGE)
      request_id_(nRequestID) {
    inputquoteaction_.reset(
             new CThostFtdcInputQuoteActionField());
    std::memcpy(inputquoteaction_.get(),
                pInputQuoteAction,
                sizeof(CThostFtdcInputQuoteActionField));
  }

  virtual ~ReqQuoteActionMessage() {
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
  ReqCombActionInsertMessage(
     CThostFtdcInputCombActionField*
     pInputCombAction,
  int nRequestID):
      Message(REQ_COMB_ACTION_INSERT_MESSAGE)
      request_id_(nRequestID) {
    inputcombaction_.reset(
             new CThostFtdcInputCombActionField());
    std::memcpy(inputcombaction_.get(),
                pInputCombAction,
                sizeof(CThostFtdcInputCombActionField));
  }

  virtual ~ReqCombActionInsertMessage() {
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
  ReqQryOrderMessage(
     CThostFtdcQryOrderField*
     pQryOrder,
  int nRequestID):
      Message(REQ_QRY_ORDER_MESSAGE)
      request_id_(nRequestID) {
    qryorder_.reset(
             new CThostFtdcQryOrderField());
    std::memcpy(qryorder_.get(),
                pQryOrder,
                sizeof(CThostFtdcQryOrderField));
  }

  virtual ~ReqQryOrderMessage() {
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
  ReqQryTradeMessage(
     CThostFtdcQryTradeField*
     pQryTrade,
  int nRequestID):
      Message(REQ_QRY_TRADE_MESSAGE)
      request_id_(nRequestID) {
    qrytrade_.reset(
             new CThostFtdcQryTradeField());
    std::memcpy(qrytrade_.get(),
                pQryTrade,
                sizeof(CThostFtdcQryTradeField));
  }

  virtual ~ReqQryTradeMessage() {
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
  ReqQryInvestorPositionMessage(
     CThostFtdcQryInvestorPositionField*
     pQryInvestorPosition,
  int nRequestID):
      Message(REQ_QRY_INVESTOR_POSITION_MESSAGE)
      request_id_(nRequestID) {
    qryinvestorposition_.reset(
             new CThostFtdcQryInvestorPositionField());
    std::memcpy(qryinvestorposition_.get(),
                pQryInvestorPosition,
                sizeof(CThostFtdcQryInvestorPositionField));
  }

  virtual ~ReqQryInvestorPositionMessage() {
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
  ReqQryTradingAccountMessage(
     CThostFtdcQryTradingAccountField*
     pQryTradingAccount,
  int nRequestID):
      Message(REQ_QRY_TRADING_ACCOUNT_MESSAGE)
      request_id_(nRequestID) {
    qrytradingaccount_.reset(
             new CThostFtdcQryTradingAccountField());
    std::memcpy(qrytradingaccount_.get(),
                pQryTradingAccount,
                sizeof(CThostFtdcQryTradingAccountField));
  }

  virtual ~ReqQryTradingAccountMessage() {
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
  ReqQryInvestorMessage(
     CThostFtdcQryInvestorField*
     pQryInvestor,
  int nRequestID):
      Message(REQ_QRY_INVESTOR_MESSAGE)
      request_id_(nRequestID) {
    qryinvestor_.reset(
             new CThostFtdcQryInvestorField());
    std::memcpy(qryinvestor_.get(),
                pQryInvestor,
                sizeof(CThostFtdcQryInvestorField));
  }

  virtual ~ReqQryInvestorMessage() {
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
  ReqQryTradingCodeMessage(
     CThostFtdcQryTradingCodeField*
     pQryTradingCode,
  int nRequestID):
      Message(REQ_QRY_TRADING_CODE_MESSAGE)
      request_id_(nRequestID) {
    qrytradingcode_.reset(
             new CThostFtdcQryTradingCodeField());
    std::memcpy(qrytradingcode_.get(),
                pQryTradingCode,
                sizeof(CThostFtdcQryTradingCodeField));
  }

  virtual ~ReqQryTradingCodeMessage() {
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
  ReqQryInstrumentMarginRateMessage(
     CThostFtdcQryInstrumentMarginRateField*
     pQryInstrumentMarginRate,
  int nRequestID):
      Message(REQ_QRY_INSTRUMENT_MARGIN_RATE_MESSAGE)
      request_id_(nRequestID) {
    qryinstrumentmarginrate_.reset(
             new CThostFtdcQryInstrumentMarginRateField());
    std::memcpy(qryinstrumentmarginrate_.get(),
                pQryInstrumentMarginRate,
                sizeof(CThostFtdcQryInstrumentMarginRateField));
  }

  virtual ~ReqQryInstrumentMarginRateMessage() {
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
  ReqQryInstrumentCommissionRateMessage(
     CThostFtdcQryInstrumentCommissionRateField*
     pQryInstrumentCommissionRate,
  int nRequestID):
      Message(REQ_QRY_INSTRUMENT_COMMISSION_RATE_MESSAGE)
      request_id_(nRequestID) {
    qryinstrumentcommissionrate_.reset(
             new CThostFtdcQryInstrumentCommissionRateField());
    std::memcpy(qryinstrumentcommissionrate_.get(),
                pQryInstrumentCommissionRate,
                sizeof(CThostFtdcQryInstrumentCommissionRateField));
  }

  virtual ~ReqQryInstrumentCommissionRateMessage() {
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
  ReqQryExchangeMessage(
     CThostFtdcQryExchangeField*
     pQryExchange,
  int nRequestID):
      Message(REQ_QRY_EXCHANGE_MESSAGE)
      request_id_(nRequestID) {
    qryexchange_.reset(
             new CThostFtdcQryExchangeField());
    std::memcpy(qryexchange_.get(),
                pQryExchange,
                sizeof(CThostFtdcQryExchangeField));
  }

  virtual ~ReqQryExchangeMessage() {
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
  ReqQryProductMessage(
     CThostFtdcQryProductField*
     pQryProduct,
  int nRequestID):
      Message(REQ_QRY_PRODUCT_MESSAGE)
      request_id_(nRequestID) {
    qryproduct_.reset(
             new CThostFtdcQryProductField());
    std::memcpy(qryproduct_.get(),
                pQryProduct,
                sizeof(CThostFtdcQryProductField));
  }

  virtual ~ReqQryProductMessage() {
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
  ReqQryInstrumentMessage(
     CThostFtdcQryInstrumentField*
     pQryInstrument,
  int nRequestID):
      Message(REQ_QRY_INSTRUMENT_MESSAGE)
      request_id_(nRequestID) {
    qryinstrument_.reset(
             new CThostFtdcQryInstrumentField());
    std::memcpy(qryinstrument_.get(),
                pQryInstrument,
                sizeof(CThostFtdcQryInstrumentField));
  }

  virtual ~ReqQryInstrumentMessage() {
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
  ReqQryDepthMarketDataMessage(
     CThostFtdcQryDepthMarketDataField*
     pQryDepthMarketData,
  int nRequestID):
      Message(REQ_QRY_DEPTH_MARKET_DATA_MESSAGE)
      request_id_(nRequestID) {
    qrydepthmarketdata_.reset(
             new CThostFtdcQryDepthMarketDataField());
    std::memcpy(qrydepthmarketdata_.get(),
                pQryDepthMarketData,
                sizeof(CThostFtdcQryDepthMarketDataField));
  }

  virtual ~ReqQryDepthMarketDataMessage() {
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
  ReqQrySettlementInfoMessage(
     CThostFtdcQrySettlementInfoField*
     pQrySettlementInfo,
  int nRequestID):
      Message(REQ_QRY_SETTLEMENT_INFO_MESSAGE)
      request_id_(nRequestID) {
    qrysettlementinfo_.reset(
             new CThostFtdcQrySettlementInfoField());
    std::memcpy(qrysettlementinfo_.get(),
                pQrySettlementInfo,
                sizeof(CThostFtdcQrySettlementInfoField));
  }

  virtual ~ReqQrySettlementInfoMessage() {
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
  ReqQryTransferBankMessage(
     CThostFtdcQryTransferBankField*
     pQryTransferBank,
  int nRequestID):
      Message(REQ_QRY_TRANSFER_BANK_MESSAGE)
      request_id_(nRequestID) {
    qrytransferbank_.reset(
             new CThostFtdcQryTransferBankField());
    std::memcpy(qrytransferbank_.get(),
                pQryTransferBank,
                sizeof(CThostFtdcQryTransferBankField));
  }

  virtual ~ReqQryTransferBankMessage() {
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
  ReqQryInvestorPositionDetailMessage(
     CThostFtdcQryInvestorPositionDetailField*
     pQryInvestorPositionDetail,
  int nRequestID):
      Message(REQ_QRY_INVESTOR_POSITION_DETAIL_MESSAGE)
      request_id_(nRequestID) {
    qryinvestorpositiondetail_.reset(
             new CThostFtdcQryInvestorPositionDetailField());
    std::memcpy(qryinvestorpositiondetail_.get(),
                pQryInvestorPositionDetail,
                sizeof(CThostFtdcQryInvestorPositionDetailField));
  }

  virtual ~ReqQryInvestorPositionDetailMessage() {
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
  ReqQryNoticeMessage(
     CThostFtdcQryNoticeField*
     pQryNotice,
  int nRequestID):
      Message(REQ_QRY_NOTICE_MESSAGE)
      request_id_(nRequestID) {
    qrynotice_.reset(
             new CThostFtdcQryNoticeField());
    std::memcpy(qrynotice_.get(),
                pQryNotice,
                sizeof(CThostFtdcQryNoticeField));
  }

  virtual ~ReqQryNoticeMessage() {
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
  ReqQrySettlementInfoConfirmMessage(
     CThostFtdcQrySettlementInfoConfirmField*
     pQrySettlementInfoConfirm,
  int nRequestID):
      Message(REQ_QRY_SETTLEMENT_INFO_CONFIRM_MESSAGE)
      request_id_(nRequestID) {
    qrysettlementinfoconfirm_.reset(
             new CThostFtdcQrySettlementInfoConfirmField());
    std::memcpy(qrysettlementinfoconfirm_.get(),
                pQrySettlementInfoConfirm,
                sizeof(CThostFtdcQrySettlementInfoConfirmField));
  }

  virtual ~ReqQrySettlementInfoConfirmMessage() {
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
  ReqQryInvestorPositionCombineDetailMessage(
     CThostFtdcQryInvestorPositionCombineDetailField*
     pQryInvestorPositionCombineDetail,
  int nRequestID):
      Message(REQ_QRY_INVESTOR_POSITION_COMBINE_DETAIL_MESSAGE)
      request_id_(nRequestID) {
    qryinvestorpositioncombinedetail_.reset(
             new CThostFtdcQryInvestorPositionCombineDetailField());
    std::memcpy(qryinvestorpositioncombinedetail_.get(),
                pQryInvestorPositionCombineDetail,
                sizeof(CThostFtdcQryInvestorPositionCombineDetailField));
  }

  virtual ~ReqQryInvestorPositionCombineDetailMessage() {
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
  ReqQryCFMMCTradingAccountKeyMessage(
     CThostFtdcQryCFMMCTradingAccountKeyField*
     pQryCFMMCTradingAccountKey,
  int nRequestID):
      Message(REQ_QRY_C_F_M_M_C_TRADING_ACCOUNT_KEY_MESSAGE)
      request_id_(nRequestID) {
    qrycfmmctradingaccountkey_.reset(
             new CThostFtdcQryCFMMCTradingAccountKeyField());
    std::memcpy(qrycfmmctradingaccountkey_.get(),
                pQryCFMMCTradingAccountKey,
                sizeof(CThostFtdcQryCFMMCTradingAccountKeyField));
  }

  virtual ~ReqQryCFMMCTradingAccountKeyMessage() {
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
  ReqQryEWarrantOffsetMessage(
     CThostFtdcQryEWarrantOffsetField*
     pQryEWarrantOffset,
  int nRequestID):
      Message(REQ_QRY_E_WARRANT_OFFSET_MESSAGE)
      request_id_(nRequestID) {
    qryewarrantoffset_.reset(
             new CThostFtdcQryEWarrantOffsetField());
    std::memcpy(qryewarrantoffset_.get(),
                pQryEWarrantOffset,
                sizeof(CThostFtdcQryEWarrantOffsetField));
  }

  virtual ~ReqQryEWarrantOffsetMessage() {
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
  ReqQryInvestorProductGroupMarginMessage(
     CThostFtdcQryInvestorProductGroupMarginField*
     pQryInvestorProductGroupMargin,
  int nRequestID):
      Message(REQ_QRY_INVESTOR_PRODUCT_GROUP_MARGIN_MESSAGE)
      request_id_(nRequestID) {
    qryinvestorproductgroupmargin_.reset(
             new CThostFtdcQryInvestorProductGroupMarginField());
    std::memcpy(qryinvestorproductgroupmargin_.get(),
                pQryInvestorProductGroupMargin,
                sizeof(CThostFtdcQryInvestorProductGroupMarginField));
  }

  virtual ~ReqQryInvestorProductGroupMarginMessage() {
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
  ReqQryExchangeMarginRateMessage(
     CThostFtdcQryExchangeMarginRateField*
     pQryExchangeMarginRate,
  int nRequestID):
      Message(REQ_QRY_EXCHANGE_MARGIN_RATE_MESSAGE)
      request_id_(nRequestID) {
    qryexchangemarginrate_.reset(
             new CThostFtdcQryExchangeMarginRateField());
    std::memcpy(qryexchangemarginrate_.get(),
                pQryExchangeMarginRate,
                sizeof(CThostFtdcQryExchangeMarginRateField));
  }

  virtual ~ReqQryExchangeMarginRateMessage() {
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
  ReqQryExchangeMarginRateAdjustMessage(
     CThostFtdcQryExchangeMarginRateAdjustField*
     pQryExchangeMarginRateAdjust,
  int nRequestID):
      Message(REQ_QRY_EXCHANGE_MARGIN_RATE_ADJUST_MESSAGE)
      request_id_(nRequestID) {
    qryexchangemarginrateadjust_.reset(
             new CThostFtdcQryExchangeMarginRateAdjustField());
    std::memcpy(qryexchangemarginrateadjust_.get(),
                pQryExchangeMarginRateAdjust,
                sizeof(CThostFtdcQryExchangeMarginRateAdjustField));
  }

  virtual ~ReqQryExchangeMarginRateAdjustMessage() {
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
  ReqQryExchangeRateMessage(
     CThostFtdcQryExchangeRateField*
     pQryExchangeRate,
  int nRequestID):
      Message(REQ_QRY_EXCHANGE_RATE_MESSAGE)
      request_id_(nRequestID) {
    qryexchangerate_.reset(
             new CThostFtdcQryExchangeRateField());
    std::memcpy(qryexchangerate_.get(),
                pQryExchangeRate,
                sizeof(CThostFtdcQryExchangeRateField));
  }

  virtual ~ReqQryExchangeRateMessage() {
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
  ReqQrySecAgentACIDMapMessage(
     CThostFtdcQrySecAgentACIDMapField*
     pQrySecAgentACIDMap,
  int nRequestID):
      Message(REQ_QRY_SEC_AGENT_A_C_I_D_MAP_MESSAGE)
      request_id_(nRequestID) {
    qrysecagentacidmap_.reset(
             new CThostFtdcQrySecAgentACIDMapField());
    std::memcpy(qrysecagentacidmap_.get(),
                pQrySecAgentACIDMap,
                sizeof(CThostFtdcQrySecAgentACIDMapField));
  }

  virtual ~ReqQrySecAgentACIDMapMessage() {
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
  ReqQryProductExchRateMessage(
     CThostFtdcQryProductExchRateField*
     pQryProductExchRate,
  int nRequestID):
      Message(REQ_QRY_PRODUCT_EXCH_RATE_MESSAGE)
      request_id_(nRequestID) {
    qryproductexchrate_.reset(
             new CThostFtdcQryProductExchRateField());
    std::memcpy(qryproductexchrate_.get(),
                pQryProductExchRate,
                sizeof(CThostFtdcQryProductExchRateField));
  }

  virtual ~ReqQryProductExchRateMessage() {
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
  ReqQryOptionInstrTradeCostMessage(
     CThostFtdcQryOptionInstrTradeCostField*
     pQryOptionInstrTradeCost,
  int nRequestID):
      Message(REQ_QRY_OPTION_INSTR_TRADE_COST_MESSAGE)
      request_id_(nRequestID) {
    qryoptioninstrtradecost_.reset(
             new CThostFtdcQryOptionInstrTradeCostField());
    std::memcpy(qryoptioninstrtradecost_.get(),
                pQryOptionInstrTradeCost,
                sizeof(CThostFtdcQryOptionInstrTradeCostField));
  }

  virtual ~ReqQryOptionInstrTradeCostMessage() {
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
  ReqQryOptionInstrCommRateMessage(
     CThostFtdcQryOptionInstrCommRateField*
     pQryOptionInstrCommRate,
  int nRequestID):
      Message(REQ_QRY_OPTION_INSTR_COMM_RATE_MESSAGE)
      request_id_(nRequestID) {
    qryoptioninstrcommrate_.reset(
             new CThostFtdcQryOptionInstrCommRateField());
    std::memcpy(qryoptioninstrcommrate_.get(),
                pQryOptionInstrCommRate,
                sizeof(CThostFtdcQryOptionInstrCommRateField));
  }

  virtual ~ReqQryOptionInstrCommRateMessage() {
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
  ReqQryExecOrderMessage(
     CThostFtdcQryExecOrderField*
     pQryExecOrder,
  int nRequestID):
      Message(REQ_QRY_EXEC_ORDER_MESSAGE)
      request_id_(nRequestID) {
    qryexecorder_.reset(
             new CThostFtdcQryExecOrderField());
    std::memcpy(qryexecorder_.get(),
                pQryExecOrder,
                sizeof(CThostFtdcQryExecOrderField));
  }

  virtual ~ReqQryExecOrderMessage() {
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
  ReqQryForQuoteMessage(
     CThostFtdcQryForQuoteField*
     pQryForQuote,
  int nRequestID):
      Message(REQ_QRY_FOR_QUOTE_MESSAGE)
      request_id_(nRequestID) {
    qryforquote_.reset(
             new CThostFtdcQryForQuoteField());
    std::memcpy(qryforquote_.get(),
                pQryForQuote,
                sizeof(CThostFtdcQryForQuoteField));
  }

  virtual ~ReqQryForQuoteMessage() {
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
  ReqQryQuoteMessage(
     CThostFtdcQryQuoteField*
     pQryQuote,
  int nRequestID):
      Message(REQ_QRY_QUOTE_MESSAGE)
      request_id_(nRequestID) {
    qryquote_.reset(
             new CThostFtdcQryQuoteField());
    std::memcpy(qryquote_.get(),
                pQryQuote,
                sizeof(CThostFtdcQryQuoteField));
  }

  virtual ~ReqQryQuoteMessage() {
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
  ReqQryCombInstrumentGuardMessage(
     CThostFtdcQryCombInstrumentGuardField*
     pQryCombInstrumentGuard,
  int nRequestID):
      Message(REQ_QRY_COMB_INSTRUMENT_GUARD_MESSAGE)
      request_id_(nRequestID) {
    qrycombinstrumentguard_.reset(
             new CThostFtdcQryCombInstrumentGuardField());
    std::memcpy(qrycombinstrumentguard_.get(),
                pQryCombInstrumentGuard,
                sizeof(CThostFtdcQryCombInstrumentGuardField));
  }

  virtual ~ReqQryCombInstrumentGuardMessage() {
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
  ReqQryCombActionMessage(
     CThostFtdcQryCombActionField*
     pQryCombAction,
  int nRequestID):
      Message(REQ_QRY_COMB_ACTION_MESSAGE)
      request_id_(nRequestID) {
    qrycombaction_.reset(
             new CThostFtdcQryCombActionField());
    std::memcpy(qrycombaction_.get(),
                pQryCombAction,
                sizeof(CThostFtdcQryCombActionField));
  }

  virtual ~ReqQryCombActionMessage() {
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
  ReqQryTransferSerialMessage(
     CThostFtdcQryTransferSerialField*
     pQryTransferSerial,
  int nRequestID):
      Message(REQ_QRY_TRANSFER_SERIAL_MESSAGE)
      request_id_(nRequestID) {
    qrytransferserial_.reset(
             new CThostFtdcQryTransferSerialField());
    std::memcpy(qrytransferserial_.get(),
                pQryTransferSerial,
                sizeof(CThostFtdcQryTransferSerialField));
  }

  virtual ~ReqQryTransferSerialMessage() {
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
  ReqQryAccountregisterMessage(
     CThostFtdcQryAccountregisterField*
     pQryAccountregister,
  int nRequestID):
      Message(REQ_QRY_ACCOUNTREGISTER_MESSAGE)
      request_id_(nRequestID) {
    qryaccountregister_.reset(
             new CThostFtdcQryAccountregisterField());
    std::memcpy(qryaccountregister_.get(),
                pQryAccountregister,
                sizeof(CThostFtdcQryAccountregisterField));
  }

  virtual ~ReqQryAccountregisterMessage() {
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
  ReqQryContractBankMessage(
     CThostFtdcQryContractBankField*
     pQryContractBank,
  int nRequestID):
      Message(REQ_QRY_CONTRACT_BANK_MESSAGE)
      request_id_(nRequestID) {
    qrycontractbank_.reset(
             new CThostFtdcQryContractBankField());
    std::memcpy(qrycontractbank_.get(),
                pQryContractBank,
                sizeof(CThostFtdcQryContractBankField));
  }

  virtual ~ReqQryContractBankMessage() {
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
  ReqQryParkedOrderMessage(
     CThostFtdcQryParkedOrderField*
     pQryParkedOrder,
  int nRequestID):
      Message(REQ_QRY_PARKED_ORDER_MESSAGE)
      request_id_(nRequestID) {
    qryparkedorder_.reset(
             new CThostFtdcQryParkedOrderField());
    std::memcpy(qryparkedorder_.get(),
                pQryParkedOrder,
                sizeof(CThostFtdcQryParkedOrderField));
  }

  virtual ~ReqQryParkedOrderMessage() {
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
  ReqQryParkedOrderActionMessage(
     CThostFtdcQryParkedOrderActionField*
     pQryParkedOrderAction,
  int nRequestID):
      Message(REQ_QRY_PARKED_ORDER_ACTION_MESSAGE)
      request_id_(nRequestID) {
    qryparkedorderaction_.reset(
             new CThostFtdcQryParkedOrderActionField());
    std::memcpy(qryparkedorderaction_.get(),
                pQryParkedOrderAction,
                sizeof(CThostFtdcQryParkedOrderActionField));
  }

  virtual ~ReqQryParkedOrderActionMessage() {
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
  ReqQryTradingNoticeMessage(
     CThostFtdcQryTradingNoticeField*
     pQryTradingNotice,
  int nRequestID):
      Message(REQ_QRY_TRADING_NOTICE_MESSAGE)
      request_id_(nRequestID) {
    qrytradingnotice_.reset(
             new CThostFtdcQryTradingNoticeField());
    std::memcpy(qrytradingnotice_.get(),
                pQryTradingNotice,
                sizeof(CThostFtdcQryTradingNoticeField));
  }

  virtual ~ReqQryTradingNoticeMessage() {
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
  ReqQryBrokerTradingParamsMessage(
     CThostFtdcQryBrokerTradingParamsField*
     pQryBrokerTradingParams,
  int nRequestID):
      Message(REQ_QRY_BROKER_TRADING_PARAMS_MESSAGE)
      request_id_(nRequestID) {
    qrybrokertradingparams_.reset(
             new CThostFtdcQryBrokerTradingParamsField());
    std::memcpy(qrybrokertradingparams_.get(),
                pQryBrokerTradingParams,
                sizeof(CThostFtdcQryBrokerTradingParamsField));
  }

  virtual ~ReqQryBrokerTradingParamsMessage() {
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
  ReqQryBrokerTradingAlgosMessage(
     CThostFtdcQryBrokerTradingAlgosField*
     pQryBrokerTradingAlgos,
  int nRequestID):
      Message(REQ_QRY_BROKER_TRADING_ALGOS_MESSAGE)
      request_id_(nRequestID) {
    qrybrokertradingalgos_.reset(
             new CThostFtdcQryBrokerTradingAlgosField());
    std::memcpy(qrybrokertradingalgos_.get(),
                pQryBrokerTradingAlgos,
                sizeof(CThostFtdcQryBrokerTradingAlgosField));
  }

  virtual ~ReqQryBrokerTradingAlgosMessage() {
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
  ReqQueryCFMMCTradingAccountTokenMessage(
     CThostFtdcQueryCFMMCTradingAccountTokenField*
     pQueryCFMMCTradingAccountToken,
  int nRequestID):
      Message(REQ_QUERY_C_F_M_M_C_TRADING_ACCOUNT_TOKEN_MESSAGE)
      request_id_(nRequestID) {
    querycfmmctradingaccounttoken_.reset(
             new CThostFtdcQueryCFMMCTradingAccountTokenField());
    std::memcpy(querycfmmctradingaccounttoken_.get(),
                pQueryCFMMCTradingAccountToken,
                sizeof(CThostFtdcQueryCFMMCTradingAccountTokenField));
  }

  virtual ~ReqQueryCFMMCTradingAccountTokenMessage() {
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
  ReqFromBankToFutureByFutureMessage(
     CThostFtdcReqTransferField*
     pReqTransfer,
  int nRequestID):
      Message(REQ_FROM_BANK_TO_FUTURE_BY_FUTURE_MESSAGE)
      request_id_(nRequestID) {
    reqtransfer_.reset(
             new CThostFtdcReqTransferField());
    std::memcpy(reqtransfer_.get(),
                pReqTransfer,
                sizeof(CThostFtdcReqTransferField));
  }

  virtual ~ReqFromBankToFutureByFutureMessage() {
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
  ReqFromFutureToBankByFutureMessage(
     CThostFtdcReqTransferField*
     pReqTransfer,
  int nRequestID):
      Message(REQ_FROM_FUTURE_TO_BANK_BY_FUTURE_MESSAGE)
      request_id_(nRequestID) {
    reqtransfer_.reset(
             new CThostFtdcReqTransferField());
    std::memcpy(reqtransfer_.get(),
                pReqTransfer,
                sizeof(CThostFtdcReqTransferField));
  }

  virtual ~ReqFromFutureToBankByFutureMessage() {
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
  ReqQueryBankAccountMoneyByFutureMessage(
     CThostFtdcReqQueryAccountField*
     pReqQueryAccount,
  int nRequestID):
      Message(REQ_QUERY_BANK_ACCOUNT_MONEY_BY_FUTURE_MESSAGE)
      request_id_(nRequestID) {
    reqqueryaccount_.reset(
             new CThostFtdcReqQueryAccountField());
    std::memcpy(reqqueryaccount_.get(),
                pReqQueryAccount,
                sizeof(CThostFtdcReqQueryAccountField));
  }

  virtual ~ReqQueryBankAccountMoneyByFutureMessage() {
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
