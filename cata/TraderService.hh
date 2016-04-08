// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_TRADER_SERVICE_HH
#define CATA_TRADER_SERVICE_HH

#include <string>
#include "cata/CataDef.hh"
#include "soil/Config.hh"

namespace cata {

class TraderService {
 public:
  virtual std::string apiVersion() = 0;

  virtual std::string tradingDay() = 0;

  virtual int order(DirectionType direct,
                    OffsetFlagType of,
                    HedgeFlagType hf,
                    const std::string& instru,
                    double price, int volume) = 0;

  virtual int orderFAK(DirectionType direct,
                       OffsetFlagType of,
                       HedgeFlagType hf,
                       const std::string& instru,
                       double price, int volume) = 0;

  virtual int orderFOK(DirectionType direct,
                       OffsetFlagType of,
                       HedgeFlagType hf,
                       const std::string& instru,
                       double price, int volume) = 0;

  virtual int queryOrder(const std::string& instru,
                         const std::string& exchange,
                         const std::string& order_sys_id,
                         const std::string& start_time,
                         const std::string& stop_time) = 0;

  virtual int queryTrade(const std::string& instru,
                         const std::string& exchange,
                         const std::string& trade_id,
                         const std::string& start_time,
                         const std::string& stop_time) = 0;

  virtual int queryPosition(const std::string& instru) = 0;

  virtual int queryAccount(const std::string& currency_id) = 0;

  virtual int queryInvestor() = 0;

  virtual int queryTradingCode(const std::string& exchange,
                               const std::string& client_id,
                               ClientIDType cidt) = 0;

  virtual int queryInstruMarginRate(const std::string& instru,
                                    HedgeFlagType hedge_flag) = 0;

  virtual int queryInstruCommissionRate(const std::string& instru) = 0;

  virtual int queryExchange(const std::string& exchange) = 0;

  virtual int queryProduct(const std::string& product_id,
                           ProductClassType pc) = 0;

  virtual int queryInstrument(const std::string& instru,
                              const std::string& exchange,
                              const std::string& exchange_instru_id,
                              const std::string& product_id) = 0;

  virtual int queryDepthMarketData(const std::string& instru) = 0;
                                   
  virtual int queryExchangeMarginRate(const std::string& instru,
                                      HedgeFlagType hedge_flag) = 0;

  virtual int queryExchangeMarginRateAdjust(
      const std::string& instru,
      HedgeFlagType hedge_flag) = 0;

  virtual ~TraderService() {}

  static soil::Options* createOptions();

  static TraderService* createService(soil::Options* options,
                                      ServiceCallback* callback);
};


};  // namespace cata

#endif  // CATA_TRADER_SERVICE_HH
