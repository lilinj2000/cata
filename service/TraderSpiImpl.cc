// Copyright (c) 2010
// All rights reserved.

#include "TraderSpiImpl.hh"
#include "TraderServiceImpl.hh"
#include "CataLog.hh"
#include "ThostFtdcUserApiStructPrint.hh"

namespace cata {

TraderSpiImpl::TraderSpiImpl(TraderServiceImpl* service) :
    service_(service) {
  CATA_TRACE <<"TraderSpiImpl::TraderSpiImpl()";
}

TraderSpiImpl::~TraderSpiImpl() {
  CATA_TRACE <<"TraderSpiImpl::~TraderSpiImpl()";
}

/////////////////////////////////////////
// impl from CThostFtdcSpi
/////////////////////////////////////////
void TraderSpiImpl::OnFrontConnected() {
  CATA_TRACE <<"TraderSpiImpl::OnFrontConnected()";

  service_->login();
}

void TraderSpiImpl::OnFrontDisconnected(int nReason) {
  CATA_TRACE <<"TraderSpiImpl::OnFrontDisconnected()";

  CATA_INFO <<"OnFrontDisconnected, the Reason is " <<std::hex <<nReason;
}

void TraderSpiImpl::OnHeartBeatWarning(int nTimeLapse) {
  CATA_TRACE <<"TraderSpiImpl::OnHeartBeatWarning()";

  CATA_INFO <<"OnHeartBeatWarning, the time lapse is "
            <<nTimeLapse;
}

void TraderSpiImpl::OnRspUserLogin(
    CThostFtdcRspUserLoginField *pRspUserLogin,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  CATA_TRACE <<"TraderSpiImpl::OnRspUserLogin()";

  try {
    checkRspInfo(pRspInfo);

    CATA_PDU <<*pRspUserLogin;

    service_->initSession(pRspUserLogin);

    if (bIsLast)
      service_->notify();
  }
  catch(...) {
  }
}


void TraderSpiImpl::OnRspQrySettlementInfo(
    CThostFtdcSettlementInfoField *pSettlementInfo,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  CATA_TRACE <<"TraderSpiImpl::OnRspQrySettlementInfo()";

  try {
    checkRspInfo(pRspInfo);

    CATA_PDU <<*pSettlementInfo;

    if (bIsLast)
      service_->notify();
  }
  catch(...) {
  }
}

void TraderSpiImpl::OnRspQrySettlementInfoConfirm(
    CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  CATA_TRACE <<"TraderSpiImpl::OnRspQrySettlementInfoConfirm()";

  try {
    checkRspInfo(pRspInfo);

    CATA_PDU <<*pSettlementInfoConfirm;

    if (bIsLast)
      service_->notify();
  }
  catch(...) {
  }
}

void TraderSpiImpl::OnRspSettlementInfoConfirm(
    CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  CATA_TRACE <<"TraderSpiImpl::OnRspSettlementInfoConfirm()";

  try {
    checkRspInfo(pRspInfo);

    CATA_PDU <<*pSettlementInfoConfirm;

    if (bIsLast)
      service_->notify();
  }
  catch(...) {
  }
}

void TraderSpiImpl::OnRspQryInstrument(
    CThostFtdcInstrumentField *pInstrument,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  CATA_TRACE <<"TraderSpiImpl::OnRspQryInstrument()";

  try {
    checkRspInfo(pRspInfo);

    CATA_PDU <<*pInstrument;
  }
  catch(...) {
  }
}

void TraderSpiImpl::OnRspError(
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  CATA_TRACE <<"TraderSpiImpl::OnRspError()";

  if (pRspInfo)
    CATA_PDU <<*pRspInfo;
}

void TraderSpiImpl::OnRspOrderInsert(
    CThostFtdcInputOrderField *pInputOrder,
    CThostFtdcRspInfoField *pRspInfo,
    int nRequestID, bool bIsLast) {
  CATA_TRACE <<"TraderSpiImpl::OnRspOrderInsert()";

  try {
    checkRspInfo(pRspInfo);

    CATA_PDU <<*pInputOrder;

    if (service_->callback()) {
      int order_ref = atoi(pInputOrder->OrderRef);

      service_->callback()->onRspOrderInsert(order_ref);
    }
  }
  catch(...) {
  }
}

void TraderSpiImpl::OnRtnOrder(CThostFtdcOrderField *pOrder) {
  CATA_TRACE <<"TraderSpiImpl::OnRtnOrder()";

  if (pOrder)
    CATA_PDU <<*pOrder;

  if (service_->callback()) {
    int order_ref = atoi(pOrder->OrderRef);

    std::string status_msg = pOrder->StatusMsg;

    service_->callback()->onRtnOrder(order_ref, status_msg);
  }
}

void TraderSpiImpl::OnRtnTrade(CThostFtdcTradeField *pTrade) {
  CATA_TRACE <<"TraderSpiImpl::OnRtnTrade()";

  if (pTrade)
    CATA_PDU <<*pTrade;

  if (service_->callback()) {
    int order_ref = atoi(pTrade->OrderRef);

    double price = pTrade->Price;
    double volume = pTrade->Volume;

    service_->callback()->onRtnTrade(order_ref, price, volume);
  }
}

void TraderSpiImpl::OnErrRtnOrderInsert(
    CThostFtdcInputOrderField *pInputOrder,
    CThostFtdcRspInfoField *pRspInfo) {
  CATA_TRACE <<"TraderSpiImpl::OneErrRtnOrderInsert()";

  try {
    checkRspInfo(pRspInfo);

    CATA_PDU <<*pInputOrder;
  }
  catch(...) {
  }
}

void TraderSpiImpl::checkRspInfo(CThostFtdcRspInfoField *pRspInfo) {
  CATA_TRACE <<"TraderSpiImpl::checkRspInfo()";

  if (pRspInfo)
    CATA_PDU <<*pRspInfo;

  bool result = ((pRspInfo) && (pRspInfo->ErrorID != 0));
  if (result) {
    std::stringstream err_stream;
    err_stream <<"ErrorID=" <<pRspInfo->ErrorID <<","
               <<"ErrorMsg=" <<pRspInfo->ErrorMsg;

    throw std::runtime_error(err_stream.str());
  }
}


}  // namespace cata
