// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_MDSERVICE_HH
#define CATA_MDSERVICE_HH

#include <string>
#include "soil/json.hh"
#include "soil/Log.hh"

namespace cata {

class MDCallback {
 public:
  virtual void onRspError(
      const std::string& theRspInfo,
      int nRequestID,
      bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspSubMarketData(
      const std::string& theSpecificInstrument,
      const std::string& theRspInfo,
      int nRequestID,
      bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theSpecificInstrument);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspUnSubMarketData(
      const std::string& theSpecificInstrument,
      const std::string& theRspInfo,
      int nRequestID,
      bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theSpecificInstrument);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspSubForQuoteRsp(
      const std::string& theSpecificInstrument,
      const std::string& theRspInfo,
      int nRequestID,
      bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theSpecificInstrument);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRspUnSubForQuoteRsp(
      const std::string& theSpecificInstrument,
      const std::string& theRspInfo,
      int nRequestID,
      bool bIsLast) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theSpecificInstrument);
    SOIL_DEBUG_PRINT(theRspInfo);
    SOIL_DEBUG_PRINT(nRequestID);
    SOIL_DEBUG_PRINT(bIsLast);
  }

  virtual void onRtnDepthMarketData(
      const std::string& theDepthMarketData) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theDepthMarketData);
  }

  virtual void onRtnForQuoteRsp(
      const std::string& theForQuoteRsp) {
    SOIL_FUNC_TRACE;

    SOIL_DEBUG_PRINT(theForQuoteRsp);
  }

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
