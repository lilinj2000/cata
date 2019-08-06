// Copyright (c) 2010
// All rights reserved.

#ifndef THOST_FTDC_USERAPI_STRUCT_PRINT_HH
#define THOST_FTDC_USERAPI_STRUCT_PRINT_HH

#include "ThostFtdcUserApiStruct.h"
#include "soil/json.hh"
#include <ostream>

using rapidjson::PrettyWriter;
using rapidjson::StringBuffer;
using soil::json::write_value;

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcDisseminationField const &aDisseminationField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcDisseminationField");
  writer.StartObject();
  writer.Key("SequenceSeries");
  write_value(&writer, aDisseminationField.SequenceSeries);
  writer.Key("SequenceNo");
  write_value(&writer, aDisseminationField.SequenceNo);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcReqUserLoginField const &aReqUserLoginField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReqUserLoginField");
  writer.StartObject();
  writer.Key("TradingDay");
  write_value(&writer, aReqUserLoginField.TradingDay);
  writer.Key("BrokerID");
  write_value(&writer, aReqUserLoginField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aReqUserLoginField.UserID);
  writer.Key("Password");
  write_value(&writer, aReqUserLoginField.Password);
  writer.Key("UserProductInfo");
  write_value(&writer, aReqUserLoginField.UserProductInfo);
  writer.Key("InterfaceProductInfo");
  write_value(&writer, aReqUserLoginField.InterfaceProductInfo);
  writer.Key("ProtocolInfo");
  write_value(&writer, aReqUserLoginField.ProtocolInfo);
  writer.Key("MacAddress");
  write_value(&writer, aReqUserLoginField.MacAddress);
  writer.Key("OneTimePassword");
  write_value(&writer, aReqUserLoginField.OneTimePassword);
  writer.Key("ClientIPAddress");
  write_value(&writer, aReqUserLoginField.ClientIPAddress);
  writer.Key("LoginRemark");
  write_value(&writer, aReqUserLoginField.LoginRemark);
  writer.Key("ClientIPPort");
  write_value(&writer, aReqUserLoginField.ClientIPPort);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcRspUserLoginField const &aRspUserLoginField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcRspUserLoginField");
  writer.StartObject();
  writer.Key("TradingDay");
  write_value(&writer, aRspUserLoginField.TradingDay);
  writer.Key("LoginTime");
  write_value(&writer, aRspUserLoginField.LoginTime);
  writer.Key("BrokerID");
  write_value(&writer, aRspUserLoginField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aRspUserLoginField.UserID);
  writer.Key("SystemName");
  write_value(&writer, aRspUserLoginField.SystemName);
  writer.Key("FrontID");
  write_value(&writer, aRspUserLoginField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aRspUserLoginField.SessionID);
  writer.Key("MaxOrderRef");
  write_value(&writer, aRspUserLoginField.MaxOrderRef);
  writer.Key("SHFETime");
  write_value(&writer, aRspUserLoginField.SHFETime);
  writer.Key("DCETime");
  write_value(&writer, aRspUserLoginField.DCETime);
  writer.Key("CZCETime");
  write_value(&writer, aRspUserLoginField.CZCETime);
  writer.Key("FFEXTime");
  write_value(&writer, aRspUserLoginField.FFEXTime);
  writer.Key("INETime");
  write_value(&writer, aRspUserLoginField.INETime);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcUserLogoutField const &aUserLogoutField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcUserLogoutField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aUserLogoutField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aUserLogoutField.UserID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcForceUserLogoutField const &aForceUserLogoutField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcForceUserLogoutField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aForceUserLogoutField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aForceUserLogoutField.UserID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcReqAuthenticateField const &aReqAuthenticateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReqAuthenticateField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aReqAuthenticateField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aReqAuthenticateField.UserID);
  writer.Key("UserProductInfo");
  write_value(&writer, aReqAuthenticateField.UserProductInfo);
  writer.Key("AuthCode");
  write_value(&writer, aReqAuthenticateField.AuthCode);
  writer.Key("AppID");
  write_value(&writer, aReqAuthenticateField.AppID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcRspAuthenticateField const &aRspAuthenticateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcRspAuthenticateField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aRspAuthenticateField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aRspAuthenticateField.UserID);
  writer.Key("UserProductInfo");
  write_value(&writer, aRspAuthenticateField.UserProductInfo);
  writer.Key("AppID");
  write_value(&writer, aRspAuthenticateField.AppID);
  writer.Key("AppType");
  write_value(&writer, aRspAuthenticateField.AppType);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcAuthenticationInfoField const
                                    &aAuthenticationInfoField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcAuthenticationInfoField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aAuthenticationInfoField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aAuthenticationInfoField.UserID);
  writer.Key("UserProductInfo");
  write_value(&writer, aAuthenticationInfoField.UserProductInfo);
  writer.Key("AuthInfo");
  write_value(&writer, aAuthenticationInfoField.AuthInfo);
  writer.Key("IsResult");
  write_value(&writer, aAuthenticationInfoField.IsResult);
  writer.Key("AppID");
  write_value(&writer, aAuthenticationInfoField.AppID);
  writer.Key("AppType");
  write_value(&writer, aAuthenticationInfoField.AppType);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcRspUserLogin2Field const &aRspUserLogin2Field) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcRspUserLogin2Field");
  writer.StartObject();
  writer.Key("TradingDay");
  write_value(&writer, aRspUserLogin2Field.TradingDay);
  writer.Key("LoginTime");
  write_value(&writer, aRspUserLogin2Field.LoginTime);
  writer.Key("BrokerID");
  write_value(&writer, aRspUserLogin2Field.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aRspUserLogin2Field.UserID);
  writer.Key("SystemName");
  write_value(&writer, aRspUserLogin2Field.SystemName);
  writer.Key("FrontID");
  write_value(&writer, aRspUserLogin2Field.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aRspUserLogin2Field.SessionID);
  writer.Key("MaxOrderRef");
  write_value(&writer, aRspUserLogin2Field.MaxOrderRef);
  writer.Key("SHFETime");
  write_value(&writer, aRspUserLogin2Field.SHFETime);
  writer.Key("DCETime");
  write_value(&writer, aRspUserLogin2Field.DCETime);
  writer.Key("CZCETime");
  write_value(&writer, aRspUserLogin2Field.CZCETime);
  writer.Key("FFEXTime");
  write_value(&writer, aRspUserLogin2Field.FFEXTime);
  writer.Key("INETime");
  write_value(&writer, aRspUserLogin2Field.INETime);
  writer.Key("RandomString");
  write_value(&writer, aRspUserLogin2Field.RandomString);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcTransferHeaderField const &aTransferHeaderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTransferHeaderField");
  writer.StartObject();
  writer.Key("Version");
  write_value(&writer, aTransferHeaderField.Version);
  writer.Key("TradeCode");
  write_value(&writer, aTransferHeaderField.TradeCode);
  writer.Key("TradeDate");
  write_value(&writer, aTransferHeaderField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aTransferHeaderField.TradeTime);
  writer.Key("TradeSerial");
  write_value(&writer, aTransferHeaderField.TradeSerial);
  writer.Key("FutureID");
  write_value(&writer, aTransferHeaderField.FutureID);
  writer.Key("BankID");
  write_value(&writer, aTransferHeaderField.BankID);
  writer.Key("BankBrchID");
  write_value(&writer, aTransferHeaderField.BankBrchID);
  writer.Key("OperNo");
  write_value(&writer, aTransferHeaderField.OperNo);
  writer.Key("DeviceID");
  write_value(&writer, aTransferHeaderField.DeviceID);
  writer.Key("RecordNum");
  write_value(&writer, aTransferHeaderField.RecordNum);
  writer.Key("SessionID");
  write_value(&writer, aTransferHeaderField.SessionID);
  writer.Key("RequestID");
  write_value(&writer, aTransferHeaderField.RequestID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcTransferBankToFutureReqField const
                                    &aTransferBankToFutureReqField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTransferBankToFutureReqField");
  writer.StartObject();
  writer.Key("FutureAccount");
  write_value(&writer, aTransferBankToFutureReqField.FutureAccount);
  writer.Key("FuturePwdFlag");
  write_value(&writer, aTransferBankToFutureReqField.FuturePwdFlag);
  writer.Key("FutureAccPwd");
  write_value(&writer, aTransferBankToFutureReqField.FutureAccPwd);
  writer.Key("TradeAmt");
  write_value(&writer, aTransferBankToFutureReqField.TradeAmt);
  writer.Key("CustFee");
  write_value(&writer, aTransferBankToFutureReqField.CustFee);
  writer.Key("CurrencyCode");
  write_value(&writer, aTransferBankToFutureReqField.CurrencyCode);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcTransferBankToFutureRspField const
                                    &aTransferBankToFutureRspField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTransferBankToFutureRspField");
  writer.StartObject();
  writer.Key("RetCode");
  write_value(&writer, aTransferBankToFutureRspField.RetCode);
  writer.Key("RetInfo");
  write_value(&writer, aTransferBankToFutureRspField.RetInfo);
  writer.Key("FutureAccount");
  write_value(&writer, aTransferBankToFutureRspField.FutureAccount);
  writer.Key("TradeAmt");
  write_value(&writer, aTransferBankToFutureRspField.TradeAmt);
  writer.Key("CustFee");
  write_value(&writer, aTransferBankToFutureRspField.CustFee);
  writer.Key("CurrencyCode");
  write_value(&writer, aTransferBankToFutureRspField.CurrencyCode);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcTransferFutureToBankReqField const
                                    &aTransferFutureToBankReqField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTransferFutureToBankReqField");
  writer.StartObject();
  writer.Key("FutureAccount");
  write_value(&writer, aTransferFutureToBankReqField.FutureAccount);
  writer.Key("FuturePwdFlag");
  write_value(&writer, aTransferFutureToBankReqField.FuturePwdFlag);
  writer.Key("FutureAccPwd");
  write_value(&writer, aTransferFutureToBankReqField.FutureAccPwd);
  writer.Key("TradeAmt");
  write_value(&writer, aTransferFutureToBankReqField.TradeAmt);
  writer.Key("CustFee");
  write_value(&writer, aTransferFutureToBankReqField.CustFee);
  writer.Key("CurrencyCode");
  write_value(&writer, aTransferFutureToBankReqField.CurrencyCode);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcTransferFutureToBankRspField const
                                    &aTransferFutureToBankRspField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTransferFutureToBankRspField");
  writer.StartObject();
  writer.Key("RetCode");
  write_value(&writer, aTransferFutureToBankRspField.RetCode);
  writer.Key("RetInfo");
  write_value(&writer, aTransferFutureToBankRspField.RetInfo);
  writer.Key("FutureAccount");
  write_value(&writer, aTransferFutureToBankRspField.FutureAccount);
  writer.Key("TradeAmt");
  write_value(&writer, aTransferFutureToBankRspField.TradeAmt);
  writer.Key("CustFee");
  write_value(&writer, aTransferFutureToBankRspField.CustFee);
  writer.Key("CurrencyCode");
  write_value(&writer, aTransferFutureToBankRspField.CurrencyCode);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcTransferQryBankReqField const
                                    &aTransferQryBankReqField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTransferQryBankReqField");
  writer.StartObject();
  writer.Key("FutureAccount");
  write_value(&writer, aTransferQryBankReqField.FutureAccount);
  writer.Key("FuturePwdFlag");
  write_value(&writer, aTransferQryBankReqField.FuturePwdFlag);
  writer.Key("FutureAccPwd");
  write_value(&writer, aTransferQryBankReqField.FutureAccPwd);
  writer.Key("CurrencyCode");
  write_value(&writer, aTransferQryBankReqField.CurrencyCode);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcTransferQryBankRspField const
                                    &aTransferQryBankRspField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTransferQryBankRspField");
  writer.StartObject();
  writer.Key("RetCode");
  write_value(&writer, aTransferQryBankRspField.RetCode);
  writer.Key("RetInfo");
  write_value(&writer, aTransferQryBankRspField.RetInfo);
  writer.Key("FutureAccount");
  write_value(&writer, aTransferQryBankRspField.FutureAccount);
  writer.Key("TradeAmt");
  write_value(&writer, aTransferQryBankRspField.TradeAmt);
  writer.Key("UseAmt");
  write_value(&writer, aTransferQryBankRspField.UseAmt);
  writer.Key("FetchAmt");
  write_value(&writer, aTransferQryBankRspField.FetchAmt);
  writer.Key("CurrencyCode");
  write_value(&writer, aTransferQryBankRspField.CurrencyCode);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcTransferQryDetailReqField const
                                    &aTransferQryDetailReqField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTransferQryDetailReqField");
  writer.StartObject();
  writer.Key("FutureAccount");
  write_value(&writer, aTransferQryDetailReqField.FutureAccount);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcTransferQryDetailRspField const
                                    &aTransferQryDetailRspField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTransferQryDetailRspField");
  writer.StartObject();
  writer.Key("TradeDate");
  write_value(&writer, aTransferQryDetailRspField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aTransferQryDetailRspField.TradeTime);
  writer.Key("TradeCode");
  write_value(&writer, aTransferQryDetailRspField.TradeCode);
  writer.Key("FutureSerial");
  write_value(&writer, aTransferQryDetailRspField.FutureSerial);
  writer.Key("FutureID");
  write_value(&writer, aTransferQryDetailRspField.FutureID);
  writer.Key("FutureAccount");
  write_value(&writer, aTransferQryDetailRspField.FutureAccount);
  writer.Key("BankSerial");
  write_value(&writer, aTransferQryDetailRspField.BankSerial);
  writer.Key("BankID");
  write_value(&writer, aTransferQryDetailRspField.BankID);
  writer.Key("BankBrchID");
  write_value(&writer, aTransferQryDetailRspField.BankBrchID);
  writer.Key("BankAccount");
  write_value(&writer, aTransferQryDetailRspField.BankAccount);
  writer.Key("CertCode");
  write_value(&writer, aTransferQryDetailRspField.CertCode);
  writer.Key("CurrencyCode");
  write_value(&writer, aTransferQryDetailRspField.CurrencyCode);
  writer.Key("TxAmount");
  write_value(&writer, aTransferQryDetailRspField.TxAmount);
  writer.Key("Flag");
  write_value(&writer, aTransferQryDetailRspField.Flag);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcRspInfoField const &aRspInfoField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcRspInfoField");
  writer.StartObject();
  writer.Key("ErrorID");
  write_value(&writer, aRspInfoField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aRspInfoField.ErrorMsg);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcExchangeField const &aExchangeField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcExchangeField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aExchangeField.ExchangeID);
  writer.Key("ExchangeName");
  write_value(&writer, aExchangeField.ExchangeName);
  writer.Key("ExchangeProperty");
  write_value(&writer, aExchangeField.ExchangeProperty);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcProductField const &aProductField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcProductField");
  writer.StartObject();
  writer.Key("ProductID");
  write_value(&writer, aProductField.ProductID);
  writer.Key("ProductName");
  write_value(&writer, aProductField.ProductName);
  writer.Key("ExchangeID");
  write_value(&writer, aProductField.ExchangeID);
  writer.Key("ProductClass");
  write_value(&writer, aProductField.ProductClass);
  writer.Key("VolumeMultiple");
  write_value(&writer, aProductField.VolumeMultiple);
  writer.Key("PriceTick");
  write_value(&writer, aProductField.PriceTick);
  writer.Key("MaxMarketOrderVolume");
  write_value(&writer, aProductField.MaxMarketOrderVolume);
  writer.Key("MinMarketOrderVolume");
  write_value(&writer, aProductField.MinMarketOrderVolume);
  writer.Key("MaxLimitOrderVolume");
  write_value(&writer, aProductField.MaxLimitOrderVolume);
  writer.Key("MinLimitOrderVolume");
  write_value(&writer, aProductField.MinLimitOrderVolume);
  writer.Key("PositionType");
  write_value(&writer, aProductField.PositionType);
  writer.Key("PositionDateType");
  write_value(&writer, aProductField.PositionDateType);
  writer.Key("CloseDealType");
  write_value(&writer, aProductField.CloseDealType);
  writer.Key("TradeCurrencyID");
  write_value(&writer, aProductField.TradeCurrencyID);
  writer.Key("MortgageFundUseRange");
  write_value(&writer, aProductField.MortgageFundUseRange);
  writer.Key("ExchangeProductID");
  write_value(&writer, aProductField.ExchangeProductID);
  writer.Key("UnderlyingMultiple");
  write_value(&writer, aProductField.UnderlyingMultiple);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcInstrumentField const &aInstrumentField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInstrumentField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aInstrumentField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aInstrumentField.ExchangeID);
  writer.Key("InstrumentName");
  write_value(&writer, aInstrumentField.InstrumentName);
  writer.Key("ExchangeInstID");
  write_value(&writer, aInstrumentField.ExchangeInstID);
  writer.Key("ProductID");
  write_value(&writer, aInstrumentField.ProductID);
  writer.Key("ProductClass");
  write_value(&writer, aInstrumentField.ProductClass);
  writer.Key("DeliveryYear");
  write_value(&writer, aInstrumentField.DeliveryYear);
  writer.Key("DeliveryMonth");
  write_value(&writer, aInstrumentField.DeliveryMonth);
  writer.Key("MaxMarketOrderVolume");
  write_value(&writer, aInstrumentField.MaxMarketOrderVolume);
  writer.Key("MinMarketOrderVolume");
  write_value(&writer, aInstrumentField.MinMarketOrderVolume);
  writer.Key("MaxLimitOrderVolume");
  write_value(&writer, aInstrumentField.MaxLimitOrderVolume);
  writer.Key("MinLimitOrderVolume");
  write_value(&writer, aInstrumentField.MinLimitOrderVolume);
  writer.Key("VolumeMultiple");
  write_value(&writer, aInstrumentField.VolumeMultiple);
  writer.Key("PriceTick");
  write_value(&writer, aInstrumentField.PriceTick);
  writer.Key("CreateDate");
  write_value(&writer, aInstrumentField.CreateDate);
  writer.Key("OpenDate");
  write_value(&writer, aInstrumentField.OpenDate);
  writer.Key("ExpireDate");
  write_value(&writer, aInstrumentField.ExpireDate);
  writer.Key("StartDelivDate");
  write_value(&writer, aInstrumentField.StartDelivDate);
  writer.Key("EndDelivDate");
  write_value(&writer, aInstrumentField.EndDelivDate);
  writer.Key("InstLifePhase");
  write_value(&writer, aInstrumentField.InstLifePhase);
  writer.Key("IsTrading");
  write_value(&writer, aInstrumentField.IsTrading);
  writer.Key("PositionType");
  write_value(&writer, aInstrumentField.PositionType);
  writer.Key("PositionDateType");
  write_value(&writer, aInstrumentField.PositionDateType);
  writer.Key("LongMarginRatio");
  write_value(&writer, aInstrumentField.LongMarginRatio);
  writer.Key("ShortMarginRatio");
  write_value(&writer, aInstrumentField.ShortMarginRatio);
  writer.Key("MaxMarginSideAlgorithm");
  write_value(&writer, aInstrumentField.MaxMarginSideAlgorithm);
  writer.Key("UnderlyingInstrID");
  write_value(&writer, aInstrumentField.UnderlyingInstrID);
  writer.Key("StrikePrice");
  write_value(&writer, aInstrumentField.StrikePrice);
  writer.Key("OptionsType");
  write_value(&writer, aInstrumentField.OptionsType);
  writer.Key("UnderlyingMultiple");
  write_value(&writer, aInstrumentField.UnderlyingMultiple);
  writer.Key("CombinationType");
  write_value(&writer, aInstrumentField.CombinationType);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcBrokerField const &aBrokerField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcBrokerField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aBrokerField.BrokerID);
  writer.Key("BrokerAbbr");
  write_value(&writer, aBrokerField.BrokerAbbr);
  writer.Key("BrokerName");
  write_value(&writer, aBrokerField.BrokerName);
  writer.Key("IsActive");
  write_value(&writer, aBrokerField.IsActive);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcTraderField const &aTraderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTraderField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aTraderField.ExchangeID);
  writer.Key("TraderID");
  write_value(&writer, aTraderField.TraderID);
  writer.Key("ParticipantID");
  write_value(&writer, aTraderField.ParticipantID);
  writer.Key("Password");
  write_value(&writer, aTraderField.Password);
  writer.Key("InstallCount");
  write_value(&writer, aTraderField.InstallCount);
  writer.Key("BrokerID");
  write_value(&writer, aTraderField.BrokerID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcInvestorField const &aInvestorField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInvestorField");
  writer.StartObject();
  writer.Key("InvestorID");
  write_value(&writer, aInvestorField.InvestorID);
  writer.Key("BrokerID");
  write_value(&writer, aInvestorField.BrokerID);
  writer.Key("InvestorGroupID");
  write_value(&writer, aInvestorField.InvestorGroupID);
  writer.Key("InvestorName");
  write_value(&writer, aInvestorField.InvestorName);
  writer.Key("IdentifiedCardType");
  write_value(&writer, aInvestorField.IdentifiedCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aInvestorField.IdentifiedCardNo);
  writer.Key("IsActive");
  write_value(&writer, aInvestorField.IsActive);
  writer.Key("Telephone");
  write_value(&writer, aInvestorField.Telephone);
  writer.Key("Address");
  write_value(&writer, aInvestorField.Address);
  writer.Key("OpenDate");
  write_value(&writer, aInvestorField.OpenDate);
  writer.Key("Mobile");
  write_value(&writer, aInvestorField.Mobile);
  writer.Key("CommModelID");
  write_value(&writer, aInvestorField.CommModelID);
  writer.Key("MarginModelID");
  write_value(&writer, aInvestorField.MarginModelID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcTradingCodeField const &aTradingCodeField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTradingCodeField");
  writer.StartObject();
  writer.Key("InvestorID");
  write_value(&writer, aTradingCodeField.InvestorID);
  writer.Key("BrokerID");
  write_value(&writer, aTradingCodeField.BrokerID);
  writer.Key("ExchangeID");
  write_value(&writer, aTradingCodeField.ExchangeID);
  writer.Key("ClientID");
  write_value(&writer, aTradingCodeField.ClientID);
  writer.Key("IsActive");
  write_value(&writer, aTradingCodeField.IsActive);
  writer.Key("ClientIDType");
  write_value(&writer, aTradingCodeField.ClientIDType);
  writer.Key("BranchID");
  write_value(&writer, aTradingCodeField.BranchID);
  writer.Key("BizType");
  write_value(&writer, aTradingCodeField.BizType);
  writer.Key("InvestUnitID");
  write_value(&writer, aTradingCodeField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcPartBrokerField const &aPartBrokerField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcPartBrokerField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aPartBrokerField.BrokerID);
  writer.Key("ExchangeID");
  write_value(&writer, aPartBrokerField.ExchangeID);
  writer.Key("ParticipantID");
  write_value(&writer, aPartBrokerField.ParticipantID);
  writer.Key("IsActive");
  write_value(&writer, aPartBrokerField.IsActive);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcSuperUserField const &aSuperUserField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcSuperUserField");
  writer.StartObject();
  writer.Key("UserID");
  write_value(&writer, aSuperUserField.UserID);
  writer.Key("UserName");
  write_value(&writer, aSuperUserField.UserName);
  writer.Key("Password");
  write_value(&writer, aSuperUserField.Password);
  writer.Key("IsActive");
  write_value(&writer, aSuperUserField.IsActive);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcSuperUserFunctionField const &aSuperUserFunctionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcSuperUserFunctionField");
  writer.StartObject();
  writer.Key("UserID");
  write_value(&writer, aSuperUserFunctionField.UserID);
  writer.Key("FunctionCode");
  write_value(&writer, aSuperUserFunctionField.FunctionCode);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcInvestorGroupField const &aInvestorGroupField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInvestorGroupField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aInvestorGroupField.BrokerID);
  writer.Key("InvestorGroupID");
  write_value(&writer, aInvestorGroupField.InvestorGroupID);
  writer.Key("InvestorGroupName");
  write_value(&writer, aInvestorGroupField.InvestorGroupName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcTradingAccountField const &aTradingAccountField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTradingAccountField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aTradingAccountField.BrokerID);
  writer.Key("AccountID");
  write_value(&writer, aTradingAccountField.AccountID);
  writer.Key("PreMortgage");
  write_value(&writer, aTradingAccountField.PreMortgage);
  writer.Key("PreCredit");
  write_value(&writer, aTradingAccountField.PreCredit);
  writer.Key("PreDeposit");
  write_value(&writer, aTradingAccountField.PreDeposit);
  writer.Key("PreBalance");
  write_value(&writer, aTradingAccountField.PreBalance);
  writer.Key("PreMargin");
  write_value(&writer, aTradingAccountField.PreMargin);
  writer.Key("InterestBase");
  write_value(&writer, aTradingAccountField.InterestBase);
  writer.Key("Interest");
  write_value(&writer, aTradingAccountField.Interest);
  writer.Key("Deposit");
  write_value(&writer, aTradingAccountField.Deposit);
  writer.Key("Withdraw");
  write_value(&writer, aTradingAccountField.Withdraw);
  writer.Key("FrozenMargin");
  write_value(&writer, aTradingAccountField.FrozenMargin);
  writer.Key("FrozenCash");
  write_value(&writer, aTradingAccountField.FrozenCash);
  writer.Key("FrozenCommission");
  write_value(&writer, aTradingAccountField.FrozenCommission);
  writer.Key("CurrMargin");
  write_value(&writer, aTradingAccountField.CurrMargin);
  writer.Key("CashIn");
  write_value(&writer, aTradingAccountField.CashIn);
  writer.Key("Commission");
  write_value(&writer, aTradingAccountField.Commission);
  writer.Key("CloseProfit");
  write_value(&writer, aTradingAccountField.CloseProfit);
  writer.Key("PositionProfit");
  write_value(&writer, aTradingAccountField.PositionProfit);
  writer.Key("Balance");
  write_value(&writer, aTradingAccountField.Balance);
  writer.Key("Available");
  write_value(&writer, aTradingAccountField.Available);
  writer.Key("WithdrawQuota");
  write_value(&writer, aTradingAccountField.WithdrawQuota);
  writer.Key("Reserve");
  write_value(&writer, aTradingAccountField.Reserve);
  writer.Key("TradingDay");
  write_value(&writer, aTradingAccountField.TradingDay);
  writer.Key("SettlementID");
  write_value(&writer, aTradingAccountField.SettlementID);
  writer.Key("Credit");
  write_value(&writer, aTradingAccountField.Credit);
  writer.Key("Mortgage");
  write_value(&writer, aTradingAccountField.Mortgage);
  writer.Key("ExchangeMargin");
  write_value(&writer, aTradingAccountField.ExchangeMargin);
  writer.Key("DeliveryMargin");
  write_value(&writer, aTradingAccountField.DeliveryMargin);
  writer.Key("ExchangeDeliveryMargin");
  write_value(&writer, aTradingAccountField.ExchangeDeliveryMargin);
  writer.Key("ReserveBalance");
  write_value(&writer, aTradingAccountField.ReserveBalance);
  writer.Key("CurrencyID");
  write_value(&writer, aTradingAccountField.CurrencyID);
  writer.Key("PreFundMortgageIn");
  write_value(&writer, aTradingAccountField.PreFundMortgageIn);
  writer.Key("PreFundMortgageOut");
  write_value(&writer, aTradingAccountField.PreFundMortgageOut);
  writer.Key("FundMortgageIn");
  write_value(&writer, aTradingAccountField.FundMortgageIn);
  writer.Key("FundMortgageOut");
  write_value(&writer, aTradingAccountField.FundMortgageOut);
  writer.Key("FundMortgageAvailable");
  write_value(&writer, aTradingAccountField.FundMortgageAvailable);
  writer.Key("MortgageableFund");
  write_value(&writer, aTradingAccountField.MortgageableFund);
  writer.Key("SpecProductMargin");
  write_value(&writer, aTradingAccountField.SpecProductMargin);
  writer.Key("SpecProductFrozenMargin");
  write_value(&writer, aTradingAccountField.SpecProductFrozenMargin);
  writer.Key("SpecProductCommission");
  write_value(&writer, aTradingAccountField.SpecProductCommission);
  writer.Key("SpecProductFrozenCommission");
  write_value(&writer, aTradingAccountField.SpecProductFrozenCommission);
  writer.Key("SpecProductPositionProfit");
  write_value(&writer, aTradingAccountField.SpecProductPositionProfit);
  writer.Key("SpecProductCloseProfit");
  write_value(&writer, aTradingAccountField.SpecProductCloseProfit);
  writer.Key("SpecProductPositionProfitByAlg");
  write_value(&writer, aTradingAccountField.SpecProductPositionProfitByAlg);
  writer.Key("SpecProductExchangeMargin");
  write_value(&writer, aTradingAccountField.SpecProductExchangeMargin);
  writer.Key("BizType");
  write_value(&writer, aTradingAccountField.BizType);
  writer.Key("FrozenSwap");
  write_value(&writer, aTradingAccountField.FrozenSwap);
  writer.Key("RemainSwap");
  write_value(&writer, aTradingAccountField.RemainSwap);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcInvestorPositionField const &aInvestorPositionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInvestorPositionField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aInvestorPositionField.InstrumentID);
  writer.Key("BrokerID");
  write_value(&writer, aInvestorPositionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInvestorPositionField.InvestorID);
  writer.Key("PosiDirection");
  write_value(&writer, aInvestorPositionField.PosiDirection);
  writer.Key("HedgeFlag");
  write_value(&writer, aInvestorPositionField.HedgeFlag);
  writer.Key("PositionDate");
  write_value(&writer, aInvestorPositionField.PositionDate);
  writer.Key("YdPosition");
  write_value(&writer, aInvestorPositionField.YdPosition);
  writer.Key("Position");
  write_value(&writer, aInvestorPositionField.Position);
  writer.Key("LongFrozen");
  write_value(&writer, aInvestorPositionField.LongFrozen);
  writer.Key("ShortFrozen");
  write_value(&writer, aInvestorPositionField.ShortFrozen);
  writer.Key("LongFrozenAmount");
  write_value(&writer, aInvestorPositionField.LongFrozenAmount);
  writer.Key("ShortFrozenAmount");
  write_value(&writer, aInvestorPositionField.ShortFrozenAmount);
  writer.Key("OpenVolume");
  write_value(&writer, aInvestorPositionField.OpenVolume);
  writer.Key("CloseVolume");
  write_value(&writer, aInvestorPositionField.CloseVolume);
  writer.Key("OpenAmount");
  write_value(&writer, aInvestorPositionField.OpenAmount);
  writer.Key("CloseAmount");
  write_value(&writer, aInvestorPositionField.CloseAmount);
  writer.Key("PositionCost");
  write_value(&writer, aInvestorPositionField.PositionCost);
  writer.Key("PreMargin");
  write_value(&writer, aInvestorPositionField.PreMargin);
  writer.Key("UseMargin");
  write_value(&writer, aInvestorPositionField.UseMargin);
  writer.Key("FrozenMargin");
  write_value(&writer, aInvestorPositionField.FrozenMargin);
  writer.Key("FrozenCash");
  write_value(&writer, aInvestorPositionField.FrozenCash);
  writer.Key("FrozenCommission");
  write_value(&writer, aInvestorPositionField.FrozenCommission);
  writer.Key("CashIn");
  write_value(&writer, aInvestorPositionField.CashIn);
  writer.Key("Commission");
  write_value(&writer, aInvestorPositionField.Commission);
  writer.Key("CloseProfit");
  write_value(&writer, aInvestorPositionField.CloseProfit);
  writer.Key("PositionProfit");
  write_value(&writer, aInvestorPositionField.PositionProfit);
  writer.Key("PreSettlementPrice");
  write_value(&writer, aInvestorPositionField.PreSettlementPrice);
  writer.Key("SettlementPrice");
  write_value(&writer, aInvestorPositionField.SettlementPrice);
  writer.Key("TradingDay");
  write_value(&writer, aInvestorPositionField.TradingDay);
  writer.Key("SettlementID");
  write_value(&writer, aInvestorPositionField.SettlementID);
  writer.Key("OpenCost");
  write_value(&writer, aInvestorPositionField.OpenCost);
  writer.Key("ExchangeMargin");
  write_value(&writer, aInvestorPositionField.ExchangeMargin);
  writer.Key("CombPosition");
  write_value(&writer, aInvestorPositionField.CombPosition);
  writer.Key("CombLongFrozen");
  write_value(&writer, aInvestorPositionField.CombLongFrozen);
  writer.Key("CombShortFrozen");
  write_value(&writer, aInvestorPositionField.CombShortFrozen);
  writer.Key("CloseProfitByDate");
  write_value(&writer, aInvestorPositionField.CloseProfitByDate);
  writer.Key("CloseProfitByTrade");
  write_value(&writer, aInvestorPositionField.CloseProfitByTrade);
  writer.Key("TodayPosition");
  write_value(&writer, aInvestorPositionField.TodayPosition);
  writer.Key("MarginRateByMoney");
  write_value(&writer, aInvestorPositionField.MarginRateByMoney);
  writer.Key("MarginRateByVolume");
  write_value(&writer, aInvestorPositionField.MarginRateByVolume);
  writer.Key("StrikeFrozen");
  write_value(&writer, aInvestorPositionField.StrikeFrozen);
  writer.Key("StrikeFrozenAmount");
  write_value(&writer, aInvestorPositionField.StrikeFrozenAmount);
  writer.Key("AbandonFrozen");
  write_value(&writer, aInvestorPositionField.AbandonFrozen);
  writer.Key("ExchangeID");
  write_value(&writer, aInvestorPositionField.ExchangeID);
  writer.Key("YdStrikeFrozen");
  write_value(&writer, aInvestorPositionField.YdStrikeFrozen);
  writer.Key("InvestUnitID");
  write_value(&writer, aInvestorPositionField.InvestUnitID);
  writer.Key("PositionCostOffset");
  write_value(&writer, aInvestorPositionField.PositionCostOffset);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcInstrumentMarginRateField const
                                    &aInstrumentMarginRateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInstrumentMarginRateField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aInstrumentMarginRateField.InstrumentID);
  writer.Key("InvestorRange");
  write_value(&writer, aInstrumentMarginRateField.InvestorRange);
  writer.Key("BrokerID");
  write_value(&writer, aInstrumentMarginRateField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInstrumentMarginRateField.InvestorID);
  writer.Key("HedgeFlag");
  write_value(&writer, aInstrumentMarginRateField.HedgeFlag);
  writer.Key("LongMarginRatioByMoney");
  write_value(&writer, aInstrumentMarginRateField.LongMarginRatioByMoney);
  writer.Key("LongMarginRatioByVolume");
  write_value(&writer, aInstrumentMarginRateField.LongMarginRatioByVolume);
  writer.Key("ShortMarginRatioByMoney");
  write_value(&writer, aInstrumentMarginRateField.ShortMarginRatioByMoney);
  writer.Key("ShortMarginRatioByVolume");
  write_value(&writer, aInstrumentMarginRateField.ShortMarginRatioByVolume);
  writer.Key("IsRelative");
  write_value(&writer, aInstrumentMarginRateField.IsRelative);
  writer.Key("ExchangeID");
  write_value(&writer, aInstrumentMarginRateField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aInstrumentMarginRateField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcInstrumentCommissionRateField const
                                    &aInstrumentCommissionRateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInstrumentCommissionRateField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aInstrumentCommissionRateField.InstrumentID);
  writer.Key("InvestorRange");
  write_value(&writer, aInstrumentCommissionRateField.InvestorRange);
  writer.Key("BrokerID");
  write_value(&writer, aInstrumentCommissionRateField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInstrumentCommissionRateField.InvestorID);
  writer.Key("OpenRatioByMoney");
  write_value(&writer, aInstrumentCommissionRateField.OpenRatioByMoney);
  writer.Key("OpenRatioByVolume");
  write_value(&writer, aInstrumentCommissionRateField.OpenRatioByVolume);
  writer.Key("CloseRatioByMoney");
  write_value(&writer, aInstrumentCommissionRateField.CloseRatioByMoney);
  writer.Key("CloseRatioByVolume");
  write_value(&writer, aInstrumentCommissionRateField.CloseRatioByVolume);
  writer.Key("CloseTodayRatioByMoney");
  write_value(&writer, aInstrumentCommissionRateField.CloseTodayRatioByMoney);
  writer.Key("CloseTodayRatioByVolume");
  write_value(&writer, aInstrumentCommissionRateField.CloseTodayRatioByVolume);
  writer.Key("ExchangeID");
  write_value(&writer, aInstrumentCommissionRateField.ExchangeID);
  writer.Key("BizType");
  write_value(&writer, aInstrumentCommissionRateField.BizType);
  writer.Key("InvestUnitID");
  write_value(&writer, aInstrumentCommissionRateField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcDepthMarketDataField const &aDepthMarketDataField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcDepthMarketDataField");
  writer.StartObject();
  writer.Key("TradingDay");
  write_value(&writer, aDepthMarketDataField.TradingDay);
  writer.Key("InstrumentID");
  write_value(&writer, aDepthMarketDataField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aDepthMarketDataField.ExchangeID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aDepthMarketDataField.ExchangeInstID);
  writer.Key("LastPrice");
  write_value(&writer, aDepthMarketDataField.LastPrice);
  writer.Key("PreSettlementPrice");
  write_value(&writer, aDepthMarketDataField.PreSettlementPrice);
  writer.Key("PreClosePrice");
  write_value(&writer, aDepthMarketDataField.PreClosePrice);
  writer.Key("PreOpenInterest");
  write_value(&writer, aDepthMarketDataField.PreOpenInterest);
  writer.Key("OpenPrice");
  write_value(&writer, aDepthMarketDataField.OpenPrice);
  writer.Key("HighestPrice");
  write_value(&writer, aDepthMarketDataField.HighestPrice);
  writer.Key("LowestPrice");
  write_value(&writer, aDepthMarketDataField.LowestPrice);
  writer.Key("Volume");
  write_value(&writer, aDepthMarketDataField.Volume);
  writer.Key("Turnover");
  write_value(&writer, aDepthMarketDataField.Turnover);
  writer.Key("OpenInterest");
  write_value(&writer, aDepthMarketDataField.OpenInterest);
  writer.Key("ClosePrice");
  write_value(&writer, aDepthMarketDataField.ClosePrice);
  writer.Key("SettlementPrice");
  write_value(&writer, aDepthMarketDataField.SettlementPrice);
  writer.Key("UpperLimitPrice");
  write_value(&writer, aDepthMarketDataField.UpperLimitPrice);
  writer.Key("LowerLimitPrice");
  write_value(&writer, aDepthMarketDataField.LowerLimitPrice);
  writer.Key("PreDelta");
  write_value(&writer, aDepthMarketDataField.PreDelta);
  writer.Key("CurrDelta");
  write_value(&writer, aDepthMarketDataField.CurrDelta);
  writer.Key("UpdateTime");
  write_value(&writer, aDepthMarketDataField.UpdateTime);
  writer.Key("UpdateMillisec");
  write_value(&writer, aDepthMarketDataField.UpdateMillisec);
  writer.Key("BidPrice1");
  write_value(&writer, aDepthMarketDataField.BidPrice1);
  writer.Key("BidVolume1");
  write_value(&writer, aDepthMarketDataField.BidVolume1);
  writer.Key("AskPrice1");
  write_value(&writer, aDepthMarketDataField.AskPrice1);
  writer.Key("AskVolume1");
  write_value(&writer, aDepthMarketDataField.AskVolume1);
  writer.Key("BidPrice2");
  write_value(&writer, aDepthMarketDataField.BidPrice2);
  writer.Key("BidVolume2");
  write_value(&writer, aDepthMarketDataField.BidVolume2);
  writer.Key("AskPrice2");
  write_value(&writer, aDepthMarketDataField.AskPrice2);
  writer.Key("AskVolume2");
  write_value(&writer, aDepthMarketDataField.AskVolume2);
  writer.Key("BidPrice3");
  write_value(&writer, aDepthMarketDataField.BidPrice3);
  writer.Key("BidVolume3");
  write_value(&writer, aDepthMarketDataField.BidVolume3);
  writer.Key("AskPrice3");
  write_value(&writer, aDepthMarketDataField.AskPrice3);
  writer.Key("AskVolume3");
  write_value(&writer, aDepthMarketDataField.AskVolume3);
  writer.Key("BidPrice4");
  write_value(&writer, aDepthMarketDataField.BidPrice4);
  writer.Key("BidVolume4");
  write_value(&writer, aDepthMarketDataField.BidVolume4);
  writer.Key("AskPrice4");
  write_value(&writer, aDepthMarketDataField.AskPrice4);
  writer.Key("AskVolume4");
  write_value(&writer, aDepthMarketDataField.AskVolume4);
  writer.Key("BidPrice5");
  write_value(&writer, aDepthMarketDataField.BidPrice5);
  writer.Key("BidVolume5");
  write_value(&writer, aDepthMarketDataField.BidVolume5);
  writer.Key("AskPrice5");
  write_value(&writer, aDepthMarketDataField.AskPrice5);
  writer.Key("AskVolume5");
  write_value(&writer, aDepthMarketDataField.AskVolume5);
  writer.Key("AveragePrice");
  write_value(&writer, aDepthMarketDataField.AveragePrice);
  writer.Key("ActionDay");
  write_value(&writer, aDepthMarketDataField.ActionDay);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcInstrumentTradingRightField const
                                    &aInstrumentTradingRightField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInstrumentTradingRightField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aInstrumentTradingRightField.InstrumentID);
  writer.Key("InvestorRange");
  write_value(&writer, aInstrumentTradingRightField.InvestorRange);
  writer.Key("BrokerID");
  write_value(&writer, aInstrumentTradingRightField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInstrumentTradingRightField.InvestorID);
  writer.Key("TradingRight");
  write_value(&writer, aInstrumentTradingRightField.TradingRight);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcBrokerUserField const &aBrokerUserField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcBrokerUserField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aBrokerUserField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aBrokerUserField.UserID);
  writer.Key("UserName");
  write_value(&writer, aBrokerUserField.UserName);
  writer.Key("UserType");
  write_value(&writer, aBrokerUserField.UserType);
  writer.Key("IsActive");
  write_value(&writer, aBrokerUserField.IsActive);
  writer.Key("IsUsingOTP");
  write_value(&writer, aBrokerUserField.IsUsingOTP);
  writer.Key("IsAuthForce");
  write_value(&writer, aBrokerUserField.IsAuthForce);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcBrokerUserPasswordField const
                                    &aBrokerUserPasswordField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcBrokerUserPasswordField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aBrokerUserPasswordField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aBrokerUserPasswordField.UserID);
  writer.Key("Password");
  write_value(&writer, aBrokerUserPasswordField.Password);
  writer.Key("LastUpdateTime");
  write_value(&writer, aBrokerUserPasswordField.LastUpdateTime);
  writer.Key("LastLoginTime");
  write_value(&writer, aBrokerUserPasswordField.LastLoginTime);
  writer.Key("ExpireDate");
  write_value(&writer, aBrokerUserPasswordField.ExpireDate);
  writer.Key("WeakExpireDate");
  write_value(&writer, aBrokerUserPasswordField.WeakExpireDate);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcBrokerUserFunctionField const
                                    &aBrokerUserFunctionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcBrokerUserFunctionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aBrokerUserFunctionField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aBrokerUserFunctionField.UserID);
  writer.Key("BrokerFunctionCode");
  write_value(&writer, aBrokerUserFunctionField.BrokerFunctionCode);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcTraderOfferField const &aTraderOfferField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTraderOfferField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aTraderOfferField.ExchangeID);
  writer.Key("TraderID");
  write_value(&writer, aTraderOfferField.TraderID);
  writer.Key("ParticipantID");
  write_value(&writer, aTraderOfferField.ParticipantID);
  writer.Key("Password");
  write_value(&writer, aTraderOfferField.Password);
  writer.Key("InstallID");
  write_value(&writer, aTraderOfferField.InstallID);
  writer.Key("OrderLocalID");
  write_value(&writer, aTraderOfferField.OrderLocalID);
  writer.Key("TraderConnectStatus");
  write_value(&writer, aTraderOfferField.TraderConnectStatus);
  writer.Key("ConnectRequestDate");
  write_value(&writer, aTraderOfferField.ConnectRequestDate);
  writer.Key("ConnectRequestTime");
  write_value(&writer, aTraderOfferField.ConnectRequestTime);
  writer.Key("LastReportDate");
  write_value(&writer, aTraderOfferField.LastReportDate);
  writer.Key("LastReportTime");
  write_value(&writer, aTraderOfferField.LastReportTime);
  writer.Key("ConnectDate");
  write_value(&writer, aTraderOfferField.ConnectDate);
  writer.Key("ConnectTime");
  write_value(&writer, aTraderOfferField.ConnectTime);
  writer.Key("StartDate");
  write_value(&writer, aTraderOfferField.StartDate);
  writer.Key("StartTime");
  write_value(&writer, aTraderOfferField.StartTime);
  writer.Key("TradingDay");
  write_value(&writer, aTraderOfferField.TradingDay);
  writer.Key("BrokerID");
  write_value(&writer, aTraderOfferField.BrokerID);
  writer.Key("MaxTradeID");
  write_value(&writer, aTraderOfferField.MaxTradeID);
  writer.Key("MaxOrderMessageReference");
  write_value(&writer, aTraderOfferField.MaxOrderMessageReference);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcSettlementInfoField const &aSettlementInfoField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcSettlementInfoField");
  writer.StartObject();
  writer.Key("TradingDay");
  write_value(&writer, aSettlementInfoField.TradingDay);
  writer.Key("SettlementID");
  write_value(&writer, aSettlementInfoField.SettlementID);
  writer.Key("BrokerID");
  write_value(&writer, aSettlementInfoField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aSettlementInfoField.InvestorID);
  writer.Key("SequenceNo");
  write_value(&writer, aSettlementInfoField.SequenceNo);
  writer.Key("Content");
  write_value(&writer, aSettlementInfoField.Content);
  writer.Key("AccountID");
  write_value(&writer, aSettlementInfoField.AccountID);
  writer.Key("CurrencyID");
  write_value(&writer, aSettlementInfoField.CurrencyID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcInstrumentMarginRateAdjustField const
               &aInstrumentMarginRateAdjustField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInstrumentMarginRateAdjustField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aInstrumentMarginRateAdjustField.InstrumentID);
  writer.Key("InvestorRange");
  write_value(&writer, aInstrumentMarginRateAdjustField.InvestorRange);
  writer.Key("BrokerID");
  write_value(&writer, aInstrumentMarginRateAdjustField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInstrumentMarginRateAdjustField.InvestorID);
  writer.Key("HedgeFlag");
  write_value(&writer, aInstrumentMarginRateAdjustField.HedgeFlag);
  writer.Key("LongMarginRatioByMoney");
  write_value(&writer, aInstrumentMarginRateAdjustField.LongMarginRatioByMoney);
  writer.Key("LongMarginRatioByVolume");
  write_value(&writer,
              aInstrumentMarginRateAdjustField.LongMarginRatioByVolume);
  writer.Key("ShortMarginRatioByMoney");
  write_value(&writer,
              aInstrumentMarginRateAdjustField.ShortMarginRatioByMoney);
  writer.Key("ShortMarginRatioByVolume");
  write_value(&writer,
              aInstrumentMarginRateAdjustField.ShortMarginRatioByVolume);
  writer.Key("IsRelative");
  write_value(&writer, aInstrumentMarginRateAdjustField.IsRelative);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcExchangeMarginRateField const
                                    &aExchangeMarginRateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcExchangeMarginRateField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aExchangeMarginRateField.BrokerID);
  writer.Key("InstrumentID");
  write_value(&writer, aExchangeMarginRateField.InstrumentID);
  writer.Key("HedgeFlag");
  write_value(&writer, aExchangeMarginRateField.HedgeFlag);
  writer.Key("LongMarginRatioByMoney");
  write_value(&writer, aExchangeMarginRateField.LongMarginRatioByMoney);
  writer.Key("LongMarginRatioByVolume");
  write_value(&writer, aExchangeMarginRateField.LongMarginRatioByVolume);
  writer.Key("ShortMarginRatioByMoney");
  write_value(&writer, aExchangeMarginRateField.ShortMarginRatioByMoney);
  writer.Key("ShortMarginRatioByVolume");
  write_value(&writer, aExchangeMarginRateField.ShortMarginRatioByVolume);
  writer.Key("ExchangeID");
  write_value(&writer, aExchangeMarginRateField.ExchangeID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcExchangeMarginRateAdjustField const
                                    &aExchangeMarginRateAdjustField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcExchangeMarginRateAdjustField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aExchangeMarginRateAdjustField.BrokerID);
  writer.Key("InstrumentID");
  write_value(&writer, aExchangeMarginRateAdjustField.InstrumentID);
  writer.Key("HedgeFlag");
  write_value(&writer, aExchangeMarginRateAdjustField.HedgeFlag);
  writer.Key("LongMarginRatioByMoney");
  write_value(&writer, aExchangeMarginRateAdjustField.LongMarginRatioByMoney);
  writer.Key("LongMarginRatioByVolume");
  write_value(&writer, aExchangeMarginRateAdjustField.LongMarginRatioByVolume);
  writer.Key("ShortMarginRatioByMoney");
  write_value(&writer, aExchangeMarginRateAdjustField.ShortMarginRatioByMoney);
  writer.Key("ShortMarginRatioByVolume");
  write_value(&writer, aExchangeMarginRateAdjustField.ShortMarginRatioByVolume);
  writer.Key("ExchLongMarginRatioByMoney");
  write_value(&writer,
              aExchangeMarginRateAdjustField.ExchLongMarginRatioByMoney);
  writer.Key("ExchLongMarginRatioByVolume");
  write_value(&writer,
              aExchangeMarginRateAdjustField.ExchLongMarginRatioByVolume);
  writer.Key("ExchShortMarginRatioByMoney");
  write_value(&writer,
              aExchangeMarginRateAdjustField.ExchShortMarginRatioByMoney);
  writer.Key("ExchShortMarginRatioByVolume");
  write_value(&writer,
              aExchangeMarginRateAdjustField.ExchShortMarginRatioByVolume);
  writer.Key("NoLongMarginRatioByMoney");
  write_value(&writer, aExchangeMarginRateAdjustField.NoLongMarginRatioByMoney);
  writer.Key("NoLongMarginRatioByVolume");
  write_value(&writer,
              aExchangeMarginRateAdjustField.NoLongMarginRatioByVolume);
  writer.Key("NoShortMarginRatioByMoney");
  write_value(&writer,
              aExchangeMarginRateAdjustField.NoShortMarginRatioByMoney);
  writer.Key("NoShortMarginRatioByVolume");
  write_value(&writer,
              aExchangeMarginRateAdjustField.NoShortMarginRatioByVolume);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcExchangeRateField const &aExchangeRateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcExchangeRateField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aExchangeRateField.BrokerID);
  writer.Key("FromCurrencyID");
  write_value(&writer, aExchangeRateField.FromCurrencyID);
  writer.Key("FromCurrencyUnit");
  write_value(&writer, aExchangeRateField.FromCurrencyUnit);
  writer.Key("ToCurrencyID");
  write_value(&writer, aExchangeRateField.ToCurrencyID);
  writer.Key("ExchangeRate");
  write_value(&writer, aExchangeRateField.ExchangeRate);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcSettlementRefField const &aSettlementRefField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcSettlementRefField");
  writer.StartObject();
  writer.Key("TradingDay");
  write_value(&writer, aSettlementRefField.TradingDay);
  writer.Key("SettlementID");
  write_value(&writer, aSettlementRefField.SettlementID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcCurrentTimeField const &aCurrentTimeField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcCurrentTimeField");
  writer.StartObject();
  writer.Key("CurrDate");
  write_value(&writer, aCurrentTimeField.CurrDate);
  writer.Key("CurrTime");
  write_value(&writer, aCurrentTimeField.CurrTime);
  writer.Key("CurrMillisec");
  write_value(&writer, aCurrentTimeField.CurrMillisec);
  writer.Key("ActionDay");
  write_value(&writer, aCurrentTimeField.ActionDay);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcCommPhaseField const &aCommPhaseField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcCommPhaseField");
  writer.StartObject();
  writer.Key("TradingDay");
  write_value(&writer, aCommPhaseField.TradingDay);
  writer.Key("CommPhaseNo");
  write_value(&writer, aCommPhaseField.CommPhaseNo);
  writer.Key("SystemID");
  write_value(&writer, aCommPhaseField.SystemID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcLoginInfoField const &aLoginInfoField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcLoginInfoField");
  writer.StartObject();
  writer.Key("FrontID");
  write_value(&writer, aLoginInfoField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aLoginInfoField.SessionID);
  writer.Key("BrokerID");
  write_value(&writer, aLoginInfoField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aLoginInfoField.UserID);
  writer.Key("LoginDate");
  write_value(&writer, aLoginInfoField.LoginDate);
  writer.Key("LoginTime");
  write_value(&writer, aLoginInfoField.LoginTime);
  writer.Key("IPAddress");
  write_value(&writer, aLoginInfoField.IPAddress);
  writer.Key("UserProductInfo");
  write_value(&writer, aLoginInfoField.UserProductInfo);
  writer.Key("InterfaceProductInfo");
  write_value(&writer, aLoginInfoField.InterfaceProductInfo);
  writer.Key("ProtocolInfo");
  write_value(&writer, aLoginInfoField.ProtocolInfo);
  writer.Key("SystemName");
  write_value(&writer, aLoginInfoField.SystemName);
  writer.Key("PasswordDeprecated");
  write_value(&writer, aLoginInfoField.PasswordDeprecated);
  writer.Key("MaxOrderRef");
  write_value(&writer, aLoginInfoField.MaxOrderRef);
  writer.Key("SHFETime");
  write_value(&writer, aLoginInfoField.SHFETime);
  writer.Key("DCETime");
  write_value(&writer, aLoginInfoField.DCETime);
  writer.Key("CZCETime");
  write_value(&writer, aLoginInfoField.CZCETime);
  writer.Key("FFEXTime");
  write_value(&writer, aLoginInfoField.FFEXTime);
  writer.Key("MacAddress");
  write_value(&writer, aLoginInfoField.MacAddress);
  writer.Key("OneTimePassword");
  write_value(&writer, aLoginInfoField.OneTimePassword);
  writer.Key("INETime");
  write_value(&writer, aLoginInfoField.INETime);
  writer.Key("IsQryControl");
  write_value(&writer, aLoginInfoField.IsQryControl);
  writer.Key("LoginRemark");
  write_value(&writer, aLoginInfoField.LoginRemark);
  writer.Key("Password");
  write_value(&writer, aLoginInfoField.Password);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcLogoutAllField const &aLogoutAllField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcLogoutAllField");
  writer.StartObject();
  writer.Key("FrontID");
  write_value(&writer, aLogoutAllField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aLogoutAllField.SessionID);
  writer.Key("SystemName");
  write_value(&writer, aLogoutAllField.SystemName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcFrontStatusField const &aFrontStatusField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcFrontStatusField");
  writer.StartObject();
  writer.Key("FrontID");
  write_value(&writer, aFrontStatusField.FrontID);
  writer.Key("LastReportDate");
  write_value(&writer, aFrontStatusField.LastReportDate);
  writer.Key("LastReportTime");
  write_value(&writer, aFrontStatusField.LastReportTime);
  writer.Key("IsActive");
  write_value(&writer, aFrontStatusField.IsActive);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcUserPasswordUpdateField const
                                    &aUserPasswordUpdateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcUserPasswordUpdateField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aUserPasswordUpdateField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aUserPasswordUpdateField.UserID);
  writer.Key("OldPassword");
  write_value(&writer, aUserPasswordUpdateField.OldPassword);
  writer.Key("NewPassword");
  write_value(&writer, aUserPasswordUpdateField.NewPassword);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcInputOrderField const &aInputOrderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInputOrderField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aInputOrderField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInputOrderField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aInputOrderField.InstrumentID);
  writer.Key("OrderRef");
  write_value(&writer, aInputOrderField.OrderRef);
  writer.Key("UserID");
  write_value(&writer, aInputOrderField.UserID);
  writer.Key("OrderPriceType");
  write_value(&writer, aInputOrderField.OrderPriceType);
  writer.Key("Direction");
  write_value(&writer, aInputOrderField.Direction);
  writer.Key("CombOffsetFlag");
  write_value(&writer, aInputOrderField.CombOffsetFlag);
  writer.Key("CombHedgeFlag");
  write_value(&writer, aInputOrderField.CombHedgeFlag);
  writer.Key("LimitPrice");
  write_value(&writer, aInputOrderField.LimitPrice);
  writer.Key("VolumeTotalOriginal");
  write_value(&writer, aInputOrderField.VolumeTotalOriginal);
  writer.Key("TimeCondition");
  write_value(&writer, aInputOrderField.TimeCondition);
  writer.Key("GTDDate");
  write_value(&writer, aInputOrderField.GTDDate);
  writer.Key("VolumeCondition");
  write_value(&writer, aInputOrderField.VolumeCondition);
  writer.Key("MinVolume");
  write_value(&writer, aInputOrderField.MinVolume);
  writer.Key("ContingentCondition");
  write_value(&writer, aInputOrderField.ContingentCondition);
  writer.Key("StopPrice");
  write_value(&writer, aInputOrderField.StopPrice);
  writer.Key("ForceCloseReason");
  write_value(&writer, aInputOrderField.ForceCloseReason);
  writer.Key("IsAutoSuspend");
  write_value(&writer, aInputOrderField.IsAutoSuspend);
  writer.Key("BusinessUnit");
  write_value(&writer, aInputOrderField.BusinessUnit);
  writer.Key("RequestID");
  write_value(&writer, aInputOrderField.RequestID);
  writer.Key("UserForceClose");
  write_value(&writer, aInputOrderField.UserForceClose);
  writer.Key("IsSwapOrder");
  write_value(&writer, aInputOrderField.IsSwapOrder);
  writer.Key("ExchangeID");
  write_value(&writer, aInputOrderField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aInputOrderField.InvestUnitID);
  writer.Key("AccountID");
  write_value(&writer, aInputOrderField.AccountID);
  writer.Key("CurrencyID");
  write_value(&writer, aInputOrderField.CurrencyID);
  writer.Key("ClientID");
  write_value(&writer, aInputOrderField.ClientID);
  writer.Key("IPAddress");
  write_value(&writer, aInputOrderField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aInputOrderField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcOrderField const &aOrderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcOrderField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aOrderField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aOrderField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aOrderField.InstrumentID);
  writer.Key("OrderRef");
  write_value(&writer, aOrderField.OrderRef);
  writer.Key("UserID");
  write_value(&writer, aOrderField.UserID);
  writer.Key("OrderPriceType");
  write_value(&writer, aOrderField.OrderPriceType);
  writer.Key("Direction");
  write_value(&writer, aOrderField.Direction);
  writer.Key("CombOffsetFlag");
  write_value(&writer, aOrderField.CombOffsetFlag);
  writer.Key("CombHedgeFlag");
  write_value(&writer, aOrderField.CombHedgeFlag);
  writer.Key("LimitPrice");
  write_value(&writer, aOrderField.LimitPrice);
  writer.Key("VolumeTotalOriginal");
  write_value(&writer, aOrderField.VolumeTotalOriginal);
  writer.Key("TimeCondition");
  write_value(&writer, aOrderField.TimeCondition);
  writer.Key("GTDDate");
  write_value(&writer, aOrderField.GTDDate);
  writer.Key("VolumeCondition");
  write_value(&writer, aOrderField.VolumeCondition);
  writer.Key("MinVolume");
  write_value(&writer, aOrderField.MinVolume);
  writer.Key("ContingentCondition");
  write_value(&writer, aOrderField.ContingentCondition);
  writer.Key("StopPrice");
  write_value(&writer, aOrderField.StopPrice);
  writer.Key("ForceCloseReason");
  write_value(&writer, aOrderField.ForceCloseReason);
  writer.Key("IsAutoSuspend");
  write_value(&writer, aOrderField.IsAutoSuspend);
  writer.Key("BusinessUnit");
  write_value(&writer, aOrderField.BusinessUnit);
  writer.Key("RequestID");
  write_value(&writer, aOrderField.RequestID);
  writer.Key("OrderLocalID");
  write_value(&writer, aOrderField.OrderLocalID);
  writer.Key("ExchangeID");
  write_value(&writer, aOrderField.ExchangeID);
  writer.Key("ParticipantID");
  write_value(&writer, aOrderField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aOrderField.ClientID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aOrderField.ExchangeInstID);
  writer.Key("TraderID");
  write_value(&writer, aOrderField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aOrderField.InstallID);
  writer.Key("OrderSubmitStatus");
  write_value(&writer, aOrderField.OrderSubmitStatus);
  writer.Key("NotifySequence");
  write_value(&writer, aOrderField.NotifySequence);
  writer.Key("TradingDay");
  write_value(&writer, aOrderField.TradingDay);
  writer.Key("SettlementID");
  write_value(&writer, aOrderField.SettlementID);
  writer.Key("OrderSysID");
  write_value(&writer, aOrderField.OrderSysID);
  writer.Key("OrderSource");
  write_value(&writer, aOrderField.OrderSource);
  writer.Key("OrderStatus");
  write_value(&writer, aOrderField.OrderStatus);
  writer.Key("OrderType");
  write_value(&writer, aOrderField.OrderType);
  writer.Key("VolumeTraded");
  write_value(&writer, aOrderField.VolumeTraded);
  writer.Key("VolumeTotal");
  write_value(&writer, aOrderField.VolumeTotal);
  writer.Key("InsertDate");
  write_value(&writer, aOrderField.InsertDate);
  writer.Key("InsertTime");
  write_value(&writer, aOrderField.InsertTime);
  writer.Key("ActiveTime");
  write_value(&writer, aOrderField.ActiveTime);
  writer.Key("SuspendTime");
  write_value(&writer, aOrderField.SuspendTime);
  writer.Key("UpdateTime");
  write_value(&writer, aOrderField.UpdateTime);
  writer.Key("CancelTime");
  write_value(&writer, aOrderField.CancelTime);
  writer.Key("ActiveTraderID");
  write_value(&writer, aOrderField.ActiveTraderID);
  writer.Key("ClearingPartID");
  write_value(&writer, aOrderField.ClearingPartID);
  writer.Key("SequenceNo");
  write_value(&writer, aOrderField.SequenceNo);
  writer.Key("FrontID");
  write_value(&writer, aOrderField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aOrderField.SessionID);
  writer.Key("UserProductInfo");
  write_value(&writer, aOrderField.UserProductInfo);
  writer.Key("StatusMsg");
  write_value(&writer, aOrderField.StatusMsg);
  writer.Key("UserForceClose");
  write_value(&writer, aOrderField.UserForceClose);
  writer.Key("ActiveUserID");
  write_value(&writer, aOrderField.ActiveUserID);
  writer.Key("BrokerOrderSeq");
  write_value(&writer, aOrderField.BrokerOrderSeq);
  writer.Key("RelativeOrderSysID");
  write_value(&writer, aOrderField.RelativeOrderSysID);
  writer.Key("ZCETotalTradedVolume");
  write_value(&writer, aOrderField.ZCETotalTradedVolume);
  writer.Key("IsSwapOrder");
  write_value(&writer, aOrderField.IsSwapOrder);
  writer.Key("BranchID");
  write_value(&writer, aOrderField.BranchID);
  writer.Key("InvestUnitID");
  write_value(&writer, aOrderField.InvestUnitID);
  writer.Key("AccountID");
  write_value(&writer, aOrderField.AccountID);
  writer.Key("CurrencyID");
  write_value(&writer, aOrderField.CurrencyID);
  writer.Key("IPAddress");
  write_value(&writer, aOrderField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aOrderField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcExchangeOrderField const &aExchangeOrderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcExchangeOrderField");
  writer.StartObject();
  writer.Key("OrderPriceType");
  write_value(&writer, aExchangeOrderField.OrderPriceType);
  writer.Key("Direction");
  write_value(&writer, aExchangeOrderField.Direction);
  writer.Key("CombOffsetFlag");
  write_value(&writer, aExchangeOrderField.CombOffsetFlag);
  writer.Key("CombHedgeFlag");
  write_value(&writer, aExchangeOrderField.CombHedgeFlag);
  writer.Key("LimitPrice");
  write_value(&writer, aExchangeOrderField.LimitPrice);
  writer.Key("VolumeTotalOriginal");
  write_value(&writer, aExchangeOrderField.VolumeTotalOriginal);
  writer.Key("TimeCondition");
  write_value(&writer, aExchangeOrderField.TimeCondition);
  writer.Key("GTDDate");
  write_value(&writer, aExchangeOrderField.GTDDate);
  writer.Key("VolumeCondition");
  write_value(&writer, aExchangeOrderField.VolumeCondition);
  writer.Key("MinVolume");
  write_value(&writer, aExchangeOrderField.MinVolume);
  writer.Key("ContingentCondition");
  write_value(&writer, aExchangeOrderField.ContingentCondition);
  writer.Key("StopPrice");
  write_value(&writer, aExchangeOrderField.StopPrice);
  writer.Key("ForceCloseReason");
  write_value(&writer, aExchangeOrderField.ForceCloseReason);
  writer.Key("IsAutoSuspend");
  write_value(&writer, aExchangeOrderField.IsAutoSuspend);
  writer.Key("BusinessUnit");
  write_value(&writer, aExchangeOrderField.BusinessUnit);
  writer.Key("RequestID");
  write_value(&writer, aExchangeOrderField.RequestID);
  writer.Key("OrderLocalID");
  write_value(&writer, aExchangeOrderField.OrderLocalID);
  writer.Key("ExchangeID");
  write_value(&writer, aExchangeOrderField.ExchangeID);
  writer.Key("ParticipantID");
  write_value(&writer, aExchangeOrderField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aExchangeOrderField.ClientID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aExchangeOrderField.ExchangeInstID);
  writer.Key("TraderID");
  write_value(&writer, aExchangeOrderField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aExchangeOrderField.InstallID);
  writer.Key("OrderSubmitStatus");
  write_value(&writer, aExchangeOrderField.OrderSubmitStatus);
  writer.Key("NotifySequence");
  write_value(&writer, aExchangeOrderField.NotifySequence);
  writer.Key("TradingDay");
  write_value(&writer, aExchangeOrderField.TradingDay);
  writer.Key("SettlementID");
  write_value(&writer, aExchangeOrderField.SettlementID);
  writer.Key("OrderSysID");
  write_value(&writer, aExchangeOrderField.OrderSysID);
  writer.Key("OrderSource");
  write_value(&writer, aExchangeOrderField.OrderSource);
  writer.Key("OrderStatus");
  write_value(&writer, aExchangeOrderField.OrderStatus);
  writer.Key("OrderType");
  write_value(&writer, aExchangeOrderField.OrderType);
  writer.Key("VolumeTraded");
  write_value(&writer, aExchangeOrderField.VolumeTraded);
  writer.Key("VolumeTotal");
  write_value(&writer, aExchangeOrderField.VolumeTotal);
  writer.Key("InsertDate");
  write_value(&writer, aExchangeOrderField.InsertDate);
  writer.Key("InsertTime");
  write_value(&writer, aExchangeOrderField.InsertTime);
  writer.Key("ActiveTime");
  write_value(&writer, aExchangeOrderField.ActiveTime);
  writer.Key("SuspendTime");
  write_value(&writer, aExchangeOrderField.SuspendTime);
  writer.Key("UpdateTime");
  write_value(&writer, aExchangeOrderField.UpdateTime);
  writer.Key("CancelTime");
  write_value(&writer, aExchangeOrderField.CancelTime);
  writer.Key("ActiveTraderID");
  write_value(&writer, aExchangeOrderField.ActiveTraderID);
  writer.Key("ClearingPartID");
  write_value(&writer, aExchangeOrderField.ClearingPartID);
  writer.Key("SequenceNo");
  write_value(&writer, aExchangeOrderField.SequenceNo);
  writer.Key("BranchID");
  write_value(&writer, aExchangeOrderField.BranchID);
  writer.Key("IPAddress");
  write_value(&writer, aExchangeOrderField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aExchangeOrderField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcExchangeOrderInsertErrorField const
                                    &aExchangeOrderInsertErrorField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcExchangeOrderInsertErrorField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aExchangeOrderInsertErrorField.ExchangeID);
  writer.Key("ParticipantID");
  write_value(&writer, aExchangeOrderInsertErrorField.ParticipantID);
  writer.Key("TraderID");
  write_value(&writer, aExchangeOrderInsertErrorField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aExchangeOrderInsertErrorField.InstallID);
  writer.Key("OrderLocalID");
  write_value(&writer, aExchangeOrderInsertErrorField.OrderLocalID);
  writer.Key("ErrorID");
  write_value(&writer, aExchangeOrderInsertErrorField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aExchangeOrderInsertErrorField.ErrorMsg);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcInputOrderActionField const &aInputOrderActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInputOrderActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aInputOrderActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInputOrderActionField.InvestorID);
  writer.Key("OrderActionRef");
  write_value(&writer, aInputOrderActionField.OrderActionRef);
  writer.Key("OrderRef");
  write_value(&writer, aInputOrderActionField.OrderRef);
  writer.Key("RequestID");
  write_value(&writer, aInputOrderActionField.RequestID);
  writer.Key("FrontID");
  write_value(&writer, aInputOrderActionField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aInputOrderActionField.SessionID);
  writer.Key("ExchangeID");
  write_value(&writer, aInputOrderActionField.ExchangeID);
  writer.Key("OrderSysID");
  write_value(&writer, aInputOrderActionField.OrderSysID);
  writer.Key("ActionFlag");
  write_value(&writer, aInputOrderActionField.ActionFlag);
  writer.Key("LimitPrice");
  write_value(&writer, aInputOrderActionField.LimitPrice);
  writer.Key("VolumeChange");
  write_value(&writer, aInputOrderActionField.VolumeChange);
  writer.Key("UserID");
  write_value(&writer, aInputOrderActionField.UserID);
  writer.Key("InstrumentID");
  write_value(&writer, aInputOrderActionField.InstrumentID);
  writer.Key("InvestUnitID");
  write_value(&writer, aInputOrderActionField.InvestUnitID);
  writer.Key("IPAddress");
  write_value(&writer, aInputOrderActionField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aInputOrderActionField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcOrderActionField const &aOrderActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcOrderActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aOrderActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aOrderActionField.InvestorID);
  writer.Key("OrderActionRef");
  write_value(&writer, aOrderActionField.OrderActionRef);
  writer.Key("OrderRef");
  write_value(&writer, aOrderActionField.OrderRef);
  writer.Key("RequestID");
  write_value(&writer, aOrderActionField.RequestID);
  writer.Key("FrontID");
  write_value(&writer, aOrderActionField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aOrderActionField.SessionID);
  writer.Key("ExchangeID");
  write_value(&writer, aOrderActionField.ExchangeID);
  writer.Key("OrderSysID");
  write_value(&writer, aOrderActionField.OrderSysID);
  writer.Key("ActionFlag");
  write_value(&writer, aOrderActionField.ActionFlag);
  writer.Key("LimitPrice");
  write_value(&writer, aOrderActionField.LimitPrice);
  writer.Key("VolumeChange");
  write_value(&writer, aOrderActionField.VolumeChange);
  writer.Key("ActionDate");
  write_value(&writer, aOrderActionField.ActionDate);
  writer.Key("ActionTime");
  write_value(&writer, aOrderActionField.ActionTime);
  writer.Key("TraderID");
  write_value(&writer, aOrderActionField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aOrderActionField.InstallID);
  writer.Key("OrderLocalID");
  write_value(&writer, aOrderActionField.OrderLocalID);
  writer.Key("ActionLocalID");
  write_value(&writer, aOrderActionField.ActionLocalID);
  writer.Key("ParticipantID");
  write_value(&writer, aOrderActionField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aOrderActionField.ClientID);
  writer.Key("BusinessUnit");
  write_value(&writer, aOrderActionField.BusinessUnit);
  writer.Key("OrderActionStatus");
  write_value(&writer, aOrderActionField.OrderActionStatus);
  writer.Key("UserID");
  write_value(&writer, aOrderActionField.UserID);
  writer.Key("StatusMsg");
  write_value(&writer, aOrderActionField.StatusMsg);
  writer.Key("InstrumentID");
  write_value(&writer, aOrderActionField.InstrumentID);
  writer.Key("BranchID");
  write_value(&writer, aOrderActionField.BranchID);
  writer.Key("InvestUnitID");
  write_value(&writer, aOrderActionField.InvestUnitID);
  writer.Key("IPAddress");
  write_value(&writer, aOrderActionField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aOrderActionField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcExchangeOrderActionField const
                                    &aExchangeOrderActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcExchangeOrderActionField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aExchangeOrderActionField.ExchangeID);
  writer.Key("OrderSysID");
  write_value(&writer, aExchangeOrderActionField.OrderSysID);
  writer.Key("ActionFlag");
  write_value(&writer, aExchangeOrderActionField.ActionFlag);
  writer.Key("LimitPrice");
  write_value(&writer, aExchangeOrderActionField.LimitPrice);
  writer.Key("VolumeChange");
  write_value(&writer, aExchangeOrderActionField.VolumeChange);
  writer.Key("ActionDate");
  write_value(&writer, aExchangeOrderActionField.ActionDate);
  writer.Key("ActionTime");
  write_value(&writer, aExchangeOrderActionField.ActionTime);
  writer.Key("TraderID");
  write_value(&writer, aExchangeOrderActionField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aExchangeOrderActionField.InstallID);
  writer.Key("OrderLocalID");
  write_value(&writer, aExchangeOrderActionField.OrderLocalID);
  writer.Key("ActionLocalID");
  write_value(&writer, aExchangeOrderActionField.ActionLocalID);
  writer.Key("ParticipantID");
  write_value(&writer, aExchangeOrderActionField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aExchangeOrderActionField.ClientID);
  writer.Key("BusinessUnit");
  write_value(&writer, aExchangeOrderActionField.BusinessUnit);
  writer.Key("OrderActionStatus");
  write_value(&writer, aExchangeOrderActionField.OrderActionStatus);
  writer.Key("UserID");
  write_value(&writer, aExchangeOrderActionField.UserID);
  writer.Key("BranchID");
  write_value(&writer, aExchangeOrderActionField.BranchID);
  writer.Key("IPAddress");
  write_value(&writer, aExchangeOrderActionField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aExchangeOrderActionField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcExchangeOrderActionErrorField const
                                    &aExchangeOrderActionErrorField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcExchangeOrderActionErrorField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aExchangeOrderActionErrorField.ExchangeID);
  writer.Key("OrderSysID");
  write_value(&writer, aExchangeOrderActionErrorField.OrderSysID);
  writer.Key("TraderID");
  write_value(&writer, aExchangeOrderActionErrorField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aExchangeOrderActionErrorField.InstallID);
  writer.Key("OrderLocalID");
  write_value(&writer, aExchangeOrderActionErrorField.OrderLocalID);
  writer.Key("ActionLocalID");
  write_value(&writer, aExchangeOrderActionErrorField.ActionLocalID);
  writer.Key("ErrorID");
  write_value(&writer, aExchangeOrderActionErrorField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aExchangeOrderActionErrorField.ErrorMsg);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcExchangeTradeField const &aExchangeTradeField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcExchangeTradeField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aExchangeTradeField.ExchangeID);
  writer.Key("TradeID");
  write_value(&writer, aExchangeTradeField.TradeID);
  writer.Key("Direction");
  write_value(&writer, aExchangeTradeField.Direction);
  writer.Key("OrderSysID");
  write_value(&writer, aExchangeTradeField.OrderSysID);
  writer.Key("ParticipantID");
  write_value(&writer, aExchangeTradeField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aExchangeTradeField.ClientID);
  writer.Key("TradingRole");
  write_value(&writer, aExchangeTradeField.TradingRole);
  writer.Key("ExchangeInstID");
  write_value(&writer, aExchangeTradeField.ExchangeInstID);
  writer.Key("OffsetFlag");
  write_value(&writer, aExchangeTradeField.OffsetFlag);
  writer.Key("HedgeFlag");
  write_value(&writer, aExchangeTradeField.HedgeFlag);
  writer.Key("Price");
  write_value(&writer, aExchangeTradeField.Price);
  writer.Key("Volume");
  write_value(&writer, aExchangeTradeField.Volume);
  writer.Key("TradeDate");
  write_value(&writer, aExchangeTradeField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aExchangeTradeField.TradeTime);
  writer.Key("TradeType");
  write_value(&writer, aExchangeTradeField.TradeType);
  writer.Key("PriceSource");
  write_value(&writer, aExchangeTradeField.PriceSource);
  writer.Key("TraderID");
  write_value(&writer, aExchangeTradeField.TraderID);
  writer.Key("OrderLocalID");
  write_value(&writer, aExchangeTradeField.OrderLocalID);
  writer.Key("ClearingPartID");
  write_value(&writer, aExchangeTradeField.ClearingPartID);
  writer.Key("BusinessUnit");
  write_value(&writer, aExchangeTradeField.BusinessUnit);
  writer.Key("SequenceNo");
  write_value(&writer, aExchangeTradeField.SequenceNo);
  writer.Key("TradeSource");
  write_value(&writer, aExchangeTradeField.TradeSource);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcTradeField const &aTradeField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTradeField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aTradeField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aTradeField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aTradeField.InstrumentID);
  writer.Key("OrderRef");
  write_value(&writer, aTradeField.OrderRef);
  writer.Key("UserID");
  write_value(&writer, aTradeField.UserID);
  writer.Key("ExchangeID");
  write_value(&writer, aTradeField.ExchangeID);
  writer.Key("TradeID");
  write_value(&writer, aTradeField.TradeID);
  writer.Key("Direction");
  write_value(&writer, aTradeField.Direction);
  writer.Key("OrderSysID");
  write_value(&writer, aTradeField.OrderSysID);
  writer.Key("ParticipantID");
  write_value(&writer, aTradeField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aTradeField.ClientID);
  writer.Key("TradingRole");
  write_value(&writer, aTradeField.TradingRole);
  writer.Key("ExchangeInstID");
  write_value(&writer, aTradeField.ExchangeInstID);
  writer.Key("OffsetFlag");
  write_value(&writer, aTradeField.OffsetFlag);
  writer.Key("HedgeFlag");
  write_value(&writer, aTradeField.HedgeFlag);
  writer.Key("Price");
  write_value(&writer, aTradeField.Price);
  writer.Key("Volume");
  write_value(&writer, aTradeField.Volume);
  writer.Key("TradeDate");
  write_value(&writer, aTradeField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aTradeField.TradeTime);
  writer.Key("TradeType");
  write_value(&writer, aTradeField.TradeType);
  writer.Key("PriceSource");
  write_value(&writer, aTradeField.PriceSource);
  writer.Key("TraderID");
  write_value(&writer, aTradeField.TraderID);
  writer.Key("OrderLocalID");
  write_value(&writer, aTradeField.OrderLocalID);
  writer.Key("ClearingPartID");
  write_value(&writer, aTradeField.ClearingPartID);
  writer.Key("BusinessUnit");
  write_value(&writer, aTradeField.BusinessUnit);
  writer.Key("SequenceNo");
  write_value(&writer, aTradeField.SequenceNo);
  writer.Key("TradingDay");
  write_value(&writer, aTradeField.TradingDay);
  writer.Key("SettlementID");
  write_value(&writer, aTradeField.SettlementID);
  writer.Key("BrokerOrderSeq");
  write_value(&writer, aTradeField.BrokerOrderSeq);
  writer.Key("TradeSource");
  write_value(&writer, aTradeField.TradeSource);
  writer.Key("InvestUnitID");
  write_value(&writer, aTradeField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcUserSessionField const &aUserSessionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcUserSessionField");
  writer.StartObject();
  writer.Key("FrontID");
  write_value(&writer, aUserSessionField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aUserSessionField.SessionID);
  writer.Key("BrokerID");
  write_value(&writer, aUserSessionField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aUserSessionField.UserID);
  writer.Key("LoginDate");
  write_value(&writer, aUserSessionField.LoginDate);
  writer.Key("LoginTime");
  write_value(&writer, aUserSessionField.LoginTime);
  writer.Key("IPAddress");
  write_value(&writer, aUserSessionField.IPAddress);
  writer.Key("UserProductInfo");
  write_value(&writer, aUserSessionField.UserProductInfo);
  writer.Key("InterfaceProductInfo");
  write_value(&writer, aUserSessionField.InterfaceProductInfo);
  writer.Key("ProtocolInfo");
  write_value(&writer, aUserSessionField.ProtocolInfo);
  writer.Key("MacAddress");
  write_value(&writer, aUserSessionField.MacAddress);
  writer.Key("LoginRemark");
  write_value(&writer, aUserSessionField.LoginRemark);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQueryMaxOrderVolumeField const
                                    &aQueryMaxOrderVolumeField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQueryMaxOrderVolumeField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQueryMaxOrderVolumeField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQueryMaxOrderVolumeField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQueryMaxOrderVolumeField.InstrumentID);
  writer.Key("Direction");
  write_value(&writer, aQueryMaxOrderVolumeField.Direction);
  writer.Key("OffsetFlag");
  write_value(&writer, aQueryMaxOrderVolumeField.OffsetFlag);
  writer.Key("HedgeFlag");
  write_value(&writer, aQueryMaxOrderVolumeField.HedgeFlag);
  writer.Key("MaxVolume");
  write_value(&writer, aQueryMaxOrderVolumeField.MaxVolume);
  writer.Key("ExchangeID");
  write_value(&writer, aQueryMaxOrderVolumeField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aQueryMaxOrderVolumeField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcSettlementInfoConfirmField const
                                    &aSettlementInfoConfirmField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcSettlementInfoConfirmField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aSettlementInfoConfirmField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aSettlementInfoConfirmField.InvestorID);
  writer.Key("ConfirmDate");
  write_value(&writer, aSettlementInfoConfirmField.ConfirmDate);
  writer.Key("ConfirmTime");
  write_value(&writer, aSettlementInfoConfirmField.ConfirmTime);
  writer.Key("SettlementID");
  write_value(&writer, aSettlementInfoConfirmField.SettlementID);
  writer.Key("AccountID");
  write_value(&writer, aSettlementInfoConfirmField.AccountID);
  writer.Key("CurrencyID");
  write_value(&writer, aSettlementInfoConfirmField.CurrencyID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcSyncDepositField const &aSyncDepositField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcSyncDepositField");
  writer.StartObject();
  writer.Key("DepositSeqNo");
  write_value(&writer, aSyncDepositField.DepositSeqNo);
  writer.Key("BrokerID");
  write_value(&writer, aSyncDepositField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aSyncDepositField.InvestorID);
  writer.Key("Deposit");
  write_value(&writer, aSyncDepositField.Deposit);
  writer.Key("IsForce");
  write_value(&writer, aSyncDepositField.IsForce);
  writer.Key("CurrencyID");
  write_value(&writer, aSyncDepositField.CurrencyID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcSyncFundMortgageField const &aSyncFundMortgageField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcSyncFundMortgageField");
  writer.StartObject();
  writer.Key("MortgageSeqNo");
  write_value(&writer, aSyncFundMortgageField.MortgageSeqNo);
  writer.Key("BrokerID");
  write_value(&writer, aSyncFundMortgageField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aSyncFundMortgageField.InvestorID);
  writer.Key("FromCurrencyID");
  write_value(&writer, aSyncFundMortgageField.FromCurrencyID);
  writer.Key("MortgageAmount");
  write_value(&writer, aSyncFundMortgageField.MortgageAmount);
  writer.Key("ToCurrencyID");
  write_value(&writer, aSyncFundMortgageField.ToCurrencyID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcBrokerSyncField const &aBrokerSyncField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcBrokerSyncField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aBrokerSyncField.BrokerID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcSyncingInvestorField const &aSyncingInvestorField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcSyncingInvestorField");
  writer.StartObject();
  writer.Key("InvestorID");
  write_value(&writer, aSyncingInvestorField.InvestorID);
  writer.Key("BrokerID");
  write_value(&writer, aSyncingInvestorField.BrokerID);
  writer.Key("InvestorGroupID");
  write_value(&writer, aSyncingInvestorField.InvestorGroupID);
  writer.Key("InvestorName");
  write_value(&writer, aSyncingInvestorField.InvestorName);
  writer.Key("IdentifiedCardType");
  write_value(&writer, aSyncingInvestorField.IdentifiedCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aSyncingInvestorField.IdentifiedCardNo);
  writer.Key("IsActive");
  write_value(&writer, aSyncingInvestorField.IsActive);
  writer.Key("Telephone");
  write_value(&writer, aSyncingInvestorField.Telephone);
  writer.Key("Address");
  write_value(&writer, aSyncingInvestorField.Address);
  writer.Key("OpenDate");
  write_value(&writer, aSyncingInvestorField.OpenDate);
  writer.Key("Mobile");
  write_value(&writer, aSyncingInvestorField.Mobile);
  writer.Key("CommModelID");
  write_value(&writer, aSyncingInvestorField.CommModelID);
  writer.Key("MarginModelID");
  write_value(&writer, aSyncingInvestorField.MarginModelID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcSyncingTradingCodeField const
                                    &aSyncingTradingCodeField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcSyncingTradingCodeField");
  writer.StartObject();
  writer.Key("InvestorID");
  write_value(&writer, aSyncingTradingCodeField.InvestorID);
  writer.Key("BrokerID");
  write_value(&writer, aSyncingTradingCodeField.BrokerID);
  writer.Key("ExchangeID");
  write_value(&writer, aSyncingTradingCodeField.ExchangeID);
  writer.Key("ClientID");
  write_value(&writer, aSyncingTradingCodeField.ClientID);
  writer.Key("IsActive");
  write_value(&writer, aSyncingTradingCodeField.IsActive);
  writer.Key("ClientIDType");
  write_value(&writer, aSyncingTradingCodeField.ClientIDType);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcSyncingInvestorGroupField const
                                    &aSyncingInvestorGroupField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcSyncingInvestorGroupField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aSyncingInvestorGroupField.BrokerID);
  writer.Key("InvestorGroupID");
  write_value(&writer, aSyncingInvestorGroupField.InvestorGroupID);
  writer.Key("InvestorGroupName");
  write_value(&writer, aSyncingInvestorGroupField.InvestorGroupName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcSyncingTradingAccountField const
                                    &aSyncingTradingAccountField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcSyncingTradingAccountField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aSyncingTradingAccountField.BrokerID);
  writer.Key("AccountID");
  write_value(&writer, aSyncingTradingAccountField.AccountID);
  writer.Key("PreMortgage");
  write_value(&writer, aSyncingTradingAccountField.PreMortgage);
  writer.Key("PreCredit");
  write_value(&writer, aSyncingTradingAccountField.PreCredit);
  writer.Key("PreDeposit");
  write_value(&writer, aSyncingTradingAccountField.PreDeposit);
  writer.Key("PreBalance");
  write_value(&writer, aSyncingTradingAccountField.PreBalance);
  writer.Key("PreMargin");
  write_value(&writer, aSyncingTradingAccountField.PreMargin);
  writer.Key("InterestBase");
  write_value(&writer, aSyncingTradingAccountField.InterestBase);
  writer.Key("Interest");
  write_value(&writer, aSyncingTradingAccountField.Interest);
  writer.Key("Deposit");
  write_value(&writer, aSyncingTradingAccountField.Deposit);
  writer.Key("Withdraw");
  write_value(&writer, aSyncingTradingAccountField.Withdraw);
  writer.Key("FrozenMargin");
  write_value(&writer, aSyncingTradingAccountField.FrozenMargin);
  writer.Key("FrozenCash");
  write_value(&writer, aSyncingTradingAccountField.FrozenCash);
  writer.Key("FrozenCommission");
  write_value(&writer, aSyncingTradingAccountField.FrozenCommission);
  writer.Key("CurrMargin");
  write_value(&writer, aSyncingTradingAccountField.CurrMargin);
  writer.Key("CashIn");
  write_value(&writer, aSyncingTradingAccountField.CashIn);
  writer.Key("Commission");
  write_value(&writer, aSyncingTradingAccountField.Commission);
  writer.Key("CloseProfit");
  write_value(&writer, aSyncingTradingAccountField.CloseProfit);
  writer.Key("PositionProfit");
  write_value(&writer, aSyncingTradingAccountField.PositionProfit);
  writer.Key("Balance");
  write_value(&writer, aSyncingTradingAccountField.Balance);
  writer.Key("Available");
  write_value(&writer, aSyncingTradingAccountField.Available);
  writer.Key("WithdrawQuota");
  write_value(&writer, aSyncingTradingAccountField.WithdrawQuota);
  writer.Key("Reserve");
  write_value(&writer, aSyncingTradingAccountField.Reserve);
  writer.Key("TradingDay");
  write_value(&writer, aSyncingTradingAccountField.TradingDay);
  writer.Key("SettlementID");
  write_value(&writer, aSyncingTradingAccountField.SettlementID);
  writer.Key("Credit");
  write_value(&writer, aSyncingTradingAccountField.Credit);
  writer.Key("Mortgage");
  write_value(&writer, aSyncingTradingAccountField.Mortgage);
  writer.Key("ExchangeMargin");
  write_value(&writer, aSyncingTradingAccountField.ExchangeMargin);
  writer.Key("DeliveryMargin");
  write_value(&writer, aSyncingTradingAccountField.DeliveryMargin);
  writer.Key("ExchangeDeliveryMargin");
  write_value(&writer, aSyncingTradingAccountField.ExchangeDeliveryMargin);
  writer.Key("ReserveBalance");
  write_value(&writer, aSyncingTradingAccountField.ReserveBalance);
  writer.Key("CurrencyID");
  write_value(&writer, aSyncingTradingAccountField.CurrencyID);
  writer.Key("PreFundMortgageIn");
  write_value(&writer, aSyncingTradingAccountField.PreFundMortgageIn);
  writer.Key("PreFundMortgageOut");
  write_value(&writer, aSyncingTradingAccountField.PreFundMortgageOut);
  writer.Key("FundMortgageIn");
  write_value(&writer, aSyncingTradingAccountField.FundMortgageIn);
  writer.Key("FundMortgageOut");
  write_value(&writer, aSyncingTradingAccountField.FundMortgageOut);
  writer.Key("FundMortgageAvailable");
  write_value(&writer, aSyncingTradingAccountField.FundMortgageAvailable);
  writer.Key("MortgageableFund");
  write_value(&writer, aSyncingTradingAccountField.MortgageableFund);
  writer.Key("SpecProductMargin");
  write_value(&writer, aSyncingTradingAccountField.SpecProductMargin);
  writer.Key("SpecProductFrozenMargin");
  write_value(&writer, aSyncingTradingAccountField.SpecProductFrozenMargin);
  writer.Key("SpecProductCommission");
  write_value(&writer, aSyncingTradingAccountField.SpecProductCommission);
  writer.Key("SpecProductFrozenCommission");
  write_value(&writer, aSyncingTradingAccountField.SpecProductFrozenCommission);
  writer.Key("SpecProductPositionProfit");
  write_value(&writer, aSyncingTradingAccountField.SpecProductPositionProfit);
  writer.Key("SpecProductCloseProfit");
  write_value(&writer, aSyncingTradingAccountField.SpecProductCloseProfit);
  writer.Key("SpecProductPositionProfitByAlg");
  write_value(&writer,
              aSyncingTradingAccountField.SpecProductPositionProfitByAlg);
  writer.Key("SpecProductExchangeMargin");
  write_value(&writer, aSyncingTradingAccountField.SpecProductExchangeMargin);
  writer.Key("FrozenSwap");
  write_value(&writer, aSyncingTradingAccountField.FrozenSwap);
  writer.Key("RemainSwap");
  write_value(&writer, aSyncingTradingAccountField.RemainSwap);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcSyncingInvestorPositionField const
                                    &aSyncingInvestorPositionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcSyncingInvestorPositionField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aSyncingInvestorPositionField.InstrumentID);
  writer.Key("BrokerID");
  write_value(&writer, aSyncingInvestorPositionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aSyncingInvestorPositionField.InvestorID);
  writer.Key("PosiDirection");
  write_value(&writer, aSyncingInvestorPositionField.PosiDirection);
  writer.Key("HedgeFlag");
  write_value(&writer, aSyncingInvestorPositionField.HedgeFlag);
  writer.Key("PositionDate");
  write_value(&writer, aSyncingInvestorPositionField.PositionDate);
  writer.Key("YdPosition");
  write_value(&writer, aSyncingInvestorPositionField.YdPosition);
  writer.Key("Position");
  write_value(&writer, aSyncingInvestorPositionField.Position);
  writer.Key("LongFrozen");
  write_value(&writer, aSyncingInvestorPositionField.LongFrozen);
  writer.Key("ShortFrozen");
  write_value(&writer, aSyncingInvestorPositionField.ShortFrozen);
  writer.Key("LongFrozenAmount");
  write_value(&writer, aSyncingInvestorPositionField.LongFrozenAmount);
  writer.Key("ShortFrozenAmount");
  write_value(&writer, aSyncingInvestorPositionField.ShortFrozenAmount);
  writer.Key("OpenVolume");
  write_value(&writer, aSyncingInvestorPositionField.OpenVolume);
  writer.Key("CloseVolume");
  write_value(&writer, aSyncingInvestorPositionField.CloseVolume);
  writer.Key("OpenAmount");
  write_value(&writer, aSyncingInvestorPositionField.OpenAmount);
  writer.Key("CloseAmount");
  write_value(&writer, aSyncingInvestorPositionField.CloseAmount);
  writer.Key("PositionCost");
  write_value(&writer, aSyncingInvestorPositionField.PositionCost);
  writer.Key("PreMargin");
  write_value(&writer, aSyncingInvestorPositionField.PreMargin);
  writer.Key("UseMargin");
  write_value(&writer, aSyncingInvestorPositionField.UseMargin);
  writer.Key("FrozenMargin");
  write_value(&writer, aSyncingInvestorPositionField.FrozenMargin);
  writer.Key("FrozenCash");
  write_value(&writer, aSyncingInvestorPositionField.FrozenCash);
  writer.Key("FrozenCommission");
  write_value(&writer, aSyncingInvestorPositionField.FrozenCommission);
  writer.Key("CashIn");
  write_value(&writer, aSyncingInvestorPositionField.CashIn);
  writer.Key("Commission");
  write_value(&writer, aSyncingInvestorPositionField.Commission);
  writer.Key("CloseProfit");
  write_value(&writer, aSyncingInvestorPositionField.CloseProfit);
  writer.Key("PositionProfit");
  write_value(&writer, aSyncingInvestorPositionField.PositionProfit);
  writer.Key("PreSettlementPrice");
  write_value(&writer, aSyncingInvestorPositionField.PreSettlementPrice);
  writer.Key("SettlementPrice");
  write_value(&writer, aSyncingInvestorPositionField.SettlementPrice);
  writer.Key("TradingDay");
  write_value(&writer, aSyncingInvestorPositionField.TradingDay);
  writer.Key("SettlementID");
  write_value(&writer, aSyncingInvestorPositionField.SettlementID);
  writer.Key("OpenCost");
  write_value(&writer, aSyncingInvestorPositionField.OpenCost);
  writer.Key("ExchangeMargin");
  write_value(&writer, aSyncingInvestorPositionField.ExchangeMargin);
  writer.Key("CombPosition");
  write_value(&writer, aSyncingInvestorPositionField.CombPosition);
  writer.Key("CombLongFrozen");
  write_value(&writer, aSyncingInvestorPositionField.CombLongFrozen);
  writer.Key("CombShortFrozen");
  write_value(&writer, aSyncingInvestorPositionField.CombShortFrozen);
  writer.Key("CloseProfitByDate");
  write_value(&writer, aSyncingInvestorPositionField.CloseProfitByDate);
  writer.Key("CloseProfitByTrade");
  write_value(&writer, aSyncingInvestorPositionField.CloseProfitByTrade);
  writer.Key("TodayPosition");
  write_value(&writer, aSyncingInvestorPositionField.TodayPosition);
  writer.Key("MarginRateByMoney");
  write_value(&writer, aSyncingInvestorPositionField.MarginRateByMoney);
  writer.Key("MarginRateByVolume");
  write_value(&writer, aSyncingInvestorPositionField.MarginRateByVolume);
  writer.Key("StrikeFrozen");
  write_value(&writer, aSyncingInvestorPositionField.StrikeFrozen);
  writer.Key("StrikeFrozenAmount");
  write_value(&writer, aSyncingInvestorPositionField.StrikeFrozenAmount);
  writer.Key("AbandonFrozen");
  write_value(&writer, aSyncingInvestorPositionField.AbandonFrozen);
  writer.Key("ExchangeID");
  write_value(&writer, aSyncingInvestorPositionField.ExchangeID);
  writer.Key("YdStrikeFrozen");
  write_value(&writer, aSyncingInvestorPositionField.YdStrikeFrozen);
  writer.Key("InvestUnitID");
  write_value(&writer, aSyncingInvestorPositionField.InvestUnitID);
  writer.Key("PositionCostOffset");
  write_value(&writer, aSyncingInvestorPositionField.PositionCostOffset);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcSyncingInstrumentMarginRateField const
               &aSyncingInstrumentMarginRateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcSyncingInstrumentMarginRateField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aSyncingInstrumentMarginRateField.InstrumentID);
  writer.Key("InvestorRange");
  write_value(&writer, aSyncingInstrumentMarginRateField.InvestorRange);
  writer.Key("BrokerID");
  write_value(&writer, aSyncingInstrumentMarginRateField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aSyncingInstrumentMarginRateField.InvestorID);
  writer.Key("HedgeFlag");
  write_value(&writer, aSyncingInstrumentMarginRateField.HedgeFlag);
  writer.Key("LongMarginRatioByMoney");
  write_value(&writer,
              aSyncingInstrumentMarginRateField.LongMarginRatioByMoney);
  writer.Key("LongMarginRatioByVolume");
  write_value(&writer,
              aSyncingInstrumentMarginRateField.LongMarginRatioByVolume);
  writer.Key("ShortMarginRatioByMoney");
  write_value(&writer,
              aSyncingInstrumentMarginRateField.ShortMarginRatioByMoney);
  writer.Key("ShortMarginRatioByVolume");
  write_value(&writer,
              aSyncingInstrumentMarginRateField.ShortMarginRatioByVolume);
  writer.Key("IsRelative");
  write_value(&writer, aSyncingInstrumentMarginRateField.IsRelative);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcSyncingInstrumentCommissionRateField const
               &aSyncingInstrumentCommissionRateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcSyncingInstrumentCommissionRateField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aSyncingInstrumentCommissionRateField.InstrumentID);
  writer.Key("InvestorRange");
  write_value(&writer, aSyncingInstrumentCommissionRateField.InvestorRange);
  writer.Key("BrokerID");
  write_value(&writer, aSyncingInstrumentCommissionRateField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aSyncingInstrumentCommissionRateField.InvestorID);
  writer.Key("OpenRatioByMoney");
  write_value(&writer, aSyncingInstrumentCommissionRateField.OpenRatioByMoney);
  writer.Key("OpenRatioByVolume");
  write_value(&writer, aSyncingInstrumentCommissionRateField.OpenRatioByVolume);
  writer.Key("CloseRatioByMoney");
  write_value(&writer, aSyncingInstrumentCommissionRateField.CloseRatioByMoney);
  writer.Key("CloseRatioByVolume");
  write_value(&writer,
              aSyncingInstrumentCommissionRateField.CloseRatioByVolume);
  writer.Key("CloseTodayRatioByMoney");
  write_value(&writer,
              aSyncingInstrumentCommissionRateField.CloseTodayRatioByMoney);
  writer.Key("CloseTodayRatioByVolume");
  write_value(&writer,
              aSyncingInstrumentCommissionRateField.CloseTodayRatioByVolume);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcSyncingInstrumentTradingRightField const
               &aSyncingInstrumentTradingRightField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcSyncingInstrumentTradingRightField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aSyncingInstrumentTradingRightField.InstrumentID);
  writer.Key("InvestorRange");
  write_value(&writer, aSyncingInstrumentTradingRightField.InvestorRange);
  writer.Key("BrokerID");
  write_value(&writer, aSyncingInstrumentTradingRightField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aSyncingInstrumentTradingRightField.InvestorID);
  writer.Key("TradingRight");
  write_value(&writer, aSyncingInstrumentTradingRightField.TradingRight);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryOrderField const &aQryOrderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryOrderField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryOrderField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryOrderField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryOrderField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryOrderField.ExchangeID);
  writer.Key("OrderSysID");
  write_value(&writer, aQryOrderField.OrderSysID);
  writer.Key("InsertTimeStart");
  write_value(&writer, aQryOrderField.InsertTimeStart);
  writer.Key("InsertTimeEnd");
  write_value(&writer, aQryOrderField.InsertTimeEnd);
  writer.Key("InvestUnitID");
  write_value(&writer, aQryOrderField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryTradeField const &aQryTradeField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryTradeField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryTradeField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryTradeField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryTradeField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryTradeField.ExchangeID);
  writer.Key("TradeID");
  write_value(&writer, aQryTradeField.TradeID);
  writer.Key("TradeTimeStart");
  write_value(&writer, aQryTradeField.TradeTimeStart);
  writer.Key("TradeTimeEnd");
  write_value(&writer, aQryTradeField.TradeTimeEnd);
  writer.Key("InvestUnitID");
  write_value(&writer, aQryTradeField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryInvestorPositionField const
                                    &aQryInvestorPositionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryInvestorPositionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryInvestorPositionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryInvestorPositionField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryInvestorPositionField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryInvestorPositionField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aQryInvestorPositionField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryTradingAccountField const &aQryTradingAccountField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryTradingAccountField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryTradingAccountField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryTradingAccountField.InvestorID);
  writer.Key("CurrencyID");
  write_value(&writer, aQryTradingAccountField.CurrencyID);
  writer.Key("BizType");
  write_value(&writer, aQryTradingAccountField.BizType);
  writer.Key("AccountID");
  write_value(&writer, aQryTradingAccountField.AccountID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryInvestorField const &aQryInvestorField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryInvestorField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryInvestorField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryInvestorField.InvestorID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryTradingCodeField const &aQryTradingCodeField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryTradingCodeField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryTradingCodeField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryTradingCodeField.InvestorID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryTradingCodeField.ExchangeID);
  writer.Key("ClientID");
  write_value(&writer, aQryTradingCodeField.ClientID);
  writer.Key("ClientIDType");
  write_value(&writer, aQryTradingCodeField.ClientIDType);
  writer.Key("InvestUnitID");
  write_value(&writer, aQryTradingCodeField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryInvestorGroupField const &aQryInvestorGroupField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryInvestorGroupField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryInvestorGroupField.BrokerID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryInstrumentMarginRateField const
                                    &aQryInstrumentMarginRateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryInstrumentMarginRateField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryInstrumentMarginRateField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryInstrumentMarginRateField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryInstrumentMarginRateField.InstrumentID);
  writer.Key("HedgeFlag");
  write_value(&writer, aQryInstrumentMarginRateField.HedgeFlag);
  writer.Key("ExchangeID");
  write_value(&writer, aQryInstrumentMarginRateField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aQryInstrumentMarginRateField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryInstrumentCommissionRateField const
               &aQryInstrumentCommissionRateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryInstrumentCommissionRateField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryInstrumentCommissionRateField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryInstrumentCommissionRateField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryInstrumentCommissionRateField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryInstrumentCommissionRateField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aQryInstrumentCommissionRateField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryInstrumentTradingRightField const &
                                    aQryInstrumentTradingRightField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryInstrumentTradingRightField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryInstrumentTradingRightField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryInstrumentTradingRightField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryInstrumentTradingRightField.InstrumentID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryBrokerField const &aQryBrokerField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryBrokerField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryBrokerField.BrokerID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryTraderField const &aQryTraderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryTraderField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aQryTraderField.ExchangeID);
  writer.Key("ParticipantID");
  write_value(&writer, aQryTraderField.ParticipantID);
  writer.Key("TraderID");
  write_value(&writer, aQryTraderField.TraderID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQrySuperUserFunctionField const
                                    &aQrySuperUserFunctionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQrySuperUserFunctionField");
  writer.StartObject();
  writer.Key("UserID");
  write_value(&writer, aQrySuperUserFunctionField.UserID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryUserSessionField const &aQryUserSessionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryUserSessionField");
  writer.StartObject();
  writer.Key("FrontID");
  write_value(&writer, aQryUserSessionField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aQryUserSessionField.SessionID);
  writer.Key("BrokerID");
  write_value(&writer, aQryUserSessionField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aQryUserSessionField.UserID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryPartBrokerField const &aQryPartBrokerField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryPartBrokerField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aQryPartBrokerField.ExchangeID);
  writer.Key("BrokerID");
  write_value(&writer, aQryPartBrokerField.BrokerID);
  writer.Key("ParticipantID");
  write_value(&writer, aQryPartBrokerField.ParticipantID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryFrontStatusField const &aQryFrontStatusField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryFrontStatusField");
  writer.StartObject();
  writer.Key("FrontID");
  write_value(&writer, aQryFrontStatusField.FrontID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryExchangeOrderField const &aQryExchangeOrderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryExchangeOrderField");
  writer.StartObject();
  writer.Key("ParticipantID");
  write_value(&writer, aQryExchangeOrderField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aQryExchangeOrderField.ClientID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aQryExchangeOrderField.ExchangeInstID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryExchangeOrderField.ExchangeID);
  writer.Key("TraderID");
  write_value(&writer, aQryExchangeOrderField.TraderID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryOrderActionField const &aQryOrderActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryOrderActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryOrderActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryOrderActionField.InvestorID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryOrderActionField.ExchangeID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryExchangeOrderActionField const
                                    &aQryExchangeOrderActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryExchangeOrderActionField");
  writer.StartObject();
  writer.Key("ParticipantID");
  write_value(&writer, aQryExchangeOrderActionField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aQryExchangeOrderActionField.ClientID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryExchangeOrderActionField.ExchangeID);
  writer.Key("TraderID");
  write_value(&writer, aQryExchangeOrderActionField.TraderID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQrySuperUserField const &aQrySuperUserField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQrySuperUserField");
  writer.StartObject();
  writer.Key("UserID");
  write_value(&writer, aQrySuperUserField.UserID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryExchangeField const &aQryExchangeField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryExchangeField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aQryExchangeField.ExchangeID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryProductField const &aQryProductField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryProductField");
  writer.StartObject();
  writer.Key("ProductID");
  write_value(&writer, aQryProductField.ProductID);
  writer.Key("ProductClass");
  write_value(&writer, aQryProductField.ProductClass);
  writer.Key("ExchangeID");
  write_value(&writer, aQryProductField.ExchangeID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryInstrumentField const &aQryInstrumentField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryInstrumentField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aQryInstrumentField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryInstrumentField.ExchangeID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aQryInstrumentField.ExchangeInstID);
  writer.Key("ProductID");
  write_value(&writer, aQryInstrumentField.ProductID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryDepthMarketDataField const
                                    &aQryDepthMarketDataField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryDepthMarketDataField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aQryDepthMarketDataField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryDepthMarketDataField.ExchangeID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryBrokerUserField const &aQryBrokerUserField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryBrokerUserField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryBrokerUserField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aQryBrokerUserField.UserID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryBrokerUserFunctionField const
                                    &aQryBrokerUserFunctionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryBrokerUserFunctionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryBrokerUserFunctionField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aQryBrokerUserFunctionField.UserID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryTraderOfferField const &aQryTraderOfferField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryTraderOfferField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aQryTraderOfferField.ExchangeID);
  writer.Key("ParticipantID");
  write_value(&writer, aQryTraderOfferField.ParticipantID);
  writer.Key("TraderID");
  write_value(&writer, aQryTraderOfferField.TraderID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQrySyncDepositField const &aQrySyncDepositField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQrySyncDepositField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQrySyncDepositField.BrokerID);
  writer.Key("DepositSeqNo");
  write_value(&writer, aQrySyncDepositField.DepositSeqNo);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQrySettlementInfoField const &aQrySettlementInfoField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQrySettlementInfoField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQrySettlementInfoField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQrySettlementInfoField.InvestorID);
  writer.Key("TradingDay");
  write_value(&writer, aQrySettlementInfoField.TradingDay);
  writer.Key("AccountID");
  write_value(&writer, aQrySettlementInfoField.AccountID);
  writer.Key("CurrencyID");
  write_value(&writer, aQrySettlementInfoField.CurrencyID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryExchangeMarginRateField const
                                    &aQryExchangeMarginRateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryExchangeMarginRateField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryExchangeMarginRateField.BrokerID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryExchangeMarginRateField.InstrumentID);
  writer.Key("HedgeFlag");
  write_value(&writer, aQryExchangeMarginRateField.HedgeFlag);
  writer.Key("ExchangeID");
  write_value(&writer, aQryExchangeMarginRateField.ExchangeID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryExchangeMarginRateAdjustField const
               &aQryExchangeMarginRateAdjustField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryExchangeMarginRateAdjustField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryExchangeMarginRateAdjustField.BrokerID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryExchangeMarginRateAdjustField.InstrumentID);
  writer.Key("HedgeFlag");
  write_value(&writer, aQryExchangeMarginRateAdjustField.HedgeFlag);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryExchangeRateField const &aQryExchangeRateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryExchangeRateField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryExchangeRateField.BrokerID);
  writer.Key("FromCurrencyID");
  write_value(&writer, aQryExchangeRateField.FromCurrencyID);
  writer.Key("ToCurrencyID");
  write_value(&writer, aQryExchangeRateField.ToCurrencyID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQrySyncFundMortgageField const
                                    &aQrySyncFundMortgageField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQrySyncFundMortgageField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQrySyncFundMortgageField.BrokerID);
  writer.Key("MortgageSeqNo");
  write_value(&writer, aQrySyncFundMortgageField.MortgageSeqNo);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryHisOrderField const &aQryHisOrderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryHisOrderField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryHisOrderField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryHisOrderField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryHisOrderField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryHisOrderField.ExchangeID);
  writer.Key("OrderSysID");
  write_value(&writer, aQryHisOrderField.OrderSysID);
  writer.Key("InsertTimeStart");
  write_value(&writer, aQryHisOrderField.InsertTimeStart);
  writer.Key("InsertTimeEnd");
  write_value(&writer, aQryHisOrderField.InsertTimeEnd);
  writer.Key("TradingDay");
  write_value(&writer, aQryHisOrderField.TradingDay);
  writer.Key("SettlementID");
  write_value(&writer, aQryHisOrderField.SettlementID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcOptionInstrMiniMarginField const
                                    &aOptionInstrMiniMarginField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcOptionInstrMiniMarginField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aOptionInstrMiniMarginField.InstrumentID);
  writer.Key("InvestorRange");
  write_value(&writer, aOptionInstrMiniMarginField.InvestorRange);
  writer.Key("BrokerID");
  write_value(&writer, aOptionInstrMiniMarginField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aOptionInstrMiniMarginField.InvestorID);
  writer.Key("MinMargin");
  write_value(&writer, aOptionInstrMiniMarginField.MinMargin);
  writer.Key("ValueMethod");
  write_value(&writer, aOptionInstrMiniMarginField.ValueMethod);
  writer.Key("IsRelative");
  write_value(&writer, aOptionInstrMiniMarginField.IsRelative);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcOptionInstrMarginAdjustField const
                                    &aOptionInstrMarginAdjustField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcOptionInstrMarginAdjustField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aOptionInstrMarginAdjustField.InstrumentID);
  writer.Key("InvestorRange");
  write_value(&writer, aOptionInstrMarginAdjustField.InvestorRange);
  writer.Key("BrokerID");
  write_value(&writer, aOptionInstrMarginAdjustField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aOptionInstrMarginAdjustField.InvestorID);
  writer.Key("SShortMarginRatioByMoney");
  write_value(&writer, aOptionInstrMarginAdjustField.SShortMarginRatioByMoney);
  writer.Key("SShortMarginRatioByVolume");
  write_value(&writer, aOptionInstrMarginAdjustField.SShortMarginRatioByVolume);
  writer.Key("HShortMarginRatioByMoney");
  write_value(&writer, aOptionInstrMarginAdjustField.HShortMarginRatioByMoney);
  writer.Key("HShortMarginRatioByVolume");
  write_value(&writer, aOptionInstrMarginAdjustField.HShortMarginRatioByVolume);
  writer.Key("AShortMarginRatioByMoney");
  write_value(&writer, aOptionInstrMarginAdjustField.AShortMarginRatioByMoney);
  writer.Key("AShortMarginRatioByVolume");
  write_value(&writer, aOptionInstrMarginAdjustField.AShortMarginRatioByVolume);
  writer.Key("IsRelative");
  write_value(&writer, aOptionInstrMarginAdjustField.IsRelative);
  writer.Key("MShortMarginRatioByMoney");
  write_value(&writer, aOptionInstrMarginAdjustField.MShortMarginRatioByMoney);
  writer.Key("MShortMarginRatioByVolume");
  write_value(&writer, aOptionInstrMarginAdjustField.MShortMarginRatioByVolume);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcOptionInstrCommRateField const
                                    &aOptionInstrCommRateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcOptionInstrCommRateField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aOptionInstrCommRateField.InstrumentID);
  writer.Key("InvestorRange");
  write_value(&writer, aOptionInstrCommRateField.InvestorRange);
  writer.Key("BrokerID");
  write_value(&writer, aOptionInstrCommRateField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aOptionInstrCommRateField.InvestorID);
  writer.Key("OpenRatioByMoney");
  write_value(&writer, aOptionInstrCommRateField.OpenRatioByMoney);
  writer.Key("OpenRatioByVolume");
  write_value(&writer, aOptionInstrCommRateField.OpenRatioByVolume);
  writer.Key("CloseRatioByMoney");
  write_value(&writer, aOptionInstrCommRateField.CloseRatioByMoney);
  writer.Key("CloseRatioByVolume");
  write_value(&writer, aOptionInstrCommRateField.CloseRatioByVolume);
  writer.Key("CloseTodayRatioByMoney");
  write_value(&writer, aOptionInstrCommRateField.CloseTodayRatioByMoney);
  writer.Key("CloseTodayRatioByVolume");
  write_value(&writer, aOptionInstrCommRateField.CloseTodayRatioByVolume);
  writer.Key("StrikeRatioByMoney");
  write_value(&writer, aOptionInstrCommRateField.StrikeRatioByMoney);
  writer.Key("StrikeRatioByVolume");
  write_value(&writer, aOptionInstrCommRateField.StrikeRatioByVolume);
  writer.Key("ExchangeID");
  write_value(&writer, aOptionInstrCommRateField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aOptionInstrCommRateField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcOptionInstrTradeCostField const
                                    &aOptionInstrTradeCostField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcOptionInstrTradeCostField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aOptionInstrTradeCostField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aOptionInstrTradeCostField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aOptionInstrTradeCostField.InstrumentID);
  writer.Key("HedgeFlag");
  write_value(&writer, aOptionInstrTradeCostField.HedgeFlag);
  writer.Key("FixedMargin");
  write_value(&writer, aOptionInstrTradeCostField.FixedMargin);
  writer.Key("MiniMargin");
  write_value(&writer, aOptionInstrTradeCostField.MiniMargin);
  writer.Key("Royalty");
  write_value(&writer, aOptionInstrTradeCostField.Royalty);
  writer.Key("ExchFixedMargin");
  write_value(&writer, aOptionInstrTradeCostField.ExchFixedMargin);
  writer.Key("ExchMiniMargin");
  write_value(&writer, aOptionInstrTradeCostField.ExchMiniMargin);
  writer.Key("ExchangeID");
  write_value(&writer, aOptionInstrTradeCostField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aOptionInstrTradeCostField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryOptionInstrTradeCostField const
                                    &aQryOptionInstrTradeCostField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryOptionInstrTradeCostField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryOptionInstrTradeCostField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryOptionInstrTradeCostField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryOptionInstrTradeCostField.InstrumentID);
  writer.Key("HedgeFlag");
  write_value(&writer, aQryOptionInstrTradeCostField.HedgeFlag);
  writer.Key("InputPrice");
  write_value(&writer, aQryOptionInstrTradeCostField.InputPrice);
  writer.Key("UnderlyingPrice");
  write_value(&writer, aQryOptionInstrTradeCostField.UnderlyingPrice);
  writer.Key("ExchangeID");
  write_value(&writer, aQryOptionInstrTradeCostField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aQryOptionInstrTradeCostField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryOptionInstrCommRateField const
                                    &aQryOptionInstrCommRateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryOptionInstrCommRateField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryOptionInstrCommRateField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryOptionInstrCommRateField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryOptionInstrCommRateField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryOptionInstrCommRateField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aQryOptionInstrCommRateField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcIndexPriceField const &aIndexPriceField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcIndexPriceField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aIndexPriceField.BrokerID);
  writer.Key("InstrumentID");
  write_value(&writer, aIndexPriceField.InstrumentID);
  writer.Key("ClosePrice");
  write_value(&writer, aIndexPriceField.ClosePrice);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcInputExecOrderField const &aInputExecOrderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInputExecOrderField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aInputExecOrderField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInputExecOrderField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aInputExecOrderField.InstrumentID);
  writer.Key("ExecOrderRef");
  write_value(&writer, aInputExecOrderField.ExecOrderRef);
  writer.Key("UserID");
  write_value(&writer, aInputExecOrderField.UserID);
  writer.Key("Volume");
  write_value(&writer, aInputExecOrderField.Volume);
  writer.Key("RequestID");
  write_value(&writer, aInputExecOrderField.RequestID);
  writer.Key("BusinessUnit");
  write_value(&writer, aInputExecOrderField.BusinessUnit);
  writer.Key("OffsetFlag");
  write_value(&writer, aInputExecOrderField.OffsetFlag);
  writer.Key("HedgeFlag");
  write_value(&writer, aInputExecOrderField.HedgeFlag);
  writer.Key("ActionType");
  write_value(&writer, aInputExecOrderField.ActionType);
  writer.Key("PosiDirection");
  write_value(&writer, aInputExecOrderField.PosiDirection);
  writer.Key("ReservePositionFlag");
  write_value(&writer, aInputExecOrderField.ReservePositionFlag);
  writer.Key("CloseFlag");
  write_value(&writer, aInputExecOrderField.CloseFlag);
  writer.Key("ExchangeID");
  write_value(&writer, aInputExecOrderField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aInputExecOrderField.InvestUnitID);
  writer.Key("AccountID");
  write_value(&writer, aInputExecOrderField.AccountID);
  writer.Key("CurrencyID");
  write_value(&writer, aInputExecOrderField.CurrencyID);
  writer.Key("ClientID");
  write_value(&writer, aInputExecOrderField.ClientID);
  writer.Key("IPAddress");
  write_value(&writer, aInputExecOrderField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aInputExecOrderField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcInputExecOrderActionField const
                                    &aInputExecOrderActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInputExecOrderActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aInputExecOrderActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInputExecOrderActionField.InvestorID);
  writer.Key("ExecOrderActionRef");
  write_value(&writer, aInputExecOrderActionField.ExecOrderActionRef);
  writer.Key("ExecOrderRef");
  write_value(&writer, aInputExecOrderActionField.ExecOrderRef);
  writer.Key("RequestID");
  write_value(&writer, aInputExecOrderActionField.RequestID);
  writer.Key("FrontID");
  write_value(&writer, aInputExecOrderActionField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aInputExecOrderActionField.SessionID);
  writer.Key("ExchangeID");
  write_value(&writer, aInputExecOrderActionField.ExchangeID);
  writer.Key("ExecOrderSysID");
  write_value(&writer, aInputExecOrderActionField.ExecOrderSysID);
  writer.Key("ActionFlag");
  write_value(&writer, aInputExecOrderActionField.ActionFlag);
  writer.Key("UserID");
  write_value(&writer, aInputExecOrderActionField.UserID);
  writer.Key("InstrumentID");
  write_value(&writer, aInputExecOrderActionField.InstrumentID);
  writer.Key("InvestUnitID");
  write_value(&writer, aInputExecOrderActionField.InvestUnitID);
  writer.Key("IPAddress");
  write_value(&writer, aInputExecOrderActionField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aInputExecOrderActionField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcExecOrderField const &aExecOrderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcExecOrderField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aExecOrderField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aExecOrderField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aExecOrderField.InstrumentID);
  writer.Key("ExecOrderRef");
  write_value(&writer, aExecOrderField.ExecOrderRef);
  writer.Key("UserID");
  write_value(&writer, aExecOrderField.UserID);
  writer.Key("Volume");
  write_value(&writer, aExecOrderField.Volume);
  writer.Key("RequestID");
  write_value(&writer, aExecOrderField.RequestID);
  writer.Key("BusinessUnit");
  write_value(&writer, aExecOrderField.BusinessUnit);
  writer.Key("OffsetFlag");
  write_value(&writer, aExecOrderField.OffsetFlag);
  writer.Key("HedgeFlag");
  write_value(&writer, aExecOrderField.HedgeFlag);
  writer.Key("ActionType");
  write_value(&writer, aExecOrderField.ActionType);
  writer.Key("PosiDirection");
  write_value(&writer, aExecOrderField.PosiDirection);
  writer.Key("ReservePositionFlag");
  write_value(&writer, aExecOrderField.ReservePositionFlag);
  writer.Key("CloseFlag");
  write_value(&writer, aExecOrderField.CloseFlag);
  writer.Key("ExecOrderLocalID");
  write_value(&writer, aExecOrderField.ExecOrderLocalID);
  writer.Key("ExchangeID");
  write_value(&writer, aExecOrderField.ExchangeID);
  writer.Key("ParticipantID");
  write_value(&writer, aExecOrderField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aExecOrderField.ClientID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aExecOrderField.ExchangeInstID);
  writer.Key("TraderID");
  write_value(&writer, aExecOrderField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aExecOrderField.InstallID);
  writer.Key("OrderSubmitStatus");
  write_value(&writer, aExecOrderField.OrderSubmitStatus);
  writer.Key("NotifySequence");
  write_value(&writer, aExecOrderField.NotifySequence);
  writer.Key("TradingDay");
  write_value(&writer, aExecOrderField.TradingDay);
  writer.Key("SettlementID");
  write_value(&writer, aExecOrderField.SettlementID);
  writer.Key("ExecOrderSysID");
  write_value(&writer, aExecOrderField.ExecOrderSysID);
  writer.Key("InsertDate");
  write_value(&writer, aExecOrderField.InsertDate);
  writer.Key("InsertTime");
  write_value(&writer, aExecOrderField.InsertTime);
  writer.Key("CancelTime");
  write_value(&writer, aExecOrderField.CancelTime);
  writer.Key("ExecResult");
  write_value(&writer, aExecOrderField.ExecResult);
  writer.Key("ClearingPartID");
  write_value(&writer, aExecOrderField.ClearingPartID);
  writer.Key("SequenceNo");
  write_value(&writer, aExecOrderField.SequenceNo);
  writer.Key("FrontID");
  write_value(&writer, aExecOrderField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aExecOrderField.SessionID);
  writer.Key("UserProductInfo");
  write_value(&writer, aExecOrderField.UserProductInfo);
  writer.Key("StatusMsg");
  write_value(&writer, aExecOrderField.StatusMsg);
  writer.Key("ActiveUserID");
  write_value(&writer, aExecOrderField.ActiveUserID);
  writer.Key("BrokerExecOrderSeq");
  write_value(&writer, aExecOrderField.BrokerExecOrderSeq);
  writer.Key("BranchID");
  write_value(&writer, aExecOrderField.BranchID);
  writer.Key("InvestUnitID");
  write_value(&writer, aExecOrderField.InvestUnitID);
  writer.Key("AccountID");
  write_value(&writer, aExecOrderField.AccountID);
  writer.Key("CurrencyID");
  write_value(&writer, aExecOrderField.CurrencyID);
  writer.Key("IPAddress");
  write_value(&writer, aExecOrderField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aExecOrderField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcExecOrderActionField const &aExecOrderActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcExecOrderActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aExecOrderActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aExecOrderActionField.InvestorID);
  writer.Key("ExecOrderActionRef");
  write_value(&writer, aExecOrderActionField.ExecOrderActionRef);
  writer.Key("ExecOrderRef");
  write_value(&writer, aExecOrderActionField.ExecOrderRef);
  writer.Key("RequestID");
  write_value(&writer, aExecOrderActionField.RequestID);
  writer.Key("FrontID");
  write_value(&writer, aExecOrderActionField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aExecOrderActionField.SessionID);
  writer.Key("ExchangeID");
  write_value(&writer, aExecOrderActionField.ExchangeID);
  writer.Key("ExecOrderSysID");
  write_value(&writer, aExecOrderActionField.ExecOrderSysID);
  writer.Key("ActionFlag");
  write_value(&writer, aExecOrderActionField.ActionFlag);
  writer.Key("ActionDate");
  write_value(&writer, aExecOrderActionField.ActionDate);
  writer.Key("ActionTime");
  write_value(&writer, aExecOrderActionField.ActionTime);
  writer.Key("TraderID");
  write_value(&writer, aExecOrderActionField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aExecOrderActionField.InstallID);
  writer.Key("ExecOrderLocalID");
  write_value(&writer, aExecOrderActionField.ExecOrderLocalID);
  writer.Key("ActionLocalID");
  write_value(&writer, aExecOrderActionField.ActionLocalID);
  writer.Key("ParticipantID");
  write_value(&writer, aExecOrderActionField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aExecOrderActionField.ClientID);
  writer.Key("BusinessUnit");
  write_value(&writer, aExecOrderActionField.BusinessUnit);
  writer.Key("OrderActionStatus");
  write_value(&writer, aExecOrderActionField.OrderActionStatus);
  writer.Key("UserID");
  write_value(&writer, aExecOrderActionField.UserID);
  writer.Key("ActionType");
  write_value(&writer, aExecOrderActionField.ActionType);
  writer.Key("StatusMsg");
  write_value(&writer, aExecOrderActionField.StatusMsg);
  writer.Key("InstrumentID");
  write_value(&writer, aExecOrderActionField.InstrumentID);
  writer.Key("BranchID");
  write_value(&writer, aExecOrderActionField.BranchID);
  writer.Key("InvestUnitID");
  write_value(&writer, aExecOrderActionField.InvestUnitID);
  writer.Key("IPAddress");
  write_value(&writer, aExecOrderActionField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aExecOrderActionField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryExecOrderField const &aQryExecOrderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryExecOrderField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryExecOrderField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryExecOrderField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryExecOrderField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryExecOrderField.ExchangeID);
  writer.Key("ExecOrderSysID");
  write_value(&writer, aQryExecOrderField.ExecOrderSysID);
  writer.Key("InsertTimeStart");
  write_value(&writer, aQryExecOrderField.InsertTimeStart);
  writer.Key("InsertTimeEnd");
  write_value(&writer, aQryExecOrderField.InsertTimeEnd);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcExchangeExecOrderField const &aExchangeExecOrderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcExchangeExecOrderField");
  writer.StartObject();
  writer.Key("Volume");
  write_value(&writer, aExchangeExecOrderField.Volume);
  writer.Key("RequestID");
  write_value(&writer, aExchangeExecOrderField.RequestID);
  writer.Key("BusinessUnit");
  write_value(&writer, aExchangeExecOrderField.BusinessUnit);
  writer.Key("OffsetFlag");
  write_value(&writer, aExchangeExecOrderField.OffsetFlag);
  writer.Key("HedgeFlag");
  write_value(&writer, aExchangeExecOrderField.HedgeFlag);
  writer.Key("ActionType");
  write_value(&writer, aExchangeExecOrderField.ActionType);
  writer.Key("PosiDirection");
  write_value(&writer, aExchangeExecOrderField.PosiDirection);
  writer.Key("ReservePositionFlag");
  write_value(&writer, aExchangeExecOrderField.ReservePositionFlag);
  writer.Key("CloseFlag");
  write_value(&writer, aExchangeExecOrderField.CloseFlag);
  writer.Key("ExecOrderLocalID");
  write_value(&writer, aExchangeExecOrderField.ExecOrderLocalID);
  writer.Key("ExchangeID");
  write_value(&writer, aExchangeExecOrderField.ExchangeID);
  writer.Key("ParticipantID");
  write_value(&writer, aExchangeExecOrderField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aExchangeExecOrderField.ClientID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aExchangeExecOrderField.ExchangeInstID);
  writer.Key("TraderID");
  write_value(&writer, aExchangeExecOrderField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aExchangeExecOrderField.InstallID);
  writer.Key("OrderSubmitStatus");
  write_value(&writer, aExchangeExecOrderField.OrderSubmitStatus);
  writer.Key("NotifySequence");
  write_value(&writer, aExchangeExecOrderField.NotifySequence);
  writer.Key("TradingDay");
  write_value(&writer, aExchangeExecOrderField.TradingDay);
  writer.Key("SettlementID");
  write_value(&writer, aExchangeExecOrderField.SettlementID);
  writer.Key("ExecOrderSysID");
  write_value(&writer, aExchangeExecOrderField.ExecOrderSysID);
  writer.Key("InsertDate");
  write_value(&writer, aExchangeExecOrderField.InsertDate);
  writer.Key("InsertTime");
  write_value(&writer, aExchangeExecOrderField.InsertTime);
  writer.Key("CancelTime");
  write_value(&writer, aExchangeExecOrderField.CancelTime);
  writer.Key("ExecResult");
  write_value(&writer, aExchangeExecOrderField.ExecResult);
  writer.Key("ClearingPartID");
  write_value(&writer, aExchangeExecOrderField.ClearingPartID);
  writer.Key("SequenceNo");
  write_value(&writer, aExchangeExecOrderField.SequenceNo);
  writer.Key("BranchID");
  write_value(&writer, aExchangeExecOrderField.BranchID);
  writer.Key("IPAddress");
  write_value(&writer, aExchangeExecOrderField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aExchangeExecOrderField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryExchangeExecOrderField const
                                    &aQryExchangeExecOrderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryExchangeExecOrderField");
  writer.StartObject();
  writer.Key("ParticipantID");
  write_value(&writer, aQryExchangeExecOrderField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aQryExchangeExecOrderField.ClientID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aQryExchangeExecOrderField.ExchangeInstID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryExchangeExecOrderField.ExchangeID);
  writer.Key("TraderID");
  write_value(&writer, aQryExchangeExecOrderField.TraderID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryExecOrderActionField const
                                    &aQryExecOrderActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryExecOrderActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryExecOrderActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryExecOrderActionField.InvestorID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryExecOrderActionField.ExchangeID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcExchangeExecOrderActionField const
                                    &aExchangeExecOrderActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcExchangeExecOrderActionField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aExchangeExecOrderActionField.ExchangeID);
  writer.Key("ExecOrderSysID");
  write_value(&writer, aExchangeExecOrderActionField.ExecOrderSysID);
  writer.Key("ActionFlag");
  write_value(&writer, aExchangeExecOrderActionField.ActionFlag);
  writer.Key("ActionDate");
  write_value(&writer, aExchangeExecOrderActionField.ActionDate);
  writer.Key("ActionTime");
  write_value(&writer, aExchangeExecOrderActionField.ActionTime);
  writer.Key("TraderID");
  write_value(&writer, aExchangeExecOrderActionField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aExchangeExecOrderActionField.InstallID);
  writer.Key("ExecOrderLocalID");
  write_value(&writer, aExchangeExecOrderActionField.ExecOrderLocalID);
  writer.Key("ActionLocalID");
  write_value(&writer, aExchangeExecOrderActionField.ActionLocalID);
  writer.Key("ParticipantID");
  write_value(&writer, aExchangeExecOrderActionField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aExchangeExecOrderActionField.ClientID);
  writer.Key("BusinessUnit");
  write_value(&writer, aExchangeExecOrderActionField.BusinessUnit);
  writer.Key("OrderActionStatus");
  write_value(&writer, aExchangeExecOrderActionField.OrderActionStatus);
  writer.Key("UserID");
  write_value(&writer, aExchangeExecOrderActionField.UserID);
  writer.Key("ActionType");
  write_value(&writer, aExchangeExecOrderActionField.ActionType);
  writer.Key("BranchID");
  write_value(&writer, aExchangeExecOrderActionField.BranchID);
  writer.Key("IPAddress");
  write_value(&writer, aExchangeExecOrderActionField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aExchangeExecOrderActionField.MacAddress);
  writer.Key("ExchangeInstID");
  write_value(&writer, aExchangeExecOrderActionField.ExchangeInstID);
  writer.Key("Volume");
  write_value(&writer, aExchangeExecOrderActionField.Volume);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryExchangeExecOrderActionField const
               &aQryExchangeExecOrderActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryExchangeExecOrderActionField");
  writer.StartObject();
  writer.Key("ParticipantID");
  write_value(&writer, aQryExchangeExecOrderActionField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aQryExchangeExecOrderActionField.ClientID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryExchangeExecOrderActionField.ExchangeID);
  writer.Key("TraderID");
  write_value(&writer, aQryExchangeExecOrderActionField.TraderID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcErrExecOrderField const &aErrExecOrderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcErrExecOrderField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aErrExecOrderField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aErrExecOrderField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aErrExecOrderField.InstrumentID);
  writer.Key("ExecOrderRef");
  write_value(&writer, aErrExecOrderField.ExecOrderRef);
  writer.Key("UserID");
  write_value(&writer, aErrExecOrderField.UserID);
  writer.Key("Volume");
  write_value(&writer, aErrExecOrderField.Volume);
  writer.Key("RequestID");
  write_value(&writer, aErrExecOrderField.RequestID);
  writer.Key("BusinessUnit");
  write_value(&writer, aErrExecOrderField.BusinessUnit);
  writer.Key("OffsetFlag");
  write_value(&writer, aErrExecOrderField.OffsetFlag);
  writer.Key("HedgeFlag");
  write_value(&writer, aErrExecOrderField.HedgeFlag);
  writer.Key("ActionType");
  write_value(&writer, aErrExecOrderField.ActionType);
  writer.Key("PosiDirection");
  write_value(&writer, aErrExecOrderField.PosiDirection);
  writer.Key("ReservePositionFlag");
  write_value(&writer, aErrExecOrderField.ReservePositionFlag);
  writer.Key("CloseFlag");
  write_value(&writer, aErrExecOrderField.CloseFlag);
  writer.Key("ExchangeID");
  write_value(&writer, aErrExecOrderField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aErrExecOrderField.InvestUnitID);
  writer.Key("AccountID");
  write_value(&writer, aErrExecOrderField.AccountID);
  writer.Key("CurrencyID");
  write_value(&writer, aErrExecOrderField.CurrencyID);
  writer.Key("ClientID");
  write_value(&writer, aErrExecOrderField.ClientID);
  writer.Key("IPAddress");
  write_value(&writer, aErrExecOrderField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aErrExecOrderField.MacAddress);
  writer.Key("ErrorID");
  write_value(&writer, aErrExecOrderField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aErrExecOrderField.ErrorMsg);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryErrExecOrderField const &aQryErrExecOrderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryErrExecOrderField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryErrExecOrderField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryErrExecOrderField.InvestorID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcErrExecOrderActionField const
                                    &aErrExecOrderActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcErrExecOrderActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aErrExecOrderActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aErrExecOrderActionField.InvestorID);
  writer.Key("ExecOrderActionRef");
  write_value(&writer, aErrExecOrderActionField.ExecOrderActionRef);
  writer.Key("ExecOrderRef");
  write_value(&writer, aErrExecOrderActionField.ExecOrderRef);
  writer.Key("RequestID");
  write_value(&writer, aErrExecOrderActionField.RequestID);
  writer.Key("FrontID");
  write_value(&writer, aErrExecOrderActionField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aErrExecOrderActionField.SessionID);
  writer.Key("ExchangeID");
  write_value(&writer, aErrExecOrderActionField.ExchangeID);
  writer.Key("ExecOrderSysID");
  write_value(&writer, aErrExecOrderActionField.ExecOrderSysID);
  writer.Key("ActionFlag");
  write_value(&writer, aErrExecOrderActionField.ActionFlag);
  writer.Key("UserID");
  write_value(&writer, aErrExecOrderActionField.UserID);
  writer.Key("InstrumentID");
  write_value(&writer, aErrExecOrderActionField.InstrumentID);
  writer.Key("InvestUnitID");
  write_value(&writer, aErrExecOrderActionField.InvestUnitID);
  writer.Key("IPAddress");
  write_value(&writer, aErrExecOrderActionField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aErrExecOrderActionField.MacAddress);
  writer.Key("ErrorID");
  write_value(&writer, aErrExecOrderActionField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aErrExecOrderActionField.ErrorMsg);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryErrExecOrderActionField const
                                    &aQryErrExecOrderActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryErrExecOrderActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryErrExecOrderActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryErrExecOrderActionField.InvestorID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcOptionInstrTradingRightField const
                                    &aOptionInstrTradingRightField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcOptionInstrTradingRightField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aOptionInstrTradingRightField.InstrumentID);
  writer.Key("InvestorRange");
  write_value(&writer, aOptionInstrTradingRightField.InvestorRange);
  writer.Key("BrokerID");
  write_value(&writer, aOptionInstrTradingRightField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aOptionInstrTradingRightField.InvestorID);
  writer.Key("Direction");
  write_value(&writer, aOptionInstrTradingRightField.Direction);
  writer.Key("TradingRight");
  write_value(&writer, aOptionInstrTradingRightField.TradingRight);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryOptionInstrTradingRightField const
               &aQryOptionInstrTradingRightField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryOptionInstrTradingRightField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryOptionInstrTradingRightField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryOptionInstrTradingRightField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryOptionInstrTradingRightField.InstrumentID);
  writer.Key("Direction");
  write_value(&writer, aQryOptionInstrTradingRightField.Direction);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcInputForQuoteField const &aInputForQuoteField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInputForQuoteField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aInputForQuoteField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInputForQuoteField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aInputForQuoteField.InstrumentID);
  writer.Key("ForQuoteRef");
  write_value(&writer, aInputForQuoteField.ForQuoteRef);
  writer.Key("UserID");
  write_value(&writer, aInputForQuoteField.UserID);
  writer.Key("ExchangeID");
  write_value(&writer, aInputForQuoteField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aInputForQuoteField.InvestUnitID);
  writer.Key("IPAddress");
  write_value(&writer, aInputForQuoteField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aInputForQuoteField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcForQuoteField const &aForQuoteField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcForQuoteField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aForQuoteField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aForQuoteField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aForQuoteField.InstrumentID);
  writer.Key("ForQuoteRef");
  write_value(&writer, aForQuoteField.ForQuoteRef);
  writer.Key("UserID");
  write_value(&writer, aForQuoteField.UserID);
  writer.Key("ForQuoteLocalID");
  write_value(&writer, aForQuoteField.ForQuoteLocalID);
  writer.Key("ExchangeID");
  write_value(&writer, aForQuoteField.ExchangeID);
  writer.Key("ParticipantID");
  write_value(&writer, aForQuoteField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aForQuoteField.ClientID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aForQuoteField.ExchangeInstID);
  writer.Key("TraderID");
  write_value(&writer, aForQuoteField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aForQuoteField.InstallID);
  writer.Key("InsertDate");
  write_value(&writer, aForQuoteField.InsertDate);
  writer.Key("InsertTime");
  write_value(&writer, aForQuoteField.InsertTime);
  writer.Key("ForQuoteStatus");
  write_value(&writer, aForQuoteField.ForQuoteStatus);
  writer.Key("FrontID");
  write_value(&writer, aForQuoteField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aForQuoteField.SessionID);
  writer.Key("StatusMsg");
  write_value(&writer, aForQuoteField.StatusMsg);
  writer.Key("ActiveUserID");
  write_value(&writer, aForQuoteField.ActiveUserID);
  writer.Key("BrokerForQutoSeq");
  write_value(&writer, aForQuoteField.BrokerForQutoSeq);
  writer.Key("InvestUnitID");
  write_value(&writer, aForQuoteField.InvestUnitID);
  writer.Key("IPAddress");
  write_value(&writer, aForQuoteField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aForQuoteField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryForQuoteField const &aQryForQuoteField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryForQuoteField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryForQuoteField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryForQuoteField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryForQuoteField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryForQuoteField.ExchangeID);
  writer.Key("InsertTimeStart");
  write_value(&writer, aQryForQuoteField.InsertTimeStart);
  writer.Key("InsertTimeEnd");
  write_value(&writer, aQryForQuoteField.InsertTimeEnd);
  writer.Key("InvestUnitID");
  write_value(&writer, aQryForQuoteField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcExchangeForQuoteField const &aExchangeForQuoteField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcExchangeForQuoteField");
  writer.StartObject();
  writer.Key("ForQuoteLocalID");
  write_value(&writer, aExchangeForQuoteField.ForQuoteLocalID);
  writer.Key("ExchangeID");
  write_value(&writer, aExchangeForQuoteField.ExchangeID);
  writer.Key("ParticipantID");
  write_value(&writer, aExchangeForQuoteField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aExchangeForQuoteField.ClientID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aExchangeForQuoteField.ExchangeInstID);
  writer.Key("TraderID");
  write_value(&writer, aExchangeForQuoteField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aExchangeForQuoteField.InstallID);
  writer.Key("InsertDate");
  write_value(&writer, aExchangeForQuoteField.InsertDate);
  writer.Key("InsertTime");
  write_value(&writer, aExchangeForQuoteField.InsertTime);
  writer.Key("ForQuoteStatus");
  write_value(&writer, aExchangeForQuoteField.ForQuoteStatus);
  writer.Key("IPAddress");
  write_value(&writer, aExchangeForQuoteField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aExchangeForQuoteField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryExchangeForQuoteField const
                                    &aQryExchangeForQuoteField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryExchangeForQuoteField");
  writer.StartObject();
  writer.Key("ParticipantID");
  write_value(&writer, aQryExchangeForQuoteField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aQryExchangeForQuoteField.ClientID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aQryExchangeForQuoteField.ExchangeInstID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryExchangeForQuoteField.ExchangeID);
  writer.Key("TraderID");
  write_value(&writer, aQryExchangeForQuoteField.TraderID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcInputQuoteField const &aInputQuoteField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInputQuoteField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aInputQuoteField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInputQuoteField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aInputQuoteField.InstrumentID);
  writer.Key("QuoteRef");
  write_value(&writer, aInputQuoteField.QuoteRef);
  writer.Key("UserID");
  write_value(&writer, aInputQuoteField.UserID);
  writer.Key("AskPrice");
  write_value(&writer, aInputQuoteField.AskPrice);
  writer.Key("BidPrice");
  write_value(&writer, aInputQuoteField.BidPrice);
  writer.Key("AskVolume");
  write_value(&writer, aInputQuoteField.AskVolume);
  writer.Key("BidVolume");
  write_value(&writer, aInputQuoteField.BidVolume);
  writer.Key("RequestID");
  write_value(&writer, aInputQuoteField.RequestID);
  writer.Key("BusinessUnit");
  write_value(&writer, aInputQuoteField.BusinessUnit);
  writer.Key("AskOffsetFlag");
  write_value(&writer, aInputQuoteField.AskOffsetFlag);
  writer.Key("BidOffsetFlag");
  write_value(&writer, aInputQuoteField.BidOffsetFlag);
  writer.Key("AskHedgeFlag");
  write_value(&writer, aInputQuoteField.AskHedgeFlag);
  writer.Key("BidHedgeFlag");
  write_value(&writer, aInputQuoteField.BidHedgeFlag);
  writer.Key("AskOrderRef");
  write_value(&writer, aInputQuoteField.AskOrderRef);
  writer.Key("BidOrderRef");
  write_value(&writer, aInputQuoteField.BidOrderRef);
  writer.Key("ForQuoteSysID");
  write_value(&writer, aInputQuoteField.ForQuoteSysID);
  writer.Key("ExchangeID");
  write_value(&writer, aInputQuoteField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aInputQuoteField.InvestUnitID);
  writer.Key("ClientID");
  write_value(&writer, aInputQuoteField.ClientID);
  writer.Key("IPAddress");
  write_value(&writer, aInputQuoteField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aInputQuoteField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcInputQuoteActionField const &aInputQuoteActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInputQuoteActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aInputQuoteActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInputQuoteActionField.InvestorID);
  writer.Key("QuoteActionRef");
  write_value(&writer, aInputQuoteActionField.QuoteActionRef);
  writer.Key("QuoteRef");
  write_value(&writer, aInputQuoteActionField.QuoteRef);
  writer.Key("RequestID");
  write_value(&writer, aInputQuoteActionField.RequestID);
  writer.Key("FrontID");
  write_value(&writer, aInputQuoteActionField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aInputQuoteActionField.SessionID);
  writer.Key("ExchangeID");
  write_value(&writer, aInputQuoteActionField.ExchangeID);
  writer.Key("QuoteSysID");
  write_value(&writer, aInputQuoteActionField.QuoteSysID);
  writer.Key("ActionFlag");
  write_value(&writer, aInputQuoteActionField.ActionFlag);
  writer.Key("UserID");
  write_value(&writer, aInputQuoteActionField.UserID);
  writer.Key("InstrumentID");
  write_value(&writer, aInputQuoteActionField.InstrumentID);
  writer.Key("InvestUnitID");
  write_value(&writer, aInputQuoteActionField.InvestUnitID);
  writer.Key("ClientID");
  write_value(&writer, aInputQuoteActionField.ClientID);
  writer.Key("IPAddress");
  write_value(&writer, aInputQuoteActionField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aInputQuoteActionField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQuoteField const &aQuoteField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQuoteField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQuoteField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQuoteField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQuoteField.InstrumentID);
  writer.Key("QuoteRef");
  write_value(&writer, aQuoteField.QuoteRef);
  writer.Key("UserID");
  write_value(&writer, aQuoteField.UserID);
  writer.Key("AskPrice");
  write_value(&writer, aQuoteField.AskPrice);
  writer.Key("BidPrice");
  write_value(&writer, aQuoteField.BidPrice);
  writer.Key("AskVolume");
  write_value(&writer, aQuoteField.AskVolume);
  writer.Key("BidVolume");
  write_value(&writer, aQuoteField.BidVolume);
  writer.Key("RequestID");
  write_value(&writer, aQuoteField.RequestID);
  writer.Key("BusinessUnit");
  write_value(&writer, aQuoteField.BusinessUnit);
  writer.Key("AskOffsetFlag");
  write_value(&writer, aQuoteField.AskOffsetFlag);
  writer.Key("BidOffsetFlag");
  write_value(&writer, aQuoteField.BidOffsetFlag);
  writer.Key("AskHedgeFlag");
  write_value(&writer, aQuoteField.AskHedgeFlag);
  writer.Key("BidHedgeFlag");
  write_value(&writer, aQuoteField.BidHedgeFlag);
  writer.Key("QuoteLocalID");
  write_value(&writer, aQuoteField.QuoteLocalID);
  writer.Key("ExchangeID");
  write_value(&writer, aQuoteField.ExchangeID);
  writer.Key("ParticipantID");
  write_value(&writer, aQuoteField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aQuoteField.ClientID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aQuoteField.ExchangeInstID);
  writer.Key("TraderID");
  write_value(&writer, aQuoteField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aQuoteField.InstallID);
  writer.Key("NotifySequence");
  write_value(&writer, aQuoteField.NotifySequence);
  writer.Key("OrderSubmitStatus");
  write_value(&writer, aQuoteField.OrderSubmitStatus);
  writer.Key("TradingDay");
  write_value(&writer, aQuoteField.TradingDay);
  writer.Key("SettlementID");
  write_value(&writer, aQuoteField.SettlementID);
  writer.Key("QuoteSysID");
  write_value(&writer, aQuoteField.QuoteSysID);
  writer.Key("InsertDate");
  write_value(&writer, aQuoteField.InsertDate);
  writer.Key("InsertTime");
  write_value(&writer, aQuoteField.InsertTime);
  writer.Key("CancelTime");
  write_value(&writer, aQuoteField.CancelTime);
  writer.Key("QuoteStatus");
  write_value(&writer, aQuoteField.QuoteStatus);
  writer.Key("ClearingPartID");
  write_value(&writer, aQuoteField.ClearingPartID);
  writer.Key("SequenceNo");
  write_value(&writer, aQuoteField.SequenceNo);
  writer.Key("AskOrderSysID");
  write_value(&writer, aQuoteField.AskOrderSysID);
  writer.Key("BidOrderSysID");
  write_value(&writer, aQuoteField.BidOrderSysID);
  writer.Key("FrontID");
  write_value(&writer, aQuoteField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aQuoteField.SessionID);
  writer.Key("UserProductInfo");
  write_value(&writer, aQuoteField.UserProductInfo);
  writer.Key("StatusMsg");
  write_value(&writer, aQuoteField.StatusMsg);
  writer.Key("ActiveUserID");
  write_value(&writer, aQuoteField.ActiveUserID);
  writer.Key("BrokerQuoteSeq");
  write_value(&writer, aQuoteField.BrokerQuoteSeq);
  writer.Key("AskOrderRef");
  write_value(&writer, aQuoteField.AskOrderRef);
  writer.Key("BidOrderRef");
  write_value(&writer, aQuoteField.BidOrderRef);
  writer.Key("ForQuoteSysID");
  write_value(&writer, aQuoteField.ForQuoteSysID);
  writer.Key("BranchID");
  write_value(&writer, aQuoteField.BranchID);
  writer.Key("InvestUnitID");
  write_value(&writer, aQuoteField.InvestUnitID);
  writer.Key("AccountID");
  write_value(&writer, aQuoteField.AccountID);
  writer.Key("CurrencyID");
  write_value(&writer, aQuoteField.CurrencyID);
  writer.Key("IPAddress");
  write_value(&writer, aQuoteField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aQuoteField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQuoteActionField const &aQuoteActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQuoteActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQuoteActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQuoteActionField.InvestorID);
  writer.Key("QuoteActionRef");
  write_value(&writer, aQuoteActionField.QuoteActionRef);
  writer.Key("QuoteRef");
  write_value(&writer, aQuoteActionField.QuoteRef);
  writer.Key("RequestID");
  write_value(&writer, aQuoteActionField.RequestID);
  writer.Key("FrontID");
  write_value(&writer, aQuoteActionField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aQuoteActionField.SessionID);
  writer.Key("ExchangeID");
  write_value(&writer, aQuoteActionField.ExchangeID);
  writer.Key("QuoteSysID");
  write_value(&writer, aQuoteActionField.QuoteSysID);
  writer.Key("ActionFlag");
  write_value(&writer, aQuoteActionField.ActionFlag);
  writer.Key("ActionDate");
  write_value(&writer, aQuoteActionField.ActionDate);
  writer.Key("ActionTime");
  write_value(&writer, aQuoteActionField.ActionTime);
  writer.Key("TraderID");
  write_value(&writer, aQuoteActionField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aQuoteActionField.InstallID);
  writer.Key("QuoteLocalID");
  write_value(&writer, aQuoteActionField.QuoteLocalID);
  writer.Key("ActionLocalID");
  write_value(&writer, aQuoteActionField.ActionLocalID);
  writer.Key("ParticipantID");
  write_value(&writer, aQuoteActionField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aQuoteActionField.ClientID);
  writer.Key("BusinessUnit");
  write_value(&writer, aQuoteActionField.BusinessUnit);
  writer.Key("OrderActionStatus");
  write_value(&writer, aQuoteActionField.OrderActionStatus);
  writer.Key("UserID");
  write_value(&writer, aQuoteActionField.UserID);
  writer.Key("StatusMsg");
  write_value(&writer, aQuoteActionField.StatusMsg);
  writer.Key("InstrumentID");
  write_value(&writer, aQuoteActionField.InstrumentID);
  writer.Key("BranchID");
  write_value(&writer, aQuoteActionField.BranchID);
  writer.Key("InvestUnitID");
  write_value(&writer, aQuoteActionField.InvestUnitID);
  writer.Key("IPAddress");
  write_value(&writer, aQuoteActionField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aQuoteActionField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryQuoteField const &aQryQuoteField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryQuoteField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryQuoteField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryQuoteField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryQuoteField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryQuoteField.ExchangeID);
  writer.Key("QuoteSysID");
  write_value(&writer, aQryQuoteField.QuoteSysID);
  writer.Key("InsertTimeStart");
  write_value(&writer, aQryQuoteField.InsertTimeStart);
  writer.Key("InsertTimeEnd");
  write_value(&writer, aQryQuoteField.InsertTimeEnd);
  writer.Key("InvestUnitID");
  write_value(&writer, aQryQuoteField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcExchangeQuoteField const &aExchangeQuoteField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcExchangeQuoteField");
  writer.StartObject();
  writer.Key("AskPrice");
  write_value(&writer, aExchangeQuoteField.AskPrice);
  writer.Key("BidPrice");
  write_value(&writer, aExchangeQuoteField.BidPrice);
  writer.Key("AskVolume");
  write_value(&writer, aExchangeQuoteField.AskVolume);
  writer.Key("BidVolume");
  write_value(&writer, aExchangeQuoteField.BidVolume);
  writer.Key("RequestID");
  write_value(&writer, aExchangeQuoteField.RequestID);
  writer.Key("BusinessUnit");
  write_value(&writer, aExchangeQuoteField.BusinessUnit);
  writer.Key("AskOffsetFlag");
  write_value(&writer, aExchangeQuoteField.AskOffsetFlag);
  writer.Key("BidOffsetFlag");
  write_value(&writer, aExchangeQuoteField.BidOffsetFlag);
  writer.Key("AskHedgeFlag");
  write_value(&writer, aExchangeQuoteField.AskHedgeFlag);
  writer.Key("BidHedgeFlag");
  write_value(&writer, aExchangeQuoteField.BidHedgeFlag);
  writer.Key("QuoteLocalID");
  write_value(&writer, aExchangeQuoteField.QuoteLocalID);
  writer.Key("ExchangeID");
  write_value(&writer, aExchangeQuoteField.ExchangeID);
  writer.Key("ParticipantID");
  write_value(&writer, aExchangeQuoteField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aExchangeQuoteField.ClientID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aExchangeQuoteField.ExchangeInstID);
  writer.Key("TraderID");
  write_value(&writer, aExchangeQuoteField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aExchangeQuoteField.InstallID);
  writer.Key("NotifySequence");
  write_value(&writer, aExchangeQuoteField.NotifySequence);
  writer.Key("OrderSubmitStatus");
  write_value(&writer, aExchangeQuoteField.OrderSubmitStatus);
  writer.Key("TradingDay");
  write_value(&writer, aExchangeQuoteField.TradingDay);
  writer.Key("SettlementID");
  write_value(&writer, aExchangeQuoteField.SettlementID);
  writer.Key("QuoteSysID");
  write_value(&writer, aExchangeQuoteField.QuoteSysID);
  writer.Key("InsertDate");
  write_value(&writer, aExchangeQuoteField.InsertDate);
  writer.Key("InsertTime");
  write_value(&writer, aExchangeQuoteField.InsertTime);
  writer.Key("CancelTime");
  write_value(&writer, aExchangeQuoteField.CancelTime);
  writer.Key("QuoteStatus");
  write_value(&writer, aExchangeQuoteField.QuoteStatus);
  writer.Key("ClearingPartID");
  write_value(&writer, aExchangeQuoteField.ClearingPartID);
  writer.Key("SequenceNo");
  write_value(&writer, aExchangeQuoteField.SequenceNo);
  writer.Key("AskOrderSysID");
  write_value(&writer, aExchangeQuoteField.AskOrderSysID);
  writer.Key("BidOrderSysID");
  write_value(&writer, aExchangeQuoteField.BidOrderSysID);
  writer.Key("ForQuoteSysID");
  write_value(&writer, aExchangeQuoteField.ForQuoteSysID);
  writer.Key("BranchID");
  write_value(&writer, aExchangeQuoteField.BranchID);
  writer.Key("IPAddress");
  write_value(&writer, aExchangeQuoteField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aExchangeQuoteField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryExchangeQuoteField const &aQryExchangeQuoteField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryExchangeQuoteField");
  writer.StartObject();
  writer.Key("ParticipantID");
  write_value(&writer, aQryExchangeQuoteField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aQryExchangeQuoteField.ClientID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aQryExchangeQuoteField.ExchangeInstID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryExchangeQuoteField.ExchangeID);
  writer.Key("TraderID");
  write_value(&writer, aQryExchangeQuoteField.TraderID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryQuoteActionField const &aQryQuoteActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryQuoteActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryQuoteActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryQuoteActionField.InvestorID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryQuoteActionField.ExchangeID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcExchangeQuoteActionField const
                                    &aExchangeQuoteActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcExchangeQuoteActionField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aExchangeQuoteActionField.ExchangeID);
  writer.Key("QuoteSysID");
  write_value(&writer, aExchangeQuoteActionField.QuoteSysID);
  writer.Key("ActionFlag");
  write_value(&writer, aExchangeQuoteActionField.ActionFlag);
  writer.Key("ActionDate");
  write_value(&writer, aExchangeQuoteActionField.ActionDate);
  writer.Key("ActionTime");
  write_value(&writer, aExchangeQuoteActionField.ActionTime);
  writer.Key("TraderID");
  write_value(&writer, aExchangeQuoteActionField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aExchangeQuoteActionField.InstallID);
  writer.Key("QuoteLocalID");
  write_value(&writer, aExchangeQuoteActionField.QuoteLocalID);
  writer.Key("ActionLocalID");
  write_value(&writer, aExchangeQuoteActionField.ActionLocalID);
  writer.Key("ParticipantID");
  write_value(&writer, aExchangeQuoteActionField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aExchangeQuoteActionField.ClientID);
  writer.Key("BusinessUnit");
  write_value(&writer, aExchangeQuoteActionField.BusinessUnit);
  writer.Key("OrderActionStatus");
  write_value(&writer, aExchangeQuoteActionField.OrderActionStatus);
  writer.Key("UserID");
  write_value(&writer, aExchangeQuoteActionField.UserID);
  writer.Key("IPAddress");
  write_value(&writer, aExchangeQuoteActionField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aExchangeQuoteActionField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryExchangeQuoteActionField const
                                    &aQryExchangeQuoteActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryExchangeQuoteActionField");
  writer.StartObject();
  writer.Key("ParticipantID");
  write_value(&writer, aQryExchangeQuoteActionField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aQryExchangeQuoteActionField.ClientID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryExchangeQuoteActionField.ExchangeID);
  writer.Key("TraderID");
  write_value(&writer, aQryExchangeQuoteActionField.TraderID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcOptionInstrDeltaField const &aOptionInstrDeltaField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcOptionInstrDeltaField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aOptionInstrDeltaField.InstrumentID);
  writer.Key("InvestorRange");
  write_value(&writer, aOptionInstrDeltaField.InvestorRange);
  writer.Key("BrokerID");
  write_value(&writer, aOptionInstrDeltaField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aOptionInstrDeltaField.InvestorID);
  writer.Key("Delta");
  write_value(&writer, aOptionInstrDeltaField.Delta);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcForQuoteRspField const &aForQuoteRspField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcForQuoteRspField");
  writer.StartObject();
  writer.Key("TradingDay");
  write_value(&writer, aForQuoteRspField.TradingDay);
  writer.Key("InstrumentID");
  write_value(&writer, aForQuoteRspField.InstrumentID);
  writer.Key("ForQuoteSysID");
  write_value(&writer, aForQuoteRspField.ForQuoteSysID);
  writer.Key("ForQuoteTime");
  write_value(&writer, aForQuoteRspField.ForQuoteTime);
  writer.Key("ActionDay");
  write_value(&writer, aForQuoteRspField.ActionDay);
  writer.Key("ExchangeID");
  write_value(&writer, aForQuoteRspField.ExchangeID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcStrikeOffsetField const &aStrikeOffsetField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcStrikeOffsetField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aStrikeOffsetField.InstrumentID);
  writer.Key("InvestorRange");
  write_value(&writer, aStrikeOffsetField.InvestorRange);
  writer.Key("BrokerID");
  write_value(&writer, aStrikeOffsetField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aStrikeOffsetField.InvestorID);
  writer.Key("Offset");
  write_value(&writer, aStrikeOffsetField.Offset);
  writer.Key("OffsetType");
  write_value(&writer, aStrikeOffsetField.OffsetType);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryStrikeOffsetField const &aQryStrikeOffsetField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryStrikeOffsetField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryStrikeOffsetField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryStrikeOffsetField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryStrikeOffsetField.InstrumentID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcInputBatchOrderActionField const
                                    &aInputBatchOrderActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInputBatchOrderActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aInputBatchOrderActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInputBatchOrderActionField.InvestorID);
  writer.Key("OrderActionRef");
  write_value(&writer, aInputBatchOrderActionField.OrderActionRef);
  writer.Key("RequestID");
  write_value(&writer, aInputBatchOrderActionField.RequestID);
  writer.Key("FrontID");
  write_value(&writer, aInputBatchOrderActionField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aInputBatchOrderActionField.SessionID);
  writer.Key("ExchangeID");
  write_value(&writer, aInputBatchOrderActionField.ExchangeID);
  writer.Key("UserID");
  write_value(&writer, aInputBatchOrderActionField.UserID);
  writer.Key("InvestUnitID");
  write_value(&writer, aInputBatchOrderActionField.InvestUnitID);
  writer.Key("IPAddress");
  write_value(&writer, aInputBatchOrderActionField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aInputBatchOrderActionField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcBatchOrderActionField const &aBatchOrderActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcBatchOrderActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aBatchOrderActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aBatchOrderActionField.InvestorID);
  writer.Key("OrderActionRef");
  write_value(&writer, aBatchOrderActionField.OrderActionRef);
  writer.Key("RequestID");
  write_value(&writer, aBatchOrderActionField.RequestID);
  writer.Key("FrontID");
  write_value(&writer, aBatchOrderActionField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aBatchOrderActionField.SessionID);
  writer.Key("ExchangeID");
  write_value(&writer, aBatchOrderActionField.ExchangeID);
  writer.Key("ActionDate");
  write_value(&writer, aBatchOrderActionField.ActionDate);
  writer.Key("ActionTime");
  write_value(&writer, aBatchOrderActionField.ActionTime);
  writer.Key("TraderID");
  write_value(&writer, aBatchOrderActionField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aBatchOrderActionField.InstallID);
  writer.Key("ActionLocalID");
  write_value(&writer, aBatchOrderActionField.ActionLocalID);
  writer.Key("ParticipantID");
  write_value(&writer, aBatchOrderActionField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aBatchOrderActionField.ClientID);
  writer.Key("BusinessUnit");
  write_value(&writer, aBatchOrderActionField.BusinessUnit);
  writer.Key("OrderActionStatus");
  write_value(&writer, aBatchOrderActionField.OrderActionStatus);
  writer.Key("UserID");
  write_value(&writer, aBatchOrderActionField.UserID);
  writer.Key("StatusMsg");
  write_value(&writer, aBatchOrderActionField.StatusMsg);
  writer.Key("InvestUnitID");
  write_value(&writer, aBatchOrderActionField.InvestUnitID);
  writer.Key("IPAddress");
  write_value(&writer, aBatchOrderActionField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aBatchOrderActionField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcExchangeBatchOrderActionField const
                                    &aExchangeBatchOrderActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcExchangeBatchOrderActionField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aExchangeBatchOrderActionField.ExchangeID);
  writer.Key("ActionDate");
  write_value(&writer, aExchangeBatchOrderActionField.ActionDate);
  writer.Key("ActionTime");
  write_value(&writer, aExchangeBatchOrderActionField.ActionTime);
  writer.Key("TraderID");
  write_value(&writer, aExchangeBatchOrderActionField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aExchangeBatchOrderActionField.InstallID);
  writer.Key("ActionLocalID");
  write_value(&writer, aExchangeBatchOrderActionField.ActionLocalID);
  writer.Key("ParticipantID");
  write_value(&writer, aExchangeBatchOrderActionField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aExchangeBatchOrderActionField.ClientID);
  writer.Key("BusinessUnit");
  write_value(&writer, aExchangeBatchOrderActionField.BusinessUnit);
  writer.Key("OrderActionStatus");
  write_value(&writer, aExchangeBatchOrderActionField.OrderActionStatus);
  writer.Key("UserID");
  write_value(&writer, aExchangeBatchOrderActionField.UserID);
  writer.Key("IPAddress");
  write_value(&writer, aExchangeBatchOrderActionField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aExchangeBatchOrderActionField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryBatchOrderActionField const
                                    &aQryBatchOrderActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryBatchOrderActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryBatchOrderActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryBatchOrderActionField.InvestorID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryBatchOrderActionField.ExchangeID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcCombInstrumentGuardField const
                                    &aCombInstrumentGuardField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcCombInstrumentGuardField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aCombInstrumentGuardField.BrokerID);
  writer.Key("InstrumentID");
  write_value(&writer, aCombInstrumentGuardField.InstrumentID);
  writer.Key("GuarantRatio");
  write_value(&writer, aCombInstrumentGuardField.GuarantRatio);
  writer.Key("ExchangeID");
  write_value(&writer, aCombInstrumentGuardField.ExchangeID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryCombInstrumentGuardField const
                                    &aQryCombInstrumentGuardField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryCombInstrumentGuardField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryCombInstrumentGuardField.BrokerID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryCombInstrumentGuardField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryCombInstrumentGuardField.ExchangeID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcInputCombActionField const &aInputCombActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInputCombActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aInputCombActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInputCombActionField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aInputCombActionField.InstrumentID);
  writer.Key("CombActionRef");
  write_value(&writer, aInputCombActionField.CombActionRef);
  writer.Key("UserID");
  write_value(&writer, aInputCombActionField.UserID);
  writer.Key("Direction");
  write_value(&writer, aInputCombActionField.Direction);
  writer.Key("Volume");
  write_value(&writer, aInputCombActionField.Volume);
  writer.Key("CombDirection");
  write_value(&writer, aInputCombActionField.CombDirection);
  writer.Key("HedgeFlag");
  write_value(&writer, aInputCombActionField.HedgeFlag);
  writer.Key("ExchangeID");
  write_value(&writer, aInputCombActionField.ExchangeID);
  writer.Key("IPAddress");
  write_value(&writer, aInputCombActionField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aInputCombActionField.MacAddress);
  writer.Key("InvestUnitID");
  write_value(&writer, aInputCombActionField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcCombActionField const &aCombActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcCombActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aCombActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aCombActionField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aCombActionField.InstrumentID);
  writer.Key("CombActionRef");
  write_value(&writer, aCombActionField.CombActionRef);
  writer.Key("UserID");
  write_value(&writer, aCombActionField.UserID);
  writer.Key("Direction");
  write_value(&writer, aCombActionField.Direction);
  writer.Key("Volume");
  write_value(&writer, aCombActionField.Volume);
  writer.Key("CombDirection");
  write_value(&writer, aCombActionField.CombDirection);
  writer.Key("HedgeFlag");
  write_value(&writer, aCombActionField.HedgeFlag);
  writer.Key("ActionLocalID");
  write_value(&writer, aCombActionField.ActionLocalID);
  writer.Key("ExchangeID");
  write_value(&writer, aCombActionField.ExchangeID);
  writer.Key("ParticipantID");
  write_value(&writer, aCombActionField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aCombActionField.ClientID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aCombActionField.ExchangeInstID);
  writer.Key("TraderID");
  write_value(&writer, aCombActionField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aCombActionField.InstallID);
  writer.Key("ActionStatus");
  write_value(&writer, aCombActionField.ActionStatus);
  writer.Key("NotifySequence");
  write_value(&writer, aCombActionField.NotifySequence);
  writer.Key("TradingDay");
  write_value(&writer, aCombActionField.TradingDay);
  writer.Key("SettlementID");
  write_value(&writer, aCombActionField.SettlementID);
  writer.Key("SequenceNo");
  write_value(&writer, aCombActionField.SequenceNo);
  writer.Key("FrontID");
  write_value(&writer, aCombActionField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aCombActionField.SessionID);
  writer.Key("UserProductInfo");
  write_value(&writer, aCombActionField.UserProductInfo);
  writer.Key("StatusMsg");
  write_value(&writer, aCombActionField.StatusMsg);
  writer.Key("IPAddress");
  write_value(&writer, aCombActionField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aCombActionField.MacAddress);
  writer.Key("ComTradeID");
  write_value(&writer, aCombActionField.ComTradeID);
  writer.Key("BranchID");
  write_value(&writer, aCombActionField.BranchID);
  writer.Key("InvestUnitID");
  write_value(&writer, aCombActionField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryCombActionField const &aQryCombActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryCombActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryCombActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryCombActionField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryCombActionField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryCombActionField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aQryCombActionField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcExchangeCombActionField const
                                    &aExchangeCombActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcExchangeCombActionField");
  writer.StartObject();
  writer.Key("Direction");
  write_value(&writer, aExchangeCombActionField.Direction);
  writer.Key("Volume");
  write_value(&writer, aExchangeCombActionField.Volume);
  writer.Key("CombDirection");
  write_value(&writer, aExchangeCombActionField.CombDirection);
  writer.Key("HedgeFlag");
  write_value(&writer, aExchangeCombActionField.HedgeFlag);
  writer.Key("ActionLocalID");
  write_value(&writer, aExchangeCombActionField.ActionLocalID);
  writer.Key("ExchangeID");
  write_value(&writer, aExchangeCombActionField.ExchangeID);
  writer.Key("ParticipantID");
  write_value(&writer, aExchangeCombActionField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aExchangeCombActionField.ClientID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aExchangeCombActionField.ExchangeInstID);
  writer.Key("TraderID");
  write_value(&writer, aExchangeCombActionField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aExchangeCombActionField.InstallID);
  writer.Key("ActionStatus");
  write_value(&writer, aExchangeCombActionField.ActionStatus);
  writer.Key("NotifySequence");
  write_value(&writer, aExchangeCombActionField.NotifySequence);
  writer.Key("TradingDay");
  write_value(&writer, aExchangeCombActionField.TradingDay);
  writer.Key("SettlementID");
  write_value(&writer, aExchangeCombActionField.SettlementID);
  writer.Key("SequenceNo");
  write_value(&writer, aExchangeCombActionField.SequenceNo);
  writer.Key("IPAddress");
  write_value(&writer, aExchangeCombActionField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aExchangeCombActionField.MacAddress);
  writer.Key("ComTradeID");
  write_value(&writer, aExchangeCombActionField.ComTradeID);
  writer.Key("BranchID");
  write_value(&writer, aExchangeCombActionField.BranchID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryExchangeCombActionField const
                                    &aQryExchangeCombActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryExchangeCombActionField");
  writer.StartObject();
  writer.Key("ParticipantID");
  write_value(&writer, aQryExchangeCombActionField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aQryExchangeCombActionField.ClientID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aQryExchangeCombActionField.ExchangeInstID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryExchangeCombActionField.ExchangeID);
  writer.Key("TraderID");
  write_value(&writer, aQryExchangeCombActionField.TraderID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcProductExchRateField const &aProductExchRateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcProductExchRateField");
  writer.StartObject();
  writer.Key("ProductID");
  write_value(&writer, aProductExchRateField.ProductID);
  writer.Key("QuoteCurrencyID");
  write_value(&writer, aProductExchRateField.QuoteCurrencyID);
  writer.Key("ExchangeRate");
  write_value(&writer, aProductExchRateField.ExchangeRate);
  writer.Key("ExchangeID");
  write_value(&writer, aProductExchRateField.ExchangeID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryProductExchRateField const
                                    &aQryProductExchRateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryProductExchRateField");
  writer.StartObject();
  writer.Key("ProductID");
  write_value(&writer, aQryProductExchRateField.ProductID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryProductExchRateField.ExchangeID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryForQuoteParamField const &aQryForQuoteParamField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryForQuoteParamField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryForQuoteParamField.BrokerID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryForQuoteParamField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryForQuoteParamField.ExchangeID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcForQuoteParamField const &aForQuoteParamField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcForQuoteParamField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aForQuoteParamField.BrokerID);
  writer.Key("InstrumentID");
  write_value(&writer, aForQuoteParamField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aForQuoteParamField.ExchangeID);
  writer.Key("LastPrice");
  write_value(&writer, aForQuoteParamField.LastPrice);
  writer.Key("PriceInterval");
  write_value(&writer, aForQuoteParamField.PriceInterval);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcMMOptionInstrCommRateField const
                                    &aMMOptionInstrCommRateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcMMOptionInstrCommRateField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aMMOptionInstrCommRateField.InstrumentID);
  writer.Key("InvestorRange");
  write_value(&writer, aMMOptionInstrCommRateField.InvestorRange);
  writer.Key("BrokerID");
  write_value(&writer, aMMOptionInstrCommRateField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aMMOptionInstrCommRateField.InvestorID);
  writer.Key("OpenRatioByMoney");
  write_value(&writer, aMMOptionInstrCommRateField.OpenRatioByMoney);
  writer.Key("OpenRatioByVolume");
  write_value(&writer, aMMOptionInstrCommRateField.OpenRatioByVolume);
  writer.Key("CloseRatioByMoney");
  write_value(&writer, aMMOptionInstrCommRateField.CloseRatioByMoney);
  writer.Key("CloseRatioByVolume");
  write_value(&writer, aMMOptionInstrCommRateField.CloseRatioByVolume);
  writer.Key("CloseTodayRatioByMoney");
  write_value(&writer, aMMOptionInstrCommRateField.CloseTodayRatioByMoney);
  writer.Key("CloseTodayRatioByVolume");
  write_value(&writer, aMMOptionInstrCommRateField.CloseTodayRatioByVolume);
  writer.Key("StrikeRatioByMoney");
  write_value(&writer, aMMOptionInstrCommRateField.StrikeRatioByMoney);
  writer.Key("StrikeRatioByVolume");
  write_value(&writer, aMMOptionInstrCommRateField.StrikeRatioByVolume);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryMMOptionInstrCommRateField const
                                    &aQryMMOptionInstrCommRateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryMMOptionInstrCommRateField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryMMOptionInstrCommRateField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryMMOptionInstrCommRateField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryMMOptionInstrCommRateField.InstrumentID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcMMInstrumentCommissionRateField const
               &aMMInstrumentCommissionRateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcMMInstrumentCommissionRateField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aMMInstrumentCommissionRateField.InstrumentID);
  writer.Key("InvestorRange");
  write_value(&writer, aMMInstrumentCommissionRateField.InvestorRange);
  writer.Key("BrokerID");
  write_value(&writer, aMMInstrumentCommissionRateField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aMMInstrumentCommissionRateField.InvestorID);
  writer.Key("OpenRatioByMoney");
  write_value(&writer, aMMInstrumentCommissionRateField.OpenRatioByMoney);
  writer.Key("OpenRatioByVolume");
  write_value(&writer, aMMInstrumentCommissionRateField.OpenRatioByVolume);
  writer.Key("CloseRatioByMoney");
  write_value(&writer, aMMInstrumentCommissionRateField.CloseRatioByMoney);
  writer.Key("CloseRatioByVolume");
  write_value(&writer, aMMInstrumentCommissionRateField.CloseRatioByVolume);
  writer.Key("CloseTodayRatioByMoney");
  write_value(&writer, aMMInstrumentCommissionRateField.CloseTodayRatioByMoney);
  writer.Key("CloseTodayRatioByVolume");
  write_value(&writer,
              aMMInstrumentCommissionRateField.CloseTodayRatioByVolume);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryMMInstrumentCommissionRateField const
               &aQryMMInstrumentCommissionRateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryMMInstrumentCommissionRateField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryMMInstrumentCommissionRateField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryMMInstrumentCommissionRateField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryMMInstrumentCommissionRateField.InstrumentID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcInstrumentOrderCommRateField const
                                    &aInstrumentOrderCommRateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInstrumentOrderCommRateField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aInstrumentOrderCommRateField.InstrumentID);
  writer.Key("InvestorRange");
  write_value(&writer, aInstrumentOrderCommRateField.InvestorRange);
  writer.Key("BrokerID");
  write_value(&writer, aInstrumentOrderCommRateField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInstrumentOrderCommRateField.InvestorID);
  writer.Key("HedgeFlag");
  write_value(&writer, aInstrumentOrderCommRateField.HedgeFlag);
  writer.Key("OrderCommByVolume");
  write_value(&writer, aInstrumentOrderCommRateField.OrderCommByVolume);
  writer.Key("OrderActionCommByVolume");
  write_value(&writer, aInstrumentOrderCommRateField.OrderActionCommByVolume);
  writer.Key("ExchangeID");
  write_value(&writer, aInstrumentOrderCommRateField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aInstrumentOrderCommRateField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryInstrumentOrderCommRateField const
               &aQryInstrumentOrderCommRateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryInstrumentOrderCommRateField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryInstrumentOrderCommRateField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryInstrumentOrderCommRateField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryInstrumentOrderCommRateField.InstrumentID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcTradeParamField const &aTradeParamField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTradeParamField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aTradeParamField.BrokerID);
  writer.Key("TradeParamID");
  write_value(&writer, aTradeParamField.TradeParamID);
  writer.Key("TradeParamValue");
  write_value(&writer, aTradeParamField.TradeParamValue);
  writer.Key("Memo");
  write_value(&writer, aTradeParamField.Memo);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcInstrumentMarginRateULField const
                                    &aInstrumentMarginRateULField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInstrumentMarginRateULField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aInstrumentMarginRateULField.InstrumentID);
  writer.Key("InvestorRange");
  write_value(&writer, aInstrumentMarginRateULField.InvestorRange);
  writer.Key("BrokerID");
  write_value(&writer, aInstrumentMarginRateULField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInstrumentMarginRateULField.InvestorID);
  writer.Key("HedgeFlag");
  write_value(&writer, aInstrumentMarginRateULField.HedgeFlag);
  writer.Key("LongMarginRatioByMoney");
  write_value(&writer, aInstrumentMarginRateULField.LongMarginRatioByMoney);
  writer.Key("LongMarginRatioByVolume");
  write_value(&writer, aInstrumentMarginRateULField.LongMarginRatioByVolume);
  writer.Key("ShortMarginRatioByMoney");
  write_value(&writer, aInstrumentMarginRateULField.ShortMarginRatioByMoney);
  writer.Key("ShortMarginRatioByVolume");
  write_value(&writer, aInstrumentMarginRateULField.ShortMarginRatioByVolume);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcFutureLimitPosiParamField const
                                    &aFutureLimitPosiParamField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcFutureLimitPosiParamField");
  writer.StartObject();
  writer.Key("InvestorRange");
  write_value(&writer, aFutureLimitPosiParamField.InvestorRange);
  writer.Key("BrokerID");
  write_value(&writer, aFutureLimitPosiParamField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aFutureLimitPosiParamField.InvestorID);
  writer.Key("ProductID");
  write_value(&writer, aFutureLimitPosiParamField.ProductID);
  writer.Key("SpecOpenVolume");
  write_value(&writer, aFutureLimitPosiParamField.SpecOpenVolume);
  writer.Key("ArbiOpenVolume");
  write_value(&writer, aFutureLimitPosiParamField.ArbiOpenVolume);
  writer.Key("OpenVolume");
  write_value(&writer, aFutureLimitPosiParamField.OpenVolume);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcLoginForbiddenIPField const &aLoginForbiddenIPField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcLoginForbiddenIPField");
  writer.StartObject();
  writer.Key("IPAddress");
  write_value(&writer, aLoginForbiddenIPField.IPAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcIPListField const &aIPListField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcIPListField");
  writer.StartObject();
  writer.Key("IPAddress");
  write_value(&writer, aIPListField.IPAddress);
  writer.Key("IsWhite");
  write_value(&writer, aIPListField.IsWhite);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcInputOptionSelfCloseField const
                                    &aInputOptionSelfCloseField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInputOptionSelfCloseField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aInputOptionSelfCloseField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInputOptionSelfCloseField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aInputOptionSelfCloseField.InstrumentID);
  writer.Key("OptionSelfCloseRef");
  write_value(&writer, aInputOptionSelfCloseField.OptionSelfCloseRef);
  writer.Key("UserID");
  write_value(&writer, aInputOptionSelfCloseField.UserID);
  writer.Key("Volume");
  write_value(&writer, aInputOptionSelfCloseField.Volume);
  writer.Key("RequestID");
  write_value(&writer, aInputOptionSelfCloseField.RequestID);
  writer.Key("BusinessUnit");
  write_value(&writer, aInputOptionSelfCloseField.BusinessUnit);
  writer.Key("HedgeFlag");
  write_value(&writer, aInputOptionSelfCloseField.HedgeFlag);
  writer.Key("OptSelfCloseFlag");
  write_value(&writer, aInputOptionSelfCloseField.OptSelfCloseFlag);
  writer.Key("ExchangeID");
  write_value(&writer, aInputOptionSelfCloseField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aInputOptionSelfCloseField.InvestUnitID);
  writer.Key("AccountID");
  write_value(&writer, aInputOptionSelfCloseField.AccountID);
  writer.Key("CurrencyID");
  write_value(&writer, aInputOptionSelfCloseField.CurrencyID);
  writer.Key("ClientID");
  write_value(&writer, aInputOptionSelfCloseField.ClientID);
  writer.Key("IPAddress");
  write_value(&writer, aInputOptionSelfCloseField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aInputOptionSelfCloseField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcInputOptionSelfCloseActionField const
               &aInputOptionSelfCloseActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInputOptionSelfCloseActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aInputOptionSelfCloseActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInputOptionSelfCloseActionField.InvestorID);
  writer.Key("OptionSelfCloseActionRef");
  write_value(&writer,
              aInputOptionSelfCloseActionField.OptionSelfCloseActionRef);
  writer.Key("OptionSelfCloseRef");
  write_value(&writer, aInputOptionSelfCloseActionField.OptionSelfCloseRef);
  writer.Key("RequestID");
  write_value(&writer, aInputOptionSelfCloseActionField.RequestID);
  writer.Key("FrontID");
  write_value(&writer, aInputOptionSelfCloseActionField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aInputOptionSelfCloseActionField.SessionID);
  writer.Key("ExchangeID");
  write_value(&writer, aInputOptionSelfCloseActionField.ExchangeID);
  writer.Key("OptionSelfCloseSysID");
  write_value(&writer, aInputOptionSelfCloseActionField.OptionSelfCloseSysID);
  writer.Key("ActionFlag");
  write_value(&writer, aInputOptionSelfCloseActionField.ActionFlag);
  writer.Key("UserID");
  write_value(&writer, aInputOptionSelfCloseActionField.UserID);
  writer.Key("InstrumentID");
  write_value(&writer, aInputOptionSelfCloseActionField.InstrumentID);
  writer.Key("InvestUnitID");
  write_value(&writer, aInputOptionSelfCloseActionField.InvestUnitID);
  writer.Key("IPAddress");
  write_value(&writer, aInputOptionSelfCloseActionField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aInputOptionSelfCloseActionField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcOptionSelfCloseField const &aOptionSelfCloseField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcOptionSelfCloseField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aOptionSelfCloseField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aOptionSelfCloseField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aOptionSelfCloseField.InstrumentID);
  writer.Key("OptionSelfCloseRef");
  write_value(&writer, aOptionSelfCloseField.OptionSelfCloseRef);
  writer.Key("UserID");
  write_value(&writer, aOptionSelfCloseField.UserID);
  writer.Key("Volume");
  write_value(&writer, aOptionSelfCloseField.Volume);
  writer.Key("RequestID");
  write_value(&writer, aOptionSelfCloseField.RequestID);
  writer.Key("BusinessUnit");
  write_value(&writer, aOptionSelfCloseField.BusinessUnit);
  writer.Key("HedgeFlag");
  write_value(&writer, aOptionSelfCloseField.HedgeFlag);
  writer.Key("OptSelfCloseFlag");
  write_value(&writer, aOptionSelfCloseField.OptSelfCloseFlag);
  writer.Key("OptionSelfCloseLocalID");
  write_value(&writer, aOptionSelfCloseField.OptionSelfCloseLocalID);
  writer.Key("ExchangeID");
  write_value(&writer, aOptionSelfCloseField.ExchangeID);
  writer.Key("ParticipantID");
  write_value(&writer, aOptionSelfCloseField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aOptionSelfCloseField.ClientID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aOptionSelfCloseField.ExchangeInstID);
  writer.Key("TraderID");
  write_value(&writer, aOptionSelfCloseField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aOptionSelfCloseField.InstallID);
  writer.Key("OrderSubmitStatus");
  write_value(&writer, aOptionSelfCloseField.OrderSubmitStatus);
  writer.Key("NotifySequence");
  write_value(&writer, aOptionSelfCloseField.NotifySequence);
  writer.Key("TradingDay");
  write_value(&writer, aOptionSelfCloseField.TradingDay);
  writer.Key("SettlementID");
  write_value(&writer, aOptionSelfCloseField.SettlementID);
  writer.Key("OptionSelfCloseSysID");
  write_value(&writer, aOptionSelfCloseField.OptionSelfCloseSysID);
  writer.Key("InsertDate");
  write_value(&writer, aOptionSelfCloseField.InsertDate);
  writer.Key("InsertTime");
  write_value(&writer, aOptionSelfCloseField.InsertTime);
  writer.Key("CancelTime");
  write_value(&writer, aOptionSelfCloseField.CancelTime);
  writer.Key("ExecResult");
  write_value(&writer, aOptionSelfCloseField.ExecResult);
  writer.Key("ClearingPartID");
  write_value(&writer, aOptionSelfCloseField.ClearingPartID);
  writer.Key("SequenceNo");
  write_value(&writer, aOptionSelfCloseField.SequenceNo);
  writer.Key("FrontID");
  write_value(&writer, aOptionSelfCloseField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aOptionSelfCloseField.SessionID);
  writer.Key("UserProductInfo");
  write_value(&writer, aOptionSelfCloseField.UserProductInfo);
  writer.Key("StatusMsg");
  write_value(&writer, aOptionSelfCloseField.StatusMsg);
  writer.Key("ActiveUserID");
  write_value(&writer, aOptionSelfCloseField.ActiveUserID);
  writer.Key("BrokerOptionSelfCloseSeq");
  write_value(&writer, aOptionSelfCloseField.BrokerOptionSelfCloseSeq);
  writer.Key("BranchID");
  write_value(&writer, aOptionSelfCloseField.BranchID);
  writer.Key("InvestUnitID");
  write_value(&writer, aOptionSelfCloseField.InvestUnitID);
  writer.Key("AccountID");
  write_value(&writer, aOptionSelfCloseField.AccountID);
  writer.Key("CurrencyID");
  write_value(&writer, aOptionSelfCloseField.CurrencyID);
  writer.Key("IPAddress");
  write_value(&writer, aOptionSelfCloseField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aOptionSelfCloseField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcOptionSelfCloseActionField const
                                    &aOptionSelfCloseActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcOptionSelfCloseActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aOptionSelfCloseActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aOptionSelfCloseActionField.InvestorID);
  writer.Key("OptionSelfCloseActionRef");
  write_value(&writer, aOptionSelfCloseActionField.OptionSelfCloseActionRef);
  writer.Key("OptionSelfCloseRef");
  write_value(&writer, aOptionSelfCloseActionField.OptionSelfCloseRef);
  writer.Key("RequestID");
  write_value(&writer, aOptionSelfCloseActionField.RequestID);
  writer.Key("FrontID");
  write_value(&writer, aOptionSelfCloseActionField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aOptionSelfCloseActionField.SessionID);
  writer.Key("ExchangeID");
  write_value(&writer, aOptionSelfCloseActionField.ExchangeID);
  writer.Key("OptionSelfCloseSysID");
  write_value(&writer, aOptionSelfCloseActionField.OptionSelfCloseSysID);
  writer.Key("ActionFlag");
  write_value(&writer, aOptionSelfCloseActionField.ActionFlag);
  writer.Key("ActionDate");
  write_value(&writer, aOptionSelfCloseActionField.ActionDate);
  writer.Key("ActionTime");
  write_value(&writer, aOptionSelfCloseActionField.ActionTime);
  writer.Key("TraderID");
  write_value(&writer, aOptionSelfCloseActionField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aOptionSelfCloseActionField.InstallID);
  writer.Key("OptionSelfCloseLocalID");
  write_value(&writer, aOptionSelfCloseActionField.OptionSelfCloseLocalID);
  writer.Key("ActionLocalID");
  write_value(&writer, aOptionSelfCloseActionField.ActionLocalID);
  writer.Key("ParticipantID");
  write_value(&writer, aOptionSelfCloseActionField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aOptionSelfCloseActionField.ClientID);
  writer.Key("BusinessUnit");
  write_value(&writer, aOptionSelfCloseActionField.BusinessUnit);
  writer.Key("OrderActionStatus");
  write_value(&writer, aOptionSelfCloseActionField.OrderActionStatus);
  writer.Key("UserID");
  write_value(&writer, aOptionSelfCloseActionField.UserID);
  writer.Key("StatusMsg");
  write_value(&writer, aOptionSelfCloseActionField.StatusMsg);
  writer.Key("InstrumentID");
  write_value(&writer, aOptionSelfCloseActionField.InstrumentID);
  writer.Key("BranchID");
  write_value(&writer, aOptionSelfCloseActionField.BranchID);
  writer.Key("InvestUnitID");
  write_value(&writer, aOptionSelfCloseActionField.InvestUnitID);
  writer.Key("IPAddress");
  write_value(&writer, aOptionSelfCloseActionField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aOptionSelfCloseActionField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryOptionSelfCloseField const
                                    &aQryOptionSelfCloseField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryOptionSelfCloseField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryOptionSelfCloseField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryOptionSelfCloseField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryOptionSelfCloseField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryOptionSelfCloseField.ExchangeID);
  writer.Key("OptionSelfCloseSysID");
  write_value(&writer, aQryOptionSelfCloseField.OptionSelfCloseSysID);
  writer.Key("InsertTimeStart");
  write_value(&writer, aQryOptionSelfCloseField.InsertTimeStart);
  writer.Key("InsertTimeEnd");
  write_value(&writer, aQryOptionSelfCloseField.InsertTimeEnd);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcExchangeOptionSelfCloseField const
                                    &aExchangeOptionSelfCloseField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcExchangeOptionSelfCloseField");
  writer.StartObject();
  writer.Key("Volume");
  write_value(&writer, aExchangeOptionSelfCloseField.Volume);
  writer.Key("RequestID");
  write_value(&writer, aExchangeOptionSelfCloseField.RequestID);
  writer.Key("BusinessUnit");
  write_value(&writer, aExchangeOptionSelfCloseField.BusinessUnit);
  writer.Key("HedgeFlag");
  write_value(&writer, aExchangeOptionSelfCloseField.HedgeFlag);
  writer.Key("OptSelfCloseFlag");
  write_value(&writer, aExchangeOptionSelfCloseField.OptSelfCloseFlag);
  writer.Key("OptionSelfCloseLocalID");
  write_value(&writer, aExchangeOptionSelfCloseField.OptionSelfCloseLocalID);
  writer.Key("ExchangeID");
  write_value(&writer, aExchangeOptionSelfCloseField.ExchangeID);
  writer.Key("ParticipantID");
  write_value(&writer, aExchangeOptionSelfCloseField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aExchangeOptionSelfCloseField.ClientID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aExchangeOptionSelfCloseField.ExchangeInstID);
  writer.Key("TraderID");
  write_value(&writer, aExchangeOptionSelfCloseField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aExchangeOptionSelfCloseField.InstallID);
  writer.Key("OrderSubmitStatus");
  write_value(&writer, aExchangeOptionSelfCloseField.OrderSubmitStatus);
  writer.Key("NotifySequence");
  write_value(&writer, aExchangeOptionSelfCloseField.NotifySequence);
  writer.Key("TradingDay");
  write_value(&writer, aExchangeOptionSelfCloseField.TradingDay);
  writer.Key("SettlementID");
  write_value(&writer, aExchangeOptionSelfCloseField.SettlementID);
  writer.Key("OptionSelfCloseSysID");
  write_value(&writer, aExchangeOptionSelfCloseField.OptionSelfCloseSysID);
  writer.Key("InsertDate");
  write_value(&writer, aExchangeOptionSelfCloseField.InsertDate);
  writer.Key("InsertTime");
  write_value(&writer, aExchangeOptionSelfCloseField.InsertTime);
  writer.Key("CancelTime");
  write_value(&writer, aExchangeOptionSelfCloseField.CancelTime);
  writer.Key("ExecResult");
  write_value(&writer, aExchangeOptionSelfCloseField.ExecResult);
  writer.Key("ClearingPartID");
  write_value(&writer, aExchangeOptionSelfCloseField.ClearingPartID);
  writer.Key("SequenceNo");
  write_value(&writer, aExchangeOptionSelfCloseField.SequenceNo);
  writer.Key("BranchID");
  write_value(&writer, aExchangeOptionSelfCloseField.BranchID);
  writer.Key("IPAddress");
  write_value(&writer, aExchangeOptionSelfCloseField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aExchangeOptionSelfCloseField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryOptionSelfCloseActionField const
                                    &aQryOptionSelfCloseActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryOptionSelfCloseActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryOptionSelfCloseActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryOptionSelfCloseActionField.InvestorID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryOptionSelfCloseActionField.ExchangeID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcExchangeOptionSelfCloseActionField const
               &aExchangeOptionSelfCloseActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcExchangeOptionSelfCloseActionField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aExchangeOptionSelfCloseActionField.ExchangeID);
  writer.Key("OptionSelfCloseSysID");
  write_value(&writer,
              aExchangeOptionSelfCloseActionField.OptionSelfCloseSysID);
  writer.Key("ActionFlag");
  write_value(&writer, aExchangeOptionSelfCloseActionField.ActionFlag);
  writer.Key("ActionDate");
  write_value(&writer, aExchangeOptionSelfCloseActionField.ActionDate);
  writer.Key("ActionTime");
  write_value(&writer, aExchangeOptionSelfCloseActionField.ActionTime);
  writer.Key("TraderID");
  write_value(&writer, aExchangeOptionSelfCloseActionField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aExchangeOptionSelfCloseActionField.InstallID);
  writer.Key("OptionSelfCloseLocalID");
  write_value(&writer,
              aExchangeOptionSelfCloseActionField.OptionSelfCloseLocalID);
  writer.Key("ActionLocalID");
  write_value(&writer, aExchangeOptionSelfCloseActionField.ActionLocalID);
  writer.Key("ParticipantID");
  write_value(&writer, aExchangeOptionSelfCloseActionField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aExchangeOptionSelfCloseActionField.ClientID);
  writer.Key("BusinessUnit");
  write_value(&writer, aExchangeOptionSelfCloseActionField.BusinessUnit);
  writer.Key("OrderActionStatus");
  write_value(&writer, aExchangeOptionSelfCloseActionField.OrderActionStatus);
  writer.Key("UserID");
  write_value(&writer, aExchangeOptionSelfCloseActionField.UserID);
  writer.Key("BranchID");
  write_value(&writer, aExchangeOptionSelfCloseActionField.BranchID);
  writer.Key("IPAddress");
  write_value(&writer, aExchangeOptionSelfCloseActionField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aExchangeOptionSelfCloseActionField.MacAddress);
  writer.Key("ExchangeInstID");
  write_value(&writer, aExchangeOptionSelfCloseActionField.ExchangeInstID);
  writer.Key("OptSelfCloseFlag");
  write_value(&writer, aExchangeOptionSelfCloseActionField.OptSelfCloseFlag);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcSyncDelaySwapField const &aSyncDelaySwapField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcSyncDelaySwapField");
  writer.StartObject();
  writer.Key("DelaySwapSeqNo");
  write_value(&writer, aSyncDelaySwapField.DelaySwapSeqNo);
  writer.Key("BrokerID");
  write_value(&writer, aSyncDelaySwapField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aSyncDelaySwapField.InvestorID);
  writer.Key("FromCurrencyID");
  write_value(&writer, aSyncDelaySwapField.FromCurrencyID);
  writer.Key("FromAmount");
  write_value(&writer, aSyncDelaySwapField.FromAmount);
  writer.Key("FromFrozenSwap");
  write_value(&writer, aSyncDelaySwapField.FromFrozenSwap);
  writer.Key("FromRemainSwap");
  write_value(&writer, aSyncDelaySwapField.FromRemainSwap);
  writer.Key("ToCurrencyID");
  write_value(&writer, aSyncDelaySwapField.ToCurrencyID);
  writer.Key("ToAmount");
  write_value(&writer, aSyncDelaySwapField.ToAmount);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQrySyncDelaySwapField const &aQrySyncDelaySwapField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQrySyncDelaySwapField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQrySyncDelaySwapField.BrokerID);
  writer.Key("DelaySwapSeqNo");
  write_value(&writer, aQrySyncDelaySwapField.DelaySwapSeqNo);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcInvestUnitField const &aInvestUnitField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInvestUnitField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aInvestUnitField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInvestUnitField.InvestorID);
  writer.Key("InvestUnitID");
  write_value(&writer, aInvestUnitField.InvestUnitID);
  writer.Key("InvestorUnitName");
  write_value(&writer, aInvestUnitField.InvestorUnitName);
  writer.Key("InvestorGroupID");
  write_value(&writer, aInvestUnitField.InvestorGroupID);
  writer.Key("CommModelID");
  write_value(&writer, aInvestUnitField.CommModelID);
  writer.Key("MarginModelID");
  write_value(&writer, aInvestUnitField.MarginModelID);
  writer.Key("AccountID");
  write_value(&writer, aInvestUnitField.AccountID);
  writer.Key("CurrencyID");
  write_value(&writer, aInvestUnitField.CurrencyID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryInvestUnitField const &aQryInvestUnitField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryInvestUnitField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryInvestUnitField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryInvestUnitField.InvestorID);
  writer.Key("InvestUnitID");
  write_value(&writer, aQryInvestUnitField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcSecAgentCheckModeField const &aSecAgentCheckModeField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcSecAgentCheckModeField");
  writer.StartObject();
  writer.Key("InvestorID");
  write_value(&writer, aSecAgentCheckModeField.InvestorID);
  writer.Key("BrokerID");
  write_value(&writer, aSecAgentCheckModeField.BrokerID);
  writer.Key("CurrencyID");
  write_value(&writer, aSecAgentCheckModeField.CurrencyID);
  writer.Key("BrokerSecAgentID");
  write_value(&writer, aSecAgentCheckModeField.BrokerSecAgentID);
  writer.Key("CheckSelfAccount");
  write_value(&writer, aSecAgentCheckModeField.CheckSelfAccount);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcSecAgentTradeInfoField const &aSecAgentTradeInfoField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcSecAgentTradeInfoField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aSecAgentTradeInfoField.BrokerID);
  writer.Key("BrokerSecAgentID");
  write_value(&writer, aSecAgentTradeInfoField.BrokerSecAgentID);
  writer.Key("InvestorID");
  write_value(&writer, aSecAgentTradeInfoField.InvestorID);
  writer.Key("LongCustomerName");
  write_value(&writer, aSecAgentTradeInfoField.LongCustomerName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcMarketDataField const &aMarketDataField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcMarketDataField");
  writer.StartObject();
  writer.Key("TradingDay");
  write_value(&writer, aMarketDataField.TradingDay);
  writer.Key("InstrumentID");
  write_value(&writer, aMarketDataField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aMarketDataField.ExchangeID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aMarketDataField.ExchangeInstID);
  writer.Key("LastPrice");
  write_value(&writer, aMarketDataField.LastPrice);
  writer.Key("PreSettlementPrice");
  write_value(&writer, aMarketDataField.PreSettlementPrice);
  writer.Key("PreClosePrice");
  write_value(&writer, aMarketDataField.PreClosePrice);
  writer.Key("PreOpenInterest");
  write_value(&writer, aMarketDataField.PreOpenInterest);
  writer.Key("OpenPrice");
  write_value(&writer, aMarketDataField.OpenPrice);
  writer.Key("HighestPrice");
  write_value(&writer, aMarketDataField.HighestPrice);
  writer.Key("LowestPrice");
  write_value(&writer, aMarketDataField.LowestPrice);
  writer.Key("Volume");
  write_value(&writer, aMarketDataField.Volume);
  writer.Key("Turnover");
  write_value(&writer, aMarketDataField.Turnover);
  writer.Key("OpenInterest");
  write_value(&writer, aMarketDataField.OpenInterest);
  writer.Key("ClosePrice");
  write_value(&writer, aMarketDataField.ClosePrice);
  writer.Key("SettlementPrice");
  write_value(&writer, aMarketDataField.SettlementPrice);
  writer.Key("UpperLimitPrice");
  write_value(&writer, aMarketDataField.UpperLimitPrice);
  writer.Key("LowerLimitPrice");
  write_value(&writer, aMarketDataField.LowerLimitPrice);
  writer.Key("PreDelta");
  write_value(&writer, aMarketDataField.PreDelta);
  writer.Key("CurrDelta");
  write_value(&writer, aMarketDataField.CurrDelta);
  writer.Key("UpdateTime");
  write_value(&writer, aMarketDataField.UpdateTime);
  writer.Key("UpdateMillisec");
  write_value(&writer, aMarketDataField.UpdateMillisec);
  writer.Key("ActionDay");
  write_value(&writer, aMarketDataField.ActionDay);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcMarketDataBaseField const &aMarketDataBaseField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcMarketDataBaseField");
  writer.StartObject();
  writer.Key("TradingDay");
  write_value(&writer, aMarketDataBaseField.TradingDay);
  writer.Key("PreSettlementPrice");
  write_value(&writer, aMarketDataBaseField.PreSettlementPrice);
  writer.Key("PreClosePrice");
  write_value(&writer, aMarketDataBaseField.PreClosePrice);
  writer.Key("PreOpenInterest");
  write_value(&writer, aMarketDataBaseField.PreOpenInterest);
  writer.Key("PreDelta");
  write_value(&writer, aMarketDataBaseField.PreDelta);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcMarketDataStaticField const &aMarketDataStaticField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcMarketDataStaticField");
  writer.StartObject();
  writer.Key("OpenPrice");
  write_value(&writer, aMarketDataStaticField.OpenPrice);
  writer.Key("HighestPrice");
  write_value(&writer, aMarketDataStaticField.HighestPrice);
  writer.Key("LowestPrice");
  write_value(&writer, aMarketDataStaticField.LowestPrice);
  writer.Key("ClosePrice");
  write_value(&writer, aMarketDataStaticField.ClosePrice);
  writer.Key("UpperLimitPrice");
  write_value(&writer, aMarketDataStaticField.UpperLimitPrice);
  writer.Key("LowerLimitPrice");
  write_value(&writer, aMarketDataStaticField.LowerLimitPrice);
  writer.Key("SettlementPrice");
  write_value(&writer, aMarketDataStaticField.SettlementPrice);
  writer.Key("CurrDelta");
  write_value(&writer, aMarketDataStaticField.CurrDelta);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcMarketDataLastMatchField const
                                    &aMarketDataLastMatchField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcMarketDataLastMatchField");
  writer.StartObject();
  writer.Key("LastPrice");
  write_value(&writer, aMarketDataLastMatchField.LastPrice);
  writer.Key("Volume");
  write_value(&writer, aMarketDataLastMatchField.Volume);
  writer.Key("Turnover");
  write_value(&writer, aMarketDataLastMatchField.Turnover);
  writer.Key("OpenInterest");
  write_value(&writer, aMarketDataLastMatchField.OpenInterest);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcMarketDataBestPriceField const
                                    &aMarketDataBestPriceField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcMarketDataBestPriceField");
  writer.StartObject();
  writer.Key("BidPrice1");
  write_value(&writer, aMarketDataBestPriceField.BidPrice1);
  writer.Key("BidVolume1");
  write_value(&writer, aMarketDataBestPriceField.BidVolume1);
  writer.Key("AskPrice1");
  write_value(&writer, aMarketDataBestPriceField.AskPrice1);
  writer.Key("AskVolume1");
  write_value(&writer, aMarketDataBestPriceField.AskVolume1);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcMarketDataBid23Field const &aMarketDataBid23Field) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcMarketDataBid23Field");
  writer.StartObject();
  writer.Key("BidPrice2");
  write_value(&writer, aMarketDataBid23Field.BidPrice2);
  writer.Key("BidVolume2");
  write_value(&writer, aMarketDataBid23Field.BidVolume2);
  writer.Key("BidPrice3");
  write_value(&writer, aMarketDataBid23Field.BidPrice3);
  writer.Key("BidVolume3");
  write_value(&writer, aMarketDataBid23Field.BidVolume3);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcMarketDataAsk23Field const &aMarketDataAsk23Field) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcMarketDataAsk23Field");
  writer.StartObject();
  writer.Key("AskPrice2");
  write_value(&writer, aMarketDataAsk23Field.AskPrice2);
  writer.Key("AskVolume2");
  write_value(&writer, aMarketDataAsk23Field.AskVolume2);
  writer.Key("AskPrice3");
  write_value(&writer, aMarketDataAsk23Field.AskPrice3);
  writer.Key("AskVolume3");
  write_value(&writer, aMarketDataAsk23Field.AskVolume3);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcMarketDataBid45Field const &aMarketDataBid45Field) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcMarketDataBid45Field");
  writer.StartObject();
  writer.Key("BidPrice4");
  write_value(&writer, aMarketDataBid45Field.BidPrice4);
  writer.Key("BidVolume4");
  write_value(&writer, aMarketDataBid45Field.BidVolume4);
  writer.Key("BidPrice5");
  write_value(&writer, aMarketDataBid45Field.BidPrice5);
  writer.Key("BidVolume5");
  write_value(&writer, aMarketDataBid45Field.BidVolume5);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcMarketDataAsk45Field const &aMarketDataAsk45Field) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcMarketDataAsk45Field");
  writer.StartObject();
  writer.Key("AskPrice4");
  write_value(&writer, aMarketDataAsk45Field.AskPrice4);
  writer.Key("AskVolume4");
  write_value(&writer, aMarketDataAsk45Field.AskVolume4);
  writer.Key("AskPrice5");
  write_value(&writer, aMarketDataAsk45Field.AskPrice5);
  writer.Key("AskVolume5");
  write_value(&writer, aMarketDataAsk45Field.AskVolume5);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcMarketDataUpdateTimeField const
                                    &aMarketDataUpdateTimeField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcMarketDataUpdateTimeField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aMarketDataUpdateTimeField.InstrumentID);
  writer.Key("UpdateTime");
  write_value(&writer, aMarketDataUpdateTimeField.UpdateTime);
  writer.Key("UpdateMillisec");
  write_value(&writer, aMarketDataUpdateTimeField.UpdateMillisec);
  writer.Key("ActionDay");
  write_value(&writer, aMarketDataUpdateTimeField.ActionDay);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcMarketDataExchangeField const
                                    &aMarketDataExchangeField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcMarketDataExchangeField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aMarketDataExchangeField.ExchangeID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcSpecificInstrumentField const
                                    &aSpecificInstrumentField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcSpecificInstrumentField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aSpecificInstrumentField.InstrumentID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcInstrumentStatusField const &aInstrumentStatusField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInstrumentStatusField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aInstrumentStatusField.ExchangeID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aInstrumentStatusField.ExchangeInstID);
  writer.Key("SettlementGroupID");
  write_value(&writer, aInstrumentStatusField.SettlementGroupID);
  writer.Key("InstrumentID");
  write_value(&writer, aInstrumentStatusField.InstrumentID);
  writer.Key("InstrumentStatus");
  write_value(&writer, aInstrumentStatusField.InstrumentStatus);
  writer.Key("TradingSegmentSN");
  write_value(&writer, aInstrumentStatusField.TradingSegmentSN);
  writer.Key("EnterTime");
  write_value(&writer, aInstrumentStatusField.EnterTime);
  writer.Key("EnterReason");
  write_value(&writer, aInstrumentStatusField.EnterReason);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryInstrumentStatusField const
                                    &aQryInstrumentStatusField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryInstrumentStatusField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aQryInstrumentStatusField.ExchangeID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aQryInstrumentStatusField.ExchangeInstID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcInvestorAccountField const &aInvestorAccountField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInvestorAccountField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aInvestorAccountField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInvestorAccountField.InvestorID);
  writer.Key("AccountID");
  write_value(&writer, aInvestorAccountField.AccountID);
  writer.Key("CurrencyID");
  write_value(&writer, aInvestorAccountField.CurrencyID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcPositionProfitAlgorithmField const
                                    &aPositionProfitAlgorithmField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcPositionProfitAlgorithmField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aPositionProfitAlgorithmField.BrokerID);
  writer.Key("AccountID");
  write_value(&writer, aPositionProfitAlgorithmField.AccountID);
  writer.Key("Algorithm");
  write_value(&writer, aPositionProfitAlgorithmField.Algorithm);
  writer.Key("Memo");
  write_value(&writer, aPositionProfitAlgorithmField.Memo);
  writer.Key("CurrencyID");
  write_value(&writer, aPositionProfitAlgorithmField.CurrencyID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcDiscountField const &aDiscountField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcDiscountField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aDiscountField.BrokerID);
  writer.Key("InvestorRange");
  write_value(&writer, aDiscountField.InvestorRange);
  writer.Key("InvestorID");
  write_value(&writer, aDiscountField.InvestorID);
  writer.Key("Discount");
  write_value(&writer, aDiscountField.Discount);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryTransferBankField const &aQryTransferBankField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryTransferBankField");
  writer.StartObject();
  writer.Key("BankID");
  write_value(&writer, aQryTransferBankField.BankID);
  writer.Key("BankBrchID");
  write_value(&writer, aQryTransferBankField.BankBrchID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcTransferBankField const &aTransferBankField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTransferBankField");
  writer.StartObject();
  writer.Key("BankID");
  write_value(&writer, aTransferBankField.BankID);
  writer.Key("BankBrchID");
  write_value(&writer, aTransferBankField.BankBrchID);
  writer.Key("BankName");
  write_value(&writer, aTransferBankField.BankName);
  writer.Key("IsActive");
  write_value(&writer, aTransferBankField.IsActive);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryInvestorPositionDetailField const &
                                    aQryInvestorPositionDetailField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryInvestorPositionDetailField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryInvestorPositionDetailField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryInvestorPositionDetailField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryInvestorPositionDetailField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryInvestorPositionDetailField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aQryInvestorPositionDetailField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcInvestorPositionDetailField const
                                    &aInvestorPositionDetailField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInvestorPositionDetailField");
  writer.StartObject();
  writer.Key("InstrumentID");
  write_value(&writer, aInvestorPositionDetailField.InstrumentID);
  writer.Key("BrokerID");
  write_value(&writer, aInvestorPositionDetailField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInvestorPositionDetailField.InvestorID);
  writer.Key("HedgeFlag");
  write_value(&writer, aInvestorPositionDetailField.HedgeFlag);
  writer.Key("Direction");
  write_value(&writer, aInvestorPositionDetailField.Direction);
  writer.Key("OpenDate");
  write_value(&writer, aInvestorPositionDetailField.OpenDate);
  writer.Key("TradeID");
  write_value(&writer, aInvestorPositionDetailField.TradeID);
  writer.Key("Volume");
  write_value(&writer, aInvestorPositionDetailField.Volume);
  writer.Key("OpenPrice");
  write_value(&writer, aInvestorPositionDetailField.OpenPrice);
  writer.Key("TradingDay");
  write_value(&writer, aInvestorPositionDetailField.TradingDay);
  writer.Key("SettlementID");
  write_value(&writer, aInvestorPositionDetailField.SettlementID);
  writer.Key("TradeType");
  write_value(&writer, aInvestorPositionDetailField.TradeType);
  writer.Key("CombInstrumentID");
  write_value(&writer, aInvestorPositionDetailField.CombInstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aInvestorPositionDetailField.ExchangeID);
  writer.Key("CloseProfitByDate");
  write_value(&writer, aInvestorPositionDetailField.CloseProfitByDate);
  writer.Key("CloseProfitByTrade");
  write_value(&writer, aInvestorPositionDetailField.CloseProfitByTrade);
  writer.Key("PositionProfitByDate");
  write_value(&writer, aInvestorPositionDetailField.PositionProfitByDate);
  writer.Key("PositionProfitByTrade");
  write_value(&writer, aInvestorPositionDetailField.PositionProfitByTrade);
  writer.Key("Margin");
  write_value(&writer, aInvestorPositionDetailField.Margin);
  writer.Key("ExchMargin");
  write_value(&writer, aInvestorPositionDetailField.ExchMargin);
  writer.Key("MarginRateByMoney");
  write_value(&writer, aInvestorPositionDetailField.MarginRateByMoney);
  writer.Key("MarginRateByVolume");
  write_value(&writer, aInvestorPositionDetailField.MarginRateByVolume);
  writer.Key("LastSettlementPrice");
  write_value(&writer, aInvestorPositionDetailField.LastSettlementPrice);
  writer.Key("SettlementPrice");
  write_value(&writer, aInvestorPositionDetailField.SettlementPrice);
  writer.Key("CloseVolume");
  write_value(&writer, aInvestorPositionDetailField.CloseVolume);
  writer.Key("CloseAmount");
  write_value(&writer, aInvestorPositionDetailField.CloseAmount);
  writer.Key("TimeFirstVolume");
  write_value(&writer, aInvestorPositionDetailField.TimeFirstVolume);
  writer.Key("InvestUnitID");
  write_value(&writer, aInvestorPositionDetailField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcTradingAccountPasswordField const
                                    &aTradingAccountPasswordField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTradingAccountPasswordField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aTradingAccountPasswordField.BrokerID);
  writer.Key("AccountID");
  write_value(&writer, aTradingAccountPasswordField.AccountID);
  writer.Key("Password");
  write_value(&writer, aTradingAccountPasswordField.Password);
  writer.Key("CurrencyID");
  write_value(&writer, aTradingAccountPasswordField.CurrencyID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcMDTraderOfferField const &aMDTraderOfferField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcMDTraderOfferField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aMDTraderOfferField.ExchangeID);
  writer.Key("TraderID");
  write_value(&writer, aMDTraderOfferField.TraderID);
  writer.Key("ParticipantID");
  write_value(&writer, aMDTraderOfferField.ParticipantID);
  writer.Key("Password");
  write_value(&writer, aMDTraderOfferField.Password);
  writer.Key("InstallID");
  write_value(&writer, aMDTraderOfferField.InstallID);
  writer.Key("OrderLocalID");
  write_value(&writer, aMDTraderOfferField.OrderLocalID);
  writer.Key("TraderConnectStatus");
  write_value(&writer, aMDTraderOfferField.TraderConnectStatus);
  writer.Key("ConnectRequestDate");
  write_value(&writer, aMDTraderOfferField.ConnectRequestDate);
  writer.Key("ConnectRequestTime");
  write_value(&writer, aMDTraderOfferField.ConnectRequestTime);
  writer.Key("LastReportDate");
  write_value(&writer, aMDTraderOfferField.LastReportDate);
  writer.Key("LastReportTime");
  write_value(&writer, aMDTraderOfferField.LastReportTime);
  writer.Key("ConnectDate");
  write_value(&writer, aMDTraderOfferField.ConnectDate);
  writer.Key("ConnectTime");
  write_value(&writer, aMDTraderOfferField.ConnectTime);
  writer.Key("StartDate");
  write_value(&writer, aMDTraderOfferField.StartDate);
  writer.Key("StartTime");
  write_value(&writer, aMDTraderOfferField.StartTime);
  writer.Key("TradingDay");
  write_value(&writer, aMDTraderOfferField.TradingDay);
  writer.Key("BrokerID");
  write_value(&writer, aMDTraderOfferField.BrokerID);
  writer.Key("MaxTradeID");
  write_value(&writer, aMDTraderOfferField.MaxTradeID);
  writer.Key("MaxOrderMessageReference");
  write_value(&writer, aMDTraderOfferField.MaxOrderMessageReference);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryMDTraderOfferField const &aQryMDTraderOfferField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryMDTraderOfferField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aQryMDTraderOfferField.ExchangeID);
  writer.Key("ParticipantID");
  write_value(&writer, aQryMDTraderOfferField.ParticipantID);
  writer.Key("TraderID");
  write_value(&writer, aQryMDTraderOfferField.TraderID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryNoticeField const &aQryNoticeField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryNoticeField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryNoticeField.BrokerID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcNoticeField const &aNoticeField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcNoticeField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aNoticeField.BrokerID);
  writer.Key("Content");
  write_value(&writer, aNoticeField.Content);
  writer.Key("SequenceLabel");
  write_value(&writer, aNoticeField.SequenceLabel);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcUserRightField const &aUserRightField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcUserRightField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aUserRightField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aUserRightField.UserID);
  writer.Key("UserRightType");
  write_value(&writer, aUserRightField.UserRightType);
  writer.Key("IsForbidden");
  write_value(&writer, aUserRightField.IsForbidden);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQrySettlementInfoConfirmField const
                                    &aQrySettlementInfoConfirmField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQrySettlementInfoConfirmField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQrySettlementInfoConfirmField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQrySettlementInfoConfirmField.InvestorID);
  writer.Key("AccountID");
  write_value(&writer, aQrySettlementInfoConfirmField.AccountID);
  writer.Key("CurrencyID");
  write_value(&writer, aQrySettlementInfoConfirmField.CurrencyID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcLoadSettlementInfoField const
                                    &aLoadSettlementInfoField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcLoadSettlementInfoField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aLoadSettlementInfoField.BrokerID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcBrokerWithdrawAlgorithmField const
                                    &aBrokerWithdrawAlgorithmField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcBrokerWithdrawAlgorithmField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aBrokerWithdrawAlgorithmField.BrokerID);
  writer.Key("WithdrawAlgorithm");
  write_value(&writer, aBrokerWithdrawAlgorithmField.WithdrawAlgorithm);
  writer.Key("UsingRatio");
  write_value(&writer, aBrokerWithdrawAlgorithmField.UsingRatio);
  writer.Key("IncludeCloseProfit");
  write_value(&writer, aBrokerWithdrawAlgorithmField.IncludeCloseProfit);
  writer.Key("AllWithoutTrade");
  write_value(&writer, aBrokerWithdrawAlgorithmField.AllWithoutTrade);
  writer.Key("AvailIncludeCloseProfit");
  write_value(&writer, aBrokerWithdrawAlgorithmField.AvailIncludeCloseProfit);
  writer.Key("IsBrokerUserEvent");
  write_value(&writer, aBrokerWithdrawAlgorithmField.IsBrokerUserEvent);
  writer.Key("CurrencyID");
  write_value(&writer, aBrokerWithdrawAlgorithmField.CurrencyID);
  writer.Key("FundMortgageRatio");
  write_value(&writer, aBrokerWithdrawAlgorithmField.FundMortgageRatio);
  writer.Key("BalanceAlgorithm");
  write_value(&writer, aBrokerWithdrawAlgorithmField.BalanceAlgorithm);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcTradingAccountPasswordUpdateV1Field const
               &aTradingAccountPasswordUpdateV1Field) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTradingAccountPasswordUpdateV1Field");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aTradingAccountPasswordUpdateV1Field.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aTradingAccountPasswordUpdateV1Field.InvestorID);
  writer.Key("OldPassword");
  write_value(&writer, aTradingAccountPasswordUpdateV1Field.OldPassword);
  writer.Key("NewPassword");
  write_value(&writer, aTradingAccountPasswordUpdateV1Field.NewPassword);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcTradingAccountPasswordUpdateField const
               &aTradingAccountPasswordUpdateField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTradingAccountPasswordUpdateField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aTradingAccountPasswordUpdateField.BrokerID);
  writer.Key("AccountID");
  write_value(&writer, aTradingAccountPasswordUpdateField.AccountID);
  writer.Key("OldPassword");
  write_value(&writer, aTradingAccountPasswordUpdateField.OldPassword);
  writer.Key("NewPassword");
  write_value(&writer, aTradingAccountPasswordUpdateField.NewPassword);
  writer.Key("CurrencyID");
  write_value(&writer, aTradingAccountPasswordUpdateField.CurrencyID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryCombinationLegField const &aQryCombinationLegField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryCombinationLegField");
  writer.StartObject();
  writer.Key("CombInstrumentID");
  write_value(&writer, aQryCombinationLegField.CombInstrumentID);
  writer.Key("LegID");
  write_value(&writer, aQryCombinationLegField.LegID);
  writer.Key("LegInstrumentID");
  write_value(&writer, aQryCombinationLegField.LegInstrumentID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQrySyncStatusField const &aQrySyncStatusField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQrySyncStatusField");
  writer.StartObject();
  writer.Key("TradingDay");
  write_value(&writer, aQrySyncStatusField.TradingDay);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcCombinationLegField const &aCombinationLegField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcCombinationLegField");
  writer.StartObject();
  writer.Key("CombInstrumentID");
  write_value(&writer, aCombinationLegField.CombInstrumentID);
  writer.Key("LegID");
  write_value(&writer, aCombinationLegField.LegID);
  writer.Key("LegInstrumentID");
  write_value(&writer, aCombinationLegField.LegInstrumentID);
  writer.Key("Direction");
  write_value(&writer, aCombinationLegField.Direction);
  writer.Key("LegMultiple");
  write_value(&writer, aCombinationLegField.LegMultiple);
  writer.Key("ImplyLevel");
  write_value(&writer, aCombinationLegField.ImplyLevel);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcSyncStatusField const &aSyncStatusField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcSyncStatusField");
  writer.StartObject();
  writer.Key("TradingDay");
  write_value(&writer, aSyncStatusField.TradingDay);
  writer.Key("DataSyncStatus");
  write_value(&writer, aSyncStatusField.DataSyncStatus);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryLinkManField const &aQryLinkManField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryLinkManField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryLinkManField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryLinkManField.InvestorID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcLinkManField const &aLinkManField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcLinkManField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aLinkManField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aLinkManField.InvestorID);
  writer.Key("PersonType");
  write_value(&writer, aLinkManField.PersonType);
  writer.Key("IdentifiedCardType");
  write_value(&writer, aLinkManField.IdentifiedCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aLinkManField.IdentifiedCardNo);
  writer.Key("PersonName");
  write_value(&writer, aLinkManField.PersonName);
  writer.Key("Telephone");
  write_value(&writer, aLinkManField.Telephone);
  writer.Key("Address");
  write_value(&writer, aLinkManField.Address);
  writer.Key("ZipCode");
  write_value(&writer, aLinkManField.ZipCode);
  writer.Key("Priority");
  write_value(&writer, aLinkManField.Priority);
  writer.Key("UOAZipCode");
  write_value(&writer, aLinkManField.UOAZipCode);
  writer.Key("PersonFullName");
  write_value(&writer, aLinkManField.PersonFullName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryBrokerUserEventField const
                                    &aQryBrokerUserEventField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryBrokerUserEventField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryBrokerUserEventField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aQryBrokerUserEventField.UserID);
  writer.Key("UserEventType");
  write_value(&writer, aQryBrokerUserEventField.UserEventType);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcBrokerUserEventField const &aBrokerUserEventField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcBrokerUserEventField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aBrokerUserEventField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aBrokerUserEventField.UserID);
  writer.Key("UserEventType");
  write_value(&writer, aBrokerUserEventField.UserEventType);
  writer.Key("EventSequenceNo");
  write_value(&writer, aBrokerUserEventField.EventSequenceNo);
  writer.Key("EventDate");
  write_value(&writer, aBrokerUserEventField.EventDate);
  writer.Key("EventTime");
  write_value(&writer, aBrokerUserEventField.EventTime);
  writer.Key("UserEventInfo");
  write_value(&writer, aBrokerUserEventField.UserEventInfo);
  writer.Key("InvestorID");
  write_value(&writer, aBrokerUserEventField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aBrokerUserEventField.InstrumentID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryContractBankField const &aQryContractBankField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryContractBankField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryContractBankField.BrokerID);
  writer.Key("BankID");
  write_value(&writer, aQryContractBankField.BankID);
  writer.Key("BankBrchID");
  write_value(&writer, aQryContractBankField.BankBrchID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcContractBankField const &aContractBankField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcContractBankField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aContractBankField.BrokerID);
  writer.Key("BankID");
  write_value(&writer, aContractBankField.BankID);
  writer.Key("BankBrchID");
  write_value(&writer, aContractBankField.BankBrchID);
  writer.Key("BankName");
  write_value(&writer, aContractBankField.BankName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcInvestorPositionCombineDetailField const
               &aInvestorPositionCombineDetailField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInvestorPositionCombineDetailField");
  writer.StartObject();
  writer.Key("TradingDay");
  write_value(&writer, aInvestorPositionCombineDetailField.TradingDay);
  writer.Key("OpenDate");
  write_value(&writer, aInvestorPositionCombineDetailField.OpenDate);
  writer.Key("ExchangeID");
  write_value(&writer, aInvestorPositionCombineDetailField.ExchangeID);
  writer.Key("SettlementID");
  write_value(&writer, aInvestorPositionCombineDetailField.SettlementID);
  writer.Key("BrokerID");
  write_value(&writer, aInvestorPositionCombineDetailField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInvestorPositionCombineDetailField.InvestorID);
  writer.Key("ComTradeID");
  write_value(&writer, aInvestorPositionCombineDetailField.ComTradeID);
  writer.Key("TradeID");
  write_value(&writer, aInvestorPositionCombineDetailField.TradeID);
  writer.Key("InstrumentID");
  write_value(&writer, aInvestorPositionCombineDetailField.InstrumentID);
  writer.Key("HedgeFlag");
  write_value(&writer, aInvestorPositionCombineDetailField.HedgeFlag);
  writer.Key("Direction");
  write_value(&writer, aInvestorPositionCombineDetailField.Direction);
  writer.Key("TotalAmt");
  write_value(&writer, aInvestorPositionCombineDetailField.TotalAmt);
  writer.Key("Margin");
  write_value(&writer, aInvestorPositionCombineDetailField.Margin);
  writer.Key("ExchMargin");
  write_value(&writer, aInvestorPositionCombineDetailField.ExchMargin);
  writer.Key("MarginRateByMoney");
  write_value(&writer, aInvestorPositionCombineDetailField.MarginRateByMoney);
  writer.Key("MarginRateByVolume");
  write_value(&writer, aInvestorPositionCombineDetailField.MarginRateByVolume);
  writer.Key("LegID");
  write_value(&writer, aInvestorPositionCombineDetailField.LegID);
  writer.Key("LegMultiple");
  write_value(&writer, aInvestorPositionCombineDetailField.LegMultiple);
  writer.Key("CombInstrumentID");
  write_value(&writer, aInvestorPositionCombineDetailField.CombInstrumentID);
  writer.Key("TradeGroupID");
  write_value(&writer, aInvestorPositionCombineDetailField.TradeGroupID);
  writer.Key("InvestUnitID");
  write_value(&writer, aInvestorPositionCombineDetailField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcParkedOrderField const &aParkedOrderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcParkedOrderField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aParkedOrderField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aParkedOrderField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aParkedOrderField.InstrumentID);
  writer.Key("OrderRef");
  write_value(&writer, aParkedOrderField.OrderRef);
  writer.Key("UserID");
  write_value(&writer, aParkedOrderField.UserID);
  writer.Key("OrderPriceType");
  write_value(&writer, aParkedOrderField.OrderPriceType);
  writer.Key("Direction");
  write_value(&writer, aParkedOrderField.Direction);
  writer.Key("CombOffsetFlag");
  write_value(&writer, aParkedOrderField.CombOffsetFlag);
  writer.Key("CombHedgeFlag");
  write_value(&writer, aParkedOrderField.CombHedgeFlag);
  writer.Key("LimitPrice");
  write_value(&writer, aParkedOrderField.LimitPrice);
  writer.Key("VolumeTotalOriginal");
  write_value(&writer, aParkedOrderField.VolumeTotalOriginal);
  writer.Key("TimeCondition");
  write_value(&writer, aParkedOrderField.TimeCondition);
  writer.Key("GTDDate");
  write_value(&writer, aParkedOrderField.GTDDate);
  writer.Key("VolumeCondition");
  write_value(&writer, aParkedOrderField.VolumeCondition);
  writer.Key("MinVolume");
  write_value(&writer, aParkedOrderField.MinVolume);
  writer.Key("ContingentCondition");
  write_value(&writer, aParkedOrderField.ContingentCondition);
  writer.Key("StopPrice");
  write_value(&writer, aParkedOrderField.StopPrice);
  writer.Key("ForceCloseReason");
  write_value(&writer, aParkedOrderField.ForceCloseReason);
  writer.Key("IsAutoSuspend");
  write_value(&writer, aParkedOrderField.IsAutoSuspend);
  writer.Key("BusinessUnit");
  write_value(&writer, aParkedOrderField.BusinessUnit);
  writer.Key("RequestID");
  write_value(&writer, aParkedOrderField.RequestID);
  writer.Key("UserForceClose");
  write_value(&writer, aParkedOrderField.UserForceClose);
  writer.Key("ExchangeID");
  write_value(&writer, aParkedOrderField.ExchangeID);
  writer.Key("ParkedOrderID");
  write_value(&writer, aParkedOrderField.ParkedOrderID);
  writer.Key("UserType");
  write_value(&writer, aParkedOrderField.UserType);
  writer.Key("Status");
  write_value(&writer, aParkedOrderField.Status);
  writer.Key("ErrorID");
  write_value(&writer, aParkedOrderField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aParkedOrderField.ErrorMsg);
  writer.Key("IsSwapOrder");
  write_value(&writer, aParkedOrderField.IsSwapOrder);
  writer.Key("AccountID");
  write_value(&writer, aParkedOrderField.AccountID);
  writer.Key("CurrencyID");
  write_value(&writer, aParkedOrderField.CurrencyID);
  writer.Key("ClientID");
  write_value(&writer, aParkedOrderField.ClientID);
  writer.Key("InvestUnitID");
  write_value(&writer, aParkedOrderField.InvestUnitID);
  writer.Key("IPAddress");
  write_value(&writer, aParkedOrderField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aParkedOrderField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcParkedOrderActionField const &aParkedOrderActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcParkedOrderActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aParkedOrderActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aParkedOrderActionField.InvestorID);
  writer.Key("OrderActionRef");
  write_value(&writer, aParkedOrderActionField.OrderActionRef);
  writer.Key("OrderRef");
  write_value(&writer, aParkedOrderActionField.OrderRef);
  writer.Key("RequestID");
  write_value(&writer, aParkedOrderActionField.RequestID);
  writer.Key("FrontID");
  write_value(&writer, aParkedOrderActionField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aParkedOrderActionField.SessionID);
  writer.Key("ExchangeID");
  write_value(&writer, aParkedOrderActionField.ExchangeID);
  writer.Key("OrderSysID");
  write_value(&writer, aParkedOrderActionField.OrderSysID);
  writer.Key("ActionFlag");
  write_value(&writer, aParkedOrderActionField.ActionFlag);
  writer.Key("LimitPrice");
  write_value(&writer, aParkedOrderActionField.LimitPrice);
  writer.Key("VolumeChange");
  write_value(&writer, aParkedOrderActionField.VolumeChange);
  writer.Key("UserID");
  write_value(&writer, aParkedOrderActionField.UserID);
  writer.Key("InstrumentID");
  write_value(&writer, aParkedOrderActionField.InstrumentID);
  writer.Key("ParkedOrderActionID");
  write_value(&writer, aParkedOrderActionField.ParkedOrderActionID);
  writer.Key("UserType");
  write_value(&writer, aParkedOrderActionField.UserType);
  writer.Key("Status");
  write_value(&writer, aParkedOrderActionField.Status);
  writer.Key("ErrorID");
  write_value(&writer, aParkedOrderActionField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aParkedOrderActionField.ErrorMsg);
  writer.Key("InvestUnitID");
  write_value(&writer, aParkedOrderActionField.InvestUnitID);
  writer.Key("IPAddress");
  write_value(&writer, aParkedOrderActionField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aParkedOrderActionField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryParkedOrderField const &aQryParkedOrderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryParkedOrderField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryParkedOrderField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryParkedOrderField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryParkedOrderField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryParkedOrderField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aQryParkedOrderField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryParkedOrderActionField const
                                    &aQryParkedOrderActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryParkedOrderActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryParkedOrderActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryParkedOrderActionField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryParkedOrderActionField.InstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryParkedOrderActionField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aQryParkedOrderActionField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcRemoveParkedOrderField const &aRemoveParkedOrderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcRemoveParkedOrderField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aRemoveParkedOrderField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aRemoveParkedOrderField.InvestorID);
  writer.Key("ParkedOrderID");
  write_value(&writer, aRemoveParkedOrderField.ParkedOrderID);
  writer.Key("InvestUnitID");
  write_value(&writer, aRemoveParkedOrderField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcRemoveParkedOrderActionField const
                                    &aRemoveParkedOrderActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcRemoveParkedOrderActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aRemoveParkedOrderActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aRemoveParkedOrderActionField.InvestorID);
  writer.Key("ParkedOrderActionID");
  write_value(&writer, aRemoveParkedOrderActionField.ParkedOrderActionID);
  writer.Key("InvestUnitID");
  write_value(&writer, aRemoveParkedOrderActionField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcInvestorWithdrawAlgorithmField const &
                                    aInvestorWithdrawAlgorithmField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInvestorWithdrawAlgorithmField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aInvestorWithdrawAlgorithmField.BrokerID);
  writer.Key("InvestorRange");
  write_value(&writer, aInvestorWithdrawAlgorithmField.InvestorRange);
  writer.Key("InvestorID");
  write_value(&writer, aInvestorWithdrawAlgorithmField.InvestorID);
  writer.Key("UsingRatio");
  write_value(&writer, aInvestorWithdrawAlgorithmField.UsingRatio);
  writer.Key("CurrencyID");
  write_value(&writer, aInvestorWithdrawAlgorithmField.CurrencyID);
  writer.Key("FundMortgageRatio");
  write_value(&writer, aInvestorWithdrawAlgorithmField.FundMortgageRatio);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryInvestorPositionCombineDetailField const
               &aQryInvestorPositionCombineDetailField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryInvestorPositionCombineDetailField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryInvestorPositionCombineDetailField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryInvestorPositionCombineDetailField.InvestorID);
  writer.Key("CombInstrumentID");
  write_value(&writer, aQryInvestorPositionCombineDetailField.CombInstrumentID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryInvestorPositionCombineDetailField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aQryInvestorPositionCombineDetailField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcMarketDataAveragePriceField const
                                    &aMarketDataAveragePriceField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcMarketDataAveragePriceField");
  writer.StartObject();
  writer.Key("AveragePrice");
  write_value(&writer, aMarketDataAveragePriceField.AveragePrice);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcVerifyInvestorPasswordField const
                                    &aVerifyInvestorPasswordField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcVerifyInvestorPasswordField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aVerifyInvestorPasswordField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aVerifyInvestorPasswordField.InvestorID);
  writer.Key("Password");
  write_value(&writer, aVerifyInvestorPasswordField.Password);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcUserIPField const &aUserIPField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcUserIPField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aUserIPField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aUserIPField.UserID);
  writer.Key("IPAddress");
  write_value(&writer, aUserIPField.IPAddress);
  writer.Key("IPMask");
  write_value(&writer, aUserIPField.IPMask);
  writer.Key("MacAddress");
  write_value(&writer, aUserIPField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcTradingNoticeInfoField const &aTradingNoticeInfoField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTradingNoticeInfoField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aTradingNoticeInfoField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aTradingNoticeInfoField.InvestorID);
  writer.Key("SendTime");
  write_value(&writer, aTradingNoticeInfoField.SendTime);
  writer.Key("FieldContent");
  write_value(&writer, aTradingNoticeInfoField.FieldContent);
  writer.Key("SequenceSeries");
  write_value(&writer, aTradingNoticeInfoField.SequenceSeries);
  writer.Key("SequenceNo");
  write_value(&writer, aTradingNoticeInfoField.SequenceNo);
  writer.Key("InvestUnitID");
  write_value(&writer, aTradingNoticeInfoField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcTradingNoticeField const &aTradingNoticeField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTradingNoticeField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aTradingNoticeField.BrokerID);
  writer.Key("InvestorRange");
  write_value(&writer, aTradingNoticeField.InvestorRange);
  writer.Key("InvestorID");
  write_value(&writer, aTradingNoticeField.InvestorID);
  writer.Key("SequenceSeries");
  write_value(&writer, aTradingNoticeField.SequenceSeries);
  writer.Key("UserID");
  write_value(&writer, aTradingNoticeField.UserID);
  writer.Key("SendTime");
  write_value(&writer, aTradingNoticeField.SendTime);
  writer.Key("SequenceNo");
  write_value(&writer, aTradingNoticeField.SequenceNo);
  writer.Key("FieldContent");
  write_value(&writer, aTradingNoticeField.FieldContent);
  writer.Key("InvestUnitID");
  write_value(&writer, aTradingNoticeField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryTradingNoticeField const &aQryTradingNoticeField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryTradingNoticeField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryTradingNoticeField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryTradingNoticeField.InvestorID);
  writer.Key("InvestUnitID");
  write_value(&writer, aQryTradingNoticeField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryErrOrderField const &aQryErrOrderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryErrOrderField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryErrOrderField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryErrOrderField.InvestorID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcErrOrderField const &aErrOrderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcErrOrderField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aErrOrderField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aErrOrderField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aErrOrderField.InstrumentID);
  writer.Key("OrderRef");
  write_value(&writer, aErrOrderField.OrderRef);
  writer.Key("UserID");
  write_value(&writer, aErrOrderField.UserID);
  writer.Key("OrderPriceType");
  write_value(&writer, aErrOrderField.OrderPriceType);
  writer.Key("Direction");
  write_value(&writer, aErrOrderField.Direction);
  writer.Key("CombOffsetFlag");
  write_value(&writer, aErrOrderField.CombOffsetFlag);
  writer.Key("CombHedgeFlag");
  write_value(&writer, aErrOrderField.CombHedgeFlag);
  writer.Key("LimitPrice");
  write_value(&writer, aErrOrderField.LimitPrice);
  writer.Key("VolumeTotalOriginal");
  write_value(&writer, aErrOrderField.VolumeTotalOriginal);
  writer.Key("TimeCondition");
  write_value(&writer, aErrOrderField.TimeCondition);
  writer.Key("GTDDate");
  write_value(&writer, aErrOrderField.GTDDate);
  writer.Key("VolumeCondition");
  write_value(&writer, aErrOrderField.VolumeCondition);
  writer.Key("MinVolume");
  write_value(&writer, aErrOrderField.MinVolume);
  writer.Key("ContingentCondition");
  write_value(&writer, aErrOrderField.ContingentCondition);
  writer.Key("StopPrice");
  write_value(&writer, aErrOrderField.StopPrice);
  writer.Key("ForceCloseReason");
  write_value(&writer, aErrOrderField.ForceCloseReason);
  writer.Key("IsAutoSuspend");
  write_value(&writer, aErrOrderField.IsAutoSuspend);
  writer.Key("BusinessUnit");
  write_value(&writer, aErrOrderField.BusinessUnit);
  writer.Key("RequestID");
  write_value(&writer, aErrOrderField.RequestID);
  writer.Key("UserForceClose");
  write_value(&writer, aErrOrderField.UserForceClose);
  writer.Key("ErrorID");
  write_value(&writer, aErrOrderField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aErrOrderField.ErrorMsg);
  writer.Key("IsSwapOrder");
  write_value(&writer, aErrOrderField.IsSwapOrder);
  writer.Key("ExchangeID");
  write_value(&writer, aErrOrderField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aErrOrderField.InvestUnitID);
  writer.Key("AccountID");
  write_value(&writer, aErrOrderField.AccountID);
  writer.Key("CurrencyID");
  write_value(&writer, aErrOrderField.CurrencyID);
  writer.Key("ClientID");
  write_value(&writer, aErrOrderField.ClientID);
  writer.Key("IPAddress");
  write_value(&writer, aErrOrderField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aErrOrderField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcErrorConditionalOrderField const
                                    &aErrorConditionalOrderField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcErrorConditionalOrderField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aErrorConditionalOrderField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aErrorConditionalOrderField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aErrorConditionalOrderField.InstrumentID);
  writer.Key("OrderRef");
  write_value(&writer, aErrorConditionalOrderField.OrderRef);
  writer.Key("UserID");
  write_value(&writer, aErrorConditionalOrderField.UserID);
  writer.Key("OrderPriceType");
  write_value(&writer, aErrorConditionalOrderField.OrderPriceType);
  writer.Key("Direction");
  write_value(&writer, aErrorConditionalOrderField.Direction);
  writer.Key("CombOffsetFlag");
  write_value(&writer, aErrorConditionalOrderField.CombOffsetFlag);
  writer.Key("CombHedgeFlag");
  write_value(&writer, aErrorConditionalOrderField.CombHedgeFlag);
  writer.Key("LimitPrice");
  write_value(&writer, aErrorConditionalOrderField.LimitPrice);
  writer.Key("VolumeTotalOriginal");
  write_value(&writer, aErrorConditionalOrderField.VolumeTotalOriginal);
  writer.Key("TimeCondition");
  write_value(&writer, aErrorConditionalOrderField.TimeCondition);
  writer.Key("GTDDate");
  write_value(&writer, aErrorConditionalOrderField.GTDDate);
  writer.Key("VolumeCondition");
  write_value(&writer, aErrorConditionalOrderField.VolumeCondition);
  writer.Key("MinVolume");
  write_value(&writer, aErrorConditionalOrderField.MinVolume);
  writer.Key("ContingentCondition");
  write_value(&writer, aErrorConditionalOrderField.ContingentCondition);
  writer.Key("StopPrice");
  write_value(&writer, aErrorConditionalOrderField.StopPrice);
  writer.Key("ForceCloseReason");
  write_value(&writer, aErrorConditionalOrderField.ForceCloseReason);
  writer.Key("IsAutoSuspend");
  write_value(&writer, aErrorConditionalOrderField.IsAutoSuspend);
  writer.Key("BusinessUnit");
  write_value(&writer, aErrorConditionalOrderField.BusinessUnit);
  writer.Key("RequestID");
  write_value(&writer, aErrorConditionalOrderField.RequestID);
  writer.Key("OrderLocalID");
  write_value(&writer, aErrorConditionalOrderField.OrderLocalID);
  writer.Key("ExchangeID");
  write_value(&writer, aErrorConditionalOrderField.ExchangeID);
  writer.Key("ParticipantID");
  write_value(&writer, aErrorConditionalOrderField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aErrorConditionalOrderField.ClientID);
  writer.Key("ExchangeInstID");
  write_value(&writer, aErrorConditionalOrderField.ExchangeInstID);
  writer.Key("TraderID");
  write_value(&writer, aErrorConditionalOrderField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aErrorConditionalOrderField.InstallID);
  writer.Key("OrderSubmitStatus");
  write_value(&writer, aErrorConditionalOrderField.OrderSubmitStatus);
  writer.Key("NotifySequence");
  write_value(&writer, aErrorConditionalOrderField.NotifySequence);
  writer.Key("TradingDay");
  write_value(&writer, aErrorConditionalOrderField.TradingDay);
  writer.Key("SettlementID");
  write_value(&writer, aErrorConditionalOrderField.SettlementID);
  writer.Key("OrderSysID");
  write_value(&writer, aErrorConditionalOrderField.OrderSysID);
  writer.Key("OrderSource");
  write_value(&writer, aErrorConditionalOrderField.OrderSource);
  writer.Key("OrderStatus");
  write_value(&writer, aErrorConditionalOrderField.OrderStatus);
  writer.Key("OrderType");
  write_value(&writer, aErrorConditionalOrderField.OrderType);
  writer.Key("VolumeTraded");
  write_value(&writer, aErrorConditionalOrderField.VolumeTraded);
  writer.Key("VolumeTotal");
  write_value(&writer, aErrorConditionalOrderField.VolumeTotal);
  writer.Key("InsertDate");
  write_value(&writer, aErrorConditionalOrderField.InsertDate);
  writer.Key("InsertTime");
  write_value(&writer, aErrorConditionalOrderField.InsertTime);
  writer.Key("ActiveTime");
  write_value(&writer, aErrorConditionalOrderField.ActiveTime);
  writer.Key("SuspendTime");
  write_value(&writer, aErrorConditionalOrderField.SuspendTime);
  writer.Key("UpdateTime");
  write_value(&writer, aErrorConditionalOrderField.UpdateTime);
  writer.Key("CancelTime");
  write_value(&writer, aErrorConditionalOrderField.CancelTime);
  writer.Key("ActiveTraderID");
  write_value(&writer, aErrorConditionalOrderField.ActiveTraderID);
  writer.Key("ClearingPartID");
  write_value(&writer, aErrorConditionalOrderField.ClearingPartID);
  writer.Key("SequenceNo");
  write_value(&writer, aErrorConditionalOrderField.SequenceNo);
  writer.Key("FrontID");
  write_value(&writer, aErrorConditionalOrderField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aErrorConditionalOrderField.SessionID);
  writer.Key("UserProductInfo");
  write_value(&writer, aErrorConditionalOrderField.UserProductInfo);
  writer.Key("StatusMsg");
  write_value(&writer, aErrorConditionalOrderField.StatusMsg);
  writer.Key("UserForceClose");
  write_value(&writer, aErrorConditionalOrderField.UserForceClose);
  writer.Key("ActiveUserID");
  write_value(&writer, aErrorConditionalOrderField.ActiveUserID);
  writer.Key("BrokerOrderSeq");
  write_value(&writer, aErrorConditionalOrderField.BrokerOrderSeq);
  writer.Key("RelativeOrderSysID");
  write_value(&writer, aErrorConditionalOrderField.RelativeOrderSysID);
  writer.Key("ZCETotalTradedVolume");
  write_value(&writer, aErrorConditionalOrderField.ZCETotalTradedVolume);
  writer.Key("ErrorID");
  write_value(&writer, aErrorConditionalOrderField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aErrorConditionalOrderField.ErrorMsg);
  writer.Key("IsSwapOrder");
  write_value(&writer, aErrorConditionalOrderField.IsSwapOrder);
  writer.Key("BranchID");
  write_value(&writer, aErrorConditionalOrderField.BranchID);
  writer.Key("InvestUnitID");
  write_value(&writer, aErrorConditionalOrderField.InvestUnitID);
  writer.Key("AccountID");
  write_value(&writer, aErrorConditionalOrderField.AccountID);
  writer.Key("CurrencyID");
  write_value(&writer, aErrorConditionalOrderField.CurrencyID);
  writer.Key("IPAddress");
  write_value(&writer, aErrorConditionalOrderField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aErrorConditionalOrderField.MacAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryErrOrderActionField const &aQryErrOrderActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryErrOrderActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryErrOrderActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryErrOrderActionField.InvestorID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcErrOrderActionField const &aErrOrderActionField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcErrOrderActionField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aErrOrderActionField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aErrOrderActionField.InvestorID);
  writer.Key("OrderActionRef");
  write_value(&writer, aErrOrderActionField.OrderActionRef);
  writer.Key("OrderRef");
  write_value(&writer, aErrOrderActionField.OrderRef);
  writer.Key("RequestID");
  write_value(&writer, aErrOrderActionField.RequestID);
  writer.Key("FrontID");
  write_value(&writer, aErrOrderActionField.FrontID);
  writer.Key("SessionID");
  write_value(&writer, aErrOrderActionField.SessionID);
  writer.Key("ExchangeID");
  write_value(&writer, aErrOrderActionField.ExchangeID);
  writer.Key("OrderSysID");
  write_value(&writer, aErrOrderActionField.OrderSysID);
  writer.Key("ActionFlag");
  write_value(&writer, aErrOrderActionField.ActionFlag);
  writer.Key("LimitPrice");
  write_value(&writer, aErrOrderActionField.LimitPrice);
  writer.Key("VolumeChange");
  write_value(&writer, aErrOrderActionField.VolumeChange);
  writer.Key("ActionDate");
  write_value(&writer, aErrOrderActionField.ActionDate);
  writer.Key("ActionTime");
  write_value(&writer, aErrOrderActionField.ActionTime);
  writer.Key("TraderID");
  write_value(&writer, aErrOrderActionField.TraderID);
  writer.Key("InstallID");
  write_value(&writer, aErrOrderActionField.InstallID);
  writer.Key("OrderLocalID");
  write_value(&writer, aErrOrderActionField.OrderLocalID);
  writer.Key("ActionLocalID");
  write_value(&writer, aErrOrderActionField.ActionLocalID);
  writer.Key("ParticipantID");
  write_value(&writer, aErrOrderActionField.ParticipantID);
  writer.Key("ClientID");
  write_value(&writer, aErrOrderActionField.ClientID);
  writer.Key("BusinessUnit");
  write_value(&writer, aErrOrderActionField.BusinessUnit);
  writer.Key("OrderActionStatus");
  write_value(&writer, aErrOrderActionField.OrderActionStatus);
  writer.Key("UserID");
  write_value(&writer, aErrOrderActionField.UserID);
  writer.Key("StatusMsg");
  write_value(&writer, aErrOrderActionField.StatusMsg);
  writer.Key("InstrumentID");
  write_value(&writer, aErrOrderActionField.InstrumentID);
  writer.Key("BranchID");
  write_value(&writer, aErrOrderActionField.BranchID);
  writer.Key("InvestUnitID");
  write_value(&writer, aErrOrderActionField.InvestUnitID);
  writer.Key("IPAddress");
  write_value(&writer, aErrOrderActionField.IPAddress);
  writer.Key("MacAddress");
  write_value(&writer, aErrOrderActionField.MacAddress);
  writer.Key("ErrorID");
  write_value(&writer, aErrOrderActionField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aErrOrderActionField.ErrorMsg);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryExchangeSequenceField const
                                    &aQryExchangeSequenceField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryExchangeSequenceField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aQryExchangeSequenceField.ExchangeID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcExchangeSequenceField const &aExchangeSequenceField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcExchangeSequenceField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aExchangeSequenceField.ExchangeID);
  writer.Key("SequenceNo");
  write_value(&writer, aExchangeSequenceField.SequenceNo);
  writer.Key("MarketStatus");
  write_value(&writer, aExchangeSequenceField.MarketStatus);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQueryMaxOrderVolumeWithPriceField const
               &aQueryMaxOrderVolumeWithPriceField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQueryMaxOrderVolumeWithPriceField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQueryMaxOrderVolumeWithPriceField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQueryMaxOrderVolumeWithPriceField.InvestorID);
  writer.Key("InstrumentID");
  write_value(&writer, aQueryMaxOrderVolumeWithPriceField.InstrumentID);
  writer.Key("Direction");
  write_value(&writer, aQueryMaxOrderVolumeWithPriceField.Direction);
  writer.Key("OffsetFlag");
  write_value(&writer, aQueryMaxOrderVolumeWithPriceField.OffsetFlag);
  writer.Key("HedgeFlag");
  write_value(&writer, aQueryMaxOrderVolumeWithPriceField.HedgeFlag);
  writer.Key("MaxVolume");
  write_value(&writer, aQueryMaxOrderVolumeWithPriceField.MaxVolume);
  writer.Key("Price");
  write_value(&writer, aQueryMaxOrderVolumeWithPriceField.Price);
  writer.Key("ExchangeID");
  write_value(&writer, aQueryMaxOrderVolumeWithPriceField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aQueryMaxOrderVolumeWithPriceField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryBrokerTradingParamsField const
                                    &aQryBrokerTradingParamsField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryBrokerTradingParamsField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryBrokerTradingParamsField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryBrokerTradingParamsField.InvestorID);
  writer.Key("CurrencyID");
  write_value(&writer, aQryBrokerTradingParamsField.CurrencyID);
  writer.Key("AccountID");
  write_value(&writer, aQryBrokerTradingParamsField.AccountID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcBrokerTradingParamsField const
                                    &aBrokerTradingParamsField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcBrokerTradingParamsField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aBrokerTradingParamsField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aBrokerTradingParamsField.InvestorID);
  writer.Key("MarginPriceType");
  write_value(&writer, aBrokerTradingParamsField.MarginPriceType);
  writer.Key("Algorithm");
  write_value(&writer, aBrokerTradingParamsField.Algorithm);
  writer.Key("AvailIncludeCloseProfit");
  write_value(&writer, aBrokerTradingParamsField.AvailIncludeCloseProfit);
  writer.Key("CurrencyID");
  write_value(&writer, aBrokerTradingParamsField.CurrencyID);
  writer.Key("OptionRoyaltyPriceType");
  write_value(&writer, aBrokerTradingParamsField.OptionRoyaltyPriceType);
  writer.Key("AccountID");
  write_value(&writer, aBrokerTradingParamsField.AccountID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryBrokerTradingAlgosField const
                                    &aQryBrokerTradingAlgosField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryBrokerTradingAlgosField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryBrokerTradingAlgosField.BrokerID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryBrokerTradingAlgosField.ExchangeID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryBrokerTradingAlgosField.InstrumentID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcBrokerTradingAlgosField const
                                    &aBrokerTradingAlgosField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcBrokerTradingAlgosField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aBrokerTradingAlgosField.BrokerID);
  writer.Key("ExchangeID");
  write_value(&writer, aBrokerTradingAlgosField.ExchangeID);
  writer.Key("InstrumentID");
  write_value(&writer, aBrokerTradingAlgosField.InstrumentID);
  writer.Key("HandlePositionAlgoID");
  write_value(&writer, aBrokerTradingAlgosField.HandlePositionAlgoID);
  writer.Key("FindMarginRateAlgoID");
  write_value(&writer, aBrokerTradingAlgosField.FindMarginRateAlgoID);
  writer.Key("HandleTradingAccountAlgoID");
  write_value(&writer, aBrokerTradingAlgosField.HandleTradingAccountAlgoID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQueryBrokerDepositField const
                                    &aQueryBrokerDepositField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQueryBrokerDepositField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQueryBrokerDepositField.BrokerID);
  writer.Key("ExchangeID");
  write_value(&writer, aQueryBrokerDepositField.ExchangeID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcBrokerDepositField const &aBrokerDepositField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcBrokerDepositField");
  writer.StartObject();
  writer.Key("TradingDay");
  write_value(&writer, aBrokerDepositField.TradingDay);
  writer.Key("BrokerID");
  write_value(&writer, aBrokerDepositField.BrokerID);
  writer.Key("ParticipantID");
  write_value(&writer, aBrokerDepositField.ParticipantID);
  writer.Key("ExchangeID");
  write_value(&writer, aBrokerDepositField.ExchangeID);
  writer.Key("PreBalance");
  write_value(&writer, aBrokerDepositField.PreBalance);
  writer.Key("CurrMargin");
  write_value(&writer, aBrokerDepositField.CurrMargin);
  writer.Key("CloseProfit");
  write_value(&writer, aBrokerDepositField.CloseProfit);
  writer.Key("Balance");
  write_value(&writer, aBrokerDepositField.Balance);
  writer.Key("Deposit");
  write_value(&writer, aBrokerDepositField.Deposit);
  writer.Key("Withdraw");
  write_value(&writer, aBrokerDepositField.Withdraw);
  writer.Key("Available");
  write_value(&writer, aBrokerDepositField.Available);
  writer.Key("Reserve");
  write_value(&writer, aBrokerDepositField.Reserve);
  writer.Key("FrozenMargin");
  write_value(&writer, aBrokerDepositField.FrozenMargin);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryCFMMCBrokerKeyField const &aQryCFMMCBrokerKeyField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryCFMMCBrokerKeyField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryCFMMCBrokerKeyField.BrokerID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcCFMMCBrokerKeyField const &aCFMMCBrokerKeyField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcCFMMCBrokerKeyField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aCFMMCBrokerKeyField.BrokerID);
  writer.Key("ParticipantID");
  write_value(&writer, aCFMMCBrokerKeyField.ParticipantID);
  writer.Key("CreateDate");
  write_value(&writer, aCFMMCBrokerKeyField.CreateDate);
  writer.Key("CreateTime");
  write_value(&writer, aCFMMCBrokerKeyField.CreateTime);
  writer.Key("KeyID");
  write_value(&writer, aCFMMCBrokerKeyField.KeyID);
  writer.Key("CurrentKey");
  write_value(&writer, aCFMMCBrokerKeyField.CurrentKey);
  writer.Key("KeyKind");
  write_value(&writer, aCFMMCBrokerKeyField.KeyKind);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcCFMMCTradingAccountKeyField const
                                    &aCFMMCTradingAccountKeyField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcCFMMCTradingAccountKeyField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aCFMMCTradingAccountKeyField.BrokerID);
  writer.Key("ParticipantID");
  write_value(&writer, aCFMMCTradingAccountKeyField.ParticipantID);
  writer.Key("AccountID");
  write_value(&writer, aCFMMCTradingAccountKeyField.AccountID);
  writer.Key("KeyID");
  write_value(&writer, aCFMMCTradingAccountKeyField.KeyID);
  writer.Key("CurrentKey");
  write_value(&writer, aCFMMCTradingAccountKeyField.CurrentKey);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryCFMMCTradingAccountKeyField const &
                                    aQryCFMMCTradingAccountKeyField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryCFMMCTradingAccountKeyField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryCFMMCTradingAccountKeyField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryCFMMCTradingAccountKeyField.InvestorID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcBrokerUserOTPParamField const
                                    &aBrokerUserOTPParamField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcBrokerUserOTPParamField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aBrokerUserOTPParamField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aBrokerUserOTPParamField.UserID);
  writer.Key("OTPVendorsID");
  write_value(&writer, aBrokerUserOTPParamField.OTPVendorsID);
  writer.Key("SerialNumber");
  write_value(&writer, aBrokerUserOTPParamField.SerialNumber);
  writer.Key("AuthKey");
  write_value(&writer, aBrokerUserOTPParamField.AuthKey);
  writer.Key("LastDrift");
  write_value(&writer, aBrokerUserOTPParamField.LastDrift);
  writer.Key("LastSuccess");
  write_value(&writer, aBrokerUserOTPParamField.LastSuccess);
  writer.Key("OTPType");
  write_value(&writer, aBrokerUserOTPParamField.OTPType);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcManualSyncBrokerUserOTPField const
                                    &aManualSyncBrokerUserOTPField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcManualSyncBrokerUserOTPField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aManualSyncBrokerUserOTPField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aManualSyncBrokerUserOTPField.UserID);
  writer.Key("OTPType");
  write_value(&writer, aManualSyncBrokerUserOTPField.OTPType);
  writer.Key("FirstOTP");
  write_value(&writer, aManualSyncBrokerUserOTPField.FirstOTP);
  writer.Key("SecondOTP");
  write_value(&writer, aManualSyncBrokerUserOTPField.SecondOTP);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcCommRateModelField const &aCommRateModelField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcCommRateModelField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aCommRateModelField.BrokerID);
  writer.Key("CommModelID");
  write_value(&writer, aCommRateModelField.CommModelID);
  writer.Key("CommModelName");
  write_value(&writer, aCommRateModelField.CommModelName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryCommRateModelField const &aQryCommRateModelField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryCommRateModelField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryCommRateModelField.BrokerID);
  writer.Key("CommModelID");
  write_value(&writer, aQryCommRateModelField.CommModelID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcMarginModelField const &aMarginModelField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcMarginModelField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aMarginModelField.BrokerID);
  writer.Key("MarginModelID");
  write_value(&writer, aMarginModelField.MarginModelID);
  writer.Key("MarginModelName");
  write_value(&writer, aMarginModelField.MarginModelName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryMarginModelField const &aQryMarginModelField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryMarginModelField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryMarginModelField.BrokerID);
  writer.Key("MarginModelID");
  write_value(&writer, aQryMarginModelField.MarginModelID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcEWarrantOffsetField const &aEWarrantOffsetField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcEWarrantOffsetField");
  writer.StartObject();
  writer.Key("TradingDay");
  write_value(&writer, aEWarrantOffsetField.TradingDay);
  writer.Key("BrokerID");
  write_value(&writer, aEWarrantOffsetField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aEWarrantOffsetField.InvestorID);
  writer.Key("ExchangeID");
  write_value(&writer, aEWarrantOffsetField.ExchangeID);
  writer.Key("InstrumentID");
  write_value(&writer, aEWarrantOffsetField.InstrumentID);
  writer.Key("Direction");
  write_value(&writer, aEWarrantOffsetField.Direction);
  writer.Key("HedgeFlag");
  write_value(&writer, aEWarrantOffsetField.HedgeFlag);
  writer.Key("Volume");
  write_value(&writer, aEWarrantOffsetField.Volume);
  writer.Key("InvestUnitID");
  write_value(&writer, aEWarrantOffsetField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryEWarrantOffsetField const &aQryEWarrantOffsetField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryEWarrantOffsetField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryEWarrantOffsetField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryEWarrantOffsetField.InvestorID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryEWarrantOffsetField.ExchangeID);
  writer.Key("InstrumentID");
  write_value(&writer, aQryEWarrantOffsetField.InstrumentID);
  writer.Key("InvestUnitID");
  write_value(&writer, aQryEWarrantOffsetField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryInvestorProductGroupMarginField const
               &aQryInvestorProductGroupMarginField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryInvestorProductGroupMarginField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryInvestorProductGroupMarginField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQryInvestorProductGroupMarginField.InvestorID);
  writer.Key("ProductGroupID");
  write_value(&writer, aQryInvestorProductGroupMarginField.ProductGroupID);
  writer.Key("HedgeFlag");
  write_value(&writer, aQryInvestorProductGroupMarginField.HedgeFlag);
  writer.Key("ExchangeID");
  write_value(&writer, aQryInvestorProductGroupMarginField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aQryInvestorProductGroupMarginField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcInvestorProductGroupMarginField const
               &aInvestorProductGroupMarginField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcInvestorProductGroupMarginField");
  writer.StartObject();
  writer.Key("ProductGroupID");
  write_value(&writer, aInvestorProductGroupMarginField.ProductGroupID);
  writer.Key("BrokerID");
  write_value(&writer, aInvestorProductGroupMarginField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aInvestorProductGroupMarginField.InvestorID);
  writer.Key("TradingDay");
  write_value(&writer, aInvestorProductGroupMarginField.TradingDay);
  writer.Key("SettlementID");
  write_value(&writer, aInvestorProductGroupMarginField.SettlementID);
  writer.Key("FrozenMargin");
  write_value(&writer, aInvestorProductGroupMarginField.FrozenMargin);
  writer.Key("LongFrozenMargin");
  write_value(&writer, aInvestorProductGroupMarginField.LongFrozenMargin);
  writer.Key("ShortFrozenMargin");
  write_value(&writer, aInvestorProductGroupMarginField.ShortFrozenMargin);
  writer.Key("UseMargin");
  write_value(&writer, aInvestorProductGroupMarginField.UseMargin);
  writer.Key("LongUseMargin");
  write_value(&writer, aInvestorProductGroupMarginField.LongUseMargin);
  writer.Key("ShortUseMargin");
  write_value(&writer, aInvestorProductGroupMarginField.ShortUseMargin);
  writer.Key("ExchMargin");
  write_value(&writer, aInvestorProductGroupMarginField.ExchMargin);
  writer.Key("LongExchMargin");
  write_value(&writer, aInvestorProductGroupMarginField.LongExchMargin);
  writer.Key("ShortExchMargin");
  write_value(&writer, aInvestorProductGroupMarginField.ShortExchMargin);
  writer.Key("CloseProfit");
  write_value(&writer, aInvestorProductGroupMarginField.CloseProfit);
  writer.Key("FrozenCommission");
  write_value(&writer, aInvestorProductGroupMarginField.FrozenCommission);
  writer.Key("Commission");
  write_value(&writer, aInvestorProductGroupMarginField.Commission);
  writer.Key("FrozenCash");
  write_value(&writer, aInvestorProductGroupMarginField.FrozenCash);
  writer.Key("CashIn");
  write_value(&writer, aInvestorProductGroupMarginField.CashIn);
  writer.Key("PositionProfit");
  write_value(&writer, aInvestorProductGroupMarginField.PositionProfit);
  writer.Key("OffsetAmount");
  write_value(&writer, aInvestorProductGroupMarginField.OffsetAmount);
  writer.Key("LongOffsetAmount");
  write_value(&writer, aInvestorProductGroupMarginField.LongOffsetAmount);
  writer.Key("ShortOffsetAmount");
  write_value(&writer, aInvestorProductGroupMarginField.ShortOffsetAmount);
  writer.Key("ExchOffsetAmount");
  write_value(&writer, aInvestorProductGroupMarginField.ExchOffsetAmount);
  writer.Key("LongExchOffsetAmount");
  write_value(&writer, aInvestorProductGroupMarginField.LongExchOffsetAmount);
  writer.Key("ShortExchOffsetAmount");
  write_value(&writer, aInvestorProductGroupMarginField.ShortExchOffsetAmount);
  writer.Key("HedgeFlag");
  write_value(&writer, aInvestorProductGroupMarginField.HedgeFlag);
  writer.Key("ExchangeID");
  write_value(&writer, aInvestorProductGroupMarginField.ExchangeID);
  writer.Key("InvestUnitID");
  write_value(&writer, aInvestorProductGroupMarginField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQueryCFMMCTradingAccountTokenField const
               &aQueryCFMMCTradingAccountTokenField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQueryCFMMCTradingAccountTokenField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQueryCFMMCTradingAccountTokenField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQueryCFMMCTradingAccountTokenField.InvestorID);
  writer.Key("InvestUnitID");
  write_value(&writer, aQueryCFMMCTradingAccountTokenField.InvestUnitID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcCFMMCTradingAccountTokenField const
                                    &aCFMMCTradingAccountTokenField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcCFMMCTradingAccountTokenField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aCFMMCTradingAccountTokenField.BrokerID);
  writer.Key("ParticipantID");
  write_value(&writer, aCFMMCTradingAccountTokenField.ParticipantID);
  writer.Key("AccountID");
  write_value(&writer, aCFMMCTradingAccountTokenField.AccountID);
  writer.Key("KeyID");
  write_value(&writer, aCFMMCTradingAccountTokenField.KeyID);
  writer.Key("Token");
  write_value(&writer, aCFMMCTradingAccountTokenField.Token);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryProductGroupField const &aQryProductGroupField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryProductGroupField");
  writer.StartObject();
  writer.Key("ProductID");
  write_value(&writer, aQryProductGroupField.ProductID);
  writer.Key("ExchangeID");
  write_value(&writer, aQryProductGroupField.ExchangeID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcProductGroupField const &aProductGroupField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcProductGroupField");
  writer.StartObject();
  writer.Key("ProductID");
  write_value(&writer, aProductGroupField.ProductID);
  writer.Key("ExchangeID");
  write_value(&writer, aProductGroupField.ExchangeID);
  writer.Key("ProductGroupID");
  write_value(&writer, aProductGroupField.ProductGroupID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcBulletinField const &aBulletinField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcBulletinField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aBulletinField.ExchangeID);
  writer.Key("TradingDay");
  write_value(&writer, aBulletinField.TradingDay);
  writer.Key("BulletinID");
  write_value(&writer, aBulletinField.BulletinID);
  writer.Key("SequenceNo");
  write_value(&writer, aBulletinField.SequenceNo);
  writer.Key("NewsType");
  write_value(&writer, aBulletinField.NewsType);
  writer.Key("NewsUrgency");
  write_value(&writer, aBulletinField.NewsUrgency);
  writer.Key("SendTime");
  write_value(&writer, aBulletinField.SendTime);
  writer.Key("Abstract");
  write_value(&writer, aBulletinField.Abstract);
  writer.Key("ComeFrom");
  write_value(&writer, aBulletinField.ComeFrom);
  writer.Key("Content");
  write_value(&writer, aBulletinField.Content);
  writer.Key("URLLink");
  write_value(&writer, aBulletinField.URLLink);
  writer.Key("MarketID");
  write_value(&writer, aBulletinField.MarketID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryBulletinField const &aQryBulletinField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryBulletinField");
  writer.StartObject();
  writer.Key("ExchangeID");
  write_value(&writer, aQryBulletinField.ExchangeID);
  writer.Key("BulletinID");
  write_value(&writer, aQryBulletinField.BulletinID);
  writer.Key("SequenceNo");
  write_value(&writer, aQryBulletinField.SequenceNo);
  writer.Key("NewsType");
  write_value(&writer, aQryBulletinField.NewsType);
  writer.Key("NewsUrgency");
  write_value(&writer, aQryBulletinField.NewsUrgency);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcReqOpenAccountField const &aReqOpenAccountField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReqOpenAccountField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aReqOpenAccountField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aReqOpenAccountField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aReqOpenAccountField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aReqOpenAccountField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aReqOpenAccountField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aReqOpenAccountField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aReqOpenAccountField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aReqOpenAccountField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aReqOpenAccountField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aReqOpenAccountField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aReqOpenAccountField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aReqOpenAccountField.SessionID);
  writer.Key("CustomerName");
  write_value(&writer, aReqOpenAccountField.CustomerName);
  writer.Key("IdCardType");
  write_value(&writer, aReqOpenAccountField.IdCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aReqOpenAccountField.IdentifiedCardNo);
  writer.Key("Gender");
  write_value(&writer, aReqOpenAccountField.Gender);
  writer.Key("CountryCode");
  write_value(&writer, aReqOpenAccountField.CountryCode);
  writer.Key("CustType");
  write_value(&writer, aReqOpenAccountField.CustType);
  writer.Key("Address");
  write_value(&writer, aReqOpenAccountField.Address);
  writer.Key("ZipCode");
  write_value(&writer, aReqOpenAccountField.ZipCode);
  writer.Key("Telephone");
  write_value(&writer, aReqOpenAccountField.Telephone);
  writer.Key("MobilePhone");
  write_value(&writer, aReqOpenAccountField.MobilePhone);
  writer.Key("Fax");
  write_value(&writer, aReqOpenAccountField.Fax);
  writer.Key("EMail");
  write_value(&writer, aReqOpenAccountField.EMail);
  writer.Key("MoneyAccountStatus");
  write_value(&writer, aReqOpenAccountField.MoneyAccountStatus);
  writer.Key("BankAccount");
  write_value(&writer, aReqOpenAccountField.BankAccount);
  writer.Key("BankPassWord");
  write_value(&writer, aReqOpenAccountField.BankPassWord);
  writer.Key("AccountID");
  write_value(&writer, aReqOpenAccountField.AccountID);
  writer.Key("Password");
  write_value(&writer, aReqOpenAccountField.Password);
  writer.Key("InstallID");
  write_value(&writer, aReqOpenAccountField.InstallID);
  writer.Key("VerifyCertNoFlag");
  write_value(&writer, aReqOpenAccountField.VerifyCertNoFlag);
  writer.Key("CurrencyID");
  write_value(&writer, aReqOpenAccountField.CurrencyID);
  writer.Key("CashExchangeCode");
  write_value(&writer, aReqOpenAccountField.CashExchangeCode);
  writer.Key("Digest");
  write_value(&writer, aReqOpenAccountField.Digest);
  writer.Key("BankAccType");
  write_value(&writer, aReqOpenAccountField.BankAccType);
  writer.Key("DeviceID");
  write_value(&writer, aReqOpenAccountField.DeviceID);
  writer.Key("BankSecuAccType");
  write_value(&writer, aReqOpenAccountField.BankSecuAccType);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aReqOpenAccountField.BrokerIDByBank);
  writer.Key("BankSecuAcc");
  write_value(&writer, aReqOpenAccountField.BankSecuAcc);
  writer.Key("BankPwdFlag");
  write_value(&writer, aReqOpenAccountField.BankPwdFlag);
  writer.Key("SecuPwdFlag");
  write_value(&writer, aReqOpenAccountField.SecuPwdFlag);
  writer.Key("OperNo");
  write_value(&writer, aReqOpenAccountField.OperNo);
  writer.Key("TID");
  write_value(&writer, aReqOpenAccountField.TID);
  writer.Key("UserID");
  write_value(&writer, aReqOpenAccountField.UserID);
  writer.Key("LongCustomerName");
  write_value(&writer, aReqOpenAccountField.LongCustomerName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcReqCancelAccountField const &aReqCancelAccountField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReqCancelAccountField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aReqCancelAccountField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aReqCancelAccountField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aReqCancelAccountField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aReqCancelAccountField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aReqCancelAccountField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aReqCancelAccountField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aReqCancelAccountField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aReqCancelAccountField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aReqCancelAccountField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aReqCancelAccountField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aReqCancelAccountField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aReqCancelAccountField.SessionID);
  writer.Key("CustomerName");
  write_value(&writer, aReqCancelAccountField.CustomerName);
  writer.Key("IdCardType");
  write_value(&writer, aReqCancelAccountField.IdCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aReqCancelAccountField.IdentifiedCardNo);
  writer.Key("Gender");
  write_value(&writer, aReqCancelAccountField.Gender);
  writer.Key("CountryCode");
  write_value(&writer, aReqCancelAccountField.CountryCode);
  writer.Key("CustType");
  write_value(&writer, aReqCancelAccountField.CustType);
  writer.Key("Address");
  write_value(&writer, aReqCancelAccountField.Address);
  writer.Key("ZipCode");
  write_value(&writer, aReqCancelAccountField.ZipCode);
  writer.Key("Telephone");
  write_value(&writer, aReqCancelAccountField.Telephone);
  writer.Key("MobilePhone");
  write_value(&writer, aReqCancelAccountField.MobilePhone);
  writer.Key("Fax");
  write_value(&writer, aReqCancelAccountField.Fax);
  writer.Key("EMail");
  write_value(&writer, aReqCancelAccountField.EMail);
  writer.Key("MoneyAccountStatus");
  write_value(&writer, aReqCancelAccountField.MoneyAccountStatus);
  writer.Key("BankAccount");
  write_value(&writer, aReqCancelAccountField.BankAccount);
  writer.Key("BankPassWord");
  write_value(&writer, aReqCancelAccountField.BankPassWord);
  writer.Key("AccountID");
  write_value(&writer, aReqCancelAccountField.AccountID);
  writer.Key("Password");
  write_value(&writer, aReqCancelAccountField.Password);
  writer.Key("InstallID");
  write_value(&writer, aReqCancelAccountField.InstallID);
  writer.Key("VerifyCertNoFlag");
  write_value(&writer, aReqCancelAccountField.VerifyCertNoFlag);
  writer.Key("CurrencyID");
  write_value(&writer, aReqCancelAccountField.CurrencyID);
  writer.Key("CashExchangeCode");
  write_value(&writer, aReqCancelAccountField.CashExchangeCode);
  writer.Key("Digest");
  write_value(&writer, aReqCancelAccountField.Digest);
  writer.Key("BankAccType");
  write_value(&writer, aReqCancelAccountField.BankAccType);
  writer.Key("DeviceID");
  write_value(&writer, aReqCancelAccountField.DeviceID);
  writer.Key("BankSecuAccType");
  write_value(&writer, aReqCancelAccountField.BankSecuAccType);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aReqCancelAccountField.BrokerIDByBank);
  writer.Key("BankSecuAcc");
  write_value(&writer, aReqCancelAccountField.BankSecuAcc);
  writer.Key("BankPwdFlag");
  write_value(&writer, aReqCancelAccountField.BankPwdFlag);
  writer.Key("SecuPwdFlag");
  write_value(&writer, aReqCancelAccountField.SecuPwdFlag);
  writer.Key("OperNo");
  write_value(&writer, aReqCancelAccountField.OperNo);
  writer.Key("TID");
  write_value(&writer, aReqCancelAccountField.TID);
  writer.Key("UserID");
  write_value(&writer, aReqCancelAccountField.UserID);
  writer.Key("LongCustomerName");
  write_value(&writer, aReqCancelAccountField.LongCustomerName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcReqChangeAccountField const &aReqChangeAccountField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReqChangeAccountField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aReqChangeAccountField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aReqChangeAccountField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aReqChangeAccountField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aReqChangeAccountField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aReqChangeAccountField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aReqChangeAccountField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aReqChangeAccountField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aReqChangeAccountField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aReqChangeAccountField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aReqChangeAccountField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aReqChangeAccountField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aReqChangeAccountField.SessionID);
  writer.Key("CustomerName");
  write_value(&writer, aReqChangeAccountField.CustomerName);
  writer.Key("IdCardType");
  write_value(&writer, aReqChangeAccountField.IdCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aReqChangeAccountField.IdentifiedCardNo);
  writer.Key("Gender");
  write_value(&writer, aReqChangeAccountField.Gender);
  writer.Key("CountryCode");
  write_value(&writer, aReqChangeAccountField.CountryCode);
  writer.Key("CustType");
  write_value(&writer, aReqChangeAccountField.CustType);
  writer.Key("Address");
  write_value(&writer, aReqChangeAccountField.Address);
  writer.Key("ZipCode");
  write_value(&writer, aReqChangeAccountField.ZipCode);
  writer.Key("Telephone");
  write_value(&writer, aReqChangeAccountField.Telephone);
  writer.Key("MobilePhone");
  write_value(&writer, aReqChangeAccountField.MobilePhone);
  writer.Key("Fax");
  write_value(&writer, aReqChangeAccountField.Fax);
  writer.Key("EMail");
  write_value(&writer, aReqChangeAccountField.EMail);
  writer.Key("MoneyAccountStatus");
  write_value(&writer, aReqChangeAccountField.MoneyAccountStatus);
  writer.Key("BankAccount");
  write_value(&writer, aReqChangeAccountField.BankAccount);
  writer.Key("BankPassWord");
  write_value(&writer, aReqChangeAccountField.BankPassWord);
  writer.Key("NewBankAccount");
  write_value(&writer, aReqChangeAccountField.NewBankAccount);
  writer.Key("NewBankPassWord");
  write_value(&writer, aReqChangeAccountField.NewBankPassWord);
  writer.Key("AccountID");
  write_value(&writer, aReqChangeAccountField.AccountID);
  writer.Key("Password");
  write_value(&writer, aReqChangeAccountField.Password);
  writer.Key("BankAccType");
  write_value(&writer, aReqChangeAccountField.BankAccType);
  writer.Key("InstallID");
  write_value(&writer, aReqChangeAccountField.InstallID);
  writer.Key("VerifyCertNoFlag");
  write_value(&writer, aReqChangeAccountField.VerifyCertNoFlag);
  writer.Key("CurrencyID");
  write_value(&writer, aReqChangeAccountField.CurrencyID);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aReqChangeAccountField.BrokerIDByBank);
  writer.Key("BankPwdFlag");
  write_value(&writer, aReqChangeAccountField.BankPwdFlag);
  writer.Key("SecuPwdFlag");
  write_value(&writer, aReqChangeAccountField.SecuPwdFlag);
  writer.Key("TID");
  write_value(&writer, aReqChangeAccountField.TID);
  writer.Key("Digest");
  write_value(&writer, aReqChangeAccountField.Digest);
  writer.Key("LongCustomerName");
  write_value(&writer, aReqChangeAccountField.LongCustomerName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcReqTransferField const &aReqTransferField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReqTransferField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aReqTransferField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aReqTransferField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aReqTransferField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aReqTransferField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aReqTransferField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aReqTransferField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aReqTransferField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aReqTransferField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aReqTransferField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aReqTransferField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aReqTransferField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aReqTransferField.SessionID);
  writer.Key("CustomerName");
  write_value(&writer, aReqTransferField.CustomerName);
  writer.Key("IdCardType");
  write_value(&writer, aReqTransferField.IdCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aReqTransferField.IdentifiedCardNo);
  writer.Key("CustType");
  write_value(&writer, aReqTransferField.CustType);
  writer.Key("BankAccount");
  write_value(&writer, aReqTransferField.BankAccount);
  writer.Key("BankPassWord");
  write_value(&writer, aReqTransferField.BankPassWord);
  writer.Key("AccountID");
  write_value(&writer, aReqTransferField.AccountID);
  writer.Key("Password");
  write_value(&writer, aReqTransferField.Password);
  writer.Key("InstallID");
  write_value(&writer, aReqTransferField.InstallID);
  writer.Key("FutureSerial");
  write_value(&writer, aReqTransferField.FutureSerial);
  writer.Key("UserID");
  write_value(&writer, aReqTransferField.UserID);
  writer.Key("VerifyCertNoFlag");
  write_value(&writer, aReqTransferField.VerifyCertNoFlag);
  writer.Key("CurrencyID");
  write_value(&writer, aReqTransferField.CurrencyID);
  writer.Key("TradeAmount");
  write_value(&writer, aReqTransferField.TradeAmount);
  writer.Key("FutureFetchAmount");
  write_value(&writer, aReqTransferField.FutureFetchAmount);
  writer.Key("FeePayFlag");
  write_value(&writer, aReqTransferField.FeePayFlag);
  writer.Key("CustFee");
  write_value(&writer, aReqTransferField.CustFee);
  writer.Key("BrokerFee");
  write_value(&writer, aReqTransferField.BrokerFee);
  writer.Key("Message");
  write_value(&writer, aReqTransferField.Message);
  writer.Key("Digest");
  write_value(&writer, aReqTransferField.Digest);
  writer.Key("BankAccType");
  write_value(&writer, aReqTransferField.BankAccType);
  writer.Key("DeviceID");
  write_value(&writer, aReqTransferField.DeviceID);
  writer.Key("BankSecuAccType");
  write_value(&writer, aReqTransferField.BankSecuAccType);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aReqTransferField.BrokerIDByBank);
  writer.Key("BankSecuAcc");
  write_value(&writer, aReqTransferField.BankSecuAcc);
  writer.Key("BankPwdFlag");
  write_value(&writer, aReqTransferField.BankPwdFlag);
  writer.Key("SecuPwdFlag");
  write_value(&writer, aReqTransferField.SecuPwdFlag);
  writer.Key("OperNo");
  write_value(&writer, aReqTransferField.OperNo);
  writer.Key("RequestID");
  write_value(&writer, aReqTransferField.RequestID);
  writer.Key("TID");
  write_value(&writer, aReqTransferField.TID);
  writer.Key("TransferStatus");
  write_value(&writer, aReqTransferField.TransferStatus);
  writer.Key("LongCustomerName");
  write_value(&writer, aReqTransferField.LongCustomerName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcRspTransferField const &aRspTransferField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcRspTransferField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aRspTransferField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aRspTransferField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aRspTransferField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aRspTransferField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aRspTransferField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aRspTransferField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aRspTransferField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aRspTransferField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aRspTransferField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aRspTransferField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aRspTransferField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aRspTransferField.SessionID);
  writer.Key("CustomerName");
  write_value(&writer, aRspTransferField.CustomerName);
  writer.Key("IdCardType");
  write_value(&writer, aRspTransferField.IdCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aRspTransferField.IdentifiedCardNo);
  writer.Key("CustType");
  write_value(&writer, aRspTransferField.CustType);
  writer.Key("BankAccount");
  write_value(&writer, aRspTransferField.BankAccount);
  writer.Key("BankPassWord");
  write_value(&writer, aRspTransferField.BankPassWord);
  writer.Key("AccountID");
  write_value(&writer, aRspTransferField.AccountID);
  writer.Key("Password");
  write_value(&writer, aRspTransferField.Password);
  writer.Key("InstallID");
  write_value(&writer, aRspTransferField.InstallID);
  writer.Key("FutureSerial");
  write_value(&writer, aRspTransferField.FutureSerial);
  writer.Key("UserID");
  write_value(&writer, aRspTransferField.UserID);
  writer.Key("VerifyCertNoFlag");
  write_value(&writer, aRspTransferField.VerifyCertNoFlag);
  writer.Key("CurrencyID");
  write_value(&writer, aRspTransferField.CurrencyID);
  writer.Key("TradeAmount");
  write_value(&writer, aRspTransferField.TradeAmount);
  writer.Key("FutureFetchAmount");
  write_value(&writer, aRspTransferField.FutureFetchAmount);
  writer.Key("FeePayFlag");
  write_value(&writer, aRspTransferField.FeePayFlag);
  writer.Key("CustFee");
  write_value(&writer, aRspTransferField.CustFee);
  writer.Key("BrokerFee");
  write_value(&writer, aRspTransferField.BrokerFee);
  writer.Key("Message");
  write_value(&writer, aRspTransferField.Message);
  writer.Key("Digest");
  write_value(&writer, aRspTransferField.Digest);
  writer.Key("BankAccType");
  write_value(&writer, aRspTransferField.BankAccType);
  writer.Key("DeviceID");
  write_value(&writer, aRspTransferField.DeviceID);
  writer.Key("BankSecuAccType");
  write_value(&writer, aRspTransferField.BankSecuAccType);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aRspTransferField.BrokerIDByBank);
  writer.Key("BankSecuAcc");
  write_value(&writer, aRspTransferField.BankSecuAcc);
  writer.Key("BankPwdFlag");
  write_value(&writer, aRspTransferField.BankPwdFlag);
  writer.Key("SecuPwdFlag");
  write_value(&writer, aRspTransferField.SecuPwdFlag);
  writer.Key("OperNo");
  write_value(&writer, aRspTransferField.OperNo);
  writer.Key("RequestID");
  write_value(&writer, aRspTransferField.RequestID);
  writer.Key("TID");
  write_value(&writer, aRspTransferField.TID);
  writer.Key("TransferStatus");
  write_value(&writer, aRspTransferField.TransferStatus);
  writer.Key("ErrorID");
  write_value(&writer, aRspTransferField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aRspTransferField.ErrorMsg);
  writer.Key("LongCustomerName");
  write_value(&writer, aRspTransferField.LongCustomerName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcReqRepealField const &aReqRepealField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReqRepealField");
  writer.StartObject();
  writer.Key("RepealTimeInterval");
  write_value(&writer, aReqRepealField.RepealTimeInterval);
  writer.Key("RepealedTimes");
  write_value(&writer, aReqRepealField.RepealedTimes);
  writer.Key("BankRepealFlag");
  write_value(&writer, aReqRepealField.BankRepealFlag);
  writer.Key("BrokerRepealFlag");
  write_value(&writer, aReqRepealField.BrokerRepealFlag);
  writer.Key("PlateRepealSerial");
  write_value(&writer, aReqRepealField.PlateRepealSerial);
  writer.Key("BankRepealSerial");
  write_value(&writer, aReqRepealField.BankRepealSerial);
  writer.Key("FutureRepealSerial");
  write_value(&writer, aReqRepealField.FutureRepealSerial);
  writer.Key("TradeCode");
  write_value(&writer, aReqRepealField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aReqRepealField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aReqRepealField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aReqRepealField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aReqRepealField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aReqRepealField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aReqRepealField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aReqRepealField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aReqRepealField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aReqRepealField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aReqRepealField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aReqRepealField.SessionID);
  writer.Key("CustomerName");
  write_value(&writer, aReqRepealField.CustomerName);
  writer.Key("IdCardType");
  write_value(&writer, aReqRepealField.IdCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aReqRepealField.IdentifiedCardNo);
  writer.Key("CustType");
  write_value(&writer, aReqRepealField.CustType);
  writer.Key("BankAccount");
  write_value(&writer, aReqRepealField.BankAccount);
  writer.Key("BankPassWord");
  write_value(&writer, aReqRepealField.BankPassWord);
  writer.Key("AccountID");
  write_value(&writer, aReqRepealField.AccountID);
  writer.Key("Password");
  write_value(&writer, aReqRepealField.Password);
  writer.Key("InstallID");
  write_value(&writer, aReqRepealField.InstallID);
  writer.Key("FutureSerial");
  write_value(&writer, aReqRepealField.FutureSerial);
  writer.Key("UserID");
  write_value(&writer, aReqRepealField.UserID);
  writer.Key("VerifyCertNoFlag");
  write_value(&writer, aReqRepealField.VerifyCertNoFlag);
  writer.Key("CurrencyID");
  write_value(&writer, aReqRepealField.CurrencyID);
  writer.Key("TradeAmount");
  write_value(&writer, aReqRepealField.TradeAmount);
  writer.Key("FutureFetchAmount");
  write_value(&writer, aReqRepealField.FutureFetchAmount);
  writer.Key("FeePayFlag");
  write_value(&writer, aReqRepealField.FeePayFlag);
  writer.Key("CustFee");
  write_value(&writer, aReqRepealField.CustFee);
  writer.Key("BrokerFee");
  write_value(&writer, aReqRepealField.BrokerFee);
  writer.Key("Message");
  write_value(&writer, aReqRepealField.Message);
  writer.Key("Digest");
  write_value(&writer, aReqRepealField.Digest);
  writer.Key("BankAccType");
  write_value(&writer, aReqRepealField.BankAccType);
  writer.Key("DeviceID");
  write_value(&writer, aReqRepealField.DeviceID);
  writer.Key("BankSecuAccType");
  write_value(&writer, aReqRepealField.BankSecuAccType);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aReqRepealField.BrokerIDByBank);
  writer.Key("BankSecuAcc");
  write_value(&writer, aReqRepealField.BankSecuAcc);
  writer.Key("BankPwdFlag");
  write_value(&writer, aReqRepealField.BankPwdFlag);
  writer.Key("SecuPwdFlag");
  write_value(&writer, aReqRepealField.SecuPwdFlag);
  writer.Key("OperNo");
  write_value(&writer, aReqRepealField.OperNo);
  writer.Key("RequestID");
  write_value(&writer, aReqRepealField.RequestID);
  writer.Key("TID");
  write_value(&writer, aReqRepealField.TID);
  writer.Key("TransferStatus");
  write_value(&writer, aReqRepealField.TransferStatus);
  writer.Key("LongCustomerName");
  write_value(&writer, aReqRepealField.LongCustomerName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcRspRepealField const &aRspRepealField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcRspRepealField");
  writer.StartObject();
  writer.Key("RepealTimeInterval");
  write_value(&writer, aRspRepealField.RepealTimeInterval);
  writer.Key("RepealedTimes");
  write_value(&writer, aRspRepealField.RepealedTimes);
  writer.Key("BankRepealFlag");
  write_value(&writer, aRspRepealField.BankRepealFlag);
  writer.Key("BrokerRepealFlag");
  write_value(&writer, aRspRepealField.BrokerRepealFlag);
  writer.Key("PlateRepealSerial");
  write_value(&writer, aRspRepealField.PlateRepealSerial);
  writer.Key("BankRepealSerial");
  write_value(&writer, aRspRepealField.BankRepealSerial);
  writer.Key("FutureRepealSerial");
  write_value(&writer, aRspRepealField.FutureRepealSerial);
  writer.Key("TradeCode");
  write_value(&writer, aRspRepealField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aRspRepealField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aRspRepealField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aRspRepealField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aRspRepealField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aRspRepealField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aRspRepealField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aRspRepealField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aRspRepealField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aRspRepealField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aRspRepealField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aRspRepealField.SessionID);
  writer.Key("CustomerName");
  write_value(&writer, aRspRepealField.CustomerName);
  writer.Key("IdCardType");
  write_value(&writer, aRspRepealField.IdCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aRspRepealField.IdentifiedCardNo);
  writer.Key("CustType");
  write_value(&writer, aRspRepealField.CustType);
  writer.Key("BankAccount");
  write_value(&writer, aRspRepealField.BankAccount);
  writer.Key("BankPassWord");
  write_value(&writer, aRspRepealField.BankPassWord);
  writer.Key("AccountID");
  write_value(&writer, aRspRepealField.AccountID);
  writer.Key("Password");
  write_value(&writer, aRspRepealField.Password);
  writer.Key("InstallID");
  write_value(&writer, aRspRepealField.InstallID);
  writer.Key("FutureSerial");
  write_value(&writer, aRspRepealField.FutureSerial);
  writer.Key("UserID");
  write_value(&writer, aRspRepealField.UserID);
  writer.Key("VerifyCertNoFlag");
  write_value(&writer, aRspRepealField.VerifyCertNoFlag);
  writer.Key("CurrencyID");
  write_value(&writer, aRspRepealField.CurrencyID);
  writer.Key("TradeAmount");
  write_value(&writer, aRspRepealField.TradeAmount);
  writer.Key("FutureFetchAmount");
  write_value(&writer, aRspRepealField.FutureFetchAmount);
  writer.Key("FeePayFlag");
  write_value(&writer, aRspRepealField.FeePayFlag);
  writer.Key("CustFee");
  write_value(&writer, aRspRepealField.CustFee);
  writer.Key("BrokerFee");
  write_value(&writer, aRspRepealField.BrokerFee);
  writer.Key("Message");
  write_value(&writer, aRspRepealField.Message);
  writer.Key("Digest");
  write_value(&writer, aRspRepealField.Digest);
  writer.Key("BankAccType");
  write_value(&writer, aRspRepealField.BankAccType);
  writer.Key("DeviceID");
  write_value(&writer, aRspRepealField.DeviceID);
  writer.Key("BankSecuAccType");
  write_value(&writer, aRspRepealField.BankSecuAccType);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aRspRepealField.BrokerIDByBank);
  writer.Key("BankSecuAcc");
  write_value(&writer, aRspRepealField.BankSecuAcc);
  writer.Key("BankPwdFlag");
  write_value(&writer, aRspRepealField.BankPwdFlag);
  writer.Key("SecuPwdFlag");
  write_value(&writer, aRspRepealField.SecuPwdFlag);
  writer.Key("OperNo");
  write_value(&writer, aRspRepealField.OperNo);
  writer.Key("RequestID");
  write_value(&writer, aRspRepealField.RequestID);
  writer.Key("TID");
  write_value(&writer, aRspRepealField.TID);
  writer.Key("TransferStatus");
  write_value(&writer, aRspRepealField.TransferStatus);
  writer.Key("ErrorID");
  write_value(&writer, aRspRepealField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aRspRepealField.ErrorMsg);
  writer.Key("LongCustomerName");
  write_value(&writer, aRspRepealField.LongCustomerName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcReqQueryAccountField const &aReqQueryAccountField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReqQueryAccountField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aReqQueryAccountField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aReqQueryAccountField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aReqQueryAccountField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aReqQueryAccountField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aReqQueryAccountField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aReqQueryAccountField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aReqQueryAccountField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aReqQueryAccountField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aReqQueryAccountField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aReqQueryAccountField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aReqQueryAccountField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aReqQueryAccountField.SessionID);
  writer.Key("CustomerName");
  write_value(&writer, aReqQueryAccountField.CustomerName);
  writer.Key("IdCardType");
  write_value(&writer, aReqQueryAccountField.IdCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aReqQueryAccountField.IdentifiedCardNo);
  writer.Key("CustType");
  write_value(&writer, aReqQueryAccountField.CustType);
  writer.Key("BankAccount");
  write_value(&writer, aReqQueryAccountField.BankAccount);
  writer.Key("BankPassWord");
  write_value(&writer, aReqQueryAccountField.BankPassWord);
  writer.Key("AccountID");
  write_value(&writer, aReqQueryAccountField.AccountID);
  writer.Key("Password");
  write_value(&writer, aReqQueryAccountField.Password);
  writer.Key("FutureSerial");
  write_value(&writer, aReqQueryAccountField.FutureSerial);
  writer.Key("InstallID");
  write_value(&writer, aReqQueryAccountField.InstallID);
  writer.Key("UserID");
  write_value(&writer, aReqQueryAccountField.UserID);
  writer.Key("VerifyCertNoFlag");
  write_value(&writer, aReqQueryAccountField.VerifyCertNoFlag);
  writer.Key("CurrencyID");
  write_value(&writer, aReqQueryAccountField.CurrencyID);
  writer.Key("Digest");
  write_value(&writer, aReqQueryAccountField.Digest);
  writer.Key("BankAccType");
  write_value(&writer, aReqQueryAccountField.BankAccType);
  writer.Key("DeviceID");
  write_value(&writer, aReqQueryAccountField.DeviceID);
  writer.Key("BankSecuAccType");
  write_value(&writer, aReqQueryAccountField.BankSecuAccType);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aReqQueryAccountField.BrokerIDByBank);
  writer.Key("BankSecuAcc");
  write_value(&writer, aReqQueryAccountField.BankSecuAcc);
  writer.Key("BankPwdFlag");
  write_value(&writer, aReqQueryAccountField.BankPwdFlag);
  writer.Key("SecuPwdFlag");
  write_value(&writer, aReqQueryAccountField.SecuPwdFlag);
  writer.Key("OperNo");
  write_value(&writer, aReqQueryAccountField.OperNo);
  writer.Key("RequestID");
  write_value(&writer, aReqQueryAccountField.RequestID);
  writer.Key("TID");
  write_value(&writer, aReqQueryAccountField.TID);
  writer.Key("LongCustomerName");
  write_value(&writer, aReqQueryAccountField.LongCustomerName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcRspQueryAccountField const &aRspQueryAccountField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcRspQueryAccountField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aRspQueryAccountField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aRspQueryAccountField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aRspQueryAccountField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aRspQueryAccountField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aRspQueryAccountField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aRspQueryAccountField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aRspQueryAccountField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aRspQueryAccountField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aRspQueryAccountField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aRspQueryAccountField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aRspQueryAccountField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aRspQueryAccountField.SessionID);
  writer.Key("CustomerName");
  write_value(&writer, aRspQueryAccountField.CustomerName);
  writer.Key("IdCardType");
  write_value(&writer, aRspQueryAccountField.IdCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aRspQueryAccountField.IdentifiedCardNo);
  writer.Key("CustType");
  write_value(&writer, aRspQueryAccountField.CustType);
  writer.Key("BankAccount");
  write_value(&writer, aRspQueryAccountField.BankAccount);
  writer.Key("BankPassWord");
  write_value(&writer, aRspQueryAccountField.BankPassWord);
  writer.Key("AccountID");
  write_value(&writer, aRspQueryAccountField.AccountID);
  writer.Key("Password");
  write_value(&writer, aRspQueryAccountField.Password);
  writer.Key("FutureSerial");
  write_value(&writer, aRspQueryAccountField.FutureSerial);
  writer.Key("InstallID");
  write_value(&writer, aRspQueryAccountField.InstallID);
  writer.Key("UserID");
  write_value(&writer, aRspQueryAccountField.UserID);
  writer.Key("VerifyCertNoFlag");
  write_value(&writer, aRspQueryAccountField.VerifyCertNoFlag);
  writer.Key("CurrencyID");
  write_value(&writer, aRspQueryAccountField.CurrencyID);
  writer.Key("Digest");
  write_value(&writer, aRspQueryAccountField.Digest);
  writer.Key("BankAccType");
  write_value(&writer, aRspQueryAccountField.BankAccType);
  writer.Key("DeviceID");
  write_value(&writer, aRspQueryAccountField.DeviceID);
  writer.Key("BankSecuAccType");
  write_value(&writer, aRspQueryAccountField.BankSecuAccType);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aRspQueryAccountField.BrokerIDByBank);
  writer.Key("BankSecuAcc");
  write_value(&writer, aRspQueryAccountField.BankSecuAcc);
  writer.Key("BankPwdFlag");
  write_value(&writer, aRspQueryAccountField.BankPwdFlag);
  writer.Key("SecuPwdFlag");
  write_value(&writer, aRspQueryAccountField.SecuPwdFlag);
  writer.Key("OperNo");
  write_value(&writer, aRspQueryAccountField.OperNo);
  writer.Key("RequestID");
  write_value(&writer, aRspQueryAccountField.RequestID);
  writer.Key("TID");
  write_value(&writer, aRspQueryAccountField.TID);
  writer.Key("BankUseAmount");
  write_value(&writer, aRspQueryAccountField.BankUseAmount);
  writer.Key("BankFetchAmount");
  write_value(&writer, aRspQueryAccountField.BankFetchAmount);
  writer.Key("LongCustomerName");
  write_value(&writer, aRspQueryAccountField.LongCustomerName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcFutureSignIOField const &aFutureSignIOField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcFutureSignIOField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aFutureSignIOField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aFutureSignIOField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aFutureSignIOField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aFutureSignIOField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aFutureSignIOField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aFutureSignIOField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aFutureSignIOField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aFutureSignIOField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aFutureSignIOField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aFutureSignIOField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aFutureSignIOField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aFutureSignIOField.SessionID);
  writer.Key("InstallID");
  write_value(&writer, aFutureSignIOField.InstallID);
  writer.Key("UserID");
  write_value(&writer, aFutureSignIOField.UserID);
  writer.Key("Digest");
  write_value(&writer, aFutureSignIOField.Digest);
  writer.Key("CurrencyID");
  write_value(&writer, aFutureSignIOField.CurrencyID);
  writer.Key("DeviceID");
  write_value(&writer, aFutureSignIOField.DeviceID);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aFutureSignIOField.BrokerIDByBank);
  writer.Key("OperNo");
  write_value(&writer, aFutureSignIOField.OperNo);
  writer.Key("RequestID");
  write_value(&writer, aFutureSignIOField.RequestID);
  writer.Key("TID");
  write_value(&writer, aFutureSignIOField.TID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcRspFutureSignInField const &aRspFutureSignInField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcRspFutureSignInField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aRspFutureSignInField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aRspFutureSignInField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aRspFutureSignInField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aRspFutureSignInField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aRspFutureSignInField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aRspFutureSignInField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aRspFutureSignInField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aRspFutureSignInField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aRspFutureSignInField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aRspFutureSignInField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aRspFutureSignInField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aRspFutureSignInField.SessionID);
  writer.Key("InstallID");
  write_value(&writer, aRspFutureSignInField.InstallID);
  writer.Key("UserID");
  write_value(&writer, aRspFutureSignInField.UserID);
  writer.Key("Digest");
  write_value(&writer, aRspFutureSignInField.Digest);
  writer.Key("CurrencyID");
  write_value(&writer, aRspFutureSignInField.CurrencyID);
  writer.Key("DeviceID");
  write_value(&writer, aRspFutureSignInField.DeviceID);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aRspFutureSignInField.BrokerIDByBank);
  writer.Key("OperNo");
  write_value(&writer, aRspFutureSignInField.OperNo);
  writer.Key("RequestID");
  write_value(&writer, aRspFutureSignInField.RequestID);
  writer.Key("TID");
  write_value(&writer, aRspFutureSignInField.TID);
  writer.Key("ErrorID");
  write_value(&writer, aRspFutureSignInField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aRspFutureSignInField.ErrorMsg);
  writer.Key("PinKey");
  write_value(&writer, aRspFutureSignInField.PinKey);
  writer.Key("MacKey");
  write_value(&writer, aRspFutureSignInField.MacKey);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcReqFutureSignOutField const &aReqFutureSignOutField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReqFutureSignOutField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aReqFutureSignOutField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aReqFutureSignOutField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aReqFutureSignOutField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aReqFutureSignOutField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aReqFutureSignOutField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aReqFutureSignOutField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aReqFutureSignOutField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aReqFutureSignOutField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aReqFutureSignOutField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aReqFutureSignOutField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aReqFutureSignOutField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aReqFutureSignOutField.SessionID);
  writer.Key("InstallID");
  write_value(&writer, aReqFutureSignOutField.InstallID);
  writer.Key("UserID");
  write_value(&writer, aReqFutureSignOutField.UserID);
  writer.Key("Digest");
  write_value(&writer, aReqFutureSignOutField.Digest);
  writer.Key("CurrencyID");
  write_value(&writer, aReqFutureSignOutField.CurrencyID);
  writer.Key("DeviceID");
  write_value(&writer, aReqFutureSignOutField.DeviceID);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aReqFutureSignOutField.BrokerIDByBank);
  writer.Key("OperNo");
  write_value(&writer, aReqFutureSignOutField.OperNo);
  writer.Key("RequestID");
  write_value(&writer, aReqFutureSignOutField.RequestID);
  writer.Key("TID");
  write_value(&writer, aReqFutureSignOutField.TID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcRspFutureSignOutField const &aRspFutureSignOutField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcRspFutureSignOutField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aRspFutureSignOutField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aRspFutureSignOutField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aRspFutureSignOutField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aRspFutureSignOutField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aRspFutureSignOutField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aRspFutureSignOutField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aRspFutureSignOutField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aRspFutureSignOutField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aRspFutureSignOutField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aRspFutureSignOutField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aRspFutureSignOutField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aRspFutureSignOutField.SessionID);
  writer.Key("InstallID");
  write_value(&writer, aRspFutureSignOutField.InstallID);
  writer.Key("UserID");
  write_value(&writer, aRspFutureSignOutField.UserID);
  writer.Key("Digest");
  write_value(&writer, aRspFutureSignOutField.Digest);
  writer.Key("CurrencyID");
  write_value(&writer, aRspFutureSignOutField.CurrencyID);
  writer.Key("DeviceID");
  write_value(&writer, aRspFutureSignOutField.DeviceID);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aRspFutureSignOutField.BrokerIDByBank);
  writer.Key("OperNo");
  write_value(&writer, aRspFutureSignOutField.OperNo);
  writer.Key("RequestID");
  write_value(&writer, aRspFutureSignOutField.RequestID);
  writer.Key("TID");
  write_value(&writer, aRspFutureSignOutField.TID);
  writer.Key("ErrorID");
  write_value(&writer, aRspFutureSignOutField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aRspFutureSignOutField.ErrorMsg);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcReqQueryTradeResultBySerialField const
               &aReqQueryTradeResultBySerialField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReqQueryTradeResultBySerialField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aReqQueryTradeResultBySerialField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aReqQueryTradeResultBySerialField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aReqQueryTradeResultBySerialField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aReqQueryTradeResultBySerialField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aReqQueryTradeResultBySerialField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aReqQueryTradeResultBySerialField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aReqQueryTradeResultBySerialField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aReqQueryTradeResultBySerialField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aReqQueryTradeResultBySerialField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aReqQueryTradeResultBySerialField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aReqQueryTradeResultBySerialField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aReqQueryTradeResultBySerialField.SessionID);
  writer.Key("Reference");
  write_value(&writer, aReqQueryTradeResultBySerialField.Reference);
  writer.Key("RefrenceIssureType");
  write_value(&writer, aReqQueryTradeResultBySerialField.RefrenceIssureType);
  writer.Key("RefrenceIssure");
  write_value(&writer, aReqQueryTradeResultBySerialField.RefrenceIssure);
  writer.Key("CustomerName");
  write_value(&writer, aReqQueryTradeResultBySerialField.CustomerName);
  writer.Key("IdCardType");
  write_value(&writer, aReqQueryTradeResultBySerialField.IdCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aReqQueryTradeResultBySerialField.IdentifiedCardNo);
  writer.Key("CustType");
  write_value(&writer, aReqQueryTradeResultBySerialField.CustType);
  writer.Key("BankAccount");
  write_value(&writer, aReqQueryTradeResultBySerialField.BankAccount);
  writer.Key("BankPassWord");
  write_value(&writer, aReqQueryTradeResultBySerialField.BankPassWord);
  writer.Key("AccountID");
  write_value(&writer, aReqQueryTradeResultBySerialField.AccountID);
  writer.Key("Password");
  write_value(&writer, aReqQueryTradeResultBySerialField.Password);
  writer.Key("CurrencyID");
  write_value(&writer, aReqQueryTradeResultBySerialField.CurrencyID);
  writer.Key("TradeAmount");
  write_value(&writer, aReqQueryTradeResultBySerialField.TradeAmount);
  writer.Key("Digest");
  write_value(&writer, aReqQueryTradeResultBySerialField.Digest);
  writer.Key("LongCustomerName");
  write_value(&writer, aReqQueryTradeResultBySerialField.LongCustomerName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcRspQueryTradeResultBySerialField const
               &aRspQueryTradeResultBySerialField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcRspQueryTradeResultBySerialField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aRspQueryTradeResultBySerialField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aRspQueryTradeResultBySerialField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aRspQueryTradeResultBySerialField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aRspQueryTradeResultBySerialField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aRspQueryTradeResultBySerialField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aRspQueryTradeResultBySerialField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aRspQueryTradeResultBySerialField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aRspQueryTradeResultBySerialField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aRspQueryTradeResultBySerialField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aRspQueryTradeResultBySerialField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aRspQueryTradeResultBySerialField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aRspQueryTradeResultBySerialField.SessionID);
  writer.Key("ErrorID");
  write_value(&writer, aRspQueryTradeResultBySerialField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aRspQueryTradeResultBySerialField.ErrorMsg);
  writer.Key("Reference");
  write_value(&writer, aRspQueryTradeResultBySerialField.Reference);
  writer.Key("RefrenceIssureType");
  write_value(&writer, aRspQueryTradeResultBySerialField.RefrenceIssureType);
  writer.Key("RefrenceIssure");
  write_value(&writer, aRspQueryTradeResultBySerialField.RefrenceIssure);
  writer.Key("OriginReturnCode");
  write_value(&writer, aRspQueryTradeResultBySerialField.OriginReturnCode);
  writer.Key("OriginDescrInfoForReturnCode");
  write_value(&writer,
              aRspQueryTradeResultBySerialField.OriginDescrInfoForReturnCode);
  writer.Key("BankAccount");
  write_value(&writer, aRspQueryTradeResultBySerialField.BankAccount);
  writer.Key("BankPassWord");
  write_value(&writer, aRspQueryTradeResultBySerialField.BankPassWord);
  writer.Key("AccountID");
  write_value(&writer, aRspQueryTradeResultBySerialField.AccountID);
  writer.Key("Password");
  write_value(&writer, aRspQueryTradeResultBySerialField.Password);
  writer.Key("CurrencyID");
  write_value(&writer, aRspQueryTradeResultBySerialField.CurrencyID);
  writer.Key("TradeAmount");
  write_value(&writer, aRspQueryTradeResultBySerialField.TradeAmount);
  writer.Key("Digest");
  write_value(&writer, aRspQueryTradeResultBySerialField.Digest);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcReqDayEndFileReadyField const
                                    &aReqDayEndFileReadyField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReqDayEndFileReadyField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aReqDayEndFileReadyField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aReqDayEndFileReadyField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aReqDayEndFileReadyField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aReqDayEndFileReadyField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aReqDayEndFileReadyField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aReqDayEndFileReadyField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aReqDayEndFileReadyField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aReqDayEndFileReadyField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aReqDayEndFileReadyField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aReqDayEndFileReadyField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aReqDayEndFileReadyField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aReqDayEndFileReadyField.SessionID);
  writer.Key("FileBusinessCode");
  write_value(&writer, aReqDayEndFileReadyField.FileBusinessCode);
  writer.Key("Digest");
  write_value(&writer, aReqDayEndFileReadyField.Digest);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcReturnResultField const &aReturnResultField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReturnResultField");
  writer.StartObject();
  writer.Key("ReturnCode");
  write_value(&writer, aReturnResultField.ReturnCode);
  writer.Key("DescrInfoForReturnCode");
  write_value(&writer, aReturnResultField.DescrInfoForReturnCode);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcVerifyFuturePasswordField const
                                    &aVerifyFuturePasswordField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcVerifyFuturePasswordField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aVerifyFuturePasswordField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aVerifyFuturePasswordField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aVerifyFuturePasswordField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aVerifyFuturePasswordField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aVerifyFuturePasswordField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aVerifyFuturePasswordField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aVerifyFuturePasswordField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aVerifyFuturePasswordField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aVerifyFuturePasswordField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aVerifyFuturePasswordField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aVerifyFuturePasswordField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aVerifyFuturePasswordField.SessionID);
  writer.Key("AccountID");
  write_value(&writer, aVerifyFuturePasswordField.AccountID);
  writer.Key("Password");
  write_value(&writer, aVerifyFuturePasswordField.Password);
  writer.Key("BankAccount");
  write_value(&writer, aVerifyFuturePasswordField.BankAccount);
  writer.Key("BankPassWord");
  write_value(&writer, aVerifyFuturePasswordField.BankPassWord);
  writer.Key("InstallID");
  write_value(&writer, aVerifyFuturePasswordField.InstallID);
  writer.Key("TID");
  write_value(&writer, aVerifyFuturePasswordField.TID);
  writer.Key("CurrencyID");
  write_value(&writer, aVerifyFuturePasswordField.CurrencyID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcVerifyCustInfoField const &aVerifyCustInfoField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcVerifyCustInfoField");
  writer.StartObject();
  writer.Key("CustomerName");
  write_value(&writer, aVerifyCustInfoField.CustomerName);
  writer.Key("IdCardType");
  write_value(&writer, aVerifyCustInfoField.IdCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aVerifyCustInfoField.IdentifiedCardNo);
  writer.Key("CustType");
  write_value(&writer, aVerifyCustInfoField.CustType);
  writer.Key("LongCustomerName");
  write_value(&writer, aVerifyCustInfoField.LongCustomerName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcVerifyFuturePasswordAndCustInfoField const
               &aVerifyFuturePasswordAndCustInfoField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcVerifyFuturePasswordAndCustInfoField");
  writer.StartObject();
  writer.Key("CustomerName");
  write_value(&writer, aVerifyFuturePasswordAndCustInfoField.CustomerName);
  writer.Key("IdCardType");
  write_value(&writer, aVerifyFuturePasswordAndCustInfoField.IdCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aVerifyFuturePasswordAndCustInfoField.IdentifiedCardNo);
  writer.Key("CustType");
  write_value(&writer, aVerifyFuturePasswordAndCustInfoField.CustType);
  writer.Key("AccountID");
  write_value(&writer, aVerifyFuturePasswordAndCustInfoField.AccountID);
  writer.Key("Password");
  write_value(&writer, aVerifyFuturePasswordAndCustInfoField.Password);
  writer.Key("CurrencyID");
  write_value(&writer, aVerifyFuturePasswordAndCustInfoField.CurrencyID);
  writer.Key("LongCustomerName");
  write_value(&writer, aVerifyFuturePasswordAndCustInfoField.LongCustomerName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcDepositResultInformField const
                                    &aDepositResultInformField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcDepositResultInformField");
  writer.StartObject();
  writer.Key("DepositSeqNo");
  write_value(&writer, aDepositResultInformField.DepositSeqNo);
  writer.Key("BrokerID");
  write_value(&writer, aDepositResultInformField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aDepositResultInformField.InvestorID);
  writer.Key("Deposit");
  write_value(&writer, aDepositResultInformField.Deposit);
  writer.Key("RequestID");
  write_value(&writer, aDepositResultInformField.RequestID);
  writer.Key("ReturnCode");
  write_value(&writer, aDepositResultInformField.ReturnCode);
  writer.Key("DescrInfoForReturnCode");
  write_value(&writer, aDepositResultInformField.DescrInfoForReturnCode);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcReqSyncKeyField const &aReqSyncKeyField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReqSyncKeyField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aReqSyncKeyField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aReqSyncKeyField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aReqSyncKeyField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aReqSyncKeyField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aReqSyncKeyField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aReqSyncKeyField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aReqSyncKeyField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aReqSyncKeyField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aReqSyncKeyField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aReqSyncKeyField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aReqSyncKeyField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aReqSyncKeyField.SessionID);
  writer.Key("InstallID");
  write_value(&writer, aReqSyncKeyField.InstallID);
  writer.Key("UserID");
  write_value(&writer, aReqSyncKeyField.UserID);
  writer.Key("Message");
  write_value(&writer, aReqSyncKeyField.Message);
  writer.Key("DeviceID");
  write_value(&writer, aReqSyncKeyField.DeviceID);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aReqSyncKeyField.BrokerIDByBank);
  writer.Key("OperNo");
  write_value(&writer, aReqSyncKeyField.OperNo);
  writer.Key("RequestID");
  write_value(&writer, aReqSyncKeyField.RequestID);
  writer.Key("TID");
  write_value(&writer, aReqSyncKeyField.TID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcRspSyncKeyField const &aRspSyncKeyField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcRspSyncKeyField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aRspSyncKeyField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aRspSyncKeyField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aRspSyncKeyField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aRspSyncKeyField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aRspSyncKeyField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aRspSyncKeyField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aRspSyncKeyField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aRspSyncKeyField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aRspSyncKeyField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aRspSyncKeyField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aRspSyncKeyField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aRspSyncKeyField.SessionID);
  writer.Key("InstallID");
  write_value(&writer, aRspSyncKeyField.InstallID);
  writer.Key("UserID");
  write_value(&writer, aRspSyncKeyField.UserID);
  writer.Key("Message");
  write_value(&writer, aRspSyncKeyField.Message);
  writer.Key("DeviceID");
  write_value(&writer, aRspSyncKeyField.DeviceID);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aRspSyncKeyField.BrokerIDByBank);
  writer.Key("OperNo");
  write_value(&writer, aRspSyncKeyField.OperNo);
  writer.Key("RequestID");
  write_value(&writer, aRspSyncKeyField.RequestID);
  writer.Key("TID");
  write_value(&writer, aRspSyncKeyField.TID);
  writer.Key("ErrorID");
  write_value(&writer, aRspSyncKeyField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aRspSyncKeyField.ErrorMsg);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcNotifyQueryAccountField const
                                    &aNotifyQueryAccountField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcNotifyQueryAccountField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aNotifyQueryAccountField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aNotifyQueryAccountField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aNotifyQueryAccountField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aNotifyQueryAccountField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aNotifyQueryAccountField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aNotifyQueryAccountField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aNotifyQueryAccountField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aNotifyQueryAccountField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aNotifyQueryAccountField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aNotifyQueryAccountField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aNotifyQueryAccountField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aNotifyQueryAccountField.SessionID);
  writer.Key("CustomerName");
  write_value(&writer, aNotifyQueryAccountField.CustomerName);
  writer.Key("IdCardType");
  write_value(&writer, aNotifyQueryAccountField.IdCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aNotifyQueryAccountField.IdentifiedCardNo);
  writer.Key("CustType");
  write_value(&writer, aNotifyQueryAccountField.CustType);
  writer.Key("BankAccount");
  write_value(&writer, aNotifyQueryAccountField.BankAccount);
  writer.Key("BankPassWord");
  write_value(&writer, aNotifyQueryAccountField.BankPassWord);
  writer.Key("AccountID");
  write_value(&writer, aNotifyQueryAccountField.AccountID);
  writer.Key("Password");
  write_value(&writer, aNotifyQueryAccountField.Password);
  writer.Key("FutureSerial");
  write_value(&writer, aNotifyQueryAccountField.FutureSerial);
  writer.Key("InstallID");
  write_value(&writer, aNotifyQueryAccountField.InstallID);
  writer.Key("UserID");
  write_value(&writer, aNotifyQueryAccountField.UserID);
  writer.Key("VerifyCertNoFlag");
  write_value(&writer, aNotifyQueryAccountField.VerifyCertNoFlag);
  writer.Key("CurrencyID");
  write_value(&writer, aNotifyQueryAccountField.CurrencyID);
  writer.Key("Digest");
  write_value(&writer, aNotifyQueryAccountField.Digest);
  writer.Key("BankAccType");
  write_value(&writer, aNotifyQueryAccountField.BankAccType);
  writer.Key("DeviceID");
  write_value(&writer, aNotifyQueryAccountField.DeviceID);
  writer.Key("BankSecuAccType");
  write_value(&writer, aNotifyQueryAccountField.BankSecuAccType);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aNotifyQueryAccountField.BrokerIDByBank);
  writer.Key("BankSecuAcc");
  write_value(&writer, aNotifyQueryAccountField.BankSecuAcc);
  writer.Key("BankPwdFlag");
  write_value(&writer, aNotifyQueryAccountField.BankPwdFlag);
  writer.Key("SecuPwdFlag");
  write_value(&writer, aNotifyQueryAccountField.SecuPwdFlag);
  writer.Key("OperNo");
  write_value(&writer, aNotifyQueryAccountField.OperNo);
  writer.Key("RequestID");
  write_value(&writer, aNotifyQueryAccountField.RequestID);
  writer.Key("TID");
  write_value(&writer, aNotifyQueryAccountField.TID);
  writer.Key("BankUseAmount");
  write_value(&writer, aNotifyQueryAccountField.BankUseAmount);
  writer.Key("BankFetchAmount");
  write_value(&writer, aNotifyQueryAccountField.BankFetchAmount);
  writer.Key("ErrorID");
  write_value(&writer, aNotifyQueryAccountField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aNotifyQueryAccountField.ErrorMsg);
  writer.Key("LongCustomerName");
  write_value(&writer, aNotifyQueryAccountField.LongCustomerName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcTransferSerialField const &aTransferSerialField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTransferSerialField");
  writer.StartObject();
  writer.Key("PlateSerial");
  write_value(&writer, aTransferSerialField.PlateSerial);
  writer.Key("TradeDate");
  write_value(&writer, aTransferSerialField.TradeDate);
  writer.Key("TradingDay");
  write_value(&writer, aTransferSerialField.TradingDay);
  writer.Key("TradeTime");
  write_value(&writer, aTransferSerialField.TradeTime);
  writer.Key("TradeCode");
  write_value(&writer, aTransferSerialField.TradeCode);
  writer.Key("SessionID");
  write_value(&writer, aTransferSerialField.SessionID);
  writer.Key("BankID");
  write_value(&writer, aTransferSerialField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aTransferSerialField.BankBranchID);
  writer.Key("BankAccType");
  write_value(&writer, aTransferSerialField.BankAccType);
  writer.Key("BankAccount");
  write_value(&writer, aTransferSerialField.BankAccount);
  writer.Key("BankSerial");
  write_value(&writer, aTransferSerialField.BankSerial);
  writer.Key("BrokerID");
  write_value(&writer, aTransferSerialField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aTransferSerialField.BrokerBranchID);
  writer.Key("FutureAccType");
  write_value(&writer, aTransferSerialField.FutureAccType);
  writer.Key("AccountID");
  write_value(&writer, aTransferSerialField.AccountID);
  writer.Key("InvestorID");
  write_value(&writer, aTransferSerialField.InvestorID);
  writer.Key("FutureSerial");
  write_value(&writer, aTransferSerialField.FutureSerial);
  writer.Key("IdCardType");
  write_value(&writer, aTransferSerialField.IdCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aTransferSerialField.IdentifiedCardNo);
  writer.Key("CurrencyID");
  write_value(&writer, aTransferSerialField.CurrencyID);
  writer.Key("TradeAmount");
  write_value(&writer, aTransferSerialField.TradeAmount);
  writer.Key("CustFee");
  write_value(&writer, aTransferSerialField.CustFee);
  writer.Key("BrokerFee");
  write_value(&writer, aTransferSerialField.BrokerFee);
  writer.Key("AvailabilityFlag");
  write_value(&writer, aTransferSerialField.AvailabilityFlag);
  writer.Key("OperatorCode");
  write_value(&writer, aTransferSerialField.OperatorCode);
  writer.Key("BankNewAccount");
  write_value(&writer, aTransferSerialField.BankNewAccount);
  writer.Key("ErrorID");
  write_value(&writer, aTransferSerialField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aTransferSerialField.ErrorMsg);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryTransferSerialField const &aQryTransferSerialField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryTransferSerialField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryTransferSerialField.BrokerID);
  writer.Key("AccountID");
  write_value(&writer, aQryTransferSerialField.AccountID);
  writer.Key("BankID");
  write_value(&writer, aQryTransferSerialField.BankID);
  writer.Key("CurrencyID");
  write_value(&writer, aQryTransferSerialField.CurrencyID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcNotifyFutureSignInField const
                                    &aNotifyFutureSignInField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcNotifyFutureSignInField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aNotifyFutureSignInField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aNotifyFutureSignInField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aNotifyFutureSignInField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aNotifyFutureSignInField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aNotifyFutureSignInField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aNotifyFutureSignInField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aNotifyFutureSignInField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aNotifyFutureSignInField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aNotifyFutureSignInField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aNotifyFutureSignInField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aNotifyFutureSignInField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aNotifyFutureSignInField.SessionID);
  writer.Key("InstallID");
  write_value(&writer, aNotifyFutureSignInField.InstallID);
  writer.Key("UserID");
  write_value(&writer, aNotifyFutureSignInField.UserID);
  writer.Key("Digest");
  write_value(&writer, aNotifyFutureSignInField.Digest);
  writer.Key("CurrencyID");
  write_value(&writer, aNotifyFutureSignInField.CurrencyID);
  writer.Key("DeviceID");
  write_value(&writer, aNotifyFutureSignInField.DeviceID);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aNotifyFutureSignInField.BrokerIDByBank);
  writer.Key("OperNo");
  write_value(&writer, aNotifyFutureSignInField.OperNo);
  writer.Key("RequestID");
  write_value(&writer, aNotifyFutureSignInField.RequestID);
  writer.Key("TID");
  write_value(&writer, aNotifyFutureSignInField.TID);
  writer.Key("ErrorID");
  write_value(&writer, aNotifyFutureSignInField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aNotifyFutureSignInField.ErrorMsg);
  writer.Key("PinKey");
  write_value(&writer, aNotifyFutureSignInField.PinKey);
  writer.Key("MacKey");
  write_value(&writer, aNotifyFutureSignInField.MacKey);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcNotifyFutureSignOutField const
                                    &aNotifyFutureSignOutField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcNotifyFutureSignOutField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aNotifyFutureSignOutField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aNotifyFutureSignOutField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aNotifyFutureSignOutField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aNotifyFutureSignOutField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aNotifyFutureSignOutField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aNotifyFutureSignOutField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aNotifyFutureSignOutField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aNotifyFutureSignOutField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aNotifyFutureSignOutField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aNotifyFutureSignOutField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aNotifyFutureSignOutField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aNotifyFutureSignOutField.SessionID);
  writer.Key("InstallID");
  write_value(&writer, aNotifyFutureSignOutField.InstallID);
  writer.Key("UserID");
  write_value(&writer, aNotifyFutureSignOutField.UserID);
  writer.Key("Digest");
  write_value(&writer, aNotifyFutureSignOutField.Digest);
  writer.Key("CurrencyID");
  write_value(&writer, aNotifyFutureSignOutField.CurrencyID);
  writer.Key("DeviceID");
  write_value(&writer, aNotifyFutureSignOutField.DeviceID);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aNotifyFutureSignOutField.BrokerIDByBank);
  writer.Key("OperNo");
  write_value(&writer, aNotifyFutureSignOutField.OperNo);
  writer.Key("RequestID");
  write_value(&writer, aNotifyFutureSignOutField.RequestID);
  writer.Key("TID");
  write_value(&writer, aNotifyFutureSignOutField.TID);
  writer.Key("ErrorID");
  write_value(&writer, aNotifyFutureSignOutField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aNotifyFutureSignOutField.ErrorMsg);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcNotifySyncKeyField const &aNotifySyncKeyField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcNotifySyncKeyField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aNotifySyncKeyField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aNotifySyncKeyField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aNotifySyncKeyField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aNotifySyncKeyField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aNotifySyncKeyField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aNotifySyncKeyField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aNotifySyncKeyField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aNotifySyncKeyField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aNotifySyncKeyField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aNotifySyncKeyField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aNotifySyncKeyField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aNotifySyncKeyField.SessionID);
  writer.Key("InstallID");
  write_value(&writer, aNotifySyncKeyField.InstallID);
  writer.Key("UserID");
  write_value(&writer, aNotifySyncKeyField.UserID);
  writer.Key("Message");
  write_value(&writer, aNotifySyncKeyField.Message);
  writer.Key("DeviceID");
  write_value(&writer, aNotifySyncKeyField.DeviceID);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aNotifySyncKeyField.BrokerIDByBank);
  writer.Key("OperNo");
  write_value(&writer, aNotifySyncKeyField.OperNo);
  writer.Key("RequestID");
  write_value(&writer, aNotifySyncKeyField.RequestID);
  writer.Key("TID");
  write_value(&writer, aNotifySyncKeyField.TID);
  writer.Key("ErrorID");
  write_value(&writer, aNotifySyncKeyField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aNotifySyncKeyField.ErrorMsg);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryAccountregisterField const
                                    &aQryAccountregisterField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryAccountregisterField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryAccountregisterField.BrokerID);
  writer.Key("AccountID");
  write_value(&writer, aQryAccountregisterField.AccountID);
  writer.Key("BankID");
  write_value(&writer, aQryAccountregisterField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aQryAccountregisterField.BankBranchID);
  writer.Key("CurrencyID");
  write_value(&writer, aQryAccountregisterField.CurrencyID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcAccountregisterField const &aAccountregisterField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcAccountregisterField");
  writer.StartObject();
  writer.Key("TradeDay");
  write_value(&writer, aAccountregisterField.TradeDay);
  writer.Key("BankID");
  write_value(&writer, aAccountregisterField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aAccountregisterField.BankBranchID);
  writer.Key("BankAccount");
  write_value(&writer, aAccountregisterField.BankAccount);
  writer.Key("BrokerID");
  write_value(&writer, aAccountregisterField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aAccountregisterField.BrokerBranchID);
  writer.Key("AccountID");
  write_value(&writer, aAccountregisterField.AccountID);
  writer.Key("IdCardType");
  write_value(&writer, aAccountregisterField.IdCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aAccountregisterField.IdentifiedCardNo);
  writer.Key("CustomerName");
  write_value(&writer, aAccountregisterField.CustomerName);
  writer.Key("CurrencyID");
  write_value(&writer, aAccountregisterField.CurrencyID);
  writer.Key("OpenOrDestroy");
  write_value(&writer, aAccountregisterField.OpenOrDestroy);
  writer.Key("RegDate");
  write_value(&writer, aAccountregisterField.RegDate);
  writer.Key("OutDate");
  write_value(&writer, aAccountregisterField.OutDate);
  writer.Key("TID");
  write_value(&writer, aAccountregisterField.TID);
  writer.Key("CustType");
  write_value(&writer, aAccountregisterField.CustType);
  writer.Key("BankAccType");
  write_value(&writer, aAccountregisterField.BankAccType);
  writer.Key("LongCustomerName");
  write_value(&writer, aAccountregisterField.LongCustomerName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcOpenAccountField const &aOpenAccountField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcOpenAccountField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aOpenAccountField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aOpenAccountField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aOpenAccountField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aOpenAccountField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aOpenAccountField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aOpenAccountField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aOpenAccountField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aOpenAccountField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aOpenAccountField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aOpenAccountField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aOpenAccountField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aOpenAccountField.SessionID);
  writer.Key("CustomerName");
  write_value(&writer, aOpenAccountField.CustomerName);
  writer.Key("IdCardType");
  write_value(&writer, aOpenAccountField.IdCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aOpenAccountField.IdentifiedCardNo);
  writer.Key("Gender");
  write_value(&writer, aOpenAccountField.Gender);
  writer.Key("CountryCode");
  write_value(&writer, aOpenAccountField.CountryCode);
  writer.Key("CustType");
  write_value(&writer, aOpenAccountField.CustType);
  writer.Key("Address");
  write_value(&writer, aOpenAccountField.Address);
  writer.Key("ZipCode");
  write_value(&writer, aOpenAccountField.ZipCode);
  writer.Key("Telephone");
  write_value(&writer, aOpenAccountField.Telephone);
  writer.Key("MobilePhone");
  write_value(&writer, aOpenAccountField.MobilePhone);
  writer.Key("Fax");
  write_value(&writer, aOpenAccountField.Fax);
  writer.Key("EMail");
  write_value(&writer, aOpenAccountField.EMail);
  writer.Key("MoneyAccountStatus");
  write_value(&writer, aOpenAccountField.MoneyAccountStatus);
  writer.Key("BankAccount");
  write_value(&writer, aOpenAccountField.BankAccount);
  writer.Key("BankPassWord");
  write_value(&writer, aOpenAccountField.BankPassWord);
  writer.Key("AccountID");
  write_value(&writer, aOpenAccountField.AccountID);
  writer.Key("Password");
  write_value(&writer, aOpenAccountField.Password);
  writer.Key("InstallID");
  write_value(&writer, aOpenAccountField.InstallID);
  writer.Key("VerifyCertNoFlag");
  write_value(&writer, aOpenAccountField.VerifyCertNoFlag);
  writer.Key("CurrencyID");
  write_value(&writer, aOpenAccountField.CurrencyID);
  writer.Key("CashExchangeCode");
  write_value(&writer, aOpenAccountField.CashExchangeCode);
  writer.Key("Digest");
  write_value(&writer, aOpenAccountField.Digest);
  writer.Key("BankAccType");
  write_value(&writer, aOpenAccountField.BankAccType);
  writer.Key("DeviceID");
  write_value(&writer, aOpenAccountField.DeviceID);
  writer.Key("BankSecuAccType");
  write_value(&writer, aOpenAccountField.BankSecuAccType);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aOpenAccountField.BrokerIDByBank);
  writer.Key("BankSecuAcc");
  write_value(&writer, aOpenAccountField.BankSecuAcc);
  writer.Key("BankPwdFlag");
  write_value(&writer, aOpenAccountField.BankPwdFlag);
  writer.Key("SecuPwdFlag");
  write_value(&writer, aOpenAccountField.SecuPwdFlag);
  writer.Key("OperNo");
  write_value(&writer, aOpenAccountField.OperNo);
  writer.Key("TID");
  write_value(&writer, aOpenAccountField.TID);
  writer.Key("UserID");
  write_value(&writer, aOpenAccountField.UserID);
  writer.Key("ErrorID");
  write_value(&writer, aOpenAccountField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aOpenAccountField.ErrorMsg);
  writer.Key("LongCustomerName");
  write_value(&writer, aOpenAccountField.LongCustomerName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcCancelAccountField const &aCancelAccountField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcCancelAccountField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aCancelAccountField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aCancelAccountField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aCancelAccountField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aCancelAccountField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aCancelAccountField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aCancelAccountField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aCancelAccountField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aCancelAccountField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aCancelAccountField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aCancelAccountField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aCancelAccountField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aCancelAccountField.SessionID);
  writer.Key("CustomerName");
  write_value(&writer, aCancelAccountField.CustomerName);
  writer.Key("IdCardType");
  write_value(&writer, aCancelAccountField.IdCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aCancelAccountField.IdentifiedCardNo);
  writer.Key("Gender");
  write_value(&writer, aCancelAccountField.Gender);
  writer.Key("CountryCode");
  write_value(&writer, aCancelAccountField.CountryCode);
  writer.Key("CustType");
  write_value(&writer, aCancelAccountField.CustType);
  writer.Key("Address");
  write_value(&writer, aCancelAccountField.Address);
  writer.Key("ZipCode");
  write_value(&writer, aCancelAccountField.ZipCode);
  writer.Key("Telephone");
  write_value(&writer, aCancelAccountField.Telephone);
  writer.Key("MobilePhone");
  write_value(&writer, aCancelAccountField.MobilePhone);
  writer.Key("Fax");
  write_value(&writer, aCancelAccountField.Fax);
  writer.Key("EMail");
  write_value(&writer, aCancelAccountField.EMail);
  writer.Key("MoneyAccountStatus");
  write_value(&writer, aCancelAccountField.MoneyAccountStatus);
  writer.Key("BankAccount");
  write_value(&writer, aCancelAccountField.BankAccount);
  writer.Key("BankPassWord");
  write_value(&writer, aCancelAccountField.BankPassWord);
  writer.Key("AccountID");
  write_value(&writer, aCancelAccountField.AccountID);
  writer.Key("Password");
  write_value(&writer, aCancelAccountField.Password);
  writer.Key("InstallID");
  write_value(&writer, aCancelAccountField.InstallID);
  writer.Key("VerifyCertNoFlag");
  write_value(&writer, aCancelAccountField.VerifyCertNoFlag);
  writer.Key("CurrencyID");
  write_value(&writer, aCancelAccountField.CurrencyID);
  writer.Key("CashExchangeCode");
  write_value(&writer, aCancelAccountField.CashExchangeCode);
  writer.Key("Digest");
  write_value(&writer, aCancelAccountField.Digest);
  writer.Key("BankAccType");
  write_value(&writer, aCancelAccountField.BankAccType);
  writer.Key("DeviceID");
  write_value(&writer, aCancelAccountField.DeviceID);
  writer.Key("BankSecuAccType");
  write_value(&writer, aCancelAccountField.BankSecuAccType);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aCancelAccountField.BrokerIDByBank);
  writer.Key("BankSecuAcc");
  write_value(&writer, aCancelAccountField.BankSecuAcc);
  writer.Key("BankPwdFlag");
  write_value(&writer, aCancelAccountField.BankPwdFlag);
  writer.Key("SecuPwdFlag");
  write_value(&writer, aCancelAccountField.SecuPwdFlag);
  writer.Key("OperNo");
  write_value(&writer, aCancelAccountField.OperNo);
  writer.Key("TID");
  write_value(&writer, aCancelAccountField.TID);
  writer.Key("UserID");
  write_value(&writer, aCancelAccountField.UserID);
  writer.Key("ErrorID");
  write_value(&writer, aCancelAccountField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aCancelAccountField.ErrorMsg);
  writer.Key("LongCustomerName");
  write_value(&writer, aCancelAccountField.LongCustomerName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcChangeAccountField const &aChangeAccountField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcChangeAccountField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aChangeAccountField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aChangeAccountField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aChangeAccountField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aChangeAccountField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aChangeAccountField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aChangeAccountField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aChangeAccountField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aChangeAccountField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aChangeAccountField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aChangeAccountField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aChangeAccountField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aChangeAccountField.SessionID);
  writer.Key("CustomerName");
  write_value(&writer, aChangeAccountField.CustomerName);
  writer.Key("IdCardType");
  write_value(&writer, aChangeAccountField.IdCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aChangeAccountField.IdentifiedCardNo);
  writer.Key("Gender");
  write_value(&writer, aChangeAccountField.Gender);
  writer.Key("CountryCode");
  write_value(&writer, aChangeAccountField.CountryCode);
  writer.Key("CustType");
  write_value(&writer, aChangeAccountField.CustType);
  writer.Key("Address");
  write_value(&writer, aChangeAccountField.Address);
  writer.Key("ZipCode");
  write_value(&writer, aChangeAccountField.ZipCode);
  writer.Key("Telephone");
  write_value(&writer, aChangeAccountField.Telephone);
  writer.Key("MobilePhone");
  write_value(&writer, aChangeAccountField.MobilePhone);
  writer.Key("Fax");
  write_value(&writer, aChangeAccountField.Fax);
  writer.Key("EMail");
  write_value(&writer, aChangeAccountField.EMail);
  writer.Key("MoneyAccountStatus");
  write_value(&writer, aChangeAccountField.MoneyAccountStatus);
  writer.Key("BankAccount");
  write_value(&writer, aChangeAccountField.BankAccount);
  writer.Key("BankPassWord");
  write_value(&writer, aChangeAccountField.BankPassWord);
  writer.Key("NewBankAccount");
  write_value(&writer, aChangeAccountField.NewBankAccount);
  writer.Key("NewBankPassWord");
  write_value(&writer, aChangeAccountField.NewBankPassWord);
  writer.Key("AccountID");
  write_value(&writer, aChangeAccountField.AccountID);
  writer.Key("Password");
  write_value(&writer, aChangeAccountField.Password);
  writer.Key("BankAccType");
  write_value(&writer, aChangeAccountField.BankAccType);
  writer.Key("InstallID");
  write_value(&writer, aChangeAccountField.InstallID);
  writer.Key("VerifyCertNoFlag");
  write_value(&writer, aChangeAccountField.VerifyCertNoFlag);
  writer.Key("CurrencyID");
  write_value(&writer, aChangeAccountField.CurrencyID);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aChangeAccountField.BrokerIDByBank);
  writer.Key("BankPwdFlag");
  write_value(&writer, aChangeAccountField.BankPwdFlag);
  writer.Key("SecuPwdFlag");
  write_value(&writer, aChangeAccountField.SecuPwdFlag);
  writer.Key("TID");
  write_value(&writer, aChangeAccountField.TID);
  writer.Key("Digest");
  write_value(&writer, aChangeAccountField.Digest);
  writer.Key("ErrorID");
  write_value(&writer, aChangeAccountField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aChangeAccountField.ErrorMsg);
  writer.Key("LongCustomerName");
  write_value(&writer, aChangeAccountField.LongCustomerName);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcSecAgentACIDMapField const &aSecAgentACIDMapField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcSecAgentACIDMapField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aSecAgentACIDMapField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aSecAgentACIDMapField.UserID);
  writer.Key("AccountID");
  write_value(&writer, aSecAgentACIDMapField.AccountID);
  writer.Key("CurrencyID");
  write_value(&writer, aSecAgentACIDMapField.CurrencyID);
  writer.Key("BrokerSecAgentID");
  write_value(&writer, aSecAgentACIDMapField.BrokerSecAgentID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQrySecAgentACIDMapField const
                                    &aQrySecAgentACIDMapField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQrySecAgentACIDMapField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQrySecAgentACIDMapField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aQrySecAgentACIDMapField.UserID);
  writer.Key("AccountID");
  write_value(&writer, aQrySecAgentACIDMapField.AccountID);
  writer.Key("CurrencyID");
  write_value(&writer, aQrySecAgentACIDMapField.CurrencyID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcUserRightsAssignField const &aUserRightsAssignField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcUserRightsAssignField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aUserRightsAssignField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aUserRightsAssignField.UserID);
  writer.Key("DRIdentityID");
  write_value(&writer, aUserRightsAssignField.DRIdentityID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcBrokerUserRightAssignField const
                                    &aBrokerUserRightAssignField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcBrokerUserRightAssignField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aBrokerUserRightAssignField.BrokerID);
  writer.Key("DRIdentityID");
  write_value(&writer, aBrokerUserRightAssignField.DRIdentityID);
  writer.Key("Tradeable");
  write_value(&writer, aBrokerUserRightAssignField.Tradeable);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcDRTransferField const &aDRTransferField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcDRTransferField");
  writer.StartObject();
  writer.Key("OrigDRIdentityID");
  write_value(&writer, aDRTransferField.OrigDRIdentityID);
  writer.Key("DestDRIdentityID");
  write_value(&writer, aDRTransferField.DestDRIdentityID);
  writer.Key("OrigBrokerID");
  write_value(&writer, aDRTransferField.OrigBrokerID);
  writer.Key("DestBrokerID");
  write_value(&writer, aDRTransferField.DestBrokerID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcFensUserInfoField const &aFensUserInfoField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcFensUserInfoField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aFensUserInfoField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aFensUserInfoField.UserID);
  writer.Key("LoginMode");
  write_value(&writer, aFensUserInfoField.LoginMode);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcCurrTransferIdentityField const
                                    &aCurrTransferIdentityField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcCurrTransferIdentityField");
  writer.StartObject();
  writer.Key("IdentityID");
  write_value(&writer, aCurrTransferIdentityField.IdentityID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcLoginForbiddenUserField const
                                    &aLoginForbiddenUserField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcLoginForbiddenUserField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aLoginForbiddenUserField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aLoginForbiddenUserField.UserID);
  writer.Key("IPAddress");
  write_value(&writer, aLoginForbiddenUserField.IPAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryLoginForbiddenUserField const
                                    &aQryLoginForbiddenUserField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryLoginForbiddenUserField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryLoginForbiddenUserField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aQryLoginForbiddenUserField.UserID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcMulticastGroupInfoField const
                                    &aMulticastGroupInfoField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcMulticastGroupInfoField");
  writer.StartObject();
  writer.Key("GroupIP");
  write_value(&writer, aMulticastGroupInfoField.GroupIP);
  writer.Key("GroupPort");
  write_value(&writer, aMulticastGroupInfoField.GroupPort);
  writer.Key("SourceIP");
  write_value(&writer, aMulticastGroupInfoField.SourceIP);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcTradingAccountReserveField const
                                    &aTradingAccountReserveField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcTradingAccountReserveField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aTradingAccountReserveField.BrokerID);
  writer.Key("AccountID");
  write_value(&writer, aTradingAccountReserveField.AccountID);
  writer.Key("Reserve");
  write_value(&writer, aTradingAccountReserveField.Reserve);
  writer.Key("CurrencyID");
  write_value(&writer, aTradingAccountReserveField.CurrencyID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryLoginForbiddenIPField const
                                    &aQryLoginForbiddenIPField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryLoginForbiddenIPField");
  writer.StartObject();
  writer.Key("IPAddress");
  write_value(&writer, aQryLoginForbiddenIPField.IPAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQryIPListField const &aQryIPListField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryIPListField");
  writer.StartObject();
  writer.Key("IPAddress");
  write_value(&writer, aQryIPListField.IPAddress);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQryUserRightsAssignField const
                                    &aQryUserRightsAssignField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryUserRightsAssignField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQryUserRightsAssignField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aQryUserRightsAssignField.UserID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcReserveOpenAccountConfirmField const &
                                    aReserveOpenAccountConfirmField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReserveOpenAccountConfirmField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aReserveOpenAccountConfirmField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aReserveOpenAccountConfirmField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aReserveOpenAccountConfirmField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aReserveOpenAccountConfirmField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aReserveOpenAccountConfirmField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aReserveOpenAccountConfirmField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aReserveOpenAccountConfirmField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aReserveOpenAccountConfirmField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aReserveOpenAccountConfirmField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aReserveOpenAccountConfirmField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aReserveOpenAccountConfirmField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aReserveOpenAccountConfirmField.SessionID);
  writer.Key("CustomerName");
  write_value(&writer, aReserveOpenAccountConfirmField.CustomerName);
  writer.Key("IdCardType");
  write_value(&writer, aReserveOpenAccountConfirmField.IdCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aReserveOpenAccountConfirmField.IdentifiedCardNo);
  writer.Key("Gender");
  write_value(&writer, aReserveOpenAccountConfirmField.Gender);
  writer.Key("CountryCode");
  write_value(&writer, aReserveOpenAccountConfirmField.CountryCode);
  writer.Key("CustType");
  write_value(&writer, aReserveOpenAccountConfirmField.CustType);
  writer.Key("Address");
  write_value(&writer, aReserveOpenAccountConfirmField.Address);
  writer.Key("ZipCode");
  write_value(&writer, aReserveOpenAccountConfirmField.ZipCode);
  writer.Key("Telephone");
  write_value(&writer, aReserveOpenAccountConfirmField.Telephone);
  writer.Key("MobilePhone");
  write_value(&writer, aReserveOpenAccountConfirmField.MobilePhone);
  writer.Key("Fax");
  write_value(&writer, aReserveOpenAccountConfirmField.Fax);
  writer.Key("EMail");
  write_value(&writer, aReserveOpenAccountConfirmField.EMail);
  writer.Key("MoneyAccountStatus");
  write_value(&writer, aReserveOpenAccountConfirmField.MoneyAccountStatus);
  writer.Key("BankAccount");
  write_value(&writer, aReserveOpenAccountConfirmField.BankAccount);
  writer.Key("BankPassWord");
  write_value(&writer, aReserveOpenAccountConfirmField.BankPassWord);
  writer.Key("InstallID");
  write_value(&writer, aReserveOpenAccountConfirmField.InstallID);
  writer.Key("VerifyCertNoFlag");
  write_value(&writer, aReserveOpenAccountConfirmField.VerifyCertNoFlag);
  writer.Key("CurrencyID");
  write_value(&writer, aReserveOpenAccountConfirmField.CurrencyID);
  writer.Key("Digest");
  write_value(&writer, aReserveOpenAccountConfirmField.Digest);
  writer.Key("BankAccType");
  write_value(&writer, aReserveOpenAccountConfirmField.BankAccType);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aReserveOpenAccountConfirmField.BrokerIDByBank);
  writer.Key("TID");
  write_value(&writer, aReserveOpenAccountConfirmField.TID);
  writer.Key("AccountID");
  write_value(&writer, aReserveOpenAccountConfirmField.AccountID);
  writer.Key("Password");
  write_value(&writer, aReserveOpenAccountConfirmField.Password);
  writer.Key("BankReserveOpenSeq");
  write_value(&writer, aReserveOpenAccountConfirmField.BankReserveOpenSeq);
  writer.Key("BookDate");
  write_value(&writer, aReserveOpenAccountConfirmField.BookDate);
  writer.Key("BookPsw");
  write_value(&writer, aReserveOpenAccountConfirmField.BookPsw);
  writer.Key("ErrorID");
  write_value(&writer, aReserveOpenAccountConfirmField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aReserveOpenAccountConfirmField.ErrorMsg);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcReserveOpenAccountField const
                                    &aReserveOpenAccountField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReserveOpenAccountField");
  writer.StartObject();
  writer.Key("TradeCode");
  write_value(&writer, aReserveOpenAccountField.TradeCode);
  writer.Key("BankID");
  write_value(&writer, aReserveOpenAccountField.BankID);
  writer.Key("BankBranchID");
  write_value(&writer, aReserveOpenAccountField.BankBranchID);
  writer.Key("BrokerID");
  write_value(&writer, aReserveOpenAccountField.BrokerID);
  writer.Key("BrokerBranchID");
  write_value(&writer, aReserveOpenAccountField.BrokerBranchID);
  writer.Key("TradeDate");
  write_value(&writer, aReserveOpenAccountField.TradeDate);
  writer.Key("TradeTime");
  write_value(&writer, aReserveOpenAccountField.TradeTime);
  writer.Key("BankSerial");
  write_value(&writer, aReserveOpenAccountField.BankSerial);
  writer.Key("TradingDay");
  write_value(&writer, aReserveOpenAccountField.TradingDay);
  writer.Key("PlateSerial");
  write_value(&writer, aReserveOpenAccountField.PlateSerial);
  writer.Key("LastFragment");
  write_value(&writer, aReserveOpenAccountField.LastFragment);
  writer.Key("SessionID");
  write_value(&writer, aReserveOpenAccountField.SessionID);
  writer.Key("CustomerName");
  write_value(&writer, aReserveOpenAccountField.CustomerName);
  writer.Key("IdCardType");
  write_value(&writer, aReserveOpenAccountField.IdCardType);
  writer.Key("IdentifiedCardNo");
  write_value(&writer, aReserveOpenAccountField.IdentifiedCardNo);
  writer.Key("Gender");
  write_value(&writer, aReserveOpenAccountField.Gender);
  writer.Key("CountryCode");
  write_value(&writer, aReserveOpenAccountField.CountryCode);
  writer.Key("CustType");
  write_value(&writer, aReserveOpenAccountField.CustType);
  writer.Key("Address");
  write_value(&writer, aReserveOpenAccountField.Address);
  writer.Key("ZipCode");
  write_value(&writer, aReserveOpenAccountField.ZipCode);
  writer.Key("Telephone");
  write_value(&writer, aReserveOpenAccountField.Telephone);
  writer.Key("MobilePhone");
  write_value(&writer, aReserveOpenAccountField.MobilePhone);
  writer.Key("Fax");
  write_value(&writer, aReserveOpenAccountField.Fax);
  writer.Key("EMail");
  write_value(&writer, aReserveOpenAccountField.EMail);
  writer.Key("MoneyAccountStatus");
  write_value(&writer, aReserveOpenAccountField.MoneyAccountStatus);
  writer.Key("BankAccount");
  write_value(&writer, aReserveOpenAccountField.BankAccount);
  writer.Key("BankPassWord");
  write_value(&writer, aReserveOpenAccountField.BankPassWord);
  writer.Key("InstallID");
  write_value(&writer, aReserveOpenAccountField.InstallID);
  writer.Key("VerifyCertNoFlag");
  write_value(&writer, aReserveOpenAccountField.VerifyCertNoFlag);
  writer.Key("CurrencyID");
  write_value(&writer, aReserveOpenAccountField.CurrencyID);
  writer.Key("Digest");
  write_value(&writer, aReserveOpenAccountField.Digest);
  writer.Key("BankAccType");
  write_value(&writer, aReserveOpenAccountField.BankAccType);
  writer.Key("BrokerIDByBank");
  write_value(&writer, aReserveOpenAccountField.BrokerIDByBank);
  writer.Key("TID");
  write_value(&writer, aReserveOpenAccountField.TID);
  writer.Key("ReserveOpenAccStas");
  write_value(&writer, aReserveOpenAccountField.ReserveOpenAccStas);
  writer.Key("ErrorID");
  write_value(&writer, aReserveOpenAccountField.ErrorID);
  writer.Key("ErrorMsg");
  write_value(&writer, aReserveOpenAccountField.ErrorMsg);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcAccountPropertyField const &aAccountPropertyField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcAccountPropertyField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aAccountPropertyField.BrokerID);
  writer.Key("AccountID");
  write_value(&writer, aAccountPropertyField.AccountID);
  writer.Key("BankID");
  write_value(&writer, aAccountPropertyField.BankID);
  writer.Key("BankAccount");
  write_value(&writer, aAccountPropertyField.BankAccount);
  writer.Key("OpenName");
  write_value(&writer, aAccountPropertyField.OpenName);
  writer.Key("OpenBank");
  write_value(&writer, aAccountPropertyField.OpenBank);
  writer.Key("IsActive");
  write_value(&writer, aAccountPropertyField.IsActive);
  writer.Key("AccountSourceType");
  write_value(&writer, aAccountPropertyField.AccountSourceType);
  writer.Key("OpenDate");
  write_value(&writer, aAccountPropertyField.OpenDate);
  writer.Key("CancelDate");
  write_value(&writer, aAccountPropertyField.CancelDate);
  writer.Key("OperatorID");
  write_value(&writer, aAccountPropertyField.OperatorID);
  writer.Key("OperateDate");
  write_value(&writer, aAccountPropertyField.OperateDate);
  writer.Key("OperateTime");
  write_value(&writer, aAccountPropertyField.OperateTime);
  writer.Key("CurrencyID");
  write_value(&writer, aAccountPropertyField.CurrencyID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcQryCurrDRIdentityField const &aQryCurrDRIdentityField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQryCurrDRIdentityField");
  writer.StartObject();
  writer.Key("DRIdentityID");
  write_value(&writer, aQryCurrDRIdentityField.DRIdentityID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcCurrDRIdentityField const &aCurrDRIdentityField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcCurrDRIdentityField");
  writer.StartObject();
  writer.Key("DRIdentityID");
  write_value(&writer, aCurrDRIdentityField.DRIdentityID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQrySecAgentCheckModeField const
                                    &aQrySecAgentCheckModeField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQrySecAgentCheckModeField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQrySecAgentCheckModeField.BrokerID);
  writer.Key("InvestorID");
  write_value(&writer, aQrySecAgentCheckModeField.InvestorID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcQrySecAgentTradeInfoField const
                                    &aQrySecAgentTradeInfoField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQrySecAgentTradeInfoField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aQrySecAgentTradeInfoField.BrokerID);
  writer.Key("BrokerSecAgentID");
  write_value(&writer, aQrySecAgentTradeInfoField.BrokerSecAgentID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcUserSystemInfoField const &aUserSystemInfoField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcUserSystemInfoField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aUserSystemInfoField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aUserSystemInfoField.UserID);
  writer.Key("ClientSystemInfoLen");
  write_value(&writer, aUserSystemInfoField.ClientSystemInfoLen);
  writer.Key("ClientSystemInfo");
  write_value(&writer, aUserSystemInfoField.ClientSystemInfo);
  writer.Key("ClientPublicIP");
  write_value(&writer, aUserSystemInfoField.ClientPublicIP);
  writer.Key("ClientIPPort");
  write_value(&writer, aUserSystemInfoField.ClientIPPort);
  writer.Key("ClientLoginTime");
  write_value(&writer, aUserSystemInfoField.ClientLoginTime);
  writer.Key("ClientAppID");
  write_value(&writer, aUserSystemInfoField.ClientAppID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcReqUserAuthMethodField const &aReqUserAuthMethodField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReqUserAuthMethodField");
  writer.StartObject();
  writer.Key("TradingDay");
  write_value(&writer, aReqUserAuthMethodField.TradingDay);
  writer.Key("BrokerID");
  write_value(&writer, aReqUserAuthMethodField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aReqUserAuthMethodField.UserID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcRspUserAuthMethodField const &aRspUserAuthMethodField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcRspUserAuthMethodField");
  writer.StartObject();
  writer.Key("UsableAuthMethod");
  write_value(&writer, aRspUserAuthMethodField.UsableAuthMethod);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcReqGenUserCaptchaField const &aReqGenUserCaptchaField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReqGenUserCaptchaField");
  writer.StartObject();
  writer.Key("TradingDay");
  write_value(&writer, aReqGenUserCaptchaField.TradingDay);
  writer.Key("BrokerID");
  write_value(&writer, aReqGenUserCaptchaField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aReqGenUserCaptchaField.UserID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcRspGenUserCaptchaField const &aRspGenUserCaptchaField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcRspGenUserCaptchaField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aRspGenUserCaptchaField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aRspGenUserCaptchaField.UserID);
  writer.Key("CaptchaInfoLen");
  write_value(&writer, aRspGenUserCaptchaField.CaptchaInfoLen);
  writer.Key("CaptchaInfo");
  write_value(&writer, aRspGenUserCaptchaField.CaptchaInfo);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcReqGenUserTextField const &aReqGenUserTextField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReqGenUserTextField");
  writer.StartObject();
  writer.Key("TradingDay");
  write_value(&writer, aReqGenUserTextField.TradingDay);
  writer.Key("BrokerID");
  write_value(&writer, aReqGenUserTextField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aReqGenUserTextField.UserID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcRspGenUserTextField const &aRspGenUserTextField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcRspGenUserTextField");
  writer.StartObject();
  writer.Key("UserTextSeq");
  write_value(&writer, aRspGenUserTextField.UserTextSeq);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcReqUserLoginWithCaptchaField const
                                    &aReqUserLoginWithCaptchaField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReqUserLoginWithCaptchaField");
  writer.StartObject();
  writer.Key("TradingDay");
  write_value(&writer, aReqUserLoginWithCaptchaField.TradingDay);
  writer.Key("BrokerID");
  write_value(&writer, aReqUserLoginWithCaptchaField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aReqUserLoginWithCaptchaField.UserID);
  writer.Key("Password");
  write_value(&writer, aReqUserLoginWithCaptchaField.Password);
  writer.Key("UserProductInfo");
  write_value(&writer, aReqUserLoginWithCaptchaField.UserProductInfo);
  writer.Key("InterfaceProductInfo");
  write_value(&writer, aReqUserLoginWithCaptchaField.InterfaceProductInfo);
  writer.Key("ProtocolInfo");
  write_value(&writer, aReqUserLoginWithCaptchaField.ProtocolInfo);
  writer.Key("MacAddress");
  write_value(&writer, aReqUserLoginWithCaptchaField.MacAddress);
  writer.Key("ClientIPAddress");
  write_value(&writer, aReqUserLoginWithCaptchaField.ClientIPAddress);
  writer.Key("LoginRemark");
  write_value(&writer, aReqUserLoginWithCaptchaField.LoginRemark);
  writer.Key("Captcha");
  write_value(&writer, aReqUserLoginWithCaptchaField.Captcha);
  writer.Key("ClientIPPort");
  write_value(&writer, aReqUserLoginWithCaptchaField.ClientIPPort);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcReqUserLoginWithTextField const
                                    &aReqUserLoginWithTextField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReqUserLoginWithTextField");
  writer.StartObject();
  writer.Key("TradingDay");
  write_value(&writer, aReqUserLoginWithTextField.TradingDay);
  writer.Key("BrokerID");
  write_value(&writer, aReqUserLoginWithTextField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aReqUserLoginWithTextField.UserID);
  writer.Key("Password");
  write_value(&writer, aReqUserLoginWithTextField.Password);
  writer.Key("UserProductInfo");
  write_value(&writer, aReqUserLoginWithTextField.UserProductInfo);
  writer.Key("InterfaceProductInfo");
  write_value(&writer, aReqUserLoginWithTextField.InterfaceProductInfo);
  writer.Key("ProtocolInfo");
  write_value(&writer, aReqUserLoginWithTextField.ProtocolInfo);
  writer.Key("MacAddress");
  write_value(&writer, aReqUserLoginWithTextField.MacAddress);
  writer.Key("ClientIPAddress");
  write_value(&writer, aReqUserLoginWithTextField.ClientIPAddress);
  writer.Key("LoginRemark");
  write_value(&writer, aReqUserLoginWithTextField.LoginRemark);
  writer.Key("Text");
  write_value(&writer, aReqUserLoginWithTextField.Text);
  writer.Key("ClientIPPort");
  write_value(&writer, aReqUserLoginWithTextField.ClientIPPort);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                CThostFtdcReqUserLoginWithOTPField const
                                    &aReqUserLoginWithOTPField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReqUserLoginWithOTPField");
  writer.StartObject();
  writer.Key("TradingDay");
  write_value(&writer, aReqUserLoginWithOTPField.TradingDay);
  writer.Key("BrokerID");
  write_value(&writer, aReqUserLoginWithOTPField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aReqUserLoginWithOTPField.UserID);
  writer.Key("Password");
  write_value(&writer, aReqUserLoginWithOTPField.Password);
  writer.Key("UserProductInfo");
  write_value(&writer, aReqUserLoginWithOTPField.UserProductInfo);
  writer.Key("InterfaceProductInfo");
  write_value(&writer, aReqUserLoginWithOTPField.InterfaceProductInfo);
  writer.Key("ProtocolInfo");
  write_value(&writer, aReqUserLoginWithOTPField.ProtocolInfo);
  writer.Key("MacAddress");
  write_value(&writer, aReqUserLoginWithOTPField.MacAddress);
  writer.Key("ClientIPAddress");
  write_value(&writer, aReqUserLoginWithOTPField.ClientIPAddress);
  writer.Key("LoginRemark");
  write_value(&writer, aReqUserLoginWithOTPField.LoginRemark);
  writer.Key("OTPPassword");
  write_value(&writer, aReqUserLoginWithOTPField.OTPPassword);
  writer.Key("ClientIPPort");
  write_value(&writer, aReqUserLoginWithOTPField.ClientIPPort);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcReqApiHandshakeField const &aReqApiHandshakeField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReqApiHandshakeField");
  writer.StartObject();
  writer.Key("CryptoKeyVersion");
  write_value(&writer, aReqApiHandshakeField.CryptoKeyVersion);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcRspApiHandshakeField const &aRspApiHandshakeField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcRspApiHandshakeField");
  writer.StartObject();
  writer.Key("FrontHandshakeDataLen");
  write_value(&writer, aRspApiHandshakeField.FrontHandshakeDataLen);
  writer.Key("FrontHandshakeData");
  write_value(&writer, aRspApiHandshakeField.FrontHandshakeData);
  writer.Key("IsApiAuthEnabled");
  write_value(&writer, aRspApiHandshakeField.IsApiAuthEnabled);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcReqVerifyApiKeyField const &aReqVerifyApiKeyField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcReqVerifyApiKeyField");
  writer.StartObject();
  writer.Key("ApiHandshakeDataLen");
  write_value(&writer, aReqVerifyApiKeyField.ApiHandshakeDataLen);
  writer.Key("ApiHandshakeData");
  write_value(&writer, aReqVerifyApiKeyField.ApiHandshakeData);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    CThostFtdcDepartmentUserField const &aDepartmentUserField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcDepartmentUserField");
  writer.StartObject();
  writer.Key("BrokerID");
  write_value(&writer, aDepartmentUserField.BrokerID);
  writer.Key("UserID");
  write_value(&writer, aDepartmentUserField.UserID);
  writer.Key("InvestorRange");
  write_value(&writer, aDepartmentUserField.InvestorRange);
  writer.Key("InvestorID");
  write_value(&writer, aDepartmentUserField.InvestorID);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           CThostFtdcQueryFreqField const &aQueryFreqField) { // NOLINT
  StringBuffer sb;
  PrettyWriter<StringBuffer> writer(sb);

  writer.StartObject();
  writer.Key("CThostFtdcQueryFreqField");
  writer.StartObject();
  writer.Key("QueryFreq");
  write_value(&writer, aQueryFreqField.QueryFreq);
  writer.EndObject();
  writer.EndObject();

  os << sb.GetString();

  return os;
}

#endif
