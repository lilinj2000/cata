// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_RSPMESSAGE_HH
#define CATA_RSPMESSAGE_HH

#include <memory>
#include "ThostFtdcUserApiStruct.h"
#include "Message.hh"

namespace cata {

class RspMessage : public Message {
 public:
  RspMessage(MessageID id,
             CThostFtdcRspInfoField* pRspInfo,
             int nRequestID, bool bIsLast):
      Message(id),
      request_id_(nRequestID),
      is_last_(bIsLast) {
    rsp_info_.reset(new CThostFtdcRspInfoField());
    std::memcpy(rsp_info.get(), pRspInfo, sizeof(CThostFtdcRspInfoField));
  }

  virtual ~RspMessage() {
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
  std::unqiue_ptr<CThostFtdcRspInfoField> rsp_info_;
  int request_id_;
  bool is_last_;
};

class RspUserLoginMessage : public RspMessage {
  RspUserLoginMessage(
     CThostFtdcRspUserLoginField*
        pRspUserLogin,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_USER_LOGIN_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    rspuserlogin_.reset(
             new CThostFtdcRspUserLoginField());
    std::memcpy(rspuserlogin_.get(),
                pRspUserLogin,
                sizeof(CThostFtdcRspUserLoginField));
  }

  virtual ~RspUserLoginMessage() {
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
  RspUserLogoutMessage(
     CThostFtdcUserLogoutField*
        pUserLogout,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_USER_LOGOUT_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    userlogout_.reset(
             new CThostFtdcUserLogoutField());
    std::memcpy(userlogout_.get(),
                pUserLogout,
                sizeof(CThostFtdcUserLogoutField));
  }

  virtual ~RspUserLogoutMessage() {
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
  RspErrorMessage(
     CThostFtdcRspInfoField*
        pRspInfo,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_ERROR_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    rspinfo_.reset(
             new CThostFtdcRspInfoField());
    std::memcpy(rspinfo_.get(),
                pRspInfo,
                sizeof(CThostFtdcRspInfoField));
  }

  virtual ~RspErrorMessage() {
  }

  CThostFtdcRspInfoField*
     rspInfo() const {
    return rspinfo_.get();
  }

 private:
  std::unique_ptr<CThostFtdcRspInfoField>
                   rspinfo_;
};

class RspSubMarketDataMessage : public RspMessage {
  RspSubMarketDataMessage(
     CThostFtdcSpecificInstrumentField*
        pSpecificInstrument,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_SUB_MARKET_DATA_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    specificinstrument_.reset(
             new CThostFtdcSpecificInstrumentField());
    std::memcpy(specificinstrument_.get(),
                pSpecificInstrument,
                sizeof(CThostFtdcSpecificInstrumentField));
  }

  virtual ~RspSubMarketDataMessage() {
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
  RspUnSubMarketDataMessage(
     CThostFtdcSpecificInstrumentField*
        pSpecificInstrument,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_UN_SUB_MARKET_DATA_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    specificinstrument_.reset(
             new CThostFtdcSpecificInstrumentField());
    std::memcpy(specificinstrument_.get(),
                pSpecificInstrument,
                sizeof(CThostFtdcSpecificInstrumentField));
  }

  virtual ~RspUnSubMarketDataMessage() {
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
  RspSubForQuoteRspMessage(
     CThostFtdcSpecificInstrumentField*
        pSpecificInstrument,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_SUB_FOR_QUOTE_RSP_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    specificinstrument_.reset(
             new CThostFtdcSpecificInstrumentField());
    std::memcpy(specificinstrument_.get(),
                pSpecificInstrument,
                sizeof(CThostFtdcSpecificInstrumentField));
  }

  virtual ~RspSubForQuoteRspMessage() {
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
  RspUnSubForQuoteRspMessage(
     CThostFtdcSpecificInstrumentField*
        pSpecificInstrument,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_UN_SUB_FOR_QUOTE_RSP_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    specificinstrument_.reset(
             new CThostFtdcSpecificInstrumentField());
    std::memcpy(specificinstrument_.get(),
                pSpecificInstrument,
                sizeof(CThostFtdcSpecificInstrumentField));
  }

  virtual ~RspUnSubForQuoteRspMessage() {
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
  RspAuthenticateMessage(
     CThostFtdcRspAuthenticateField*
        pRspAuthenticateField,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_AUTHENTICATE_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    rspauthenticatefield_.reset(
             new CThostFtdcRspAuthenticateField());
    std::memcpy(rspauthenticatefield_.get(),
                pRspAuthenticateField,
                sizeof(CThostFtdcRspAuthenticateField));
  }

  virtual ~RspAuthenticateMessage() {
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
  RspUserPasswordUpdateMessage(
     CThostFtdcUserPasswordUpdateField*
        pUserPasswordUpdate,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_USER_PASSWORD_UPDATE_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    userpasswordupdate_.reset(
             new CThostFtdcUserPasswordUpdateField());
    std::memcpy(userpasswordupdate_.get(),
                pUserPasswordUpdate,
                sizeof(CThostFtdcUserPasswordUpdateField));
  }

  virtual ~RspUserPasswordUpdateMessage() {
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
  RspTradingAccountPasswordUpdateMessage(
     CThostFtdcTradingAccountPasswordUpdateField*
        pTradingAccountPasswordUpdate,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_TRADING_ACCOUNT_PASSWORD_UPDATE_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    tradingaccountpasswordupdate_.reset(
             new CThostFtdcTradingAccountPasswordUpdateField());
    std::memcpy(tradingaccountpasswordupdate_.get(),
                pTradingAccountPasswordUpdate,
                sizeof(CThostFtdcTradingAccountPasswordUpdateField));
  }

  virtual ~RspTradingAccountPasswordUpdateMessage() {
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
  RspOrderInsertMessage(
     CThostFtdcInputOrderField*
        pInputOrder,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_ORDER_INSERT_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    inputorder_.reset(
             new CThostFtdcInputOrderField());
    std::memcpy(inputorder_.get(),
                pInputOrder,
                sizeof(CThostFtdcInputOrderField));
  }

  virtual ~RspOrderInsertMessage() {
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
  RspParkedOrderInsertMessage(
     CThostFtdcParkedOrderField*
        pParkedOrder,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_PARKED_ORDER_INSERT_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    parkedorder_.reset(
             new CThostFtdcParkedOrderField());
    std::memcpy(parkedorder_.get(),
                pParkedOrder,
                sizeof(CThostFtdcParkedOrderField));
  }

  virtual ~RspParkedOrderInsertMessage() {
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
  RspParkedOrderActionMessage(
     CThostFtdcParkedOrderActionField*
        pParkedOrderAction,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_PARKED_ORDER_ACTION_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    parkedorderaction_.reset(
             new CThostFtdcParkedOrderActionField());
    std::memcpy(parkedorderaction_.get(),
                pParkedOrderAction,
                sizeof(CThostFtdcParkedOrderActionField));
  }

  virtual ~RspParkedOrderActionMessage() {
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
  RspOrderActionMessage(
     CThostFtdcInputOrderActionField*
        pInputOrderAction,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_ORDER_ACTION_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    inputorderaction_.reset(
             new CThostFtdcInputOrderActionField());
    std::memcpy(inputorderaction_.get(),
                pInputOrderAction,
                sizeof(CThostFtdcInputOrderActionField));
  }

  virtual ~RspOrderActionMessage() {
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
  RspQueryMaxOrderVolumeMessage(
     CThostFtdcQueryMaxOrderVolumeField*
        pQueryMaxOrderVolume,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QUERY_MAX_ORDER_VOLUME_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    querymaxordervolume_.reset(
             new CThostFtdcQueryMaxOrderVolumeField());
    std::memcpy(querymaxordervolume_.get(),
                pQueryMaxOrderVolume,
                sizeof(CThostFtdcQueryMaxOrderVolumeField));
  }

  virtual ~RspQueryMaxOrderVolumeMessage() {
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
  RspSettlementInfoConfirmMessage(
     CThostFtdcSettlementInfoConfirmField*
        pSettlementInfoConfirm,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_SETTLEMENT_INFO_CONFIRM_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    settlementinfoconfirm_.reset(
             new CThostFtdcSettlementInfoConfirmField());
    std::memcpy(settlementinfoconfirm_.get(),
                pSettlementInfoConfirm,
                sizeof(CThostFtdcSettlementInfoConfirmField));
  }

  virtual ~RspSettlementInfoConfirmMessage() {
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
  RspRemoveParkedOrderMessage(
     CThostFtdcRemoveParkedOrderField*
        pRemoveParkedOrder,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_REMOVE_PARKED_ORDER_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    removeparkedorder_.reset(
             new CThostFtdcRemoveParkedOrderField());
    std::memcpy(removeparkedorder_.get(),
                pRemoveParkedOrder,
                sizeof(CThostFtdcRemoveParkedOrderField));
  }

  virtual ~RspRemoveParkedOrderMessage() {
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
  RspRemoveParkedOrderActionMessage(
     CThostFtdcRemoveParkedOrderActionField*
        pRemoveParkedOrderAction,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_REMOVE_PARKED_ORDER_ACTION_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    removeparkedorderaction_.reset(
             new CThostFtdcRemoveParkedOrderActionField());
    std::memcpy(removeparkedorderaction_.get(),
                pRemoveParkedOrderAction,
                sizeof(CThostFtdcRemoveParkedOrderActionField));
  }

  virtual ~RspRemoveParkedOrderActionMessage() {
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
  RspExecOrderInsertMessage(
     CThostFtdcInputExecOrderField*
        pInputExecOrder,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_EXEC_ORDER_INSERT_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    inputexecorder_.reset(
             new CThostFtdcInputExecOrderField());
    std::memcpy(inputexecorder_.get(),
                pInputExecOrder,
                sizeof(CThostFtdcInputExecOrderField));
  }

  virtual ~RspExecOrderInsertMessage() {
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
  RspExecOrderActionMessage(
     CThostFtdcInputExecOrderActionField*
        pInputExecOrderAction,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_EXEC_ORDER_ACTION_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    inputexecorderaction_.reset(
             new CThostFtdcInputExecOrderActionField());
    std::memcpy(inputexecorderaction_.get(),
                pInputExecOrderAction,
                sizeof(CThostFtdcInputExecOrderActionField));
  }

  virtual ~RspExecOrderActionMessage() {
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
  RspForQuoteInsertMessage(
     CThostFtdcInputForQuoteField*
        pInputForQuote,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_FOR_QUOTE_INSERT_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    inputforquote_.reset(
             new CThostFtdcInputForQuoteField());
    std::memcpy(inputforquote_.get(),
                pInputForQuote,
                sizeof(CThostFtdcInputForQuoteField));
  }

  virtual ~RspForQuoteInsertMessage() {
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
  RspQuoteInsertMessage(
     CThostFtdcInputQuoteField*
        pInputQuote,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QUOTE_INSERT_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    inputquote_.reset(
             new CThostFtdcInputQuoteField());
    std::memcpy(inputquote_.get(),
                pInputQuote,
                sizeof(CThostFtdcInputQuoteField));
  }

  virtual ~RspQuoteInsertMessage() {
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
  RspQuoteActionMessage(
     CThostFtdcInputQuoteActionField*
        pInputQuoteAction,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QUOTE_ACTION_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    inputquoteaction_.reset(
             new CThostFtdcInputQuoteActionField());
    std::memcpy(inputquoteaction_.get(),
                pInputQuoteAction,
                sizeof(CThostFtdcInputQuoteActionField));
  }

  virtual ~RspQuoteActionMessage() {
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
  RspCombActionInsertMessage(
     CThostFtdcInputCombActionField*
        pInputCombAction,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_COMB_ACTION_INSERT_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    inputcombaction_.reset(
             new CThostFtdcInputCombActionField());
    std::memcpy(inputcombaction_.get(),
                pInputCombAction,
                sizeof(CThostFtdcInputCombActionField));
  }

  virtual ~RspCombActionInsertMessage() {
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
  RspQryOrderMessage(
     CThostFtdcOrderField*
        pOrder,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_ORDER_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    order_.reset(
             new CThostFtdcOrderField());
    std::memcpy(order_.get(),
                pOrder,
                sizeof(CThostFtdcOrderField));
  }

  virtual ~RspQryOrderMessage() {
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
  RspQryTradeMessage(
     CThostFtdcTradeField*
        pTrade,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_TRADE_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    trade_.reset(
             new CThostFtdcTradeField());
    std::memcpy(trade_.get(),
                pTrade,
                sizeof(CThostFtdcTradeField));
  }

  virtual ~RspQryTradeMessage() {
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
  RspQryInvestorPositionMessage(
     CThostFtdcInvestorPositionField*
        pInvestorPosition,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_INVESTOR_POSITION_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    investorposition_.reset(
             new CThostFtdcInvestorPositionField());
    std::memcpy(investorposition_.get(),
                pInvestorPosition,
                sizeof(CThostFtdcInvestorPositionField));
  }

  virtual ~RspQryInvestorPositionMessage() {
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
  RspQryTradingAccountMessage(
     CThostFtdcTradingAccountField*
        pTradingAccount,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_TRADING_ACCOUNT_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    tradingaccount_.reset(
             new CThostFtdcTradingAccountField());
    std::memcpy(tradingaccount_.get(),
                pTradingAccount,
                sizeof(CThostFtdcTradingAccountField));
  }

  virtual ~RspQryTradingAccountMessage() {
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
  RspQryInvestorMessage(
     CThostFtdcInvestorField*
        pInvestor,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_INVESTOR_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    investor_.reset(
             new CThostFtdcInvestorField());
    std::memcpy(investor_.get(),
                pInvestor,
                sizeof(CThostFtdcInvestorField));
  }

  virtual ~RspQryInvestorMessage() {
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
  RspQryTradingCodeMessage(
     CThostFtdcTradingCodeField*
        pTradingCode,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_TRADING_CODE_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    tradingcode_.reset(
             new CThostFtdcTradingCodeField());
    std::memcpy(tradingcode_.get(),
                pTradingCode,
                sizeof(CThostFtdcTradingCodeField));
  }

  virtual ~RspQryTradingCodeMessage() {
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
  RspQryInstrumentMarginRateMessage(
     CThostFtdcInstrumentMarginRateField*
        pInstrumentMarginRate,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_INSTRUMENT_MARGIN_RATE_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    instrumentmarginrate_.reset(
             new CThostFtdcInstrumentMarginRateField());
    std::memcpy(instrumentmarginrate_.get(),
                pInstrumentMarginRate,
                sizeof(CThostFtdcInstrumentMarginRateField));
  }

  virtual ~RspQryInstrumentMarginRateMessage() {
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
  RspQryInstrumentCommissionRateMessage(
     CThostFtdcInstrumentCommissionRateField*
        pInstrumentCommissionRate,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_INSTRUMENT_COMMISSION_RATE_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    instrumentcommissionrate_.reset(
             new CThostFtdcInstrumentCommissionRateField());
    std::memcpy(instrumentcommissionrate_.get(),
                pInstrumentCommissionRate,
                sizeof(CThostFtdcInstrumentCommissionRateField));
  }

  virtual ~RspQryInstrumentCommissionRateMessage() {
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
  RspQryExchangeMessage(
     CThostFtdcExchangeField*
        pExchange,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_EXCHANGE_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    exchange_.reset(
             new CThostFtdcExchangeField());
    std::memcpy(exchange_.get(),
                pExchange,
                sizeof(CThostFtdcExchangeField));
  }

  virtual ~RspQryExchangeMessage() {
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
  RspQryProductMessage(
     CThostFtdcProductField*
        pProduct,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_PRODUCT_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    product_.reset(
             new CThostFtdcProductField());
    std::memcpy(product_.get(),
                pProduct,
                sizeof(CThostFtdcProductField));
  }

  virtual ~RspQryProductMessage() {
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
  RspQryInstrumentMessage(
     CThostFtdcInstrumentField*
        pInstrument,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_INSTRUMENT_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    instrument_.reset(
             new CThostFtdcInstrumentField());
    std::memcpy(instrument_.get(),
                pInstrument,
                sizeof(CThostFtdcInstrumentField));
  }

  virtual ~RspQryInstrumentMessage() {
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
  RspQryDepthMarketDataMessage(
     CThostFtdcDepthMarketDataField*
        pDepthMarketData,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_DEPTH_MARKET_DATA_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    depthmarketdata_.reset(
             new CThostFtdcDepthMarketDataField());
    std::memcpy(depthmarketdata_.get(),
                pDepthMarketData,
                sizeof(CThostFtdcDepthMarketDataField));
  }

  virtual ~RspQryDepthMarketDataMessage() {
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
  RspQrySettlementInfoMessage(
     CThostFtdcSettlementInfoField*
        pSettlementInfo,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_SETTLEMENT_INFO_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    settlementinfo_.reset(
             new CThostFtdcSettlementInfoField());
    std::memcpy(settlementinfo_.get(),
                pSettlementInfo,
                sizeof(CThostFtdcSettlementInfoField));
  }

  virtual ~RspQrySettlementInfoMessage() {
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
  RspQryTransferBankMessage(
     CThostFtdcTransferBankField*
        pTransferBank,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_TRANSFER_BANK_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    transferbank_.reset(
             new CThostFtdcTransferBankField());
    std::memcpy(transferbank_.get(),
                pTransferBank,
                sizeof(CThostFtdcTransferBankField));
  }

  virtual ~RspQryTransferBankMessage() {
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
  RspQryInvestorPositionDetailMessage(
     CThostFtdcInvestorPositionDetailField*
        pInvestorPositionDetail,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_INVESTOR_POSITION_DETAIL_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    investorpositiondetail_.reset(
             new CThostFtdcInvestorPositionDetailField());
    std::memcpy(investorpositiondetail_.get(),
                pInvestorPositionDetail,
                sizeof(CThostFtdcInvestorPositionDetailField));
  }

  virtual ~RspQryInvestorPositionDetailMessage() {
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
  RspQryNoticeMessage(
     CThostFtdcNoticeField*
        pNotice,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_NOTICE_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    notice_.reset(
             new CThostFtdcNoticeField());
    std::memcpy(notice_.get(),
                pNotice,
                sizeof(CThostFtdcNoticeField));
  }

  virtual ~RspQryNoticeMessage() {
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
  RspQrySettlementInfoConfirmMessage(
     CThostFtdcSettlementInfoConfirmField*
        pSettlementInfoConfirm,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_SETTLEMENT_INFO_CONFIRM_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    settlementinfoconfirm_.reset(
             new CThostFtdcSettlementInfoConfirmField());
    std::memcpy(settlementinfoconfirm_.get(),
                pSettlementInfoConfirm,
                sizeof(CThostFtdcSettlementInfoConfirmField));
  }

  virtual ~RspQrySettlementInfoConfirmMessage() {
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
  RspQryInvestorPositionCombineDetailMessage(
     CThostFtdcInvestorPositionCombineDetailField*
        pInvestorPositionCombineDetail,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_INVESTOR_POSITION_COMBINE_DETAIL_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    investorpositioncombinedetail_.reset(
             new CThostFtdcInvestorPositionCombineDetailField());
    std::memcpy(investorpositioncombinedetail_.get(),
                pInvestorPositionCombineDetail,
                sizeof(CThostFtdcInvestorPositionCombineDetailField));
  }

  virtual ~RspQryInvestorPositionCombineDetailMessage() {
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
  RspQryCFMMCTradingAccountKeyMessage(
     CThostFtdcCFMMCTradingAccountKeyField*
        pCFMMCTradingAccountKey,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_C_F_M_M_C_TRADING_ACCOUNT_KEY_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    cfmmctradingaccountkey_.reset(
             new CThostFtdcCFMMCTradingAccountKeyField());
    std::memcpy(cfmmctradingaccountkey_.get(),
                pCFMMCTradingAccountKey,
                sizeof(CThostFtdcCFMMCTradingAccountKeyField));
  }

  virtual ~RspQryCFMMCTradingAccountKeyMessage() {
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
  RspQryEWarrantOffsetMessage(
     CThostFtdcEWarrantOffsetField*
        pEWarrantOffset,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_E_WARRANT_OFFSET_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    ewarrantoffset_.reset(
             new CThostFtdcEWarrantOffsetField());
    std::memcpy(ewarrantoffset_.get(),
                pEWarrantOffset,
                sizeof(CThostFtdcEWarrantOffsetField));
  }

  virtual ~RspQryEWarrantOffsetMessage() {
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
  RspQryInvestorProductGroupMarginMessage(
     CThostFtdcInvestorProductGroupMarginField*
        pInvestorProductGroupMargin,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_INVESTOR_PRODUCT_GROUP_MARGIN_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    investorproductgroupmargin_.reset(
             new CThostFtdcInvestorProductGroupMarginField());
    std::memcpy(investorproductgroupmargin_.get(),
                pInvestorProductGroupMargin,
                sizeof(CThostFtdcInvestorProductGroupMarginField));
  }

  virtual ~RspQryInvestorProductGroupMarginMessage() {
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
  RspQryExchangeMarginRateMessage(
     CThostFtdcExchangeMarginRateField*
        pExchangeMarginRate,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_EXCHANGE_MARGIN_RATE_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    exchangemarginrate_.reset(
             new CThostFtdcExchangeMarginRateField());
    std::memcpy(exchangemarginrate_.get(),
                pExchangeMarginRate,
                sizeof(CThostFtdcExchangeMarginRateField));
  }

  virtual ~RspQryExchangeMarginRateMessage() {
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
  RspQryExchangeMarginRateAdjustMessage(
     CThostFtdcExchangeMarginRateAdjustField*
        pExchangeMarginRateAdjust,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_EXCHANGE_MARGIN_RATE_ADJUST_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    exchangemarginrateadjust_.reset(
             new CThostFtdcExchangeMarginRateAdjustField());
    std::memcpy(exchangemarginrateadjust_.get(),
                pExchangeMarginRateAdjust,
                sizeof(CThostFtdcExchangeMarginRateAdjustField));
  }

  virtual ~RspQryExchangeMarginRateAdjustMessage() {
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
  RspQryExchangeRateMessage(
     CThostFtdcExchangeRateField*
        pExchangeRate,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_EXCHANGE_RATE_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    exchangerate_.reset(
             new CThostFtdcExchangeRateField());
    std::memcpy(exchangerate_.get(),
                pExchangeRate,
                sizeof(CThostFtdcExchangeRateField));
  }

  virtual ~RspQryExchangeRateMessage() {
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
  RspQrySecAgentACIDMapMessage(
     CThostFtdcSecAgentACIDMapField*
        pSecAgentACIDMap,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_SEC_AGENT_A_C_I_D_MAP_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    secagentacidmap_.reset(
             new CThostFtdcSecAgentACIDMapField());
    std::memcpy(secagentacidmap_.get(),
                pSecAgentACIDMap,
                sizeof(CThostFtdcSecAgentACIDMapField));
  }

  virtual ~RspQrySecAgentACIDMapMessage() {
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
  RspQryProductExchRateMessage(
     CThostFtdcProductExchRateField*
        pProductExchRate,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_PRODUCT_EXCH_RATE_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    productexchrate_.reset(
             new CThostFtdcProductExchRateField());
    std::memcpy(productexchrate_.get(),
                pProductExchRate,
                sizeof(CThostFtdcProductExchRateField));
  }

  virtual ~RspQryProductExchRateMessage() {
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
  RspQryOptionInstrTradeCostMessage(
     CThostFtdcOptionInstrTradeCostField*
        pOptionInstrTradeCost,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_OPTION_INSTR_TRADE_COST_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    optioninstrtradecost_.reset(
             new CThostFtdcOptionInstrTradeCostField());
    std::memcpy(optioninstrtradecost_.get(),
                pOptionInstrTradeCost,
                sizeof(CThostFtdcOptionInstrTradeCostField));
  }

  virtual ~RspQryOptionInstrTradeCostMessage() {
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
  RspQryOptionInstrCommRateMessage(
     CThostFtdcOptionInstrCommRateField*
        pOptionInstrCommRate,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_OPTION_INSTR_COMM_RATE_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    optioninstrcommrate_.reset(
             new CThostFtdcOptionInstrCommRateField());
    std::memcpy(optioninstrcommrate_.get(),
                pOptionInstrCommRate,
                sizeof(CThostFtdcOptionInstrCommRateField));
  }

  virtual ~RspQryOptionInstrCommRateMessage() {
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
  RspQryExecOrderMessage(
     CThostFtdcExecOrderField*
        pExecOrder,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_EXEC_ORDER_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    execorder_.reset(
             new CThostFtdcExecOrderField());
    std::memcpy(execorder_.get(),
                pExecOrder,
                sizeof(CThostFtdcExecOrderField));
  }

  virtual ~RspQryExecOrderMessage() {
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
  RspQryForQuoteMessage(
     CThostFtdcForQuoteField*
        pForQuote,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_FOR_QUOTE_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    forquote_.reset(
             new CThostFtdcForQuoteField());
    std::memcpy(forquote_.get(),
                pForQuote,
                sizeof(CThostFtdcForQuoteField));
  }

  virtual ~RspQryForQuoteMessage() {
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
  RspQryQuoteMessage(
     CThostFtdcQuoteField*
        pQuote,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_QUOTE_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    quote_.reset(
             new CThostFtdcQuoteField());
    std::memcpy(quote_.get(),
                pQuote,
                sizeof(CThostFtdcQuoteField));
  }

  virtual ~RspQryQuoteMessage() {
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
  RspQryCombInstrumentGuardMessage(
     CThostFtdcCombInstrumentGuardField*
        pCombInstrumentGuard,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_COMB_INSTRUMENT_GUARD_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    combinstrumentguard_.reset(
             new CThostFtdcCombInstrumentGuardField());
    std::memcpy(combinstrumentguard_.get(),
                pCombInstrumentGuard,
                sizeof(CThostFtdcCombInstrumentGuardField));
  }

  virtual ~RspQryCombInstrumentGuardMessage() {
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
  RspQryCombActionMessage(
     CThostFtdcCombActionField*
        pCombAction,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_COMB_ACTION_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    combaction_.reset(
             new CThostFtdcCombActionField());
    std::memcpy(combaction_.get(),
                pCombAction,
                sizeof(CThostFtdcCombActionField));
  }

  virtual ~RspQryCombActionMessage() {
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
  RspQryTransferSerialMessage(
     CThostFtdcTransferSerialField*
        pTransferSerial,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_TRANSFER_SERIAL_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    transferserial_.reset(
             new CThostFtdcTransferSerialField());
    std::memcpy(transferserial_.get(),
                pTransferSerial,
                sizeof(CThostFtdcTransferSerialField));
  }

  virtual ~RspQryTransferSerialMessage() {
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
  RspQryAccountregisterMessage(
     CThostFtdcAccountregisterField*
        pAccountregister,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_ACCOUNTREGISTER_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    accountregister_.reset(
             new CThostFtdcAccountregisterField());
    std::memcpy(accountregister_.get(),
                pAccountregister,
                sizeof(CThostFtdcAccountregisterField));
  }

  virtual ~RspQryAccountregisterMessage() {
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
  RspQryContractBankMessage(
     CThostFtdcContractBankField*
        pContractBank,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_CONTRACT_BANK_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    contractbank_.reset(
             new CThostFtdcContractBankField());
    std::memcpy(contractbank_.get(),
                pContractBank,
                sizeof(CThostFtdcContractBankField));
  }

  virtual ~RspQryContractBankMessage() {
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
  RspQryParkedOrderMessage(
     CThostFtdcParkedOrderField*
        pParkedOrder,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_PARKED_ORDER_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    parkedorder_.reset(
             new CThostFtdcParkedOrderField());
    std::memcpy(parkedorder_.get(),
                pParkedOrder,
                sizeof(CThostFtdcParkedOrderField));
  }

  virtual ~RspQryParkedOrderMessage() {
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
  RspQryParkedOrderActionMessage(
     CThostFtdcParkedOrderActionField*
        pParkedOrderAction,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_PARKED_ORDER_ACTION_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    parkedorderaction_.reset(
             new CThostFtdcParkedOrderActionField());
    std::memcpy(parkedorderaction_.get(),
                pParkedOrderAction,
                sizeof(CThostFtdcParkedOrderActionField));
  }

  virtual ~RspQryParkedOrderActionMessage() {
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
  RspQryTradingNoticeMessage(
     CThostFtdcTradingNoticeField*
        pTradingNotice,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_TRADING_NOTICE_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    tradingnotice_.reset(
             new CThostFtdcTradingNoticeField());
    std::memcpy(tradingnotice_.get(),
                pTradingNotice,
                sizeof(CThostFtdcTradingNoticeField));
  }

  virtual ~RspQryTradingNoticeMessage() {
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
  RspQryBrokerTradingParamsMessage(
     CThostFtdcBrokerTradingParamsField*
        pBrokerTradingParams,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_BROKER_TRADING_PARAMS_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    brokertradingparams_.reset(
             new CThostFtdcBrokerTradingParamsField());
    std::memcpy(brokertradingparams_.get(),
                pBrokerTradingParams,
                sizeof(CThostFtdcBrokerTradingParamsField));
  }

  virtual ~RspQryBrokerTradingParamsMessage() {
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
  RspQryBrokerTradingAlgosMessage(
     CThostFtdcBrokerTradingAlgosField*
        pBrokerTradingAlgos,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QRY_BROKER_TRADING_ALGOS_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    brokertradingalgos_.reset(
             new CThostFtdcBrokerTradingAlgosField());
    std::memcpy(brokertradingalgos_.get(),
                pBrokerTradingAlgos,
                sizeof(CThostFtdcBrokerTradingAlgosField));
  }

  virtual ~RspQryBrokerTradingAlgosMessage() {
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
  RspQueryCFMMCTradingAccountTokenMessage(
     CThostFtdcQueryCFMMCTradingAccountTokenField*
        pQueryCFMMCTradingAccountToken,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QUERY_C_F_M_M_C_TRADING_ACCOUNT_TOKEN_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    querycfmmctradingaccounttoken_.reset(
             new CThostFtdcQueryCFMMCTradingAccountTokenField());
    std::memcpy(querycfmmctradingaccounttoken_.get(),
                pQueryCFMMCTradingAccountToken,
                sizeof(CThostFtdcQueryCFMMCTradingAccountTokenField));
  }

  virtual ~RspQueryCFMMCTradingAccountTokenMessage() {
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
  RspFromBankToFutureByFutureMessage(
     CThostFtdcReqTransferField*
        pReqTransfer,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_FROM_BANK_TO_FUTURE_BY_FUTURE_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    reqtransfer_.reset(
             new CThostFtdcReqTransferField());
    std::memcpy(reqtransfer_.get(),
                pReqTransfer,
                sizeof(CThostFtdcReqTransferField));
  }

  virtual ~RspFromBankToFutureByFutureMessage() {
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
  RspFromFutureToBankByFutureMessage(
     CThostFtdcReqTransferField*
        pReqTransfer,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_FROM_FUTURE_TO_BANK_BY_FUTURE_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    reqtransfer_.reset(
             new CThostFtdcReqTransferField());
    std::memcpy(reqtransfer_.get(),
                pReqTransfer,
                sizeof(CThostFtdcReqTransferField));
  }

  virtual ~RspFromFutureToBankByFutureMessage() {
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
  RspQueryBankAccountMoneyByFutureMessage(
     CThostFtdcReqQueryAccountField*
        pReqQueryAccount,
  CThostFtdcRspInfoField* pRspInfo,
  int nRequestID, bool bIsLast):
      RspMessage(RSP_QUERY_BANK_ACCOUNT_MONEY_BY_FUTURE_MESSAGE,
                 pRspInfo, nRequestID, bIsLast) {
    reqqueryaccount_.reset(
             new CThostFtdcReqQueryAccountField());
    std::memcpy(reqqueryaccount_.get(),
                pReqQueryAccount,
                sizeof(CThostFtdcReqQueryAccountField));
  }

  virtual ~RspQueryBankAccountMoneyByFutureMessage() {
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
