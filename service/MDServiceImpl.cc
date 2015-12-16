#include "MDServiceImpl.hh"

#include "MDOptions.hh"
#include "MDSpiImpl.hh"
#include "CataLog.hh"
#include "ThostFtdcUserApiStructPrint.hh"

#include "boost/shared_array.hpp"

namespace cata
{

MDServiceImpl::MDServiceImpl(soil::Options* options, MDServiceCallback* callback) :
    md_api_(NULL),
    callback_(callback)
{
  CATA_TRACE <<"MDServiceImpl::MDServiceImpl()" ;

  cond_.reset( soil::STimer::create() );

  md_queue_.reset( new soil::MsgQueue<DepthMarketData, MDServiceImpl>(this) );
  
  options_ = dynamic_cast<MDOptions*>(options);

  bool is_udp = false;
  bool is_multi = false;
  if( options_->protocol=="udp" )
  {
    CATA_DEBUG <<"UDP is enabled.";
    is_udp = true;
  }
  else if( options_->protocol=="multi" )
  {
    CATA_DEBUG <<"MULTI is enabled.";
    is_multi = true;
  }
  md_api_ = CThostFtdcMdApi::CreateFtdcMdApi(options_->flow_path.data(), is_udp, is_multi) ;
  
  md_spi_.reset( new MDSpiImpl(this) );
  
  md_api_->RegisterSpi( md_spi_.get() );

  md_api_->RegisterFront( const_cast<char*>(options_->front_address.data()) );
  
  md_api_->Init();

  wait("login");
}

MDServiceImpl::~MDServiceImpl()
{
  CATA_TRACE <<"MDServiceImpl::~MDServiceImpl()" ;
  
  md_api_->RegisterSpi(NULL);

  md_api_->Release();

  md_api_ = NULL;

}

void MDServiceImpl::subMarketData(const InstrumentSet& instruments)
{
  CATA_TRACE <<"MDServiceImpl::subMarketData()" ;
  
  int size = instruments.size();
  
  boost::shared_array<char*> pp_instrus(new char*[size]);
		
  InstrumentSet::const_iterator i_iter = instruments.begin();
  int i=0;
  for(; i_iter!=instruments.end(); i_iter++)
  {
    CATA_INFO <<"sub instrument " <<*i_iter;
    
    pp_instrus[i++] = const_cast<char *>(&(*i_iter)[0u]);
  }

  md_api_->SubscribeMarketData(pp_instrus.get(), size);

}

void MDServiceImpl::unsubMarketData(const InstrumentSet& instruments)
{
  CATA_TRACE <<"MDServiceImpl::unsubMarketData()" ;
    
}

void MDServiceImpl::subQuoteData(const InstrumentSet& instruments)
{
  CATA_TRACE <<"MDServiceImpl::subQuoteData()" ;
  
}

void MDServiceImpl::unsubQuoteData(const InstrumentSet& instruments)
{
  CATA_TRACE <<"MDServiceImpl::unsubQuoteData()" ;
  
}

std::string MDServiceImpl::tradingDay()
{
  CATA_TRACE <<"MDServiceImpl::tradingDate()" ;

  return md_api_->GetTradingDay();
}

void MDServiceImpl::login()
{
  CATA_TRACE <<"MDServiceImpl::login()" ;

  CThostFtdcReqUserLoginField req;
  memset(&req, 0x0, sizeof(req));
  
  strncpy( req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID) );
  strncpy( req.UserID, options_->user_id.data(), sizeof(req.UserID) );
  strncpy( req.Password, options_->password.data(), sizeof(req.Password) );

  CATA_PDU <<req;
  
  int result = md_api_->ReqUserLogin(&req, ++request_id_);

  if( result!=0 )
  {
    CATA_ERROR <<"return code " <<result;
    throw std::runtime_error("login failed.");
  }

}

void MDServiceImpl::wait(const std::string& hint)
{
  if( cond_->wait(2000) )
  {
    if( !hint.empty() )
      throw std::runtime_error(hint + " time out");
  }
}

void MDServiceImpl::notify()
{
  cond_->notifyAll();
}

void MDServiceImpl::pushData(DepthMarketData* data)
{
  md_queue_->pushMsg( data );
}


soil::Options* MDService::createOptions()
{
  return new MDOptions();
}

MDService* MDService::createService(soil::Options* options, MDServiceCallback* callback)
{
  return new MDServiceImpl(options, callback);
}

} // namespace cata
