// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_MDSERVICE_HH
#define CATA_MDSERVICE_HH

#include <string>
#include <set>
#include "soil/Config.hh"
#include "cata/CataDef.hh"

namespace cata {

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
                                  ServiceCallback* callback);
};

};  // namespace cata

#endif  // CATA_MDSERVICE_HH
