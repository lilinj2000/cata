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
class ReqOrderInsertMessage;

typedef enum {
  UNAVAILABLE,
  AVAILABLE
}TraderServiceStatus;

class TraderServiceImpl : public TraderService {
 public:
  TraderServiceImpl(soil::Options* options, ServiceCallback* callback);
  virtual ~TraderServiceImpl();

  virtual std::string apiVersion();

  virtual std::string tradingDay();

  virtual int order(DirectionType direct,
                    OffsetFlagType of,
                    HedgeFlagType hf,
                    const std::string& instru,
                    double price, int volume);

  virtual int orderFAK(DirectionType direct,
                       OffsetFlagType of,
                       HedgeFlagType hf,
                       const std::string& instru,
                       double price, int volume);

  virtual int orderFOK(DirectionType direct,
                       OffsetFlagType of,
                       HedgeFlagType hf,
                       const std::string& instru,
                       double price, int volume);

  virtual int queryOrder(const std::string& instru,
                         const std::string& exchange,
                         const std::string& order_sys_id,
                         const std::string& start_time,
                         const std::string& stop_time);

  virtual int queryTrade(const std::string& instru,
                         const std::string& exchange,
                         const std::string& trade_id,
                         const std::string& start_time,
                         const std::string& stop_time);

  virtual int queryPosition(const std::string& instru);

  virtual int queryAccount(const std::string& currency_id);

  virtual int queryInvestor();

  virtual int queryTradingCode(const std::string& exchange,
                               const std::string& client_id,
                               ClientIDType cidt);

  virtual int queryInstruMarginRate(const std::string& instru,
                                    HedgeFlagType hedge_flag);

  virtual int queryInstruCommissionRate(const std::string& instru);

  virtual int queryExchange(const std::string& exchange);

  virtual int queryProduct(const std::string& product_id,
                           ProductClassType pc);

  virtual int queryInstrument(const std::string& instru,
                              const std::string& exchange,
                              const std::string& exchange_instru_id,
                              const std::string& product_id);

  virtual int queryExchangeMarginRate(const std::string& instru,
                                      HedgeFlagType hedge_flag);

  virtual int queryExchangeMarginRateAdjust(const std::string& instru,
                                            HedgeFlagType hedge_flag);


  void login();

  void rspLogin(const RspUserLoginMessage*);

  void logout();

  void rspLogout();

  void querySettlementInfo();

  void querySettlementInfoConfirm();


  void pushData(Message* data) {
    rsp_queue_->pushMsg(data);
  }

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
  void settlementInfoConfirm();

  ReqOrderInsertMessage* reqOrderMessage(DirectionType direct,
                                         OffsetFlagType of,
                                         HedgeFlagType hf,
                                         const std::string& instru,
                                         double price, int volume);

  void orderGo(const Message* msg);

  int reqID() {
    return ++request_id_;
  }

  void pushOrderReq(Message* data) {
    order_queue_->pushMsg(data);
  }

  void wait(const std::string& hint = "") {
    if (cond_->wait(2000)) {
      if (!hint.empty())
        throw std::runtime_error(hint + " time out");
    }
  }

  void notify() {
    cond_->notifyAll();
  }

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

  class ReqOrderQueueCallback {
   public:
    explicit ReqOrderQueueCallback(TraderServiceImpl* service):
        service_(service) {
    }

    inline
    void msgCallback(const Message* msg) {
      service_->orderGo(msg);
    }
   private:
    TraderServiceImpl* service_;
  };
  std::unique_ptr<ReqOrderQueueCallback> order_queue_callback_;
  std::unique_ptr<soil::MsgQueue<Message, ReqOrderQueueCallback> > order_queue_;

  TraderServiceStatus status_;
};

};  // namespace cata

#endif  // CATA_TRADERSERVICE_IMPL_HH
