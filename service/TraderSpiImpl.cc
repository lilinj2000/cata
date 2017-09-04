// Copyright (c) 2010
// All rights reserved.

#include "TraderSpiImpl.hh"
#include "ThostFtdcUserApiStructPrint.hh"
#include "soil/Log.hh"

namespace cata {

TraderSpiImpl::TraderSpiImpl(TraderServiceImpl* service) :
    service_(service) {
  LOG_TRACE("TraderSpiImpl::TraderSpiImpl()");
}

TraderSpiImpl::~TraderSpiImpl() {
  LOG_TRACE("TraderSpiImpl::~TraderSpiImpl()");
}

void TraderSpiImpl::OnFrontConnected() {
  LOG_TRACE("TraderSpiImpl::OnFrontConnected()");

  service_->login();
}

void TraderSpiImpl::OnFrontDisconnected(int nReason) {
  LOG_TRACE("TraderSpiImpl::OnFrontDisconnected()");

  LOG_ERROR("diconnected reason = {%x}", nReason);
}

void TraderSpiImpl::OnHeartBeatWarning(int nTimeLapse) {
  LOG_TRACE("TraderSpiImpl::OnHeartBeatWarning()");

  LOG_WARN("heartbeat warning,  nTimerLapse = {}", nTimeLapse);
}

void TraderSpiImpl::OnRspAuthenticate(
      CThostFtdcRspAuthenticateField *pRspAuthenticateField,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspAuthenticate()");
}

void TraderSpiImpl::OnRspUserLogin(
      CThostFtdcRspUserLoginField *pRspUserLogin,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspUserLogin()");

  if (pRspUserLogin) {
    LOG_DEBUG("{}", *pRspUserLogin);
  }

  if (!isRspError(pRspInfo)) {
    service_->rspLogin(pRspUserLogin);
  }
}

void TraderSpiImpl::OnRspUserLogout(
      CThostFtdcUserLogoutField *pUserLogout,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspUserLogout()");

  if (pUserLogout) {
    LOG_DEBUG("{}", *pUserLogout);
  }

  if (!isRspError(pRspInfo)) {
    service_->notify();
  }
}

void TraderSpiImpl::OnRspUserPasswordUpdate(
      CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspUserPasswordUpdate()");
}

void TraderSpiImpl::OnRspTradingAccountPasswordUpdate(
      CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspTradingAccountPasswordUpdate()");
}

void TraderSpiImpl::OnRspOrderInsert(
      CThostFtdcInputOrderField *pInputOrder,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspOrderInsert()");

  if (pInputOrder) {
    LOG_DEBUG("{}", *pInputOrder);
  }

  if (!isRspError(pRspInfo)) {
    if (callback()) {
      if (pInputOrder) {
        callback()->onRspOrderInsert(
            fmt::format("{}", *pInputOrder),
            bIsLast);
      } else {
        callback()->onRspOrderInsert("", bIsLast);
      }
    }
  }
}

void TraderSpiImpl::OnRspParkedOrderInsert(
      CThostFtdcParkedOrderField *pParkedOrder,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspParkedOrderInsert()");
}

void TraderSpiImpl::OnRspParkedOrderAction(
      CThostFtdcParkedOrderActionField *pParkedOrderAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspParkedOrderAction()");
}

void TraderSpiImpl::OnRspOrderAction(
      CThostFtdcInputOrderActionField *pInputOrderAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspOrderAction()");
}

void TraderSpiImpl::OnRspQueryMaxOrderVolume(
      CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQueryMaxOrderVolume()");
}

void TraderSpiImpl::OnRspSettlementInfoConfirm(
      CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspSettlementInfoConfirm()");

  if (pSettlementInfoConfirm) {
    LOG_DEBUG("{}", *pSettlementInfoConfirm);
  }

  if (!isRspError(pRspInfo)) {
    service_->notify();
  }
}

void TraderSpiImpl::OnRspRemoveParkedOrder(
      CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspRemoveParkedOrder()");
}

void TraderSpiImpl::OnRspRemoveParkedOrderAction(
      CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspRemoveParkedOrderAction()");
}

void TraderSpiImpl::OnRspExecOrderInsert(
      CThostFtdcInputExecOrderField *pInputExecOrder,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspExecOrderInsert()");
}

void TraderSpiImpl::OnRspExecOrderAction(
      CThostFtdcInputExecOrderActionField *pInputExecOrderAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspExecOrderAction()");
}

void TraderSpiImpl::OnRspForQuoteInsert(
      CThostFtdcInputForQuoteField *pInputForQuote,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspForQuoteInsert()");
}

void TraderSpiImpl::OnRspQuoteInsert(
      CThostFtdcInputQuoteField *pInputQuote,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQuoteInsert()");
}

void TraderSpiImpl::OnRspQuoteAction(
      CThostFtdcInputQuoteActionField *pInputQuoteAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQuoteAction()");
}

void TraderSpiImpl::OnRspCombActionInsert(
      CThostFtdcInputCombActionField *pInputCombAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspCombActionInsert()");
}

void TraderSpiImpl::OnRspQryOrder(
      CThostFtdcOrderField *pOrder,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryOrder()");

  if (pOrder) {
    LOG_DEBUG("{}", *pOrder);
  }

  if (!isRspError(pRspInfo)) {
    if (callback()) {
      if (pOrder) {
        callback()->onRspQryOrder(
            fmt::format("{}", *pOrder),
            bIsLast);
      } else {
        callback()->onRspQryOrder("", bIsLast);
      }
    }
  }
}

void TraderSpiImpl::OnRspQryTrade(
      CThostFtdcTradeField *pTrade,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryTrade()");

  if (pTrade) {
    LOG_DEBUG("{}", *pTrade);
  }

  if (!isRspError(pRspInfo)) {
    if (callback()) {
      if (pTrade) {
        callback()->onRspQryTrade(
            fmt::format("{}", *pTrade),
            bIsLast);
      } else {
        callback()->onRspQryTrade("", bIsLast);
      }
    }
  }
}

void TraderSpiImpl::OnRspQryInvestorPosition(
      CThostFtdcInvestorPositionField *pInvestorPosition,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryInvestorPosition()");

  if (pInvestorPosition) {
    LOG_DEBUG("{}", *pInvestorPosition);
  }

  if (!isRspError(pRspInfo)) {
    if (callback()) {
      if (pInvestorPosition) {
        callback()->onRspQryInvestorPosition(
            fmt::format("{}", *pInvestorPosition),
            bIsLast);
      } else {
        callback()->onRspQryInvestorPosition("", bIsLast);
      }
    }
  }
}

void TraderSpiImpl::OnRspQryTradingAccount(
      CThostFtdcTradingAccountField *pTradingAccount,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryTradingAccount()");

  if (pTradingAccount) {
    LOG_DEBUG("{}", *pTradingAccount);
  }

  if (!isRspError(pRspInfo)) {
    if (callback()) {
      if (pTradingAccount) {
        callback()->onRspQryTradingAccount(
            fmt::format("{}", *pTradingAccount),
            bIsLast);
      } else {
        callback()->onRspQryTradingAccount("", bIsLast);
      }
    }
  }
}

void TraderSpiImpl::OnRspQryInvestor(
      CThostFtdcInvestorField *pInvestor,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryInvestor()");

  if (pInvestor) {
    LOG_DEBUG("{}", *pInvestor);
  }

  if (!isRspError(pRspInfo)) {
    if (callback()) {
      if (pInvestor) {
        callback()->onRspQryInvestor(
            fmt::format("{}", *pInvestor),
            bIsLast);
      } else {
        callback()->onRspQryInvestor("", bIsLast);
      }
    }
  }

}

void TraderSpiImpl::OnRspQryTradingCode(
      CThostFtdcTradingCodeField *pTradingCode,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryTradingCode()");

  if (pTradingCode) {
    LOG_DEBUG("{}", *pTradingCode);
  }

  if (!isRspError(pRspInfo)) {
    if (callback()) {
      if (pTradingCode) {
        callback()->onRspQryTradingCode(
            fmt::format("{}", *pTradingCode),
            bIsLast);
      } else {
        callback()->onRspQryTradingCode("", bIsLast);
      }
    }
  }

}

void TraderSpiImpl::OnRspQryInstrumentMarginRate(
      CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryInstrumentMarginRate()");

  if (pInstrumentMarginRate) {
    LOG_DEBUG("{}", *pInstrumentMarginRate);
  }

  if (!isRspError(pRspInfo)) {
    if (callback()) {
      if (pInstrumentMarginRate) {
        callback()->onRspQryInstrumentMarginRate(
            fmt::format("{}", *pInstrumentMarginRate),
            bIsLast);
      } else {
        callback()->onRspQryInstrumentMarginRate("", bIsLast);
      }
    }
  }
}

void TraderSpiImpl::OnRspQryInstrumentCommissionRate(
      CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryInstrumentCommissionRate()");

  if (pInstrumentCommissionRate) {
    LOG_DEBUG("{}", *pInstrumentCommissionRate);
  }

  if (!isRspError(pRspInfo)) {
    if (callback()) {
      if (pInstrumentCommissionRate) {
        callback()->onRspQryInstrumentCommissionRate(
            fmt::format("{}", *pInstrumentCommissionRate),
            bIsLast);
      } else {
        callback()->onRspQryInstrumentCommissionRate("", bIsLast);
      }
    }
  }
}

void TraderSpiImpl::OnRspQryExchange(
      CThostFtdcExchangeField *pExchange,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryExchange()");

  if (pExchange) {
    LOG_DEBUG("{}", *pExchange);
  }

  if (!isRspError(pRspInfo)) {
    if (callback()) {
      if (pExchange) {
        callback()->onRspQryExchange(
            fmt::format("{}", *pExchange),
            bIsLast);
      } else {
        callback()->onRspQryExchange("", bIsLast);
      }
    }
  }

}

void TraderSpiImpl::OnRspQryProduct(
      CThostFtdcProductField *pProduct,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryProduct()");
}

void TraderSpiImpl::OnRspQryInstrument(
      CThostFtdcInstrumentField *pInstrument,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryInstrument()");

  if (pInstrument) {
    LOG_DEBUG("{}", *pInstrument);
  }

  if (!isRspError(pRspInfo)) {
    if (callback()) {
      if (pInstrument) {
        callback()->onRspQryInstrument(
            fmt::format("{}", *pInstrument),
            bIsLast);
      } else {
        callback()->onRspQryInstrument("", bIsLast);
      }
    }
  }
}

void TraderSpiImpl::OnRspQryDepthMarketData(
      CThostFtdcDepthMarketDataField *pDepthMarketData,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryDepthMarketData()");

  if (pDepthMarketData) {
    LOG_DEBUG("{}", *pDepthMarketData);
  }

  if (!isRspError(pRspInfo)) {
    if (callback()) {
      if (pDepthMarketData) {
        callback()->onRspQryDepthMarketData(
            fmt::format("{}", *pDepthMarketData),
            bIsLast);
      } else {
        callback()->onRspQryDepthMarketData("", bIsLast);
      }
    }
  }

}

void TraderSpiImpl::OnRspQrySettlementInfo(
      CThostFtdcSettlementInfoField *pSettlementInfo,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQrySettlementInfo()");
}

void TraderSpiImpl::OnRspQryTransferBank(
      CThostFtdcTransferBankField *pTransferBank,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryTransferBank()");
}

void TraderSpiImpl::OnRspQryInvestorPositionDetail(
      CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryInvestorPositionDetail()");
}

void TraderSpiImpl::OnRspQryNotice(
      CThostFtdcNoticeField *pNotice,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryNotice()");
}

void TraderSpiImpl::OnRspQrySettlementInfoConfirm(
      CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQrySettlementInfoConfirm()");
}

void TraderSpiImpl::OnRspQryInvestorPositionCombineDetail(
      CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryInvestorPositionCombineDetail()");
}

void TraderSpiImpl::OnRspQryCFMMCTradingAccountKey(
      CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryCFMMCTradingAccountKey()");
}

void TraderSpiImpl::OnRspQryEWarrantOffset(
      CThostFtdcEWarrantOffsetField *pEWarrantOffset,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryEWarrantOffset()");
}

void TraderSpiImpl::OnRspQryInvestorProductGroupMargin(
      CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryInvestorProductGroupMargin()");
}

void TraderSpiImpl::OnRspQryExchangeMarginRate(
      CThostFtdcExchangeMarginRateField *pExchangeMarginRate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryExchangeMarginRate()");
}

void TraderSpiImpl::OnRspQryExchangeMarginRateAdjust(
      CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryExchangeMarginRateAdjust()");
}

void TraderSpiImpl::OnRspQryExchangeRate(
      CThostFtdcExchangeRateField *pExchangeRate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryExchangeRate()");
}

void TraderSpiImpl::OnRspQrySecAgentACIDMap(
      CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQrySecAgentACIDMap()");
}

void TraderSpiImpl::OnRspQryProductExchRate(
      CThostFtdcProductExchRateField *pProductExchRate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryProductExchRate()");
}

void TraderSpiImpl::OnRspQryOptionInstrTradeCost(
      CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryOptionInstrTradeCost()");
}

void TraderSpiImpl::OnRspQryOptionInstrCommRate(
      CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryOptionInstrCommRate()");
}

void TraderSpiImpl::OnRspQryExecOrder(
      CThostFtdcExecOrderField *pExecOrder,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryExecOrder()");
}

void TraderSpiImpl::OnRspQryForQuote(
      CThostFtdcForQuoteField *pForQuote,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryForQuote()");
}

void TraderSpiImpl::OnRspQryQuote(
      CThostFtdcQuoteField *pQuote,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryQuote()");
}

void TraderSpiImpl::OnRspQryCombInstrumentGuard(
      CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryCombInstrumentGuard()");
}

void TraderSpiImpl::OnRspQryCombAction(
      CThostFtdcCombActionField *pCombAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryCombAction()");
}

void TraderSpiImpl::OnRspQryTransferSerial(
      CThostFtdcTransferSerialField *pTransferSerial,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryTransferSerial()");
}

void TraderSpiImpl::OnRspQryAccountregister(
      CThostFtdcAccountregisterField *pAccountregister,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryAccountregister()");
}

void TraderSpiImpl::OnRspError(
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspError()");

  isRspError(pRspInfo);
}

void TraderSpiImpl::OnRtnOrder(
      CThostFtdcOrderField *pOrder) {
  LOG_TRACE("TraderSpiImpl::OnRtnOrder()");

  if (pOrder) {
    LOG_DEBUG("{}", *pOrder);
  }

  if (callback()) {
    if (pOrder) {
      callback()->onRtnOrder(
          fmt::format("{}", *pOrder));
    } else {
      callback()->onRtnOrder("");
    }
  }
}

void TraderSpiImpl::OnRtnTrade(
      CThostFtdcTradeField *pTrade) {
  LOG_TRACE("TraderSpiImpl::OnRtnTrade()");

  if (pTrade) {
    LOG_DEBUG("{}", *pTrade);
  }

  if (callback()) {
    if (pTrade) {
      callback()->onRtnTrade(
          fmt::format("{}", *pTrade));
    } else {
      callback()->onRtnTrade("");
    }
  }
}

void TraderSpiImpl::OnErrRtnOrderInsert(
      CThostFtdcInputOrderField *pInputOrder,
      CThostFtdcRspInfoField *pRspInfo) {
  LOG_TRACE("TraderSpiImpl::OnErrRtnOrderInsert()");

  if (pInputOrder) {
    LOG_DEBUG("{}", *pInputOrder);
  }

  if (!isRspError(pRspInfo)) {
    if (callback()) {
      if (pInputOrder) {
        callback()->onErrRtnOrderInsert(
            fmt::format("{}", *pInputOrder));
      } else {
        callback()->onErrRtnOrderInsert("");
      }
    }
  }
}

void TraderSpiImpl::OnErrRtnOrderAction(
      CThostFtdcOrderActionField *pOrderAction,
      CThostFtdcRspInfoField *pRspInfo) {
  LOG_TRACE("TraderSpiImpl::OnErrRtnOrderAction()");
}

void TraderSpiImpl::OnRtnInstrumentStatus(
      CThostFtdcInstrumentStatusField *pInstrumentStatus) {
  LOG_TRACE("TraderSpiImpl::OnRtnInstrumentStatus()");
}

void TraderSpiImpl::OnRtnTradingNotice(
      CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo) {
  LOG_TRACE("TraderSpiImpl::OnRtnTradingNotice()");
}

void TraderSpiImpl::OnRtnErrorConditionalOrder(
      CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder) {
  LOG_TRACE("TraderSpiImpl::OnRtnErrorConditionalOrder()");
}

void TraderSpiImpl::OnRtnExecOrder(
      CThostFtdcExecOrderField *pExecOrder) {
  LOG_TRACE("TraderSpiImpl::OnRtnExecOrder()");
}

void TraderSpiImpl::OnErrRtnExecOrderInsert(
      CThostFtdcInputExecOrderField *pInputExecOrder,
      CThostFtdcRspInfoField *pRspInfo) {
  LOG_TRACE("TraderSpiImpl::OnErrRtnExecOrderInsert()");
}

void TraderSpiImpl::OnErrRtnExecOrderAction(
      CThostFtdcExecOrderActionField *pExecOrderAction,
      CThostFtdcRspInfoField *pRspInfo) {
  LOG_TRACE("TraderSpiImpl::OnErrRtnExecOrderAction()");
}

void TraderSpiImpl::OnErrRtnForQuoteInsert(
      CThostFtdcInputForQuoteField *pInputForQuote,
      CThostFtdcRspInfoField *pRspInfo) {
  LOG_TRACE("TraderSpiImpl::OnErrRtnForQuoteInsert()");
}

void TraderSpiImpl::OnRtnQuote(
      CThostFtdcQuoteField *pQuote) {
  LOG_TRACE("TraderSpiImpl::OnRtnQuote()");
}

void TraderSpiImpl::OnErrRtnQuoteInsert(
      CThostFtdcInputQuoteField *pInputQuote,
      CThostFtdcRspInfoField *pRspInfo) {
  LOG_TRACE("TraderSpiImpl::OnErrRtnQuoteInsert()");
}

void TraderSpiImpl::OnErrRtnQuoteAction(
      CThostFtdcQuoteActionField *pQuoteAction,
      CThostFtdcRspInfoField *pRspInfo) {
  LOG_TRACE("TraderSpiImpl::OnErrRtnQuoteAction()");
}

void TraderSpiImpl::OnRtnForQuoteRsp(
      CThostFtdcForQuoteRspField *pForQuoteRsp) {
  LOG_TRACE("TraderSpiImpl::OnRtnForQuoteRsp()");
}

void TraderSpiImpl::OnRtnCFMMCTradingAccountToken(
      CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken) {
  LOG_TRACE("TraderSpiImpl::OnRtnCFMMCTradingAccountToken()");
}

void TraderSpiImpl::OnRtnCombAction(
      CThostFtdcCombActionField *pCombAction) {
  LOG_TRACE("TraderSpiImpl::OnRtnCombAction()");
}

void TraderSpiImpl::OnErrRtnCombActionInsert(
      CThostFtdcInputCombActionField *pInputCombAction,
      CThostFtdcRspInfoField *pRspInfo) {
  LOG_TRACE("TraderSpiImpl::OnErrRtnCombActionInsert()");
}

void TraderSpiImpl::OnRspQryContractBank(
      CThostFtdcContractBankField *pContractBank,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryContractBank()");
}

void TraderSpiImpl::OnRspQryParkedOrder(
      CThostFtdcParkedOrderField *pParkedOrder,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryParkedOrder()");
}

void TraderSpiImpl::OnRspQryParkedOrderAction(
      CThostFtdcParkedOrderActionField *pParkedOrderAction,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryParkedOrderAction()");
}

void TraderSpiImpl::OnRspQryTradingNotice(
      CThostFtdcTradingNoticeField *pTradingNotice,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryTradingNotice()");
}

void TraderSpiImpl::OnRspQryBrokerTradingParams(
      CThostFtdcBrokerTradingParamsField *pBrokerTradingParams,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryBrokerTradingParams()");
}

void TraderSpiImpl::OnRspQryBrokerTradingAlgos(
      CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQryBrokerTradingAlgos()");
}

void TraderSpiImpl::OnRspQueryCFMMCTradingAccountToken(
      CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQueryCFMMCTradingAccountToken()");
}

void TraderSpiImpl::OnRtnFromBankToFutureByBank(
      CThostFtdcRspTransferField *pRspTransfer) {
  LOG_TRACE("TraderSpiImpl::OnRtnFromBankToFutureByBank()");
}

void TraderSpiImpl::OnRtnFromFutureToBankByBank(
      CThostFtdcRspTransferField *pRspTransfer) {
  LOG_TRACE("TraderSpiImpl::OnRtnFromFutureToBankByBank()");
}

void TraderSpiImpl::OnRtnRepealFromBankToFutureByBank(
      CThostFtdcRspRepealField *pRspRepeal) {
  LOG_TRACE("TraderSpiImpl::OnRtnRepealFromBankToFutureByBank()");
}

void TraderSpiImpl::OnRtnRepealFromFutureToBankByBank(
      CThostFtdcRspRepealField *pRspRepeal) {
  LOG_TRACE("TraderSpiImpl::OnRtnRepealFromFutureToBankByBank()");
}

void TraderSpiImpl::OnRtnFromBankToFutureByFuture(
      CThostFtdcRspTransferField *pRspTransfer) {
  LOG_TRACE("TraderSpiImpl::OnRtnFromBankToFutureByFuture()");
}

void TraderSpiImpl::OnRtnFromFutureToBankByFuture(
      CThostFtdcRspTransferField *pRspTransfer) {
  LOG_TRACE("TraderSpiImpl::OnRtnFromFutureToBankByFuture()");
}

void TraderSpiImpl::OnRtnRepealFromBankToFutureByFutureManual(
      CThostFtdcRspRepealField *pRspRepeal) {
  LOG_TRACE("TraderSpiImpl::OnRtnRepealFromBankToFutureByFutureManual()");
}

void TraderSpiImpl::OnRtnRepealFromFutureToBankByFutureManual(
      CThostFtdcRspRepealField *pRspRepeal) {
  LOG_TRACE("TraderSpiImpl::OnRtnRepealFromFutureToBankByFutureManual()");
}

void TraderSpiImpl::OnRtnQueryBankBalanceByFuture(
      CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount) {
  LOG_TRACE("TraderSpiImpl::OnRtnQueryBankBalanceByFuture()");
}

void TraderSpiImpl::OnErrRtnBankToFutureByFuture(
      CThostFtdcReqTransferField *pReqTransfer,
      CThostFtdcRspInfoField *pRspInfo) {
  LOG_TRACE("TraderSpiImpl::OnErrRtnBankToFutureByFuture()");
}

void TraderSpiImpl::OnErrRtnFutureToBankByFuture(
      CThostFtdcReqTransferField *pReqTransfer,
      CThostFtdcRspInfoField *pRspInfo) {
  LOG_TRACE("TraderSpiImpl::OnErrRtnFutureToBankByFuture()");
}

void TraderSpiImpl::OnErrRtnRepealBankToFutureByFutureManual(
      CThostFtdcReqRepealField *pReqRepeal,
      CThostFtdcRspInfoField *pRspInfo) {
  LOG_TRACE("TraderSpiImpl::OnErrRtnRepealBankToFutureByFutureManual()");
}

void TraderSpiImpl::OnErrRtnRepealFutureToBankByFutureManual(
      CThostFtdcReqRepealField *pReqRepeal,
      CThostFtdcRspInfoField *pRspInfo) {
  LOG_TRACE("TraderSpiImpl::OnErrRtnRepealFutureToBankByFutureManual()");
}

void TraderSpiImpl::OnErrRtnQueryBankBalanceByFuture(
      CThostFtdcReqQueryAccountField *pReqQueryAccount,
      CThostFtdcRspInfoField *pRspInfo) {
  LOG_TRACE("TraderSpiImpl::OnErrRtnQueryBankBalanceByFuture()");
}

void TraderSpiImpl::OnRtnRepealFromBankToFutureByFuture(
      CThostFtdcRspRepealField *pRspRepeal) {
  LOG_TRACE("TraderSpiImpl::OnRtnRepealFromBankToFutureByFuture()");
}

void TraderSpiImpl::OnRtnRepealFromFutureToBankByFuture(
      CThostFtdcRspRepealField *pRspRepeal) {
  LOG_TRACE("TraderSpiImpl::OnRtnRepealFromFutureToBankByFuture()");
}

void TraderSpiImpl::OnRspFromBankToFutureByFuture(
      CThostFtdcReqTransferField *pReqTransfer,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspFromBankToFutureByFuture()");
}

void TraderSpiImpl::OnRspFromFutureToBankByFuture(
      CThostFtdcReqTransferField *pReqTransfer,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspFromFutureToBankByFuture()");
}

void TraderSpiImpl::OnRspQueryBankAccountMoneyByFuture(
      CThostFtdcReqQueryAccountField *pReqQueryAccount,  // NOLINT(whitespace/line_length)
      CThostFtdcRspInfoField *pRspInfo,
      int nRequestID, bool bIsLast) {
  LOG_TRACE("TraderSpiImpl::OnRspQueryBankAccountMoneyByFuture()");
}

void TraderSpiImpl::OnRtnOpenAccountByBank(
      CThostFtdcOpenAccountField *pOpenAccount) {
  LOG_TRACE("TraderSpiImpl::OnRtnOpenAccountByBank()");
}

void TraderSpiImpl::OnRtnCancelAccountByBank(
      CThostFtdcCancelAccountField *pCancelAccount) {
  LOG_TRACE("TraderSpiImpl::OnRtnCancelAccountByBank()");
}

void TraderSpiImpl::OnRtnChangeAccountByBank(
      CThostFtdcChangeAccountField *pChangeAccount) {
  LOG_TRACE("TraderSpiImpl::OnRtnChangeAccountByBank()");
}

bool TraderSpiImpl::isRspError(
    CThostFtdcRspInfoField *pRspInfo) {
  LOG_TRACE("TraderSpiImpl::isRspError()");

  if (pRspInfo) {
    LOG_DEBUG("{}", *pRspInfo);
  }

  bool result = ((pRspInfo) && (pRspInfo->ErrorID != 0));

  if (result) {
    if (callback()) {
      callback()->onRspError(
          fmt::format("{}", *pRspInfo));
    }
  }

  return result;
}


};  // namespace cata
