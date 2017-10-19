// Copyright (c) 2010
// All rights reserved.

#ifndef CTHOSTFTDC_MDAPI_MOCK_HH
#define CTHOSTFTDC_MDAPI_MOCK_HH

#include "ThostFtdcMdApi.h"
#include "gmock/gmock.h"
#include "CThostFtdcMdApiFake.hh"

using ::testing::_;
using ::testing::Invoke;

class CThostFtdcMdApiMock :
    public CThostFtdcMdApi {
 public:
  MOCK_METHOD0(Release, void());
  MOCK_METHOD0(Init, void());
  MOCK_METHOD0(Join, int());
  MOCK_METHOD0(GetTradingDay, const char *());
  MOCK_METHOD1(RegisterFront,
               void(char * pszFrontAddress));
  MOCK_METHOD1(RegisterNameServer,
               void(char *pszNsAddress));
  MOCK_METHOD1(RegisterFensUserInfo,
               void(CThostFtdcFensUserInfoField* pFensUserInfo));

  MOCK_METHOD1(RegisterSpi, void(CThostFtdcMdSpi* pSpi));
    
  MOCK_METHOD2(SubscribeMarketData, int(char* ppInstrumentID[], int nCount));
  MOCK_METHOD2(UnSubscribeMarketData, int(char *ppInstrumentID[], int nCount));
  MOCK_METHOD2(SubscribeForQuoteRsp, int(char *ppInstrumentID[], int nCount));
  MOCK_METHOD2(UnSubscribeForQuoteRsp, int(char *ppInstrumentID[], int nCount));
  MOCK_METHOD2(ReqUserLogin, int(CThostFtdcReqUserLoginField* pReqUserLoginField, int nRequestID));
  MOCK_METHOD2(ReqUserLogout, int(CThostFtdcUserLogoutField* pUserLogout, int nRequestID));

  void DelegateToFake() {
    ON_CALL(*this, RegisterSpi(_))
        .WillByDefault(Invoke(&fake_, &CThostFtdcMdApiFake::RegisterSpi));
    ON_CALL(*this, Init())
        .WillByDefault(Invoke(&fake_, &CThostFtdcMdApiFake::Init));

  }

 private:
  CThostFtdcMdApiFake fake_;
};

#endif
