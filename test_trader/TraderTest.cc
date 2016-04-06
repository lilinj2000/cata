// Copyright (c) 2010
// All rights reserved.


#include <memory>
#include <atomic>
#include "gtest/gtest.h"
#include "ThostFtdcTraderApi.h"
#include "soil/STimer.hh"
#include "soil/Log.hh"
#include "soil/DateTime.hh"
#include "message/ThostFtdcUserApiStructPrint.hh"

namespace cata {

class TraderTest : public ::testing::Test, public CThostFtdcTraderSpi {
 public:
  TraderTest():
      front_address_("tcp://180.168.146.187:10000"),
      broker_id_("9999"),
      user_id_("037135"),
      password_("888888"),
      req_id_(0),
      invalid_instru_("cu1403"),
      login_passed_(false),
      case_passed_(false),
      expect_id_(0) {
    soil::DateTime next = cur_ + std::chrono::hours(24*30);
    std::string ym = next.getString("%y%m");
    instru_ = "IF" + ym;
    SOIL_INFO <<instru_;

    SOIL_LOG_INIT("log.cfg");
  }

  void SetUp() {
    SOIL_TRACE <<"SetUp()";

    setCaseFailed();

    try {
      cond_.reset(soil::STimer::create());
      trader_api_ = CThostFtdcTraderApi::CreateFtdcTraderApi();
      trader_api_->RegisterSpi(this);
      trader_api_->RegisterFront(const_cast<char*>(front_address_.data()));
      trader_api_->Init();

      wait();
      login_passed_ = true;
    } catch (std::exception& e) {
      SOIL_ERROR <<"exception catched:\n"
                 <<e.what();
    }
  }

  void TearDown() {
    SOIL_TRACE <<"TearDown()";

    trader_api_->RegisterSpi(nullptr);
    trader_api_->Release();
    trader_api_ = nullptr;
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

  virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo,
                          int nRequestID, bool bIsLast) {
    SOIL_TRACE <<"OnRspError()";

    SOIL_INFO <<"req_id: " <<nRequestID;

    if (pRspInfo)
      SOIL_INFO <<*pRspInfo;

    caseFailed();
  }

  virtual void OnRspQryExchangeMarginRate(
      CThostFtdcExchangeMarginRateField *pExchangeMarginRate,
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
    SOIL_TRACE <<"OnRspQryExchangeMarginRate()";

    try {
      if (pExchangeMarginRate)
        SOIL_INFO <<*pExchangeMarginRate;

      checkRspInfo(pRspInfo);

      if (bIsLast)
        updateCaseStatus(nRequestID);
    } catch (std::exception& e) {
      SOIL_ERROR <<"exception catched:\n"
                 <<e.what();

      caseFailed();
    }
  }

  virtual void OnRspQryInstrument(
      CThostFtdcInstrumentField *pInstrument,
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
    SOIL_TRACE <<"OnRspQryInstrument()";

    try {
      if (pInstrument)
        SOIL_INFO <<*pInstrument;

      checkRspInfo(pRspInfo);

      if (bIsLast)
        updateCaseStatus(nRequestID);
    } catch (std::exception& e) {
      SOIL_ERROR <<"exception catched:\n"
                 <<e.what();

      caseFailed();
    }
  }

 protected:
  void login() {
      CThostFtdcReqUserLoginField req;
      memset(&req, 0x0, sizeof(req));
      strncpy(req.BrokerID, broker_id_.data(), sizeof(req.BrokerID));
      strncpy(req.UserID, user_id_.data(), sizeof(req.UserID));
      strncpy(req.Password, password_.data(), sizeof(req.Password));

      int req_id = ++req_id_;
      SOIL_INFO <<"req id: " <<req_id;
      int ret = trader_api_->ReqUserLogin(&req, req_id);
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

  void updateCaseStatus(int nRequestID) {
    if (expect_id_ == nRequestID) {
      casePassed();
    } else {
      caseFailed();
    }
  }

  CThostFtdcTraderApi* trader_api_;

  std::string front_address_;
  std::string broker_id_;
  std::string user_id_;
  std::string password_;

  std::unique_ptr<soil::STimer> cond_;
  std::atomic<int> req_id_;

  std::string instru_;
  std::string invalid_instru_;

  bool login_passed_;
  bool case_passed_;

  soil::DateTime cur_;

  int expect_id_;
};

TEST_F(TraderTest, loginTest) {
  ASSERT_TRUE(login_passed_);
}

TEST_F(TraderTest, queryTest) {
  ASSERT_TRUE(login_passed_);

  // normal case
  CThostFtdcQryExchangeMarginRateField req;
  memset(&req, 0x0, sizeof(req));

  strncpy(req.BrokerID, broker_id_.data(), sizeof(req.BrokerID));
  strncpy(req.InstrumentID, instru_.data(), sizeof(req.InstrumentID));
  req.HedgeFlag = '1';
  SOIL_INFO <<req;

  try {
    expect_id_ = ++req_id_;
    int ret = trader_api_->ReqQryExchangeMarginRate(&req, expect_id_);

    if (ret != 0) {
      GTEST_FAIL();
    }

    wait();
  } catch (std::exception& e) {
    SOIL_ERROR <<"exception cached:\n"
               <<e.what();
    caseFailed();
  }

  ASSERT_TRUE(case_passed_);

  // over the number of send message per second
  int ret = trader_api_->ReqQryExchangeMarginRate(&req, ++req_id_);
  ASSERT_EQ(ret, -3);

  cond_->wait(1000);
  // at most 1 message for ongoing query method
  ret = trader_api_->ReqQryExchangeMarginRate(&req, ++req_id_);
  ASSERT_EQ(ret, 0);

  ret = trader_api_->ReqQryExchangeMarginRate(&req, ++req_id_);
  ASSERT_EQ(ret, -2);
}

TEST_F(TraderTest, queryInstruInfoTest) {
  ASSERT_TRUE(login_passed_);

  CThostFtdcQryInstrumentField req;
  memset(&req, 0x0, sizeof(req));

  try {
    expect_id_ = ++req_id_;
    int ret = trader_api_->ReqQryInstrument(&req, expect_id_);
    ASSERT_EQ(ret, 0);

    wait();
  } catch (std::exception& e) {
    SOIL_ERROR <<"exception cached:\n"
               <<e.what();
    caseFailed();
  }
}

};  // namespace cata
