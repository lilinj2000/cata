// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_TRADER_SERVICE_HH
#define CATA_TRADER_SERVICE_HH

#include <string>
#include "soil/json.hh"

namespace cata {

class TraderCallback {
 public:
  virtual void onRspError(const std::string&) = 0;

  virtual void onRspQryOrder(const std::string&, bool is_last) = 0;

  virtual void onRspQryTrade(const std::string&, bool is_last) = 0;

  virtual void onRspOrderInsert(const std::string&, bool is_last) = 0;

  virtual void onRtnOrder(const std::string&) = 0;

  virtual void onRtnTrade(const std::string&) = 0;

  virtual void onErrRtnOrderInsert(const std::string&) = 0;

  virtual void onRspQryInvestorPosition(const std::string&, bool is_last) = 0;

  virtual void onRspQryTradingAccount(const std::string&, bool is_last) = 0;

  virtual void onRspQryInvestor(const std::string&, bool is_last) = 0;

  virtual void onRspQryTradingCode(const std::string&, bool is_last) = 0;

  virtual void onRspQryInstrumentMarginRate(const std::string&, bool is_last) = 0;

  virtual void onRspQryInstrumentCommissionRate(const std::string&, bool is_last) = 0;

  virtual void onRspQryExchange(const std::string&, bool is_last) = 0;

  virtual void onRspQryInstrument(const std::string&, bool is_last) = 0;

  virtual void onRspQryDepthMarketData(const std::string&, bool is_last) = 0;

  virtual ~TraderCallback() {
  }
};

class TraderService {
 public:
  virtual std::string tradingDay() = 0;

  virtual int32_t openBuyOrder(
      const std::string& instru,
      double price,
      int volume) = 0;

  virtual int32_t openBuyOrderFAK(
      const std::string& instru,
      double price,
      int volume) = 0;

  virtual int32_t openBuyOrderFOK(
      const std::string& instru,
      double price,
      int volume) = 0;

  virtual int32_t openSellOrder(
      const std::string& instru,
      double price,
      int volume) = 0;

  virtual int32_t openSellOrderFAK(
      const std::string& instru,
      double price,
      int volume) = 0;

  virtual int32_t openSellOrderFOK(
      const std::string& instru,
      double price,
      int volume) = 0;

  virtual void queryOrder(
      const std::string& instru,
      const std::string& exchange,
      const std::string& order_sys_id,
      const std::string& start_time,
      const std::string& stop_time) = 0;

  virtual void queryTrade(
      const std::string& instru,
      const std::string& exchange,
      const std::string& trade_id,
      const std::string& start_time,
      const std::string& stop_time) = 0;

  virtual void queryPosition(
      const std::string& instru) = 0;

  virtual void queryAccount(
      const std::string& currency_id) = 0;

  virtual void queryInvestor() = 0;

  virtual void queryTradingCode(
      const std::string& exchange) = 0;

  virtual void queryInstruMarginRate(
      const std::string& instru) = 0;

  virtual void queryInstruCommissionRate(
      const std::string& instru) = 0;

  virtual void queryExchange(
      const std::string& exchange) = 0;

  // virtual int queryProduct(
  //     const std::string& product_id,
  //     ProductClassType pc) = 0;

  virtual void queryInstrument(
      const std::string& instru,
      const std::string& exchange,
      const std::string& exchange_instru_id,
      const std::string& product_id) = 0;

  virtual void queryDepthMarketData(
      const std::string& instru) = 0;

  // virtual int queryExchangeMarginRate(
  //     const std::string& instru,
  //     HedgeFlagType hedge_flag) = 0;

  // virtual int queryExchangeMarginRateAdjust(
  //     const std::string& instru,
  //     HedgeFlagType hedge_flag) = 0;

  virtual ~TraderService() {}

  static TraderService* create(
      const rapidjson::Document& doc,
      TraderCallback* callback);
};


};  // namespace cata

#endif  // CATA_TRADER_SERVICE_HH
