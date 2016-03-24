// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_MDSERVICE_HH
#define CATA_MDSERVICE_HH

#include <string>

#include "soil/Config.hh"
#include "cata/CataDef.hh"

namespace cata {

class MDServiceCallback {
 public:
  virtual void onRspSubMarketData(const std::string& instru, bool success) = 0;

  virtual void onRspSubQuoteData(const std::string& instru, bool success) = 0;

  virtual void onRspUnsubMarketData(const std::string& instru,
                                    bool success) = 0;

  virtual void onRspUnsubQuoteData(const std::string& instru, bool success) = 0;

  virtual void onRtnMarketData(const DepthMarketData*) = 0;

  virtual void onRtnQuoteData() = 0;

  virtual void onRspError(int errord_id, const std::string& error_msg)= 0;

  virtual ~MDServiceCallback() {}
};

class MDService {
 public:
  virtual void subMarketData(const InstrumentSet& instruments) = 0;

  virtual void unsubMarketData(const InstrumentSet& instruments) = 0;

  virtual void subQuoteData(const InstrumentSet& instruments) = 0;

  virtual void unsubQuoteData(const InstrumentSet& instruments) = 0;

  virtual std::string tradingDay() = 0;

  virtual ~MDService() {}

  static soil::Options* createOptions();

  static MDService* createService(soil::Options* options,
                                  MDServiceCallback* callback);
};

};  // namespace cata

#endif  // CATA_MDSERVICE_HH
