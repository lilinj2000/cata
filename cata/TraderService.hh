#ifndef CATA_TRADER_SERVICE_HH
#define CATA_TRADER_SERVICE_HH

#include <string>

#include "soil/Config.hh"
#include "cata/CataDef.hh"

namespace cata
{

class TraderServiceCallback
{
 public:
  virtual void onRspError(int errord_id, const std::string& error_msg)= 0;
  
  virtual void onRspOrderInsert(int order_ref)= 0;

  virtual void onRtnOrder(int order_ref, const std::string& status_msg) = 0;

  virtual void onRtnTrade(int order_ref,
                          double price, int volume)= 0;
  
  virtual ~TraderServiceCallback() {}
};


class TraderService
{
 public:

  virtual std::string tradingDay() = 0;

  virtual int orderOpenBuy(const std::string& instru,
                           double price, int volume) = 0;

  virtual int orderOpenBuyFAK(const std::string& instru,
                              double price, int volume) = 0;

  virtual int orderOpenBuyFOK(const std::string& instru,
                              double price, int volume) = 0;

  virtual int orderOpenSell(const std::string& instru,
                            double price, int volume) = 0;

  virtual int orderCloseBuy(const std::string& instru,
                            double price, int volume) = 0;

  virtual int orderCloseSell(const std::string& instru,
                            double price, int volume) = 0;

  virtual ~TraderService() {}

  static soil::Options* createOptions();
  
  static TraderService* createService(soil::Options* options, TraderServiceCallback* callback);

};


}; // namesapce cata

#endif // CATA_TRADER_SERVICE_HH
