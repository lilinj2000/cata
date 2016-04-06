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
  virtual std::string tradingDay() = 0;

  virtual int order(DirectionType direct,
                    OffsetFlagType of,
                    const std::string& instru,
                    double price, int volume) = 0;

  virtual int orderFAK(DirectionType direct,
                       OffsetFlagType of,
                       const std::string& instru,
                       double price, int volume) = 0;

  virtual int orderFOK(DirectionType direct,
                       OffsetFlagType of,
                       const std::string& instru,
                       double price, int volume) = 0;

  virtual int queryExchangeMarginRate(const std::string& instru,
                                      HedgeFlagType hedge_flag = HF_ALL) = 0;

  virtual int queryExchangeMarginRateAdjust(
      const std::string& instru,
      HedgeFlagType hedge_flag = HF_ALL) = 0;

  virtual int queryInstruMarginRate(const std::string& instru,
                                    HedgeFlagType hedge_flag = HF_ALL) = 0;

  virtual ~TraderService() {}

  static soil::Options* createOptions();

  static TraderService* createService(soil::Options* options,
                                      ServiceCallback* callback);
};


};  // namespace cata

#endif  // CATA_TRADER_SERVICE_HH
