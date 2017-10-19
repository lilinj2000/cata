// Copyright (c) 2010
// All rights reserved.

#ifndef CTHOSTFTDC_MDAPI_FAKE_HH
#define CTHOSTFTDC_MDAPI_FAKE_HH

#include "soil/Log.hh"

class CThostFtdcMdApiFake {
 public:
  virtual void Release() {
    SOIL_FUNC_TRACE;
  }
	
  virtual void Init() {
    SOIL_FUNC_TRACE;
  }
	
  virtual const char *GetTradingDay() {
    SOIL_FUNC_TRACE;
  }

  virtual void RegisterSpi(
      CThostFtdcMdSpi *pSpi) {
    SOIL_FUNC_TRACE;
  }

  virtual int SubscribeMarketData(
      char *ppInstrumentID[],
      int nCount) {
    SOIL_FUNC_TRACE;
  }

  virtual int ReqUserLogin(
      CThostFtdcReqUserLoginField *pReqUserLoginField,
      int nRequestID) {
    SOIL_FUNC_TRACE;
  }
	
  virtual int ReqUserLogout(
      CThostFtdcUserLogoutField *pUserLogout,
      int nRequestID) {
    SOIL_FUNC_TRACE;
  }

  ~CThostFtdcMdApiFake() {
    SOIL_FUNC_TRACE;
  }
};

#endif
