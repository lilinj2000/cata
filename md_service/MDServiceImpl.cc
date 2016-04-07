// Copyright (c) 2010
// All rights reserved.

#include "MDServiceImpl.hh"
#include "MDOptions.hh"
#include "MDSpiImpl.hh"
#include "MDLog.hh"
#include "message/ThostFtdcUserApiStructPrint.hh"

namespace cata {

MDServiceImpl::MDServiceImpl(soil::Options* options,
                             ServiceCallback* callback) :
    md_api_(nullptr),
    callback_(callback),
    status_(UNAVAILABLE) {
  MD_TRACE <<"MDServiceImpl::MDServiceImpl()";

  cond_.reset(soil::STimer::create());

  md_queue_.reset(new soil::MsgQueue<Message, MDServiceImpl>(this));

  options_ = dynamic_cast<MDOptions*>(options);

  bool is_udp = false;
  bool is_multi = false;
  if (options_->protocol == "udp") {
    MD_DEBUG <<"UDP is enabled.";
    is_udp = true;
  } else if (options_->protocol == "multi") {
    MD_DEBUG <<"MULTI is enabled.";
    is_udp = true;
    is_multi = true;
  }
  md_api_ = CThostFtdcMdApi::CreateFtdcMdApi(options_->flow_path.data(),
                is_udp, is_multi);
  MD_INFO <<"The Api version is " <<md_api_->GetApiVersion();
  
  md_spi_.reset(new MDSpiImpl(this));
  md_api_->RegisterSpi(md_spi_.get());
  md_api_->RegisterFront(const_cast<char*>(options_->front_address.data()));
  md_api_->Init();

  wait("login");

  if (status_ != AVAILABLE) {
    throw std::runtime_error("login failed, please check the log.");
  }
}

MDServiceImpl::~MDServiceImpl() {
  MD_TRACE <<"MDServiceImpl::~MDServiceImpl()";

  try {
    logout();
  
    wait();
  } catch (std::exception& e) {
    MD_ERROR <<"logout failed.\n"
             <<e.what();
  }
    
  md_api_->RegisterSpi(nullptr);

  md_api_->Release();

  md_api_ = nullptr;
}

void MDServiceImpl::subMarketData(const InstrumentSet& instruments) {
  MD_TRACE <<"MDServiceImpl::subMarketData()";

  int size = instruments.size();

  std::unique_ptr<char*> pp_instrus(new char*[size]);
  int i = 0;
  for (auto & instru : instruments) {
    MD_INFO <<"sub instrument " <<instru;
    pp_instrus.get()[i++] = const_cast<char *>(instru.data());
  }

  md_api_->SubscribeMarketData(pp_instrus.get(), size);
}

void MDServiceImpl::unsubMarketData(const InstrumentSet& instruments) {
  MD_TRACE <<"MDServiceImpl::unsubMarketData()";
}

void MDServiceImpl::subQuoteData(const InstrumentSet& instruments) {
  MD_TRACE <<"MDServiceImpl::subQuoteData()";
}

void MDServiceImpl::unsubQuoteData(const InstrumentSet& instruments) {
  MD_TRACE <<"MDServiceImpl::unsubQuoteData()";
}

std::string MDServiceImpl::tradingDay() {
  MD_TRACE <<"MDServiceImpl::tradingDate()";

  return md_api_->GetTradingDay();
}

void MDServiceImpl::login() {
  MD_TRACE <<"MDServiceImpl::login()";

  CThostFtdcReqUserLoginField req;
  memset(&req, 0x0, sizeof(req));
  strncpy(req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.UserID, options_->user_id.data(), sizeof(req.UserID));
  strncpy(req.Password, options_->password.data(), sizeof(req.Password));

  MD_INFO <<req;

  int result = md_api_->ReqUserLogin(&req, 1);

  if (result != 0) {
    MD_ERROR <<"return code " <<result;
    throw std::runtime_error("login failed.");
  }
}

void MDServiceImpl::rspLogin(const RspUserLoginMessage* rsp_login) {
  MD_TRACE <<" MDServiceImpl::rspLogin()";

  MD_INFO <<rsp_login->toString();

  if (rsp_login->rspInfo()
      && 0 != rsp_login->rspInfo()->ErrorID) {  // login failed
  } else {  // login success
    status_ = AVAILABLE;
  }

  notify();
}

void MDServiceImpl::logout() {
  MD_TRACE <<"MDServiceImpl::logout()";

  CThostFtdcUserLogoutField req;
  memset(&req, 0x0, sizeof(req));
  strncpy(req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.UserID, options_->user_id.data(), sizeof(req.UserID));

  MD_INFO <<req;

  int result = md_api_->ReqUserLogout(&req, 1);

  if (result != 0) {
    MD_ERROR <<"return code " <<result;
    throw std::runtime_error("logout failed.");
  }
}

void MDServiceImpl::rspLogout() {
  MD_TRACE <<" MDServiceImpl::rspLogout()";

  status_ = UNAVAILABLE;
      
  notify();
}

void MDServiceImpl::wait(const std::string& hint) {
  if (cond_->wait(2000)) {
    if (!hint.empty())
      throw std::runtime_error(hint + " time out");
  }
}

void MDServiceImpl::notify() {
  cond_->notifyAll();
}

void MDServiceImpl::pushData(Message* data) {
  md_queue_->pushMsg(data);
}

soil::Options* MDService::createOptions() {
  return new MDOptions();
}

MDService* MDService::createService(soil::Options* options,
                                    ServiceCallback* callback) {
  return new MDServiceImpl(options, callback);
}

}  // namespace cata
