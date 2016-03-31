// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_TRADER_SERVICE_HH
#define CATA_TRADER_SERVICE_HH

#include <string>
#include "soil/Config.hh"

namespace cata {

class TraderServiceCallback {
 public:
  virtual void msgCallback(const std::string& msg) = 0;

  virtual ~TraderServiceCallback() {}
};

class TraderService {
 public:
  virtual std::string tradingDay() = 0;

  virtual int orderOpenBuy(const std::string& instru,
                           double price, int volume) = 0;

  virtual int orderOpenBuyFAK(const std::string& instru,
                              double price, int volume) = 0;

  virtual int orderOpenBuyFOK(const std::string& instru,
                              double price, int volume) = 0;

  virtual int orderOpenSell(const std::string& instru,
                            double price, int volume) = 0;

  virtual int orderCloseBuy(const std::string& instru,
                            double price, int volume) = 0;

  virtual int orderCloseSell(const std::string& instru,
                            double price, int volume) = 0;

  virtual int queryExchangeMarginRate(const std::string& instru) = 0;

  virtual int queryExchangeMarginRateAdjust(const std::string& instru) = 0;

  virtual int queryInstruMarginRate(const std::string& instru) = 0;

  virtual ~TraderService() {}

  static soil::Options* createOptions();

  static TraderService* createService(soil::Options* options,
                                      TraderServiceCallback* callback);
};


};  // namespace cata

#endif  // CATA_TRADER_SERVICE_HH
