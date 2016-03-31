// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_MDSERVICE_IMPL_HH
#define CATA_MDSERVICE_IMPL_HH

#include "ThostFtdcMdApi.h"
#include <string>
#include <memory>
#include "cata/MDService.hh"
#include "message/Message.hh"
#include "soil/STimer.hh"
#include "soil/MsgQueue.hh"

namespace cata {

class MDOptions;
class MDSpiImpl;
class RspUserLoginMessage;

typedef enum {
  UNAVAILABLE,
  AVAILABLE
}MDServiceStatus;

class MDServiceImpl : public MDService {
 public:
  MDServiceImpl(soil::Options* options, MDServiceCallback* callback);

  virtual ~MDServiceImpl();

  virtual void subMarketData(const InstrumentSet& instruments);

  virtual void unsubMarketData(const InstrumentSet& instruments);

  virtual void subQuoteData(const InstrumentSet& instruments);

  virtual void unsubQuoteData(const InstrumentSet& instruments);

  virtual std::string tradingDay();

  void login();

  void rspLogin(const RspUserLoginMessage*);

  void wait(const std::string& hint = "");
  void notify();

  void pushData(Message* data);

  inline
  void msgCallback(const Message* msg) {
    if (callback_)
      callback_->msgCallback(msg->toString());
  }

 private:
  MDOptions* options_;

  CThostFtdcMdApi* md_api_;
  std::unique_ptr<MDSpiImpl> md_spi_;

  MDServiceCallback* callback_;

  std::unique_ptr<soil::MsgQueue<Message, MDServiceImpl> > md_queue_;

  std::unique_ptr<soil::STimer> cond_;

  MDServiceStatus status_;
};

};  // namespace cata

#endif
