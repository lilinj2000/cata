// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_TRADERSERVICE_IMPL_HH
#define CATA_TRADERSERVICE_IMPL_HH

#include "ThostFtdcTraderApi.h"
#include <memory>
#include <atomic>
#include <string>
#include "cata/TraderService.hh"
#include "soil/STimer.hh"

namespace cata {

class TraderOptions;
class TraderSpiImpl;

class TraderServiceImpl : public TraderService {
 public:
  TraderServiceImpl(soil::Options* options, TraderServiceCallback* callback);
  virtual ~TraderServiceImpl();

  virtual std::string tradingDay();

  virtual int orderOpenBuy(const std::string& instru,
                           double price, int volume);

  virtual int orderOpenBuyFAK(const std::string& instru,
                              double price, int volume);

  virtual int orderOpenBuyFOK(const std::string& instru,
                              double price, int volume);

  virtual int orderOpenSell(const std::string& instru,
                            double price, int volume);

  virtual int orderCloseBuy(const std::string& instru,
                            double price, int volume);

  virtual int orderCloseSell(const std::string& instru,
                            double price, int volume);

  virtual int queryExchangeMarginRate(const std::string& instru);

  virtual int queryExchangeMarginRateAdjust(const std::string& instru);

  virtual int queryInstruMarginRate(const std::string& instru);

  void login();

  void querySettlementInfo();

  void querySettlementInfoConfirm();

  void settlementInfoConfirm();

  void initSession(CThostFtdcRspUserLoginField* pRspUserLogin);

  void wait(const std::string& hint = "");
  void notify();

  TraderServiceCallback* callback() { return callback_; }

 protected:
  CThostFtdcInputOrderField* orderField(int* order_ref);

  void orderGo(CThostFtdcInputOrderField* req);

 private:
  TraderOptions* options_;

  CThostFtdcTraderApi* trader_api_;
  std::unique_ptr<TraderSpiImpl> trader_spi_;

  TraderServiceCallback* callback_;

  std::atomic<int> request_id_;

  std::unique_ptr<soil::STimer> cond_;

  int front_id_;
  int session_id_;
  std::atomic<int> max_order_ref_;
};

};  // namespace cata

#endif  // CATA_TRADERSERVICE_IMPL_HH
