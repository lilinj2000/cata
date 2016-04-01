// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_TRADERSERVICE_IMPL_HH
#define CATA_TRADERSERVICE_IMPL_HH

#include "ThostFtdcTraderApi.h"
#include <memory>
#include <atomic>
#include <string>
#include "cata/TraderService.hh"
#include "message/Message.hh"
#include "soil/STimer.hh"
#include "soil/MsgQueue.hh"

namespace cata {

class TraderOptions;
class TraderSpiImpl;
class RspUserLoginMessage;

typedef enum {
  UNAVAILABLE,
  AVAILABLE
}TraderServiceStatus;

class TraderServiceImpl : public TraderService {
 public:
  TraderServiceImpl(soil::Options* options, ServiceCallback* callback);
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

  virtual int queryExchangeMarginRate(const std::string& instru,
                                      HedgeFlagType hedge_flag = HF_ALL);

  virtual int queryExchangeMarginRateAdjust(const std::string& instru);

  virtual int queryInstruMarginRate(const std::string& instru);

  void login();

  void rspLogin(const RspUserLoginMessage*);

  void querySettlementInfo();

  void querySettlementInfoConfirm();

  void settlementInfoConfirm();

  void wait(const std::string& hint = "");

  void notify();

  void pushData(Message* data);

  inline
  void msgCallback(const Message* msg) {
    if (callback_) {
      if (msg->id() < RSP_ID_MAX) {  // response message
        callback_->onRspMessage(msg->toString());
      } else {  // return message
        callback_->onRtnMessage(msg->toString());
      }
    }
  }

 protected:
  CThostFtdcInputOrderField* orderField(int* order_ref);

  void orderGo(CThostFtdcInputOrderField* req);

 private:
  TraderOptions* options_;

  CThostFtdcTraderApi* trader_api_;
  std::unique_ptr<TraderSpiImpl> trader_spi_;

  ServiceCallback* callback_;

  std::atomic<int> request_id_;

  std::unique_ptr<soil::STimer> cond_;

  int front_id_;
  int session_id_;
  std::atomic<int> max_order_ref_;

  std::unique_ptr<soil::MsgQueue<Message, TraderServiceImpl> > rsp_queue_;

  TraderServiceStatus status_;
};

};  // namespace cata

#endif  // CATA_TRADERSERVICE_IMPL_HH
