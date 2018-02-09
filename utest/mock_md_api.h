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
// File: [file_name]
// -----------------------------------------------------------------------------
//
// [file_descrition]
//
// Example:
//
//   ... ...
//
//


#ifndef UTEST_MOCK_MD_API_H_
#define UTEST_MOCK_MD_API_H_

#include <set>
#include <string>
#include <thread>  // NOLINT
#include "ThostFtdcMdApi.h"
#include "gmock/gmock.h"
#include "soil/log.h"
#include "soil/reader_writer_queue.h"
#include "soil/s_timer.h"
#include "soil/date_time.h"
#include "soil/macro.h"

typedef enum {
  CMD_Init = 1,
  CMD_ReqUserLogin,
  CMD_SubscribeMarketData
} CMDType;

class MockCThostFtdcMdApi :
    public CThostFtdcMdApi,
    public soil::MsgCallback<CMDType> {
 public:
  MOCK_METHOD0(Join,
               int());
  MOCK_METHOD1(RegisterFront,
               void(char *pszFrontAddress));
  MOCK_METHOD1(RegisterNameServer,
               void(char *pszNsAddress));
  MOCK_METHOD1(RegisterFensUserInfo,
               void(CThostFtdcFensUserInfoField * pFensUserInfo));
  MOCK_METHOD2(UnSubscribeMarketData,
               int(char *ppInstrumentID[], int nCount));
  MOCK_METHOD2(SubscribeForQuoteRsp,
               int(char *ppInstrumentID[], int nCount));
  MOCK_METHOD2(UnSubscribeForQuoteRsp,
               int(char *ppInstrumentID[], int nCount));
  MOCK_METHOD2(ReqUserLogout,
               int(CThostFtdcUserLogoutField *pUserLogout, int nRequestID));

  MockCThostFtdcMdApi() {
    SOIL_FUNC_TRACE;

    cond_.reset(soil::STimer::create());

    queue_.reset(
        new soil::ReaderWriterQueue<CMDType>(
            this));

    wait();
  }

  void RegisterSpi(CThostFtdcMdSpi *pSpi) {
    SOIL_FUNC_TRACE;

    spi_ = pSpi;
  }

  void Init() {
    SOIL_FUNC_TRACE;

    pushMsg(CMD_Init);
  }

  void Release() {
    SOIL_FUNC_TRACE;

    delete this;
  }

  const char* GetTradingDay() {
    SOIL_FUNC_TRACE;

    soil::DateTime date;
    return date.getString("%Y%m%d").c_str();
  }

  int ReqUserLogin(
      CThostFtdcReqUserLoginField *pReqUserLoginField,
      int nRequestID) {
    SOIL_FUNC_TRACE;

    pushMsg(CMD_ReqUserLogin);
    return 0;
  }

  int SubscribeMarketData(
      char *ppInstrumentID[],
      int nCount) {
    SOIL_FUNC_TRACE;

    for (size_t i = 0; i < nCount; ++i) {
      md_instrus_.insert(ppInstrumentID[i]);
    }

    pushMsg(CMD_SubscribeMarketData);
    return 0;
  }

  void wait(int ms = -1) {
    cond_->wait(ms);
  }

  void notify() {
    cond_->notifyAll();
  }

  void pushMsg(CMDType cmd) {
    std::shared_ptr<CMDType> theCMD;
    theCMD.reset(new CMDType(cmd));

    queue_->pushMsg(theCMD);
  }

  virtual void onStart() {
    SOIL_FUNC_TRACE;

    notify();
  }

  virtual void onMsg(
      std::shared_ptr<CMDType> msg) {
    SOIL_FUNC_TRACE;

    if (!spi_) {
      return;
    }

    CThostFtdcRspInfoField rspInfo;
    memset(&rspInfo, 0x0, sizeof(rspInfo));
    int nRequestID = 999;
    bool bIsLast = true;

    switch (*msg) {
      case CMD_Init:
        spi_->OnFrontConnected();
        break;

      case CMD_ReqUserLogin:
        CThostFtdcRspUserLoginField rspUserLogin;
        memset(&rspUserLogin,
               0x0,
               sizeof(rspUserLogin));

        spi_->OnRspUserLogin(
            &rspUserLogin,
            &rspInfo,
            nRequestID,
            bIsLast);
        break;

      case CMD_SubscribeMarketData:
        CThostFtdcSpecificInstrumentField field;
        memset(&field, 0x0, sizeof(field));

        CThostFtdcDepthMarketDataField md;
        memset(&md, 0x0, sizeof(md));

        for (auto& instru : md_instrus_) {
          S_INPUT(&field,
                  CThostFtdcSpecificInstrumentField,
                  InstrumentID,
                  instru.data());

          spi_->OnRspSubMarketData(
              &field,
              &rspInfo,
              nRequestID,
              bIsLast);

          S_INPUT(&md,
                  CThostFtdcDepthMarketDataField,
                  InstrumentID,
                  instru.data());
          spi_->OnRtnDepthMarketData(&md);
        }
        break;
    }
  }

  virtual void onStop() {
    SOIL_FUNC_TRACE;
  }

 private:
  CThostFtdcMdSpi* spi_;

  std::unique_ptr<
    soil::ReaderWriterQueue<CMDType> > queue_;

  std::unique_ptr<soil::STimer> cond_;
  std::set<std::string> md_instrus_;
};

#endif  // UTEST_MOCK_MD_API_H_
