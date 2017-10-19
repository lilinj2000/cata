// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_MDSERVICE_IMPL_HH
#define CATA_MDSERVICE_IMPL_HH

#include <string>
#include <memory>
#include <set>
#include "MdApiService.hh"
#include "rapidjson/document.h"
#include "cata/MDService.hh"
#include "soil/STimer.hh"

namespace cata {

class MDOptions;
class MDSpiImpl;

typedef std::set<std::string> InstrusType;

class MDServiceImpl : public MDService {
 public:
  MDServiceImpl(
      const rapidjson::Document& doc,
      MDCallback* callback,
      MdApiService* mdApiService);

  virtual ~MDServiceImpl();

  virtual void subMarketData(char *instrus[], int count);

  virtual void unsubMarketData(char *instrus[], int count);

  virtual void subQuoteData(char *instrus[], int count);

  virtual void unsubQuoteData(char *instrus[], int count);

  virtual std::string tradingDay();

  void login();

  void onRspLogin();

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

  InstrusType md_instrus_;  // sub market data
  InstrusType qd_instrus_;  // sub quote data
};

};  // namespace cata

#endif
