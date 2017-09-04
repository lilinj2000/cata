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
#include "soil/json.hh"

namespace cata {

class TraderOptions;
class TraderSpiImpl;

class TraderServiceImpl : public TraderService {
 public:
  TraderServiceImpl(
      const rapidjson::Document& doc,
      TraderCallback* callback);

  virtual ~TraderServiceImpl();

  virtual std::string tradingDay();

  virtual int32_t openBuyOrder(
      const std::string& instru,
      double price,
      int volume);

  virtual int32_t openBuyOrderFAK(
      const std::string& instru,
      double price,
      int volume);

  virtual int32_t openBuyOrderFOK(
      const std::string& instru,
      double price,
      int volume);

  virtual int32_t openSellOrder(
      const std::string& instru,
      double price,
      int volume);

  virtual int32_t openSellOrderFAK(
      const std::string& instru,
      double price,
      int volume);

  virtual int32_t openSellOrderFOK(
      const std::string& instru,
      double price,
      int volume);

  virtual void queryOrder(
      const std::string& instru,
      const std::string& exchange,
      const std::string& order_sys_id,
      const std::string& start_time,
      const std::string& stop_time);

  virtual void queryTrade(
      const std::string& instru,
      const std::string& exchange,
      const std::string& trade_id,
      const std::string& start_time,
      const std::string& stop_time);

  virtual void queryPosition(
      const std::string& instru);

  virtual void queryAccount(
      const std::string& currency_id);

  virtual void queryInvestor();

  virtual void queryTradingCode(
      const std::string& exchange);

  virtual void queryInstruMarginRate(
      const std::string& instru);

  virtual void queryInstruCommissionRate(
      const std::string& instru);

  virtual void queryExchange(
      const std::string& exchange);

  // virtual int queryProduct(
  //     const std::string& product_id,
  //     ProductClassType pc);

  virtual void queryInstrument(
      const std::string& instru,
      const std::string& exchange,
      const std::string& exchange_instru_id,
      const std::string& product_id);

  virtual void queryDepthMarketData(
      const std::string& instru);

  // virtual int queryExchangeMarginRate(
  //     const std::string& instru,
  //     HedgeFlagType hedge_flag);

  // virtual int queryExchangeMarginRateAdjust(
  //     const std::string& instru,
  //     HedgeFlagType hedge_flag);

  void login();

  void rspLogin(
      const CThostFtdcRspUserLoginField* rsp);

  void logout();

  void querySettlementInfo();

  void querySettlementInfoConfirm();

  TraderCallback* callback() {
    return callback_;
  }

  void notify() {
    cond_->notifyAll();
  }

 protected:
  void settlementInfoConfirm();

  std::shared_ptr<CThostFtdcInputOrderField>
  reqOrderMessage(
    const std::string& instru,
    double price, int volume);

  int32_t orderGo(
      std::shared_ptr<CThostFtdcInputOrderField> req);

  int reqID() {
    return ++request_id_;
  }

  void wait(const std::string& hint = "") {
    if (cond_->wait(2000)) {
      if (!hint.empty())
        throw std::runtime_error(hint + " time out");
    }
  }

 private:
  std::unique_ptr<TraderOptions> options_;

  CThostFtdcTraderApi* trader_api_;
  std::unique_ptr<TraderSpiImpl> trader_spi_;
  TraderCallback* callback_;

  std::atomic<int> request_id_;
  std::unique_ptr<soil::STimer> cond_;

  int front_id_;
  int session_id_;
  std::atomic<int32_t> max_order_ref_;
};

};  // namespace cata

#endif  // CATA_TRADERSERVICE_IMPL_HH
