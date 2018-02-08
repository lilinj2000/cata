// Copyright 2017 The Cata Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// -----------------------------------------------------------------------------
// File: MDService.h
// -----------------------------------------------------------------------------
//
// [file_descrition]
//
// Example:
//
//   ... ...
//
//


#ifndef CATA_MDSERVICE_H_
#define CATA_MDSERVICE_H_

#include <string>
#include "soil/json.h"
#include "soil/log.h"

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
