#ifndef CATA_TRADER_SERVICE_IMPL_HH
#define CATA_TRADER_SERVICE_IMPL_HH

#include <memory>

#include "cata/TraderService.hh"
#include "ThostFtdcTraderApi.h"

#include <boost/atomic.hpp>
#include "soil/STimer.hh"

namespace cata
{

class TraderOptions;
class TraderSpiImpl;

class TraderServiceImpl : public TraderService
{
 public:
		
  TraderServiceImpl(soil::Options* options, TraderServiceCallback* callback);
		
  virtual ~TraderServiceImpl();

  virtual std::string tradingDay() ;

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

  void login();

  void querySettlementInfo();

  void querySettlementInfoConfirm();
  
  void settlementInfoConfirm();

  void initSession(CThostFtdcRspUserLoginField* pRspUserLogin);

  void wait(const std::string& hint="");
  
  void notify();

  TraderServiceCallback* callback() { return callback_; }
  
 protected:

  CThostFtdcInputOrderField* orderField(int& order_ref);

  void orderGo(CThostFtdcInputOrderField* req);
  
 private:
  
  TraderOptions* options_;
    
  CThostFtdcTraderApi* trader_api_;
  
  std::unique_ptr<TraderSpiImpl> trader_spi_;

  TraderServiceCallback* callback_;
  
  boost::atomic<int> request_id_;

  // std::unique_ptr<TraderResponseQueue> trader_response_queue_;

  // boost::atomic<int> login_count_;
  std::unique_ptr<soil::STimer> cond_;

  int front_id_;
  int session_id_;
  boost::atomic<int> max_order_ref_;
};

}; // namesapce cata

#endif // CATA_TRADER_SERVICE_IMPL_HH
