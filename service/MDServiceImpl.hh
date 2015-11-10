#ifndef CATA_MDSERVICE_IMPL_HH
#define CATA_MDSERVICE_IMPL_HH

#include <memory>

#include "cata/MDService.hh"
#include "DepthMarketDataQueue.hh"

#include "ThostFtdcMdApi.h"

#include <boost/atomic.hpp>
#include "soil/STimer.hh"


namespace cata
{

class MDOptions;
class MDSpiImpl;

class MDServiceImpl : public MDService
{
 public:
		
  MDServiceImpl(soil::Options* options, MDServiceCallback* callback);
		
  virtual ~MDServiceImpl();

  virtual void subMarketData(const InstrumentSet& instruments);

  virtual void unsubMarketData(const InstrumentSet& instruments);

  virtual void subQuoteData(const InstrumentSet& instruments);

  virtual void unsubQuoteData(const InstrumentSet& instruments);

  virtual std::string tradingDay();

  void login();

  void wait(const std::string& hint="");
  
  void notify();

  void pushData(DepthMarketData* data);
  
  MDServiceCallback* callback() { return callback_; }
  
 protected:
  // void  minusInstr(const InstrumentSet& instruments1, const InstrumentSet& instruments2, InstrumentSet& result);
  
  // void  intersecInstr(const InstrumentSet& instruments1, const InstrumentSet& instruments2, InstrumentSet& result);

  
 private:

  MDOptions* options_;
  
  CThostFtdcMdApi* md_api_;
  
  std::unique_ptr<MDSpiImpl> md_spi_;

  MDServiceCallback* callback_;
  
  boost::atomic<int> request_id_;

  std::unique_ptr<DepthMarketDataQueue<MDServiceCallback> > md_queue_;

  std::unique_ptr<soil::STimer> cond_;
};


}; // namesapce cata

#endif
