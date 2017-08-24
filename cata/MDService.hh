// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_MDSERVICE_HH
#define CATA_MDSERVICE_HH

#include <string>
#include <set>
#include "rapidjson/Document.h"

namespace cata {

class MDCallback {
 public:
  virtual void onRspError(const std::string& rsp) = 0;

  virtual void onRspSubMarketData(const std::string& rsp) = 0;

  virtual void onRspSubForQuoteRsp(const std::string& rsp) = 0;

  virtual void onRspUnSubMarketData(const std::string& rsp) = 0;

  virtual void onRspUnSubForQuoteRsp(const std::string& rsp) = 0;

  virtual void onRtnDepthMarketData(const std::string& rtn_md) = 0;

  virtual void onRtnForQuoteRsp(const std::string& rtn_quote) = 0;

  virtual ~MDCallback() {
  }
};

class MDService {
 public:
  virtual void subMarketData(char *instrus[], int count) = 0;

  virtual void unsubMarketData(char *instrus[], int count) = 0;

  virtual void subQuoteData(char *instrus[], int count) = 0;

  virtual void unsubQuoteData(char *instrus[], int count) = 0;

  virtual std::string tradingDay() = 0;

  virtual ~MDService() {}

  static MDService* create(
      const rapidjson::Document& doc,
      MDCallback* callback);
};

};  // namespace cata

#endif  // CATA_MDSERVICE_HH
