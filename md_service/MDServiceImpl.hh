// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_MDSERVICE_IMPL_HH
#define CATA_MDSERVICE_IMPL_HH

#include "ThostFtdcMdApi.h"
#include <string>
#include <memory>
#include "rapidjson/Document.h"
#include "cata/MDService.hh"
#include "soil/STimer.hh"

namespace cata {

class MDOptions;
class MDSpiImpl;

class MDServiceImpl : public MDService {
 public:
  MDServiceImpl(
      const rapidjson::Document& doc,
      ServiceCallback* callback);

  virtual ~MDServiceImpl();

  virtual void subMarketData(const InstrumentSet& instruments);

  virtual void unsubMarketData(const InstrumentSet& instruments);

  virtual void subQuoteData(const InstrumentSet& instruments);

  virtual void unsubQuoteData(const InstrumentSet& instruments);

  virtual std::string tradingDay();

  void login();
  void logout();

  void wait(const std::string& hint = "");
  void notify();

 protected:
  typedef enum {
    SUB_MD,
    UNSUB_MD
  }CMDType;
  void subscribe(CMDType, const InstrumentSet& instruments);

 private:
  std::unique_ptr<MDOptions> options_;

  CThostFtdcMdApi* md_api_;
  std::unique_ptr<MDSpiImpl> md_spi_;

  ServiceCallback* callback_;

  std::unique_ptr<soil::STimer> cond_;
};

};  // namespace cata

#endif
