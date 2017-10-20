// Copyright (c) 2010
// All rights reserved.

#ifndef MOCKCTHOSTFTDCMDAPI_HH
#define MOCKCTHOSTFTDCMDAPI_HH

#include <thread>
#include "ThostFtdcMdApi.h"
#include "gmock/gmock.h"
#include "soil/Log.hh"
#include "soil/ReaderWriterQueue.hh"
#include "soil/STimer.hh"
#include "soil/DateTime.hh"
#include "soil/Macro.hh"

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

    for (size_t i = 0; i<nCount; ++i) {
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

#endif
