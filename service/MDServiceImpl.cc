// Copyright (c) 2010
// All rights reserved.

#include "MDServiceImpl.hh"
#include "MDOptions.hh"
#include "MDSpiImpl.hh"
#include "ThostFtdcUserApiStructPrint.hh"
#include "soil/Log.hh"

namespace cata {

MDServiceImpl::MDServiceImpl(
    const rapidjson::Document& doc,
    MDCallback* callback) :
    md_api_(nullptr),
    callback_(callback) {
  LOG_TRACE("MDServiceImpl::MDServiceImpl()");

  cond_.reset(soil::STimer::create());
  options_.reset(new MDOptions(doc));

  bool is_udp = false;
  bool is_multi = false;
  if (options_->protocol == "udp") {
    LOG_DEBUG("UDP is enabled.");
    is_udp = true;
  } else if (options_->protocol == "multi") {
    LOG_DEBUG("MULTI is enabled.");
    is_udp = true;
    is_multi = true;
  }

  md_api_ = CThostFtdcMdApi::CreateFtdcMdApi(
      options_->flow_path.data(),
      is_udp,
      is_multi);
  LOG_INFO("The Api version is {}", md_api_->GetApiVersion());

  md_spi_.reset(new MDSpiImpl(this));
  md_api_->RegisterSpi(md_spi_.get());
  md_api_->RegisterFront(const_cast<char*>(options_->front_address.data()));
  md_api_->Init();

  wait("login");
}

MDServiceImpl::~MDServiceImpl() {
  LOG_TRACE("MDServiceImpl::~MDServiceImpl()");

  md_api_->RegisterSpi(nullptr);
  md_api_->Release();
  md_api_ = nullptr;
}

void MDServiceImpl::subMarketData(char *instrus[], int count) {
  LOG_TRACE("MDServiceImpl::subMarketData()");

  int result = md_api_->SubscribeMarketData(instrus, count);
  if (result != 0) {
    throw std::runtime_error(
        fmt::format("SubscribeMarketData failed, return code {}", result));
  }
}

void MDServiceImpl::unsubMarketData(char *instrus[], int count) {
  LOG_TRACE("MDServiceImpl::unsubMarketData()");

  int result = md_api_->UnSubscribeMarketData(instrus, count);
  if (result != 0) {
    throw std::runtime_error(
        fmt::format("UnSubscribeMarketData failed, return code {}", result));
  }
}

void MDServiceImpl::subQuoteData(char *instrus[], int count) {
  LOG_TRACE("MDServiceImpl::subQuoteData()");

  int result = md_api_->SubscribeForQuoteRsp(instrus, count);
  if (result != 0) {
    throw std::runtime_error(
        fmt::format("SubscribeForQuoteRsp failed, return code {}", result));
  }
}

void MDServiceImpl::unsubQuoteData(char *instrus[], int count) {
  LOG_TRACE("MDServiceImpl::unsubQuoteData()");

  int result = md_api_->UnSubscribeForQuoteRsp(instrus, count);
  if (result != 0) {
    throw std::runtime_error(
        fmt::format("UnSubscribeForQuoteRsp failed, return code {}", result));
  }
}

std::string MDServiceImpl::tradingDay() {
  LOG_TRACE("MDServiceImpl::tradingDate()");

  return md_api_->GetTradingDay();
}

void MDServiceImpl::login() {
  LOG_TRACE("MDServiceImpl::login()");

  CThostFtdcReqUserLoginField req;
  memset(&req, 0x0, sizeof(req));
  strncpy(req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID));
  strncpy(req.UserID, options_->user_id.data(), sizeof(req.UserID));
  strncpy(req.Password, options_->password.data(), sizeof(req.Password));

  LOG_DEBUG("{}", req);

  int result = md_api_->ReqUserLogin(&req, 1);

  if (result != 0) {
    throw std::runtime_error(
        fmt::format("login failed. return code {}",
                    result));
  }
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

MDService* MDService::create(
    const rapidjson::Document& doc,
    MDCallback* callback) {
  return new MDServiceImpl(doc, callback);
}

}  // namespace cata
