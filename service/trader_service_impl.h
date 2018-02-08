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


#ifndef CATA_TRADERSERVICE_IMPL_H_
#define CATA_TRADERSERVICE_IMPL_H_

#include "ThostFtdcTraderApi.h"
#include <memory>
#include <atomic>
#include <string>
#include "cata/trader_service.h"
#include "soil/s_timer.h"
#include "soil/json.h"

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

  virtual int32_t closeBuyOrder(
      const std::string& instru,
      double price,
      int volume);

  virtual int32_t closeBuyOrderFAK(
      const std::string& instru,
      double price,
      int volume);

  virtual int32_t closeBuyOrderFOK(
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

  virtual int32_t closeSellOrder(
      const std::string& instru,
      double price,
      int volume);

  virtual int32_t closeSellOrderFAK(
      const std::string& instru,
      double price,
      int volume);

  virtual int32_t closeSellOrderFOK(
      const std::string& instru,
      double price,
      int volume);

  virtual void cancelOrder(
      int32_t order_ref,
      const std::string& instru);

  virtual void cancelOrder(
      const std::string& exchange_id,
      const std::string& order_sys_id,
      const std::string& instru);

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

  virtual void queryProduct(
      const std::string& product_id);

  virtual void queryInstrument(
      const std::string& instru,
      const std::string& exchange,
      const std::string& exchange_instru_id,
      const std::string& product_id);

  virtual void queryDepthMarketData(
      const std::string& instru);

  virtual void queryExchangeMarginRate(
      const std::string& instru);

  virtual void queryExchangeMarginRateAdjust(
      const std::string& instru);

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
    double price,
    int volume,
    TThostFtdcDirectionType direction = THOST_FTDC_D_Buy,
    TThostFtdcOffsetFlagType offset_flag = THOST_FTDC_OF_Open,
    TThostFtdcTimeConditionType time_condition = THOST_FTDC_TC_GFD,
    TThostFtdcVolumeConditionType volume_condition = THOST_FTDC_VC_AV);

  int32_t orderGo(
      std::shared_ptr<CThostFtdcInputOrderField> req);

  int reqID() {
    return ++request_id_;
  }

  std::string orderRef(int32_t order_ref) {
    return fmt::format("{:0>12}", order_ref);
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
