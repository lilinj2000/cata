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

  virtual ~TraderCallback() {
  }
};

class TraderService {
 public:
  virtual std::string tradingDay() = 0;

  virtual int openBuyOrder(
      const std::string& instru,
      double price,
      int volume) = 0;

  virtual int openBuyOrderFAK(
      const std::string& instru,
      double price,
      int volume) = 0;

  virtual int openBuyOrderFOK(
      const std::string& instru,
      double price,
      int volume) = 0;

  virtual int openSellOrder(
      const std::string& instru,
      double price,
      int volume) = 0;

  virtual int openSellOrderFAK(
      const std::string& instru,
      double price,
      int volume) = 0;

  virtual int openSellOrderFOK(
      const std::string& instru,
      double price,
      int volume) = 0;

  virtual int queryOrder(
      const std::string& instru,
      const std::string& exchange,
      const std::string& order_sys_id,
      const std::string& start_time,
      const std::string& stop_time) = 0;

  virtual int queryTrade(
      const std::string& instru,
      const std::string& exchange,
      const std::string& trade_id,
      const std::string& start_time,
      const std::string& stop_time) = 0;

  virtual int queryPosition(
      const std::string& instru) = 0;

  virtual int queryAccount(
      const std::string& currency_id) = 0;

  virtual int queryInvestor() = 0;

  // virtual int queryTradingCode(
  //     const std::string& exchange,
  //     const std::string& client_id,
  //     ClientIDType cidt) = 0;

  // virtual int queryInstruMarginRate(
  //     const std::string& instru,
  //     HedgeFlagType hedge_flag) = 0;

  virtual int queryInstruCommissionRate(
      const std::string& instru) = 0;

  virtual int queryExchange(
      const std::string& exchange) = 0;

  // virtual int queryProduct(
  //     const std::string& product_id,
  //     ProductClassType pc) = 0;

  virtual int queryInstrument(
      const std::string& instru,
      const std::string& exchange,
      const std::string& exchange_instru_id,
      const std::string& product_id) = 0;

  virtual int queryDepthMarketData(
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
