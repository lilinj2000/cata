// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_MDSERVICE_IMPL_HH
#define CATA_MDSERVICE_IMPL_HH

#include "ThostFtdcMdApi.h"
#include <string>
#include <atomic>
#include <memory>
#include "cata/MDService.hh"
#include "soil/STimer.hh"
#include "soil/MsgQueue.hh"


namespace cata {

class MDOptions;
class MDSpiImpl;

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

  void wait(const std::string& hint = "");
  void notify();

  void pushData(DepthMarketData* data);

  inline
  void msgCallback(const DepthMarketData* msg) {
    if (callback_)
      callback_->onRtnMarketData(msg);
  }

 private:
  MDOptions* options_;

  CThostFtdcMdApi* md_api_;
  std::unique_ptr<MDSpiImpl> md_spi_;

  MDServiceCallback* callback_;

  std::atomic<int> request_id_;

  std::unique_ptr<soil::MsgQueue<DepthMarketData, MDServiceImpl> > md_queue_;

  std::unique_ptr<soil::STimer> cond_;
};


};  // namespace cata

#endif
