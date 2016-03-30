// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_MESSAGE_HH
#define CATA_MESSAGE_HH

#include <string>
#include "soil/DateTime.hh"
#include "json/json.hh"

namespace cata {

typedef enum {
  // REQ ID start
  REQ_USER_LOGIN_MESSAGE,
REQ_USER_LOGOUT_MESSAGE,
REQ_AUTHENTICATE_MESSAGE,
REQ_USER_PASSWORD_UPDATE_MESSAGE,
REQ_TRADING_ACCOUNT_PASSWORD_UPDATE_MESSAGE,
REQ_ORDER_INSERT_MESSAGE,
REQ_PARKED_ORDER_INSERT_MESSAGE,
REQ_PARKED_ORDER_ACTION_MESSAGE,
REQ_ORDER_ACTION_MESSAGE,
REQ_QUERY_MAX_ORDER_VOLUME_MESSAGE,
REQ_SETTLEMENT_INFO_CONFIRM_MESSAGE,
REQ_REMOVE_PARKED_ORDER_MESSAGE,
REQ_REMOVE_PARKED_ORDER_ACTION_MESSAGE,
REQ_EXEC_ORDER_INSERT_MESSAGE,
REQ_EXEC_ORDER_ACTION_MESSAGE,
REQ_FOR_QUOTE_INSERT_MESSAGE,
REQ_QUOTE_INSERT_MESSAGE,
REQ_QUOTE_ACTION_MESSAGE,
REQ_COMB_ACTION_INSERT_MESSAGE,
REQ_QRY_ORDER_MESSAGE,
REQ_QRY_TRADE_MESSAGE,
REQ_QRY_INVESTOR_POSITION_MESSAGE,
REQ_QRY_TRADING_ACCOUNT_MESSAGE,
REQ_QRY_INVESTOR_MESSAGE,
REQ_QRY_TRADING_CODE_MESSAGE,
REQ_QRY_INSTRUMENT_MARGIN_RATE_MESSAGE,
REQ_QRY_INSTRUMENT_COMMISSION_RATE_MESSAGE,
REQ_QRY_EXCHANGE_MESSAGE,
REQ_QRY_PRODUCT_MESSAGE,
REQ_QRY_INSTRUMENT_MESSAGE,
REQ_QRY_DEPTH_MARKET_DATA_MESSAGE,
REQ_QRY_SETTLEMENT_INFO_MESSAGE,
REQ_QRY_TRANSFER_BANK_MESSAGE,
REQ_QRY_INVESTOR_POSITION_DETAIL_MESSAGE,
REQ_QRY_NOTICE_MESSAGE,
REQ_QRY_SETTLEMENT_INFO_CONFIRM_MESSAGE,
REQ_QRY_INVESTOR_POSITION_COMBINE_DETAIL_MESSAGE,
REQ_QRY_C_F_M_M_C_TRADING_ACCOUNT_KEY_MESSAGE,
REQ_QRY_E_WARRANT_OFFSET_MESSAGE,
REQ_QRY_INVESTOR_PRODUCT_GROUP_MARGIN_MESSAGE,
REQ_QRY_EXCHANGE_MARGIN_RATE_MESSAGE,
REQ_QRY_EXCHANGE_MARGIN_RATE_ADJUST_MESSAGE,
REQ_QRY_EXCHANGE_RATE_MESSAGE,
REQ_QRY_SEC_AGENT_A_C_I_D_MAP_MESSAGE,
REQ_QRY_PRODUCT_EXCH_RATE_MESSAGE,
REQ_QRY_OPTION_INSTR_TRADE_COST_MESSAGE,
REQ_QRY_OPTION_INSTR_COMM_RATE_MESSAGE,
REQ_QRY_EXEC_ORDER_MESSAGE,
REQ_QRY_FOR_QUOTE_MESSAGE,
REQ_QRY_QUOTE_MESSAGE,
REQ_QRY_COMB_INSTRUMENT_GUARD_MESSAGE,
REQ_QRY_COMB_ACTION_MESSAGE,
REQ_QRY_TRANSFER_SERIAL_MESSAGE,
REQ_QRY_ACCOUNTREGISTER_MESSAGE,
REQ_QRY_CONTRACT_BANK_MESSAGE,
REQ_QRY_PARKED_ORDER_MESSAGE,
REQ_QRY_PARKED_ORDER_ACTION_MESSAGE,
REQ_QRY_TRADING_NOTICE_MESSAGE,
REQ_QRY_BROKER_TRADING_PARAMS_MESSAGE,
REQ_QRY_BROKER_TRADING_ALGOS_MESSAGE,
REQ_QUERY_C_F_M_M_C_TRADING_ACCOUNT_TOKEN_MESSAGE,
REQ_FROM_BANK_TO_FUTURE_BY_FUTURE_MESSAGE,
REQ_FROM_FUTURE_TO_BANK_BY_FUTURE_MESSAGE,
REQ_QUERY_BANK_ACCOUNT_MONEY_BY_FUTURE_MESSAGE,

  REQ_ID_MAX = 500,
  // RSP ID start
  RSP_USER_LOGIN_MESSAGE,
RSP_USER_LOGOUT_MESSAGE,
RSP_ERROR_MESSAGE,
RSP_SUB_MARKET_DATA_MESSAGE,
RSP_UN_SUB_MARKET_DATA_MESSAGE,
RSP_SUB_FOR_QUOTE_RSP_MESSAGE,
RSP_UN_SUB_FOR_QUOTE_RSP_MESSAGE,
RSP_AUTHENTICATE_MESSAGE,
RSP_USER_PASSWORD_UPDATE_MESSAGE,
RSP_TRADING_ACCOUNT_PASSWORD_UPDATE_MESSAGE,
RSP_ORDER_INSERT_MESSAGE,
RSP_PARKED_ORDER_INSERT_MESSAGE,
RSP_PARKED_ORDER_ACTION_MESSAGE,
RSP_ORDER_ACTION_MESSAGE,
RSP_QUERY_MAX_ORDER_VOLUME_MESSAGE,
RSP_SETTLEMENT_INFO_CONFIRM_MESSAGE,
RSP_REMOVE_PARKED_ORDER_MESSAGE,
RSP_REMOVE_PARKED_ORDER_ACTION_MESSAGE,
RSP_EXEC_ORDER_INSERT_MESSAGE,
RSP_EXEC_ORDER_ACTION_MESSAGE,
RSP_FOR_QUOTE_INSERT_MESSAGE,
RSP_QUOTE_INSERT_MESSAGE,
RSP_QUOTE_ACTION_MESSAGE,
RSP_COMB_ACTION_INSERT_MESSAGE,
RSP_QRY_ORDER_MESSAGE,
RSP_QRY_TRADE_MESSAGE,
RSP_QRY_INVESTOR_POSITION_MESSAGE,
RSP_QRY_TRADING_ACCOUNT_MESSAGE,
RSP_QRY_INVESTOR_MESSAGE,
RSP_QRY_TRADING_CODE_MESSAGE,
RSP_QRY_INSTRUMENT_MARGIN_RATE_MESSAGE,
RSP_QRY_INSTRUMENT_COMMISSION_RATE_MESSAGE,
RSP_QRY_EXCHANGE_MESSAGE,
RSP_QRY_PRODUCT_MESSAGE,
RSP_QRY_INSTRUMENT_MESSAGE,
RSP_QRY_DEPTH_MARKET_DATA_MESSAGE,
RSP_QRY_SETTLEMENT_INFO_MESSAGE,
RSP_QRY_TRANSFER_BANK_MESSAGE,
RSP_QRY_INVESTOR_POSITION_DETAIL_MESSAGE,
RSP_QRY_NOTICE_MESSAGE,
RSP_QRY_SETTLEMENT_INFO_CONFIRM_MESSAGE,
RSP_QRY_INVESTOR_POSITION_COMBINE_DETAIL_MESSAGE,
RSP_QRY_C_F_M_M_C_TRADING_ACCOUNT_KEY_MESSAGE,
RSP_QRY_E_WARRANT_OFFSET_MESSAGE,
RSP_QRY_INVESTOR_PRODUCT_GROUP_MARGIN_MESSAGE,
RSP_QRY_EXCHANGE_MARGIN_RATE_MESSAGE,
RSP_QRY_EXCHANGE_MARGIN_RATE_ADJUST_MESSAGE,
RSP_QRY_EXCHANGE_RATE_MESSAGE,
RSP_QRY_SEC_AGENT_A_C_I_D_MAP_MESSAGE,
RSP_QRY_PRODUCT_EXCH_RATE_MESSAGE,
RSP_QRY_OPTION_INSTR_TRADE_COST_MESSAGE,
RSP_QRY_OPTION_INSTR_COMM_RATE_MESSAGE,
RSP_QRY_EXEC_ORDER_MESSAGE,
RSP_QRY_FOR_QUOTE_MESSAGE,
RSP_QRY_QUOTE_MESSAGE,
RSP_QRY_COMB_INSTRUMENT_GUARD_MESSAGE,
RSP_QRY_COMB_ACTION_MESSAGE,
RSP_QRY_TRANSFER_SERIAL_MESSAGE,
RSP_QRY_ACCOUNTREGISTER_MESSAGE,
RSP_QRY_CONTRACT_BANK_MESSAGE,
RSP_QRY_PARKED_ORDER_MESSAGE,
RSP_QRY_PARKED_ORDER_ACTION_MESSAGE,
RSP_QRY_TRADING_NOTICE_MESSAGE,
RSP_QRY_BROKER_TRADING_PARAMS_MESSAGE,
RSP_QRY_BROKER_TRADING_ALGOS_MESSAGE,
RSP_QUERY_C_F_M_M_C_TRADING_ACCOUNT_TOKEN_MESSAGE,
RSP_FROM_BANK_TO_FUTURE_BY_FUTURE_MESSAGE,
RSP_FROM_FUTURE_TO_BANK_BY_FUTURE_MESSAGE,
RSP_QUERY_BANK_ACCOUNT_MONEY_BY_FUTURE_MESSAGE,

  RSP_ID_MAX = 1000,
  // RTN ID start
  RTN_DEPTH_MARKET_DATA_MESSAGE,
RTN_FOR_QUOTE_RSP_MESSAGE,
RTN_ORDER_MESSAGE,
RTN_TRADE_MESSAGE,
ERR_RTN_ORDER_INSERT_MESSAGE,
ERR_RTN_ORDER_ACTION_MESSAGE,
RTN_INSTRUMENT_STATUS_MESSAGE,
RTN_TRADING_NOTICE_MESSAGE,
RTN_ERROR_CONDITIONAL_ORDER_MESSAGE,
RTN_EXEC_ORDER_MESSAGE,
ERR_RTN_EXEC_ORDER_INSERT_MESSAGE,
ERR_RTN_EXEC_ORDER_ACTION_MESSAGE,
ERR_RTN_FOR_QUOTE_INSERT_MESSAGE,
RTN_QUOTE_MESSAGE,
ERR_RTN_QUOTE_INSERT_MESSAGE,
ERR_RTN_QUOTE_ACTION_MESSAGE,
RTN_C_F_M_M_C_TRADING_ACCOUNT_TOKEN_MESSAGE,
RTN_COMB_ACTION_MESSAGE,
ERR_RTN_COMB_ACTION_INSERT_MESSAGE,
RTN_FROM_BANK_TO_FUTURE_BY_BANK_MESSAGE,
RTN_FROM_FUTURE_TO_BANK_BY_BANK_MESSAGE,
RTN_REPEAL_FROM_BANK_TO_FUTURE_BY_BANK_MESSAGE,
RTN_REPEAL_FROM_FUTURE_TO_BANK_BY_BANK_MESSAGE,
RTN_FROM_BANK_TO_FUTURE_BY_FUTURE_MESSAGE,
RTN_FROM_FUTURE_TO_BANK_BY_FUTURE_MESSAGE,
RTN_REPEAL_FROM_BANK_TO_FUTURE_BY_FUTURE_MANUAL_MESSAGE,
RTN_REPEAL_FROM_FUTURE_TO_BANK_BY_FUTURE_MANUAL_MESSAGE,
RTN_QUERY_BANK_BALANCE_BY_FUTURE_MESSAGE,
ERR_RTN_BANK_TO_FUTURE_BY_FUTURE_MESSAGE,
ERR_RTN_FUTURE_TO_BANK_BY_FUTURE_MESSAGE,
ERR_RTN_REPEAL_BANK_TO_FUTURE_BY_FUTURE_MANUAL_MESSAGE,
ERR_RTN_REPEAL_FUTURE_TO_BANK_BY_FUTURE_MANUAL_MESSAGE,
ERR_RTN_QUERY_BANK_BALANCE_BY_FUTURE_MESSAGE,
RTN_REPEAL_FROM_BANK_TO_FUTURE_BY_FUTURE_MESSAGE,
RTN_REPEAL_FROM_FUTURE_TO_BANK_BY_FUTURE_MESSAGE,
RTN_OPEN_ACCOUNT_BY_BANK_MESSAGE,
RTN_CANCEL_ACCOUNT_BY_BANK_MESSAGE,
RTN_CHANGE_ACCOUNT_BY_BANK_MESSAGE,

  RTN_ID_MAX = 2000
}MessageID;

class Message {
 public:
  explicit Message(MessageID id):
      id_(id) {
  }

  virtual ~Message() {
  }

  virtual std::string toString() const = 0;

  virtual void toJSON(json::Document* doc) const {
    assert(doc);

    std::string key = "timestamp";
    json::addMember(doc, key, timeStamp());
  }

  virtual MessageID id() const {
    return id_;
  }

  std::string timeStamp() const {
    return timestamp_.toString();
  }

 private:
  MessageID id_;
  soil::DateTime timestamp_;
};

}  // namespace cata

#endif
