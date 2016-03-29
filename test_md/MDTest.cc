// Copyright (c) 2010
// All rights reserved.


#include <memory>
#include <atomic>
#include "gtest/gtest.h"
#include "ThostFtdcMdApi.h"
#include "soil/STimer.hh"
#include "soil/Log.hh"
#include "message/ThostFtdcUserApiStructPrint.hh"

namespace cata {

class MDTest : public ::testing::Test, public CThostFtdcMdSpi {
 public:
  MDTest():
      front_address("tcp://180.168.146.187:10010"),
      req_id_(0),
      instru_("cu1605"),
      invalid_instru_("cu1403"),
      login_passed_(false),
      case_passed_(false) {
  }

  void SetUp() {
    SOIL_TRACE <<"SetUp()";

    setCaseFailed();

    try {
      cond_.reset(soil::STimer::create());
      md_api_ = CThostFtdcMdApi::CreateFtdcMdApi();
      md_api_->RegisterSpi(this);
      md_api_->RegisterFront(const_cast<char*>(front_address.data()));
      md_api_->Init();

      wait();
      login_passed_ = true;
    } catch (std::exception& e) {
      SOIL_ERROR <<"exception catched:\n"
                 <<e.what();
    }
  }

  void TearDown() {
    SOIL_TRACE <<"TearDown()";

    md_api_->RegisterSpi(nullptr);
    md_api_->Release();
    md_api_ = nullptr;
  }

  virtual void OnFrontConnected() {
    SOIL_TRACE <<"OnFrontConnected()";

    try {
      login();
    } catch (std::exception& e) {
      SOIL_ERROR <<"exception catched:\n"
                 <<e.what();
      caseFailed();
    }
  }

  virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin,
                              CThostFtdcRspInfoField *pRspInfo,
                              int nRequestID, bool bIsLast) {
    SOIL_TRACE <<"OnRspUserLogin()";

    try {
      SOIL_INFO <<"req_id: " <<nRequestID;
      if (pRspUserLogin)
        SOIL_INFO <<*pRspUserLogin;

      checkRspInfo(pRspInfo);

      if (bIsLast)
        casePassed();
    } catch (std::exception& e) {
      SOIL_ERROR <<"exception catched:\n"
                 <<e.what();
      caseFailed();
    }
  }

  virtual void OnRspSubMarketData(
      CThostFtdcSpecificInstrumentField *pSpecificInstrument,
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
    SOIL_TRACE <<"OnRspSubMarketData()";

    try {
      SOIL_INFO <<"req_id: " <<nRequestID;
      if (pSpecificInstrument)
        SOIL_INFO <<*pSpecificInstrument;

      checkRspInfo(pRspInfo);

      if (bIsLast)
        casePassed();
    } catch (std::exception& e) {
      SOIL_ERROR <<"exception catched:\n"
                 <<e.what();
      caseFailed();
    }
  }

  virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo,
                          int nRequestID, bool bIsLast) {
    SOIL_TRACE <<"OnRspError()";

    SOIL_INFO <<"req_id: " <<nRequestID;

    if (pRspInfo)
      SOIL_INFO <<*pRspInfo;

    caseFailed();
  }

  virtual void OnRtnDepthMarketData(
      CThostFtdcDepthMarketDataField *pDepthMarketData) {
    SOIL_TRACE <<"OnRtnDepthMarketData()";

    if (pDepthMarketData)
      SOIL_INFO <<*pDepthMarketData;
  }

 protected:
  void login() {
      CThostFtdcReqUserLoginField req;
      memset(&req, 0x0, sizeof(req));

      int req_id = ++req_id_;
      SOIL_INFO <<"req id: " <<req_id;
      int ret = md_api_->ReqUserLogin(&req, req_id);
      if (ret != 0) {
        throw std::runtime_error("login failed.");
      }
  }

  void checkRspInfo(CThostFtdcRspInfoField *pRspInfo) {
    SOIL_TRACE <<"checkRspInfo()";

    if (pRspInfo)
      SOIL_INFO <<*pRspInfo;

    bool result = ((pRspInfo) && (pRspInfo->ErrorID != 0));
    if (result) {
      std::stringstream err_stream;
      err_stream <<"ErrorID=" <<pRspInfo->ErrorID <<","
                 <<"ErrorMsg=" <<pRspInfo->ErrorMsg;

      throw std::runtime_error(err_stream.str());
    }
  }

  void setCasePassed() {
    case_passed_ = true;
  }

  void setCaseFailed() {
    case_passed_ = false;
  }

  void wait(int timeout = 2000) {
    if (cond_->wait(timeout))
      throw std::runtime_error("time out.");
  }

  void casePassed() {
    setCasePassed();
    cond_->notifyAll();
  }

  void caseFailed() {
    setCaseFailed();
    cond_->notifyAll();
  }

  CThostFtdcMdApi* md_api_;

  std::string front_address;

  std::unique_ptr<soil::STimer> cond_;
  std::atomic<int> req_id_;

  std::string instru_;
  std::string invalid_instru_;

  bool login_passed_;
  bool case_passed_;
};

TEST_F(MDTest, loginTest) {
  ASSERT_TRUE(login_passed_);
}

TEST_F(MDTest, subTest) {
  ASSERT_TRUE(login_passed_);

  try {
    char* instrus[] = { const_cast<char*>(instru_.data()) };

    md_api_->SubscribeMarketData(instrus, 1);

    wait();
  } catch (std::exception& e) {
    SOIL_ERROR <<"exception catched:\n"
               <<e.what();
    caseFailed();
  }

  ASSERT_TRUE(case_passed_);
}

TEST_F(MDTest, dupSubTest) {
  try {
    char* instrus[] = { const_cast<char*>(instru_.data()) };

    md_api_->SubscribeMarketData(instrus, 1);
    wait();

    md_api_->SubscribeMarketData(instrus, 1);
    wait();
  } catch (std::exception& e) {
    SOIL_ERROR <<"exception catched:\n"
               <<e.what();
    caseFailed();
  }

  ASSERT_TRUE(case_passed_);
}

TEST_F(MDTest, subInvalidInstruTest) {
  try {
    char* instrus[] = { const_cast<char*>(invalid_instru_.data()) };
    md_api_->SubscribeMarketData(instrus, 1);
    wait();
  } catch (std::exception& e) {
    SOIL_ERROR <<"exception catched:\n"
               <<e.what();
    caseFailed();
  }

  ASSERT_TRUE(case_passed_);
}


};  // namespace cata
