// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_MDSERVICE_HH
#define CATA_MDSERVICE_HH

#include <string>
#include <set>
#include "rapidjson/Document.h"
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

  static MDService* createService(
      const rapidjson::Document& doc,
      ServiceCallback* callback);
};

};  // namespace cata

#endif  // CATA_MDSERVICE_HH
