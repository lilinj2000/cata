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
      MDCallback* callback);

  virtual ~MDServiceImpl();

  virtual void subMarketData(char *instrus[], int count);

  virtual void unsubMarketData(char *instrus[], int count);

  virtual void subQuoteData(char *instrus[], int count);

  virtual void unsubQuoteData(char *instrus[], int count);

  virtual std::string tradingDay();

  void login();
  void logout();

  void wait(const std::string& hint = "");
  void notify();

  MDCallback* callback() {
    return callback_;
  }

 private:
  std::unique_ptr<MDOptions> options_;

  CThostFtdcMdApi* md_api_;
  std::unique_ptr<MDSpiImpl> md_spi_;

  MDCallback* callback_;

  std::unique_ptr<soil::STimer> cond_;
};

};  // namespace cata

#endif
