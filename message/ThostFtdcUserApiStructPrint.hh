// Copyright (c) 2010
// All rights reserved.

#ifndef THOST_FTDC_USERAPI_STRUCT_PRINT_HH_
#define THOST_FTDC_USERAPI_STRUCT_PRINT_HH_

#include <ostream>
#include "ThostFtdcUserApiStruct.h"

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcDisseminationField const& aDisseminationField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcDisseminationField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SequenceSeries\": \""
       <<aDisseminationField.SequenceSeries  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SequenceNo\": \""
       <<aDisseminationField.SequenceNo  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcReqUserLoginField const& aReqUserLoginField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcReqUserLoginField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aReqUserLoginField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aReqUserLoginField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aReqUserLoginField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aReqUserLoginField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserProductInfo\": \""
       <<aReqUserLoginField.UserProductInfo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InterfaceProductInfo\": \""
       <<aReqUserLoginField.InterfaceProductInfo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ProtocolInfo\": \""
       <<aReqUserLoginField.ProtocolInfo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MacAddress\": \""
       <<aReqUserLoginField.MacAddress  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OneTimePassword\": \""
       <<aReqUserLoginField.OneTimePassword  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientIPAddress\": \""
       <<aReqUserLoginField.ClientIPAddress  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcRspUserLoginField const& aRspUserLoginField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcRspUserLoginField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aRspUserLoginField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LoginTime\": \""
       <<aRspUserLoginField.LoginTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aRspUserLoginField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aRspUserLoginField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SystemName\": \""
       <<aRspUserLoginField.SystemName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aRspUserLoginField.FrontID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aRspUserLoginField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MaxOrderRef\": \""
       <<aRspUserLoginField.MaxOrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SHFETime\": \""
       <<aRspUserLoginField.SHFETime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DCETime\": \""
       <<aRspUserLoginField.DCETime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CZCETime\": \""
       <<aRspUserLoginField.CZCETime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FFEXTime\": \""
       <<aRspUserLoginField.FFEXTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"INETime\": \""
       <<aRspUserLoginField.INETime  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcUserLogoutField const& aUserLogoutField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcUserLogoutField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aUserLogoutField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aUserLogoutField.UserID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcForceUserLogoutField const& aForceUserLogoutField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcForceUserLogoutField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aForceUserLogoutField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aForceUserLogoutField.UserID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcReqAuthenticateField const& aReqAuthenticateField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcReqAuthenticateField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aReqAuthenticateField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aReqAuthenticateField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserProductInfo\": \""
       <<aReqAuthenticateField.UserProductInfo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AuthCode\": \""
       <<aReqAuthenticateField.AuthCode  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcRspAuthenticateField const& aRspAuthenticateField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcRspAuthenticateField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aRspAuthenticateField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aRspAuthenticateField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserProductInfo\": \""
       <<aRspAuthenticateField.UserProductInfo  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcAuthenticationInfoField const& aAuthenticationInfoField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcAuthenticationInfoField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aAuthenticationInfoField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aAuthenticationInfoField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserProductInfo\": \""
       <<aAuthenticationInfoField.UserProductInfo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AuthInfo\": \""
       <<aAuthenticationInfoField.AuthInfo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsResult\": \""
       <<aAuthenticationInfoField.IsResult  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTransferHeaderField const& aTransferHeaderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTransferHeaderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Version\": \""
       <<aTransferHeaderField.Version  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aTransferHeaderField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aTransferHeaderField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aTransferHeaderField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeSerial\": \""
       <<aTransferHeaderField.TradeSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureID\": \""
       <<aTransferHeaderField.FutureID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aTransferHeaderField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBrchID\": \""
       <<aTransferHeaderField.BankBrchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperNo\": \""
       <<aTransferHeaderField.OperNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeviceID\": \""
       <<aTransferHeaderField.DeviceID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RecordNum\": \""
       <<aTransferHeaderField.RecordNum  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aTransferHeaderField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aTransferHeaderField.RequestID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTransferBankToFutureReqField const& aTransferBankToFutureReqField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTransferBankToFutureReqField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureAccount\": \""
       <<aTransferBankToFutureReqField.FutureAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FuturePwdFlag\": \""
       <<aTransferBankToFutureReqField.FuturePwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureAccPwd\": \""
       <<aTransferBankToFutureReqField.FutureAccPwd  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeAmt\": \""
       <<aTransferBankToFutureReqField.TradeAmt  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustFee\": \""
       <<aTransferBankToFutureReqField.CustFee  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyCode\": \""
       <<aTransferBankToFutureReqField.CurrencyCode  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTransferBankToFutureRspField const& aTransferBankToFutureRspField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTransferBankToFutureRspField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RetCode\": \""
       <<aTransferBankToFutureRspField.RetCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RetInfo\": \""
       <<aTransferBankToFutureRspField.RetInfo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureAccount\": \""
       <<aTransferBankToFutureRspField.FutureAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeAmt\": \""
       <<aTransferBankToFutureRspField.TradeAmt  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustFee\": \""
       <<aTransferBankToFutureRspField.CustFee  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyCode\": \""
       <<aTransferBankToFutureRspField.CurrencyCode  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTransferFutureToBankReqField const& aTransferFutureToBankReqField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTransferFutureToBankReqField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureAccount\": \""
       <<aTransferFutureToBankReqField.FutureAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FuturePwdFlag\": \""
       <<aTransferFutureToBankReqField.FuturePwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureAccPwd\": \""
       <<aTransferFutureToBankReqField.FutureAccPwd  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeAmt\": \""
       <<aTransferFutureToBankReqField.TradeAmt  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustFee\": \""
       <<aTransferFutureToBankReqField.CustFee  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyCode\": \""
       <<aTransferFutureToBankReqField.CurrencyCode  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTransferFutureToBankRspField const& aTransferFutureToBankRspField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTransferFutureToBankRspField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RetCode\": \""
       <<aTransferFutureToBankRspField.RetCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RetInfo\": \""
       <<aTransferFutureToBankRspField.RetInfo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureAccount\": \""
       <<aTransferFutureToBankRspField.FutureAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeAmt\": \""
       <<aTransferFutureToBankRspField.TradeAmt  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustFee\": \""
       <<aTransferFutureToBankRspField.CustFee  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyCode\": \""
       <<aTransferFutureToBankRspField.CurrencyCode  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTransferQryBankReqField const& aTransferQryBankReqField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTransferQryBankReqField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureAccount\": \""
       <<aTransferQryBankReqField.FutureAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FuturePwdFlag\": \""
       <<aTransferQryBankReqField.FuturePwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureAccPwd\": \""
       <<aTransferQryBankReqField.FutureAccPwd  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyCode\": \""
       <<aTransferQryBankReqField.CurrencyCode  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTransferQryBankRspField const& aTransferQryBankRspField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTransferQryBankRspField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RetCode\": \""
       <<aTransferQryBankRspField.RetCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RetInfo\": \""
       <<aTransferQryBankRspField.RetInfo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureAccount\": \""
       <<aTransferQryBankRspField.FutureAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeAmt\": \""
       <<aTransferQryBankRspField.TradeAmt  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UseAmt\": \""
       <<aTransferQryBankRspField.UseAmt  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FetchAmt\": \""
       <<aTransferQryBankRspField.FetchAmt  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyCode\": \""
       <<aTransferQryBankRspField.CurrencyCode  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTransferQryDetailReqField const& aTransferQryDetailReqField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTransferQryDetailReqField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureAccount\": \""
       <<aTransferQryDetailReqField.FutureAccount  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTransferQryDetailRspField const& aTransferQryDetailRspField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTransferQryDetailRspField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aTransferQryDetailRspField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aTransferQryDetailRspField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aTransferQryDetailRspField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureSerial\": \""
       <<aTransferQryDetailRspField.FutureSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureID\": \""
       <<aTransferQryDetailRspField.FutureID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureAccount\": \""
       <<aTransferQryDetailRspField.FutureAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aTransferQryDetailRspField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aTransferQryDetailRspField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBrchID\": \""
       <<aTransferQryDetailRspField.BankBrchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccount\": \""
       <<aTransferQryDetailRspField.BankAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CertCode\": \""
       <<aTransferQryDetailRspField.CertCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyCode\": \""
       <<aTransferQryDetailRspField.CurrencyCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TxAmount\": \""
       <<aTransferQryDetailRspField.TxAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Flag\": \""
       <<aTransferQryDetailRspField.Flag  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcRspInfoField const& aRspInfoField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcRspInfoField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aRspInfoField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aRspInfoField.ErrorMsg  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcExchangeField const& aExchangeField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcExchangeField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aExchangeField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeName\": \""
       <<aExchangeField.ExchangeName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeProperty\": \""
       <<aExchangeField.ExchangeProperty  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcProductField const& aProductField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcProductField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ProductID\": \""
       <<aProductField.ProductID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ProductName\": \""
       <<aProductField.ProductName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aProductField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ProductClass\": \""
       <<aProductField.ProductClass  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeMultiple\": \""
       <<aProductField.VolumeMultiple  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PriceTick\": \""
       <<aProductField.PriceTick  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MaxMarketOrderVolume\": \""
       <<aProductField.MaxMarketOrderVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MinMarketOrderVolume\": \""
       <<aProductField.MinMarketOrderVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MaxLimitOrderVolume\": \""
       <<aProductField.MaxLimitOrderVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MinLimitOrderVolume\": \""
       <<aProductField.MinLimitOrderVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PositionType\": \""
       <<aProductField.PositionType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PositionDateType\": \""
       <<aProductField.PositionDateType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseDealType\": \""
       <<aProductField.CloseDealType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCurrencyID\": \""
       <<aProductField.TradeCurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MortgageFundUseRange\": \""
       <<aProductField.MortgageFundUseRange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeProductID\": \""
       <<aProductField.ExchangeProductID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UnderlyingMultiple\": \""
       <<aProductField.UnderlyingMultiple  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInstrumentField const& aInstrumentField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInstrumentField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aInstrumentField.InstrumentID <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aInstrumentField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentName\": \""
       <<aInstrumentField.InstrumentName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aInstrumentField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ProductID\": \""
       <<aInstrumentField.ProductID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ProductClass\": \""
       <<aInstrumentField.ProductClass <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeliveryYear\": \""
       <<aInstrumentField.DeliveryYear  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeliveryMonth\": \""
       <<aInstrumentField.DeliveryMonth  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MaxMarketOrderVolume\": \""
       <<aInstrumentField.MaxMarketOrderVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MinMarketOrderVolume\": \""
       <<aInstrumentField.MinMarketOrderVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MaxLimitOrderVolume\": \""
       <<aInstrumentField.MaxLimitOrderVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MinLimitOrderVolume\": \""
       <<aInstrumentField.MinLimitOrderVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeMultiple\": \""
       <<aInstrumentField.VolumeMultiple  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PriceTick\": \""
       <<aInstrumentField.PriceTick  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CreateDate\": \""
       <<aInstrumentField.CreateDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenDate\": \""
       <<aInstrumentField.OpenDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExpireDate\": \""
       <<aInstrumentField.ExpireDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StartDelivDate\": \""
       <<aInstrumentField.StartDelivDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"EndDelivDate\": \""
       <<aInstrumentField.EndDelivDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstLifePhase\": \""
       <<aInstrumentField.InstLifePhase  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsTrading\": \""
       <<aInstrumentField.IsTrading  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PositionType\": \""
       <<aInstrumentField.PositionType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PositionDateType\": \""
       <<aInstrumentField.PositionDateType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LongMarginRatio\": \""
       <<aInstrumentField.LongMarginRatio  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ShortMarginRatio\": \""
       <<aInstrumentField.ShortMarginRatio  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MaxMarginSideAlgorithm\": \""
       <<aInstrumentField.MaxMarginSideAlgorithm  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UnderlyingInstrID\": \""
       <<aInstrumentField.UnderlyingInstrID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StrikePrice\": \""
       <<aInstrumentField.StrikePrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    // os <<"        \"OptionsType\": \""
    //    <<std::string(1, aInstrumentField.OptionsType)  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UnderlyingMultiple\": \""
       <<aInstrumentField.UnderlyingMultiple  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombinationType\": \""
       <<aInstrumentField.CombinationType  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcBrokerField const& aBrokerField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcBrokerField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aBrokerField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerAbbr\": \""
       <<aBrokerField.BrokerAbbr  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerName\": \""
       <<aBrokerField.BrokerName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsActive\": \""
       <<aBrokerField.IsActive  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTraderField const& aTraderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTraderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aTraderField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aTraderField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aTraderField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aTraderField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallCount\": \""
       <<aTraderField.InstallCount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aTraderField.BrokerID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInvestorField const& aInvestorField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInvestorField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aInvestorField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aInvestorField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorGroupID\": \""
       <<aInvestorField.InvestorGroupID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorName\": \""
       <<aInvestorField.InvestorName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardType\": \""
       <<aInvestorField.IdentifiedCardType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardNo\": \""
       <<aInvestorField.IdentifiedCardNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsActive\": \""
       <<aInvestorField.IsActive  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Telephone\": \""
       <<aInvestorField.Telephone  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Address\": \""
       <<aInvestorField.Address  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenDate\": \""
       <<aInvestorField.OpenDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Mobile\": \""
       <<aInvestorField.Mobile  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CommModelID\": \""
       <<aInvestorField.CommModelID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MarginModelID\": \""
       <<aInvestorField.MarginModelID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTradingCodeField const& aTradingCodeField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTradingCodeField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aTradingCodeField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aTradingCodeField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aTradingCodeField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aTradingCodeField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsActive\": \""
       <<aTradingCodeField.IsActive  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientIDType\": \""
       <<aTradingCodeField.ClientIDType  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcPartBrokerField const& aPartBrokerField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcPartBrokerField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aPartBrokerField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aPartBrokerField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aPartBrokerField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsActive\": \""
       <<aPartBrokerField.IsActive  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcSuperUserField const& aSuperUserField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcSuperUserField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aSuperUserField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserName\": \""
       <<aSuperUserField.UserName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aSuperUserField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsActive\": \""
       <<aSuperUserField.IsActive  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcSuperUserFunctionField const& aSuperUserFunctionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcSuperUserFunctionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aSuperUserFunctionField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FunctionCode\": \""
       <<aSuperUserFunctionField.FunctionCode  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInvestorGroupField const& aInvestorGroupField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInvestorGroupField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aInvestorGroupField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorGroupID\": \""
       <<aInvestorGroupField.InvestorGroupID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorGroupName\": \""
       <<aInvestorGroupField.InvestorGroupName  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTradingAccountField const& aTradingAccountField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTradingAccountField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aTradingAccountField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aTradingAccountField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreMortgage\": \""
       <<aTradingAccountField.PreMortgage  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreCredit\": \""
       <<aTradingAccountField.PreCredit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreDeposit\": \""
       <<aTradingAccountField.PreDeposit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreBalance\": \""
       <<aTradingAccountField.PreBalance  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreMargin\": \""
       <<aTradingAccountField.PreMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InterestBase\": \""
       <<aTradingAccountField.InterestBase  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Interest\": \""
       <<aTradingAccountField.Interest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Deposit\": \""
       <<aTradingAccountField.Deposit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Withdraw\": \""
       <<aTradingAccountField.Withdraw  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrozenMargin\": \""
       <<aTradingAccountField.FrozenMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrozenCash\": \""
       <<aTradingAccountField.FrozenCash  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrozenCommission\": \""
       <<aTradingAccountField.FrozenCommission  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrMargin\": \""
       <<aTradingAccountField.CurrMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CashIn\": \""
       <<aTradingAccountField.CashIn  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Commission\": \""
       <<aTradingAccountField.Commission  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseProfit\": \""
       <<aTradingAccountField.CloseProfit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PositionProfit\": \""
       <<aTradingAccountField.PositionProfit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Balance\": \""
       <<aTradingAccountField.Balance  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Available\": \""
       <<aTradingAccountField.Available  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"WithdrawQuota\": \""
       <<aTradingAccountField.WithdrawQuota  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Reserve\": \""
       <<aTradingAccountField.Reserve  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aTradingAccountField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementID\": \""
       <<aTradingAccountField.SettlementID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Credit\": \""
       <<aTradingAccountField.Credit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Mortgage\": \""
       <<aTradingAccountField.Mortgage  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeMargin\": \""
       <<aTradingAccountField.ExchangeMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeliveryMargin\": \""
       <<aTradingAccountField.DeliveryMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeDeliveryMargin\": \""
       <<aTradingAccountField.ExchangeDeliveryMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ReserveBalance\": \""
       <<aTradingAccountField.ReserveBalance  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aTradingAccountField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreFundMortgageIn\": \""
       <<aTradingAccountField.PreFundMortgageIn  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreFundMortgageOut\": \""
       <<aTradingAccountField.PreFundMortgageOut  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FundMortgageIn\": \""
       <<aTradingAccountField.FundMortgageIn  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FundMortgageOut\": \""
       <<aTradingAccountField.FundMortgageOut  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FundMortgageAvailable\": \""
       <<aTradingAccountField.FundMortgageAvailable  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MortgageableFund\": \""
       <<aTradingAccountField.MortgageableFund  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SpecProductMargin\": \""
       <<aTradingAccountField.SpecProductMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SpecProductFrozenMargin\": \""
       <<aTradingAccountField.SpecProductFrozenMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SpecProductCommission\": \""
       <<aTradingAccountField.SpecProductCommission  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SpecProductFrozenCommission\": \""
       <<aTradingAccountField.SpecProductFrozenCommission  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SpecProductPositionProfit\": \""
       <<aTradingAccountField.SpecProductPositionProfit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SpecProductCloseProfit\": \""
       <<aTradingAccountField.SpecProductCloseProfit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SpecProductPositionProfitByAlg\": \""
       <<aTradingAccountField.SpecProductPositionProfitByAlg  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SpecProductExchangeMargin\": \""
       <<aTradingAccountField.SpecProductExchangeMargin  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInvestorPositionField const& aInvestorPositionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInvestorPositionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aInvestorPositionField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aInvestorPositionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aInvestorPositionField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PosiDirection\": \""
       <<aInvestorPositionField.PosiDirection  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aInvestorPositionField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PositionDate\": \""
       <<aInvestorPositionField.PositionDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"YdPosition\": \""
       <<aInvestorPositionField.YdPosition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Position\": \""
       <<aInvestorPositionField.Position  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LongFrozen\": \""
       <<aInvestorPositionField.LongFrozen  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ShortFrozen\": \""
       <<aInvestorPositionField.ShortFrozen  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LongFrozenAmount\": \""
       <<aInvestorPositionField.LongFrozenAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ShortFrozenAmount\": \""
       <<aInvestorPositionField.ShortFrozenAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenVolume\": \""
       <<aInvestorPositionField.OpenVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseVolume\": \""
       <<aInvestorPositionField.CloseVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenAmount\": \""
       <<aInvestorPositionField.OpenAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseAmount\": \""
       <<aInvestorPositionField.CloseAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PositionCost\": \""
       <<aInvestorPositionField.PositionCost  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreMargin\": \""
       <<aInvestorPositionField.PreMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UseMargin\": \""
       <<aInvestorPositionField.UseMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrozenMargin\": \""
       <<aInvestorPositionField.FrozenMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrozenCash\": \""
       <<aInvestorPositionField.FrozenCash  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrozenCommission\": \""
       <<aInvestorPositionField.FrozenCommission  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CashIn\": \""
       <<aInvestorPositionField.CashIn  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Commission\": \""
       <<aInvestorPositionField.Commission  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseProfit\": \""
       <<aInvestorPositionField.CloseProfit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PositionProfit\": \""
       <<aInvestorPositionField.PositionProfit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreSettlementPrice\": \""
       <<aInvestorPositionField.PreSettlementPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementPrice\": \""
       <<aInvestorPositionField.SettlementPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aInvestorPositionField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementID\": \""
       <<aInvestorPositionField.SettlementID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenCost\": \""
       <<aInvestorPositionField.OpenCost  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeMargin\": \""
       <<aInvestorPositionField.ExchangeMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombPosition\": \""
       <<aInvestorPositionField.CombPosition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombLongFrozen\": \""
       <<aInvestorPositionField.CombLongFrozen  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombShortFrozen\": \""
       <<aInvestorPositionField.CombShortFrozen  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseProfitByDate\": \""
       <<aInvestorPositionField.CloseProfitByDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseProfitByTrade\": \""
       <<aInvestorPositionField.CloseProfitByTrade  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TodayPosition\": \""
       <<aInvestorPositionField.TodayPosition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MarginRateByMoney\": \""
       <<aInvestorPositionField.MarginRateByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MarginRateByVolume\": \""
       <<aInvestorPositionField.MarginRateByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StrikeFrozen\": \""
       <<aInvestorPositionField.StrikeFrozen  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StrikeFrozenAmount\": \""
       <<aInvestorPositionField.StrikeFrozenAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AbandonFrozen\": \""
       <<aInvestorPositionField.AbandonFrozen  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInstrumentMarginRateField const& aInstrumentMarginRateField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInstrumentMarginRateField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aInstrumentMarginRateField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorRange\": \""
       <<aInstrumentMarginRateField.InvestorRange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aInstrumentMarginRateField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aInstrumentMarginRateField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aInstrumentMarginRateField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LongMarginRatioByMoney\": \""
       <<aInstrumentMarginRateField.LongMarginRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LongMarginRatioByVolume\": \""
       <<aInstrumentMarginRateField.LongMarginRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ShortMarginRatioByMoney\": \""
       <<aInstrumentMarginRateField.ShortMarginRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ShortMarginRatioByVolume\": \""
       <<aInstrumentMarginRateField.ShortMarginRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsRelative\": \""
       <<aInstrumentMarginRateField.IsRelative  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInstrumentCommissionRateField const& aInstrumentCommissionRateField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInstrumentCommissionRateField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aInstrumentCommissionRateField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorRange\": \""
       <<aInstrumentCommissionRateField.InvestorRange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aInstrumentCommissionRateField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aInstrumentCommissionRateField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenRatioByMoney\": \""
       <<aInstrumentCommissionRateField.OpenRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenRatioByVolume\": \""
       <<aInstrumentCommissionRateField.OpenRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseRatioByMoney\": \""
       <<aInstrumentCommissionRateField.CloseRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseRatioByVolume\": \""
       <<aInstrumentCommissionRateField.CloseRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseTodayRatioByMoney\": \""
       <<aInstrumentCommissionRateField.CloseTodayRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseTodayRatioByVolume\": \""
       <<aInstrumentCommissionRateField.CloseTodayRatioByVolume  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcDepthMarketDataField const& aDepthMarketDataField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcDepthMarketDataField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aDepthMarketDataField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aDepthMarketDataField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aDepthMarketDataField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aDepthMarketDataField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastPrice\": \""
       <<aDepthMarketDataField.LastPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreSettlementPrice\": \""
       <<aDepthMarketDataField.PreSettlementPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreClosePrice\": \""
       <<aDepthMarketDataField.PreClosePrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreOpenInterest\": \""
       <<aDepthMarketDataField.PreOpenInterest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenPrice\": \""
       <<aDepthMarketDataField.OpenPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HighestPrice\": \""
       <<aDepthMarketDataField.HighestPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LowestPrice\": \""
       <<aDepthMarketDataField.LowestPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Volume\": \""
       <<aDepthMarketDataField.Volume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Turnover\": \""
       <<aDepthMarketDataField.Turnover  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenInterest\": \""
       <<aDepthMarketDataField.OpenInterest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClosePrice\": \""
       <<aDepthMarketDataField.ClosePrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementPrice\": \""
       <<aDepthMarketDataField.SettlementPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UpperLimitPrice\": \""
       <<aDepthMarketDataField.UpperLimitPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LowerLimitPrice\": \""
       <<aDepthMarketDataField.LowerLimitPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreDelta\": \""
       <<aDepthMarketDataField.PreDelta  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrDelta\": \""
       <<aDepthMarketDataField.CurrDelta  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UpdateTime\": \""
       <<aDepthMarketDataField.UpdateTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UpdateMillisec\": \""
       <<aDepthMarketDataField.UpdateMillisec  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidPrice1\": \""
       <<aDepthMarketDataField.BidPrice1  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidVolume1\": \""
       <<aDepthMarketDataField.BidVolume1  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskPrice1\": \""
       <<aDepthMarketDataField.AskPrice1  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskVolume1\": \""
       <<aDepthMarketDataField.AskVolume1  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidPrice2\": \""
       <<aDepthMarketDataField.BidPrice2  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidVolume2\": \""
       <<aDepthMarketDataField.BidVolume2  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskPrice2\": \""
       <<aDepthMarketDataField.AskPrice2  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskVolume2\": \""
       <<aDepthMarketDataField.AskVolume2  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidPrice3\": \""
       <<aDepthMarketDataField.BidPrice3  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidVolume3\": \""
       <<aDepthMarketDataField.BidVolume3  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskPrice3\": \""
       <<aDepthMarketDataField.AskPrice3  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskVolume3\": \""
       <<aDepthMarketDataField.AskVolume3  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidPrice4\": \""
       <<aDepthMarketDataField.BidPrice4  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidVolume4\": \""
       <<aDepthMarketDataField.BidVolume4  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskPrice4\": \""
       <<aDepthMarketDataField.AskPrice4  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskVolume4\": \""
       <<aDepthMarketDataField.AskVolume4  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidPrice5\": \""
       <<aDepthMarketDataField.BidPrice5  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidVolume5\": \""
       <<aDepthMarketDataField.BidVolume5  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskPrice5\": \""
       <<aDepthMarketDataField.AskPrice5  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskVolume5\": \""
       <<aDepthMarketDataField.AskVolume5  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AveragePrice\": \""
       <<aDepthMarketDataField.AveragePrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionDay\": \""
       <<aDepthMarketDataField.ActionDay  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInstrumentTradingRightField const& aInstrumentTradingRightField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInstrumentTradingRightField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aInstrumentTradingRightField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorRange\": \""
       <<aInstrumentTradingRightField.InvestorRange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aInstrumentTradingRightField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aInstrumentTradingRightField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingRight\": \""
       <<aInstrumentTradingRightField.TradingRight  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcBrokerUserField const& aBrokerUserField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcBrokerUserField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aBrokerUserField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aBrokerUserField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserName\": \""
       <<aBrokerUserField.UserName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserType\": \""
       <<aBrokerUserField.UserType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsActive\": \""
       <<aBrokerUserField.IsActive  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsUsingOTP\": \""
       <<aBrokerUserField.IsUsingOTP  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcBrokerUserPasswordField const& aBrokerUserPasswordField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcBrokerUserPasswordField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aBrokerUserPasswordField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aBrokerUserPasswordField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aBrokerUserPasswordField.Password  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcBrokerUserFunctionField const& aBrokerUserFunctionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcBrokerUserFunctionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aBrokerUserFunctionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aBrokerUserFunctionField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerFunctionCode\": \""
       <<aBrokerUserFunctionField.BrokerFunctionCode  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTraderOfferField const& aTraderOfferField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTraderOfferField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aTraderOfferField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aTraderOfferField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aTraderOfferField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aTraderOfferField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aTraderOfferField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderLocalID\": \""
       <<aTraderOfferField.OrderLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderConnectStatus\": \""
       <<aTraderOfferField.TraderConnectStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ConnectRequestDate\": \""
       <<aTraderOfferField.ConnectRequestDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ConnectRequestTime\": \""
       <<aTraderOfferField.ConnectRequestTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastReportDate\": \""
       <<aTraderOfferField.LastReportDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastReportTime\": \""
       <<aTraderOfferField.LastReportTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ConnectDate\": \""
       <<aTraderOfferField.ConnectDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ConnectTime\": \""
       <<aTraderOfferField.ConnectTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StartDate\": \""
       <<aTraderOfferField.StartDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StartTime\": \""
       <<aTraderOfferField.StartTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aTraderOfferField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aTraderOfferField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MaxTradeID\": \""
       <<aTraderOfferField.MaxTradeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MaxOrderMessageReference\": \""
       <<aTraderOfferField.MaxOrderMessageReference  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcSettlementInfoField const& aSettlementInfoField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcSettlementInfoField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aSettlementInfoField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementID\": \""
       <<aSettlementInfoField.SettlementID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aSettlementInfoField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aSettlementInfoField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SequenceNo\": \""
       <<aSettlementInfoField.SequenceNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Content\": \""
       <<aSettlementInfoField.Content  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInstrumentMarginRateAdjustField const& aInstrumentMarginRateAdjustField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInstrumentMarginRateAdjustField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aInstrumentMarginRateAdjustField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorRange\": \""
       <<aInstrumentMarginRateAdjustField.InvestorRange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aInstrumentMarginRateAdjustField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aInstrumentMarginRateAdjustField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aInstrumentMarginRateAdjustField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LongMarginRatioByMoney\": \""
       <<aInstrumentMarginRateAdjustField.LongMarginRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LongMarginRatioByVolume\": \""
       <<aInstrumentMarginRateAdjustField.LongMarginRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ShortMarginRatioByMoney\": \""
       <<aInstrumentMarginRateAdjustField.ShortMarginRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ShortMarginRatioByVolume\": \""
       <<aInstrumentMarginRateAdjustField.ShortMarginRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsRelative\": \""
       <<aInstrumentMarginRateAdjustField.IsRelative  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcExchangeMarginRateField const& aExchangeMarginRateField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcExchangeMarginRateField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aExchangeMarginRateField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aExchangeMarginRateField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aExchangeMarginRateField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LongMarginRatioByMoney\": \""
       <<aExchangeMarginRateField.LongMarginRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LongMarginRatioByVolume\": \""
       <<aExchangeMarginRateField.LongMarginRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ShortMarginRatioByMoney\": \""
       <<aExchangeMarginRateField.ShortMarginRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ShortMarginRatioByVolume\": \""
       <<aExchangeMarginRateField.ShortMarginRatioByVolume  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcExchangeMarginRateAdjustField const& aExchangeMarginRateAdjustField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcExchangeMarginRateAdjustField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aExchangeMarginRateAdjustField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aExchangeMarginRateAdjustField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aExchangeMarginRateAdjustField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LongMarginRatioByMoney\": \""
       <<aExchangeMarginRateAdjustField.LongMarginRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LongMarginRatioByVolume\": \""
       <<aExchangeMarginRateAdjustField.LongMarginRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ShortMarginRatioByMoney\": \""
       <<aExchangeMarginRateAdjustField.ShortMarginRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ShortMarginRatioByVolume\": \""
       <<aExchangeMarginRateAdjustField.ShortMarginRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchLongMarginRatioByMoney\": \""
       <<aExchangeMarginRateAdjustField.ExchLongMarginRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchLongMarginRatioByVolume\": \""
       <<aExchangeMarginRateAdjustField.ExchLongMarginRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchShortMarginRatioByMoney\": \""
       <<aExchangeMarginRateAdjustField.ExchShortMarginRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchShortMarginRatioByVolume\": \""
       <<aExchangeMarginRateAdjustField.ExchShortMarginRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"NoLongMarginRatioByMoney\": \""
       <<aExchangeMarginRateAdjustField.NoLongMarginRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"NoLongMarginRatioByVolume\": \""
       <<aExchangeMarginRateAdjustField.NoLongMarginRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"NoShortMarginRatioByMoney\": \""
       <<aExchangeMarginRateAdjustField.NoShortMarginRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"NoShortMarginRatioByVolume\": \""
       <<aExchangeMarginRateAdjustField.NoShortMarginRatioByVolume  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcExchangeRateField const& aExchangeRateField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcExchangeRateField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aExchangeRateField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FromCurrencyID\": \""
       <<aExchangeRateField.FromCurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FromCurrencyUnit\": \""
       <<aExchangeRateField.FromCurrencyUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ToCurrencyID\": \""
       <<aExchangeRateField.ToCurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeRate\": \""
       <<aExchangeRateField.ExchangeRate  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcSettlementRefField const& aSettlementRefField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcSettlementRefField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aSettlementRefField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementID\": \""
       <<aSettlementRefField.SettlementID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcCurrentTimeField const& aCurrentTimeField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcCurrentTimeField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrDate\": \""
       <<aCurrentTimeField.CurrDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrTime\": \""
       <<aCurrentTimeField.CurrTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrMillisec\": \""
       <<aCurrentTimeField.CurrMillisec  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionDay\": \""
       <<aCurrentTimeField.ActionDay  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcCommPhaseField const& aCommPhaseField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcCommPhaseField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aCommPhaseField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CommPhaseNo\": \""
       <<aCommPhaseField.CommPhaseNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SystemID\": \""
       <<aCommPhaseField.SystemID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcLoginInfoField const& aLoginInfoField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcLoginInfoField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aLoginInfoField.FrontID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aLoginInfoField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aLoginInfoField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aLoginInfoField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LoginDate\": \""
       <<aLoginInfoField.LoginDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LoginTime\": \""
       <<aLoginInfoField.LoginTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IPAddress\": \""
       <<aLoginInfoField.IPAddress  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserProductInfo\": \""
       <<aLoginInfoField.UserProductInfo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InterfaceProductInfo\": \""
       <<aLoginInfoField.InterfaceProductInfo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ProtocolInfo\": \""
       <<aLoginInfoField.ProtocolInfo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SystemName\": \""
       <<aLoginInfoField.SystemName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aLoginInfoField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MaxOrderRef\": \""
       <<aLoginInfoField.MaxOrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SHFETime\": \""
       <<aLoginInfoField.SHFETime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DCETime\": \""
       <<aLoginInfoField.DCETime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CZCETime\": \""
       <<aLoginInfoField.CZCETime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FFEXTime\": \""
       <<aLoginInfoField.FFEXTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MacAddress\": \""
       <<aLoginInfoField.MacAddress  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OneTimePassword\": \""
       <<aLoginInfoField.OneTimePassword  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"INETime\": \""
       <<aLoginInfoField.INETime  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcLogoutAllField const& aLogoutAllField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcLogoutAllField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aLogoutAllField.FrontID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aLogoutAllField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SystemName\": \""
       <<aLogoutAllField.SystemName  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcFrontStatusField const& aFrontStatusField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcFrontStatusField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aFrontStatusField.FrontID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastReportDate\": \""
       <<aFrontStatusField.LastReportDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastReportTime\": \""
       <<aFrontStatusField.LastReportTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsActive\": \""
       <<aFrontStatusField.IsActive  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcUserPasswordUpdateField const& aUserPasswordUpdateField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcUserPasswordUpdateField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aUserPasswordUpdateField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aUserPasswordUpdateField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OldPassword\": \""
       <<aUserPasswordUpdateField.OldPassword  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"NewPassword\": \""
       <<aUserPasswordUpdateField.NewPassword  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInputOrderField const& aInputOrderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInputOrderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aInputOrderField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aInputOrderField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aInputOrderField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderRef\": \""
       <<aInputOrderField.OrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aInputOrderField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderPriceType\": \""
       <<aInputOrderField.OrderPriceType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Direction\": \""
       <<aInputOrderField.Direction  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombOffsetFlag\": \""
       <<aInputOrderField.CombOffsetFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombHedgeFlag\": \""
       <<aInputOrderField.CombHedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LimitPrice\": \""
       <<aInputOrderField.LimitPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeTotalOriginal\": \""
       <<aInputOrderField.VolumeTotalOriginal  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TimeCondition\": \""
       <<aInputOrderField.TimeCondition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"GTDDate\": \""
       <<aInputOrderField.GTDDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeCondition\": \""
       <<aInputOrderField.VolumeCondition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MinVolume\": \""
       <<aInputOrderField.MinVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ContingentCondition\": \""
       <<aInputOrderField.ContingentCondition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StopPrice\": \""
       <<aInputOrderField.StopPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ForceCloseReason\": \""
       <<aInputOrderField.ForceCloseReason  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsAutoSuspend\": \""
       <<aInputOrderField.IsAutoSuspend  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aInputOrderField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aInputOrderField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserForceClose\": \""
       <<aInputOrderField.UserForceClose  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsSwapOrder\": \""
       <<aInputOrderField.IsSwapOrder  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcOrderField const& aOrderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcOrderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aOrderField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aOrderField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aOrderField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderRef\": \""
       <<aOrderField.OrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aOrderField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderPriceType\": \""
       <<aOrderField.OrderPriceType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Direction\": \""
       <<aOrderField.Direction  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombOffsetFlag\": \""
       <<aOrderField.CombOffsetFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombHedgeFlag\": \""
       <<aOrderField.CombHedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LimitPrice\": \""
       <<aOrderField.LimitPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeTotalOriginal\": \""
       <<aOrderField.VolumeTotalOriginal  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TimeCondition\": \""
       <<aOrderField.TimeCondition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"GTDDate\": \""
       <<aOrderField.GTDDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeCondition\": \""
       <<aOrderField.VolumeCondition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MinVolume\": \""
       <<aOrderField.MinVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ContingentCondition\": \""
       <<aOrderField.ContingentCondition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StopPrice\": \""
       <<aOrderField.StopPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ForceCloseReason\": \""
       <<aOrderField.ForceCloseReason  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsAutoSuspend\": \""
       <<aOrderField.IsAutoSuspend  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aOrderField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aOrderField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderLocalID\": \""
       <<aOrderField.OrderLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aOrderField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aOrderField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aOrderField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aOrderField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aOrderField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aOrderField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSubmitStatus\": \""
       <<aOrderField.OrderSubmitStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"NotifySequence\": \""
       <<aOrderField.NotifySequence  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aOrderField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementID\": \""
       <<aOrderField.SettlementID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSysID\": \""
       <<aOrderField.OrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSource\": \""
       <<aOrderField.OrderSource  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderStatus\": \""
       <<aOrderField.OrderStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderType\": \""
       <<aOrderField.OrderType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeTraded\": \""
       <<aOrderField.VolumeTraded  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeTotal\": \""
       <<aOrderField.VolumeTotal  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertDate\": \""
       <<aOrderField.InsertDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertTime\": \""
       <<aOrderField.InsertTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActiveTime\": \""
       <<aOrderField.ActiveTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SuspendTime\": \""
       <<aOrderField.SuspendTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UpdateTime\": \""
       <<aOrderField.UpdateTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CancelTime\": \""
       <<aOrderField.CancelTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActiveTraderID\": \""
       <<aOrderField.ActiveTraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClearingPartID\": \""
       <<aOrderField.ClearingPartID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SequenceNo\": \""
       <<aOrderField.SequenceNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aOrderField.FrontID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aOrderField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserProductInfo\": \""
       <<aOrderField.UserProductInfo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StatusMsg\": \""
       <<aOrderField.StatusMsg  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserForceClose\": \""
       <<aOrderField.UserForceClose  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActiveUserID\": \""
       <<aOrderField.ActiveUserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerOrderSeq\": \""
       <<aOrderField.BrokerOrderSeq  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RelativeOrderSysID\": \""
       <<aOrderField.RelativeOrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ZCETotalTradedVolume\": \""
       <<aOrderField.ZCETotalTradedVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsSwapOrder\": \""
       <<aOrderField.IsSwapOrder  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcExchangeOrderField const& aExchangeOrderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcExchangeOrderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderPriceType\": \""
       <<aExchangeOrderField.OrderPriceType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Direction\": \""
       <<aExchangeOrderField.Direction  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombOffsetFlag\": \""
       <<aExchangeOrderField.CombOffsetFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombHedgeFlag\": \""
       <<aExchangeOrderField.CombHedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LimitPrice\": \""
       <<aExchangeOrderField.LimitPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeTotalOriginal\": \""
       <<aExchangeOrderField.VolumeTotalOriginal  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TimeCondition\": \""
       <<aExchangeOrderField.TimeCondition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"GTDDate\": \""
       <<aExchangeOrderField.GTDDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeCondition\": \""
       <<aExchangeOrderField.VolumeCondition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MinVolume\": \""
       <<aExchangeOrderField.MinVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ContingentCondition\": \""
       <<aExchangeOrderField.ContingentCondition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StopPrice\": \""
       <<aExchangeOrderField.StopPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ForceCloseReason\": \""
       <<aExchangeOrderField.ForceCloseReason  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsAutoSuspend\": \""
       <<aExchangeOrderField.IsAutoSuspend  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aExchangeOrderField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aExchangeOrderField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderLocalID\": \""
       <<aExchangeOrderField.OrderLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aExchangeOrderField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aExchangeOrderField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aExchangeOrderField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aExchangeOrderField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aExchangeOrderField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aExchangeOrderField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSubmitStatus\": \""
       <<aExchangeOrderField.OrderSubmitStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"NotifySequence\": \""
       <<aExchangeOrderField.NotifySequence  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aExchangeOrderField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementID\": \""
       <<aExchangeOrderField.SettlementID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSysID\": \""
       <<aExchangeOrderField.OrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSource\": \""
       <<aExchangeOrderField.OrderSource  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderStatus\": \""
       <<aExchangeOrderField.OrderStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderType\": \""
       <<aExchangeOrderField.OrderType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeTraded\": \""
       <<aExchangeOrderField.VolumeTraded  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeTotal\": \""
       <<aExchangeOrderField.VolumeTotal  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertDate\": \""
       <<aExchangeOrderField.InsertDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertTime\": \""
       <<aExchangeOrderField.InsertTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActiveTime\": \""
       <<aExchangeOrderField.ActiveTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SuspendTime\": \""
       <<aExchangeOrderField.SuspendTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UpdateTime\": \""
       <<aExchangeOrderField.UpdateTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CancelTime\": \""
       <<aExchangeOrderField.CancelTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActiveTraderID\": \""
       <<aExchangeOrderField.ActiveTraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClearingPartID\": \""
       <<aExchangeOrderField.ClearingPartID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SequenceNo\": \""
       <<aExchangeOrderField.SequenceNo  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcExchangeOrderInsertErrorField const& aExchangeOrderInsertErrorField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcExchangeOrderInsertErrorField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aExchangeOrderInsertErrorField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aExchangeOrderInsertErrorField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aExchangeOrderInsertErrorField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aExchangeOrderInsertErrorField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderLocalID\": \""
       <<aExchangeOrderInsertErrorField.OrderLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aExchangeOrderInsertErrorField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aExchangeOrderInsertErrorField.ErrorMsg  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInputOrderActionField const& aInputOrderActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInputOrderActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aInputOrderActionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aInputOrderActionField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderActionRef\": \""
       <<aInputOrderActionField.OrderActionRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderRef\": \""
       <<aInputOrderActionField.OrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aInputOrderActionField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aInputOrderActionField.FrontID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aInputOrderActionField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aInputOrderActionField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSysID\": \""
       <<aInputOrderActionField.OrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionFlag\": \""
       <<aInputOrderActionField.ActionFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LimitPrice\": \""
       <<aInputOrderActionField.LimitPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeChange\": \""
       <<aInputOrderActionField.VolumeChange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aInputOrderActionField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aInputOrderActionField.InstrumentID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcOrderActionField const& aOrderActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcOrderActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aOrderActionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aOrderActionField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderActionRef\": \""
       <<aOrderActionField.OrderActionRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderRef\": \""
       <<aOrderActionField.OrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aOrderActionField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aOrderActionField.FrontID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aOrderActionField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aOrderActionField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSysID\": \""
       <<aOrderActionField.OrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionFlag\": \""
       <<aOrderActionField.ActionFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LimitPrice\": \""
       <<aOrderActionField.LimitPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeChange\": \""
       <<aOrderActionField.VolumeChange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionDate\": \""
       <<aOrderActionField.ActionDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionTime\": \""
       <<aOrderActionField.ActionTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aOrderActionField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aOrderActionField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderLocalID\": \""
       <<aOrderActionField.OrderLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionLocalID\": \""
       <<aOrderActionField.ActionLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aOrderActionField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aOrderActionField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aOrderActionField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderActionStatus\": \""
       <<aOrderActionField.OrderActionStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aOrderActionField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StatusMsg\": \""
       <<aOrderActionField.StatusMsg  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aOrderActionField.InstrumentID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcExchangeOrderActionField const& aExchangeOrderActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcExchangeOrderActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aExchangeOrderActionField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSysID\": \""
       <<aExchangeOrderActionField.OrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionFlag\": \""
       <<aExchangeOrderActionField.ActionFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LimitPrice\": \""
       <<aExchangeOrderActionField.LimitPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeChange\": \""
       <<aExchangeOrderActionField.VolumeChange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionDate\": \""
       <<aExchangeOrderActionField.ActionDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionTime\": \""
       <<aExchangeOrderActionField.ActionTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aExchangeOrderActionField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aExchangeOrderActionField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderLocalID\": \""
       <<aExchangeOrderActionField.OrderLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionLocalID\": \""
       <<aExchangeOrderActionField.ActionLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aExchangeOrderActionField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aExchangeOrderActionField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aExchangeOrderActionField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderActionStatus\": \""
       <<aExchangeOrderActionField.OrderActionStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aExchangeOrderActionField.UserID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcExchangeOrderActionErrorField const& aExchangeOrderActionErrorField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcExchangeOrderActionErrorField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aExchangeOrderActionErrorField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSysID\": \""
       <<aExchangeOrderActionErrorField.OrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aExchangeOrderActionErrorField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aExchangeOrderActionErrorField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderLocalID\": \""
       <<aExchangeOrderActionErrorField.OrderLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionLocalID\": \""
       <<aExchangeOrderActionErrorField.ActionLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aExchangeOrderActionErrorField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aExchangeOrderActionErrorField.ErrorMsg  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcExchangeTradeField const& aExchangeTradeField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcExchangeTradeField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aExchangeTradeField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeID\": \""
       <<aExchangeTradeField.TradeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Direction\": \""
       <<aExchangeTradeField.Direction  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSysID\": \""
       <<aExchangeTradeField.OrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aExchangeTradeField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aExchangeTradeField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingRole\": \""
       <<aExchangeTradeField.TradingRole  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aExchangeTradeField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OffsetFlag\": \""
       <<aExchangeTradeField.OffsetFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aExchangeTradeField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Price\": \""
       <<aExchangeTradeField.Price  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Volume\": \""
       <<aExchangeTradeField.Volume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aExchangeTradeField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aExchangeTradeField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeType\": \""
       <<aExchangeTradeField.TradeType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PriceSource\": \""
       <<aExchangeTradeField.PriceSource  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aExchangeTradeField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderLocalID\": \""
       <<aExchangeTradeField.OrderLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClearingPartID\": \""
       <<aExchangeTradeField.ClearingPartID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aExchangeTradeField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SequenceNo\": \""
       <<aExchangeTradeField.SequenceNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeSource\": \""
       <<aExchangeTradeField.TradeSource  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTradeField const& aTradeField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTradeField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aTradeField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aTradeField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aTradeField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderRef\": \""
       <<aTradeField.OrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aTradeField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aTradeField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeID\": \""
       <<aTradeField.TradeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Direction\": \""
       <<aTradeField.Direction  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSysID\": \""
       <<aTradeField.OrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aTradeField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aTradeField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingRole\": \""
       <<aTradeField.TradingRole  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aTradeField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OffsetFlag\": \""
       <<aTradeField.OffsetFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aTradeField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Price\": \""
       <<aTradeField.Price  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Volume\": \""
       <<aTradeField.Volume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aTradeField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aTradeField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeType\": \""
       <<aTradeField.TradeType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PriceSource\": \""
       <<aTradeField.PriceSource  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aTradeField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderLocalID\": \""
       <<aTradeField.OrderLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClearingPartID\": \""
       <<aTradeField.ClearingPartID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aTradeField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SequenceNo\": \""
       <<aTradeField.SequenceNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aTradeField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementID\": \""
       <<aTradeField.SettlementID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerOrderSeq\": \""
       <<aTradeField.BrokerOrderSeq  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeSource\": \""
       <<aTradeField.TradeSource  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcUserSessionField const& aUserSessionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcUserSessionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aUserSessionField.FrontID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aUserSessionField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aUserSessionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aUserSessionField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LoginDate\": \""
       <<aUserSessionField.LoginDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LoginTime\": \""
       <<aUserSessionField.LoginTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IPAddress\": \""
       <<aUserSessionField.IPAddress  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserProductInfo\": \""
       <<aUserSessionField.UserProductInfo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InterfaceProductInfo\": \""
       <<aUserSessionField.InterfaceProductInfo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ProtocolInfo\": \""
       <<aUserSessionField.ProtocolInfo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MacAddress\": \""
       <<aUserSessionField.MacAddress  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQueryMaxOrderVolumeField const& aQueryMaxOrderVolumeField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQueryMaxOrderVolumeField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQueryMaxOrderVolumeField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQueryMaxOrderVolumeField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQueryMaxOrderVolumeField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Direction\": \""
       <<aQueryMaxOrderVolumeField.Direction  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OffsetFlag\": \""
       <<aQueryMaxOrderVolumeField.OffsetFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aQueryMaxOrderVolumeField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MaxVolume\": \""
       <<aQueryMaxOrderVolumeField.MaxVolume  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcSettlementInfoConfirmField const& aSettlementInfoConfirmField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcSettlementInfoConfirmField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aSettlementInfoConfirmField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aSettlementInfoConfirmField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ConfirmDate\": \""
       <<aSettlementInfoConfirmField.ConfirmDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ConfirmTime\": \""
       <<aSettlementInfoConfirmField.ConfirmTime  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcSyncDepositField const& aSyncDepositField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcSyncDepositField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DepositSeqNo\": \""
       <<aSyncDepositField.DepositSeqNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aSyncDepositField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aSyncDepositField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Deposit\": \""
       <<aSyncDepositField.Deposit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsForce\": \""
       <<aSyncDepositField.IsForce  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aSyncDepositField.CurrencyID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcSyncFundMortgageField const& aSyncFundMortgageField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcSyncFundMortgageField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MortgageSeqNo\": \""
       <<aSyncFundMortgageField.MortgageSeqNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aSyncFundMortgageField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aSyncFundMortgageField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FromCurrencyID\": \""
       <<aSyncFundMortgageField.FromCurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MortgageAmount\": \""
       <<aSyncFundMortgageField.MortgageAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ToCurrencyID\": \""
       <<aSyncFundMortgageField.ToCurrencyID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcBrokerSyncField const& aBrokerSyncField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcBrokerSyncField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aBrokerSyncField.BrokerID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcSyncingInvestorField const& aSyncingInvestorField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcSyncingInvestorField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aSyncingInvestorField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aSyncingInvestorField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorGroupID\": \""
       <<aSyncingInvestorField.InvestorGroupID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorName\": \""
       <<aSyncingInvestorField.InvestorName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardType\": \""
       <<aSyncingInvestorField.IdentifiedCardType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardNo\": \""
       <<aSyncingInvestorField.IdentifiedCardNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsActive\": \""
       <<aSyncingInvestorField.IsActive  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Telephone\": \""
       <<aSyncingInvestorField.Telephone  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Address\": \""
       <<aSyncingInvestorField.Address  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenDate\": \""
       <<aSyncingInvestorField.OpenDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Mobile\": \""
       <<aSyncingInvestorField.Mobile  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CommModelID\": \""
       <<aSyncingInvestorField.CommModelID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MarginModelID\": \""
       <<aSyncingInvestorField.MarginModelID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcSyncingTradingCodeField const& aSyncingTradingCodeField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcSyncingTradingCodeField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aSyncingTradingCodeField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aSyncingTradingCodeField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aSyncingTradingCodeField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aSyncingTradingCodeField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsActive\": \""
       <<aSyncingTradingCodeField.IsActive  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientIDType\": \""
       <<aSyncingTradingCodeField.ClientIDType  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcSyncingInvestorGroupField const& aSyncingInvestorGroupField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcSyncingInvestorGroupField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aSyncingInvestorGroupField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorGroupID\": \""
       <<aSyncingInvestorGroupField.InvestorGroupID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorGroupName\": \""
       <<aSyncingInvestorGroupField.InvestorGroupName  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcSyncingTradingAccountField const& aSyncingTradingAccountField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcSyncingTradingAccountField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aSyncingTradingAccountField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aSyncingTradingAccountField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreMortgage\": \""
       <<aSyncingTradingAccountField.PreMortgage  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreCredit\": \""
       <<aSyncingTradingAccountField.PreCredit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreDeposit\": \""
       <<aSyncingTradingAccountField.PreDeposit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreBalance\": \""
       <<aSyncingTradingAccountField.PreBalance  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreMargin\": \""
       <<aSyncingTradingAccountField.PreMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InterestBase\": \""
       <<aSyncingTradingAccountField.InterestBase  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Interest\": \""
       <<aSyncingTradingAccountField.Interest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Deposit\": \""
       <<aSyncingTradingAccountField.Deposit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Withdraw\": \""
       <<aSyncingTradingAccountField.Withdraw  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrozenMargin\": \""
       <<aSyncingTradingAccountField.FrozenMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrozenCash\": \""
       <<aSyncingTradingAccountField.FrozenCash  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrozenCommission\": \""
       <<aSyncingTradingAccountField.FrozenCommission  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrMargin\": \""
       <<aSyncingTradingAccountField.CurrMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CashIn\": \""
       <<aSyncingTradingAccountField.CashIn  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Commission\": \""
       <<aSyncingTradingAccountField.Commission  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseProfit\": \""
       <<aSyncingTradingAccountField.CloseProfit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PositionProfit\": \""
       <<aSyncingTradingAccountField.PositionProfit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Balance\": \""
       <<aSyncingTradingAccountField.Balance  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Available\": \""
       <<aSyncingTradingAccountField.Available  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"WithdrawQuota\": \""
       <<aSyncingTradingAccountField.WithdrawQuota  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Reserve\": \""
       <<aSyncingTradingAccountField.Reserve  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aSyncingTradingAccountField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementID\": \""
       <<aSyncingTradingAccountField.SettlementID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Credit\": \""
       <<aSyncingTradingAccountField.Credit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Mortgage\": \""
       <<aSyncingTradingAccountField.Mortgage  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeMargin\": \""
       <<aSyncingTradingAccountField.ExchangeMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeliveryMargin\": \""
       <<aSyncingTradingAccountField.DeliveryMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeDeliveryMargin\": \""
       <<aSyncingTradingAccountField.ExchangeDeliveryMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ReserveBalance\": \""
       <<aSyncingTradingAccountField.ReserveBalance  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aSyncingTradingAccountField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreFundMortgageIn\": \""
       <<aSyncingTradingAccountField.PreFundMortgageIn  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreFundMortgageOut\": \""
       <<aSyncingTradingAccountField.PreFundMortgageOut  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FundMortgageIn\": \""
       <<aSyncingTradingAccountField.FundMortgageIn  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FundMortgageOut\": \""
       <<aSyncingTradingAccountField.FundMortgageOut  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FundMortgageAvailable\": \""
       <<aSyncingTradingAccountField.FundMortgageAvailable  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MortgageableFund\": \""
       <<aSyncingTradingAccountField.MortgageableFund  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SpecProductMargin\": \""
       <<aSyncingTradingAccountField.SpecProductMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SpecProductFrozenMargin\": \""
       <<aSyncingTradingAccountField.SpecProductFrozenMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SpecProductCommission\": \""
       <<aSyncingTradingAccountField.SpecProductCommission  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SpecProductFrozenCommission\": \""
       <<aSyncingTradingAccountField.SpecProductFrozenCommission  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SpecProductPositionProfit\": \""
       <<aSyncingTradingAccountField.SpecProductPositionProfit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SpecProductCloseProfit\": \""
       <<aSyncingTradingAccountField.SpecProductCloseProfit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SpecProductPositionProfitByAlg\": \""
       <<aSyncingTradingAccountField.SpecProductPositionProfitByAlg  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SpecProductExchangeMargin\": \""
       <<aSyncingTradingAccountField.SpecProductExchangeMargin  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcSyncingInvestorPositionField const& aSyncingInvestorPositionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcSyncingInvestorPositionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aSyncingInvestorPositionField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aSyncingInvestorPositionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aSyncingInvestorPositionField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PosiDirection\": \""
       <<aSyncingInvestorPositionField.PosiDirection  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aSyncingInvestorPositionField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PositionDate\": \""
       <<aSyncingInvestorPositionField.PositionDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"YdPosition\": \""
       <<aSyncingInvestorPositionField.YdPosition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Position\": \""
       <<aSyncingInvestorPositionField.Position  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LongFrozen\": \""
       <<aSyncingInvestorPositionField.LongFrozen  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ShortFrozen\": \""
       <<aSyncingInvestorPositionField.ShortFrozen  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LongFrozenAmount\": \""
       <<aSyncingInvestorPositionField.LongFrozenAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ShortFrozenAmount\": \""
       <<aSyncingInvestorPositionField.ShortFrozenAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenVolume\": \""
       <<aSyncingInvestorPositionField.OpenVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseVolume\": \""
       <<aSyncingInvestorPositionField.CloseVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenAmount\": \""
       <<aSyncingInvestorPositionField.OpenAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseAmount\": \""
       <<aSyncingInvestorPositionField.CloseAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PositionCost\": \""
       <<aSyncingInvestorPositionField.PositionCost  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreMargin\": \""
       <<aSyncingInvestorPositionField.PreMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UseMargin\": \""
       <<aSyncingInvestorPositionField.UseMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrozenMargin\": \""
       <<aSyncingInvestorPositionField.FrozenMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrozenCash\": \""
       <<aSyncingInvestorPositionField.FrozenCash  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrozenCommission\": \""
       <<aSyncingInvestorPositionField.FrozenCommission  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CashIn\": \""
       <<aSyncingInvestorPositionField.CashIn  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Commission\": \""
       <<aSyncingInvestorPositionField.Commission  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseProfit\": \""
       <<aSyncingInvestorPositionField.CloseProfit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PositionProfit\": \""
       <<aSyncingInvestorPositionField.PositionProfit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreSettlementPrice\": \""
       <<aSyncingInvestorPositionField.PreSettlementPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementPrice\": \""
       <<aSyncingInvestorPositionField.SettlementPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aSyncingInvestorPositionField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementID\": \""
       <<aSyncingInvestorPositionField.SettlementID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenCost\": \""
       <<aSyncingInvestorPositionField.OpenCost  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeMargin\": \""
       <<aSyncingInvestorPositionField.ExchangeMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombPosition\": \""
       <<aSyncingInvestorPositionField.CombPosition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombLongFrozen\": \""
       <<aSyncingInvestorPositionField.CombLongFrozen  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombShortFrozen\": \""
       <<aSyncingInvestorPositionField.CombShortFrozen  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseProfitByDate\": \""
       <<aSyncingInvestorPositionField.CloseProfitByDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseProfitByTrade\": \""
       <<aSyncingInvestorPositionField.CloseProfitByTrade  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TodayPosition\": \""
       <<aSyncingInvestorPositionField.TodayPosition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MarginRateByMoney\": \""
       <<aSyncingInvestorPositionField.MarginRateByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MarginRateByVolume\": \""
       <<aSyncingInvestorPositionField.MarginRateByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StrikeFrozen\": \""
       <<aSyncingInvestorPositionField.StrikeFrozen  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StrikeFrozenAmount\": \""
       <<aSyncingInvestorPositionField.StrikeFrozenAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AbandonFrozen\": \""
       <<aSyncingInvestorPositionField.AbandonFrozen  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcSyncingInstrumentMarginRateField const& aSyncingInstrumentMarginRateField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcSyncingInstrumentMarginRateField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aSyncingInstrumentMarginRateField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorRange\": \""
       <<aSyncingInstrumentMarginRateField.InvestorRange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aSyncingInstrumentMarginRateField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aSyncingInstrumentMarginRateField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aSyncingInstrumentMarginRateField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LongMarginRatioByMoney\": \""
       <<aSyncingInstrumentMarginRateField.LongMarginRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LongMarginRatioByVolume\": \""
       <<aSyncingInstrumentMarginRateField.LongMarginRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ShortMarginRatioByMoney\": \""
       <<aSyncingInstrumentMarginRateField.ShortMarginRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ShortMarginRatioByVolume\": \""
       <<aSyncingInstrumentMarginRateField.ShortMarginRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsRelative\": \""
       <<aSyncingInstrumentMarginRateField.IsRelative  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcSyncingInstrumentCommissionRateField const& aSyncingInstrumentCommissionRateField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcSyncingInstrumentCommissionRateField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aSyncingInstrumentCommissionRateField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorRange\": \""
       <<aSyncingInstrumentCommissionRateField.InvestorRange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aSyncingInstrumentCommissionRateField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aSyncingInstrumentCommissionRateField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenRatioByMoney\": \""
       <<aSyncingInstrumentCommissionRateField.OpenRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenRatioByVolume\": \""
       <<aSyncingInstrumentCommissionRateField.OpenRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseRatioByMoney\": \""
       <<aSyncingInstrumentCommissionRateField.CloseRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseRatioByVolume\": \""
       <<aSyncingInstrumentCommissionRateField.CloseRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseTodayRatioByMoney\": \""
       <<aSyncingInstrumentCommissionRateField.CloseTodayRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseTodayRatioByVolume\": \""
       <<aSyncingInstrumentCommissionRateField.CloseTodayRatioByVolume  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcSyncingInstrumentTradingRightField const& aSyncingInstrumentTradingRightField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcSyncingInstrumentTradingRightField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aSyncingInstrumentTradingRightField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorRange\": \""
       <<aSyncingInstrumentTradingRightField.InvestorRange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aSyncingInstrumentTradingRightField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aSyncingInstrumentTradingRightField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingRight\": \""
       <<aSyncingInstrumentTradingRightField.TradingRight  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryOrderField const& aQryOrderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryOrderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryOrderField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryOrderField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryOrderField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryOrderField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSysID\": \""
       <<aQryOrderField.OrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertTimeStart\": \""
       <<aQryOrderField.InsertTimeStart  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertTimeEnd\": \""
       <<aQryOrderField.InsertTimeEnd  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryTradeField const& aQryTradeField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryTradeField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryTradeField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryTradeField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryTradeField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryTradeField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeID\": \""
       <<aQryTradeField.TradeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTimeStart\": \""
       <<aQryTradeField.TradeTimeStart  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTimeEnd\": \""
       <<aQryTradeField.TradeTimeEnd  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryInvestorPositionField const& aQryInvestorPositionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryInvestorPositionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryInvestorPositionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryInvestorPositionField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryInvestorPositionField.InstrumentID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryTradingAccountField const& aQryTradingAccountField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryTradingAccountField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryTradingAccountField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryTradingAccountField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aQryTradingAccountField.CurrencyID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryInvestorField const& aQryInvestorField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryInvestorField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryInvestorField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryInvestorField.InvestorID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryTradingCodeField const& aQryTradingCodeField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryTradingCodeField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryTradingCodeField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryTradingCodeField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryTradingCodeField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aQryTradingCodeField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientIDType\": \""
       <<aQryTradingCodeField.ClientIDType  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryInvestorGroupField const& aQryInvestorGroupField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryInvestorGroupField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryInvestorGroupField.BrokerID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryInstrumentMarginRateField const& aQryInstrumentMarginRateField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryInstrumentMarginRateField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryInstrumentMarginRateField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryInstrumentMarginRateField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryInstrumentMarginRateField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aQryInstrumentMarginRateField.HedgeFlag  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryInstrumentCommissionRateField const& aQryInstrumentCommissionRateField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryInstrumentCommissionRateField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryInstrumentCommissionRateField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryInstrumentCommissionRateField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryInstrumentCommissionRateField.InstrumentID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryInstrumentTradingRightField const& aQryInstrumentTradingRightField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryInstrumentTradingRightField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryInstrumentTradingRightField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryInstrumentTradingRightField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryInstrumentTradingRightField.InstrumentID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryBrokerField const& aQryBrokerField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryBrokerField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryBrokerField.BrokerID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryTraderField const& aQryTraderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryTraderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryTraderField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aQryTraderField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aQryTraderField.TraderID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQrySuperUserFunctionField const& aQrySuperUserFunctionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQrySuperUserFunctionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aQrySuperUserFunctionField.UserID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryUserSessionField const& aQryUserSessionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryUserSessionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aQryUserSessionField.FrontID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aQryUserSessionField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryUserSessionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aQryUserSessionField.UserID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryPartBrokerField const& aQryPartBrokerField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryPartBrokerField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryPartBrokerField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryPartBrokerField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aQryPartBrokerField.ParticipantID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryFrontStatusField const& aQryFrontStatusField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryFrontStatusField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aQryFrontStatusField.FrontID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryExchangeOrderField const& aQryExchangeOrderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryExchangeOrderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aQryExchangeOrderField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aQryExchangeOrderField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aQryExchangeOrderField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryExchangeOrderField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aQryExchangeOrderField.TraderID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryOrderActionField const& aQryOrderActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryOrderActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryOrderActionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryOrderActionField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryOrderActionField.ExchangeID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryExchangeOrderActionField const& aQryExchangeOrderActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryExchangeOrderActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aQryExchangeOrderActionField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aQryExchangeOrderActionField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryExchangeOrderActionField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aQryExchangeOrderActionField.TraderID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQrySuperUserField const& aQrySuperUserField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQrySuperUserField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aQrySuperUserField.UserID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryExchangeField const& aQryExchangeField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryExchangeField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryExchangeField.ExchangeID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryProductField const& aQryProductField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryProductField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ProductID\": \""
       <<aQryProductField.ProductID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ProductClass\": \""
       <<aQryProductField.ProductClass  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryInstrumentField const& aQryInstrumentField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryInstrumentField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryInstrumentField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryInstrumentField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aQryInstrumentField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ProductID\": \""
       <<aQryInstrumentField.ProductID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryDepthMarketDataField const& aQryDepthMarketDataField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryDepthMarketDataField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryDepthMarketDataField.InstrumentID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryBrokerUserField const& aQryBrokerUserField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryBrokerUserField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryBrokerUserField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aQryBrokerUserField.UserID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryBrokerUserFunctionField const& aQryBrokerUserFunctionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryBrokerUserFunctionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryBrokerUserFunctionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aQryBrokerUserFunctionField.UserID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryTraderOfferField const& aQryTraderOfferField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryTraderOfferField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryTraderOfferField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aQryTraderOfferField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aQryTraderOfferField.TraderID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQrySyncDepositField const& aQrySyncDepositField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQrySyncDepositField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQrySyncDepositField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DepositSeqNo\": \""
       <<aQrySyncDepositField.DepositSeqNo  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQrySettlementInfoField const& aQrySettlementInfoField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQrySettlementInfoField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQrySettlementInfoField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQrySettlementInfoField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aQrySettlementInfoField.TradingDay  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryExchangeMarginRateField const& aQryExchangeMarginRateField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryExchangeMarginRateField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryExchangeMarginRateField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryExchangeMarginRateField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aQryExchangeMarginRateField.HedgeFlag  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryExchangeMarginRateAdjustField const& aQryExchangeMarginRateAdjustField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryExchangeMarginRateAdjustField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryExchangeMarginRateAdjustField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryExchangeMarginRateAdjustField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aQryExchangeMarginRateAdjustField.HedgeFlag  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryExchangeRateField const& aQryExchangeRateField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryExchangeRateField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryExchangeRateField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FromCurrencyID\": \""
       <<aQryExchangeRateField.FromCurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ToCurrencyID\": \""
       <<aQryExchangeRateField.ToCurrencyID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQrySyncFundMortgageField const& aQrySyncFundMortgageField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQrySyncFundMortgageField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQrySyncFundMortgageField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MortgageSeqNo\": \""
       <<aQrySyncFundMortgageField.MortgageSeqNo  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryHisOrderField const& aQryHisOrderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryHisOrderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryHisOrderField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryHisOrderField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryHisOrderField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryHisOrderField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSysID\": \""
       <<aQryHisOrderField.OrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertTimeStart\": \""
       <<aQryHisOrderField.InsertTimeStart  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertTimeEnd\": \""
       <<aQryHisOrderField.InsertTimeEnd  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aQryHisOrderField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementID\": \""
       <<aQryHisOrderField.SettlementID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcOptionInstrMiniMarginField const& aOptionInstrMiniMarginField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcOptionInstrMiniMarginField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aOptionInstrMiniMarginField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorRange\": \""
       <<aOptionInstrMiniMarginField.InvestorRange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aOptionInstrMiniMarginField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aOptionInstrMiniMarginField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MinMargin\": \""
       <<aOptionInstrMiniMarginField.MinMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ValueMethod\": \""
       <<aOptionInstrMiniMarginField.ValueMethod  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsRelative\": \""
       <<aOptionInstrMiniMarginField.IsRelative  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcOptionInstrMarginAdjustField const& aOptionInstrMarginAdjustField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcOptionInstrMarginAdjustField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aOptionInstrMarginAdjustField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorRange\": \""
       <<aOptionInstrMarginAdjustField.InvestorRange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aOptionInstrMarginAdjustField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aOptionInstrMarginAdjustField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SShortMarginRatioByMoney\": \""
       <<aOptionInstrMarginAdjustField.SShortMarginRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SShortMarginRatioByVolume\": \""
       <<aOptionInstrMarginAdjustField.SShortMarginRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HShortMarginRatioByMoney\": \""
       <<aOptionInstrMarginAdjustField.HShortMarginRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HShortMarginRatioByVolume\": \""
       <<aOptionInstrMarginAdjustField.HShortMarginRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AShortMarginRatioByMoney\": \""
       <<aOptionInstrMarginAdjustField.AShortMarginRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AShortMarginRatioByVolume\": \""
       <<aOptionInstrMarginAdjustField.AShortMarginRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsRelative\": \""
       <<aOptionInstrMarginAdjustField.IsRelative  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcOptionInstrCommRateField const& aOptionInstrCommRateField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcOptionInstrCommRateField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aOptionInstrCommRateField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorRange\": \""
       <<aOptionInstrCommRateField.InvestorRange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aOptionInstrCommRateField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aOptionInstrCommRateField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenRatioByMoney\": \""
       <<aOptionInstrCommRateField.OpenRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenRatioByVolume\": \""
       <<aOptionInstrCommRateField.OpenRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseRatioByMoney\": \""
       <<aOptionInstrCommRateField.CloseRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseRatioByVolume\": \""
       <<aOptionInstrCommRateField.CloseRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseTodayRatioByMoney\": \""
       <<aOptionInstrCommRateField.CloseTodayRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseTodayRatioByVolume\": \""
       <<aOptionInstrCommRateField.CloseTodayRatioByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StrikeRatioByMoney\": \""
       <<aOptionInstrCommRateField.StrikeRatioByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StrikeRatioByVolume\": \""
       <<aOptionInstrCommRateField.StrikeRatioByVolume  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcOptionInstrTradeCostField const& aOptionInstrTradeCostField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcOptionInstrTradeCostField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aOptionInstrTradeCostField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aOptionInstrTradeCostField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aOptionInstrTradeCostField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aOptionInstrTradeCostField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FixedMargin\": \""
       <<aOptionInstrTradeCostField.FixedMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MiniMargin\": \""
       <<aOptionInstrTradeCostField.MiniMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Royalty\": \""
       <<aOptionInstrTradeCostField.Royalty  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchFixedMargin\": \""
       <<aOptionInstrTradeCostField.ExchFixedMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchMiniMargin\": \""
       <<aOptionInstrTradeCostField.ExchMiniMargin  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryOptionInstrTradeCostField const& aQryOptionInstrTradeCostField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryOptionInstrTradeCostField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryOptionInstrTradeCostField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryOptionInstrTradeCostField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryOptionInstrTradeCostField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aQryOptionInstrTradeCostField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InputPrice\": \""
       <<aQryOptionInstrTradeCostField.InputPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UnderlyingPrice\": \""
       <<aQryOptionInstrTradeCostField.UnderlyingPrice  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryOptionInstrCommRateField const& aQryOptionInstrCommRateField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryOptionInstrCommRateField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryOptionInstrCommRateField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryOptionInstrCommRateField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryOptionInstrCommRateField.InstrumentID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcIndexPriceField const& aIndexPriceField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcIndexPriceField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aIndexPriceField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aIndexPriceField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClosePrice\": \""
       <<aIndexPriceField.ClosePrice  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInputExecOrderField const& aInputExecOrderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInputExecOrderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aInputExecOrderField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aInputExecOrderField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aInputExecOrderField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecOrderRef\": \""
       <<aInputExecOrderField.ExecOrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aInputExecOrderField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Volume\": \""
       <<aInputExecOrderField.Volume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aInputExecOrderField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aInputExecOrderField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OffsetFlag\": \""
       <<aInputExecOrderField.OffsetFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aInputExecOrderField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionType\": \""
       <<aInputExecOrderField.ActionType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PosiDirection\": \""
       <<aInputExecOrderField.PosiDirection  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ReservePositionFlag\": \""
       <<aInputExecOrderField.ReservePositionFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseFlag\": \""
       <<aInputExecOrderField.CloseFlag  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInputExecOrderActionField const& aInputExecOrderActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInputExecOrderActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aInputExecOrderActionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aInputExecOrderActionField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecOrderActionRef\": \""
       <<aInputExecOrderActionField.ExecOrderActionRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecOrderRef\": \""
       <<aInputExecOrderActionField.ExecOrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aInputExecOrderActionField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aInputExecOrderActionField.FrontID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aInputExecOrderActionField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aInputExecOrderActionField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecOrderSysID\": \""
       <<aInputExecOrderActionField.ExecOrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionFlag\": \""
       <<aInputExecOrderActionField.ActionFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aInputExecOrderActionField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aInputExecOrderActionField.InstrumentID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcExecOrderField const& aExecOrderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcExecOrderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aExecOrderField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aExecOrderField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aExecOrderField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecOrderRef\": \""
       <<aExecOrderField.ExecOrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aExecOrderField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Volume\": \""
       <<aExecOrderField.Volume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aExecOrderField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aExecOrderField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OffsetFlag\": \""
       <<aExecOrderField.OffsetFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aExecOrderField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionType\": \""
       <<aExecOrderField.ActionType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PosiDirection\": \""
       <<aExecOrderField.PosiDirection  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ReservePositionFlag\": \""
       <<aExecOrderField.ReservePositionFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseFlag\": \""
       <<aExecOrderField.CloseFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecOrderLocalID\": \""
       <<aExecOrderField.ExecOrderLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aExecOrderField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aExecOrderField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aExecOrderField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aExecOrderField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aExecOrderField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aExecOrderField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSubmitStatus\": \""
       <<aExecOrderField.OrderSubmitStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"NotifySequence\": \""
       <<aExecOrderField.NotifySequence  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aExecOrderField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementID\": \""
       <<aExecOrderField.SettlementID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecOrderSysID\": \""
       <<aExecOrderField.ExecOrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertDate\": \""
       <<aExecOrderField.InsertDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertTime\": \""
       <<aExecOrderField.InsertTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CancelTime\": \""
       <<aExecOrderField.CancelTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecResult\": \""
       <<aExecOrderField.ExecResult  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClearingPartID\": \""
       <<aExecOrderField.ClearingPartID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SequenceNo\": \""
       <<aExecOrderField.SequenceNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aExecOrderField.FrontID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aExecOrderField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserProductInfo\": \""
       <<aExecOrderField.UserProductInfo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StatusMsg\": \""
       <<aExecOrderField.StatusMsg  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActiveUserID\": \""
       <<aExecOrderField.ActiveUserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerExecOrderSeq\": \""
       <<aExecOrderField.BrokerExecOrderSeq  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcExecOrderActionField const& aExecOrderActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcExecOrderActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aExecOrderActionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aExecOrderActionField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecOrderActionRef\": \""
       <<aExecOrderActionField.ExecOrderActionRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecOrderRef\": \""
       <<aExecOrderActionField.ExecOrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aExecOrderActionField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aExecOrderActionField.FrontID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aExecOrderActionField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aExecOrderActionField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecOrderSysID\": \""
       <<aExecOrderActionField.ExecOrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionFlag\": \""
       <<aExecOrderActionField.ActionFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionDate\": \""
       <<aExecOrderActionField.ActionDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionTime\": \""
       <<aExecOrderActionField.ActionTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aExecOrderActionField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aExecOrderActionField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecOrderLocalID\": \""
       <<aExecOrderActionField.ExecOrderLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionLocalID\": \""
       <<aExecOrderActionField.ActionLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aExecOrderActionField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aExecOrderActionField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aExecOrderActionField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderActionStatus\": \""
       <<aExecOrderActionField.OrderActionStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aExecOrderActionField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionType\": \""
       <<aExecOrderActionField.ActionType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StatusMsg\": \""
       <<aExecOrderActionField.StatusMsg  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aExecOrderActionField.InstrumentID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryExecOrderField const& aQryExecOrderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryExecOrderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryExecOrderField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryExecOrderField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryExecOrderField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryExecOrderField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecOrderSysID\": \""
       <<aQryExecOrderField.ExecOrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertTimeStart\": \""
       <<aQryExecOrderField.InsertTimeStart  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertTimeEnd\": \""
       <<aQryExecOrderField.InsertTimeEnd  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcExchangeExecOrderField const& aExchangeExecOrderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcExchangeExecOrderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Volume\": \""
       <<aExchangeExecOrderField.Volume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aExchangeExecOrderField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aExchangeExecOrderField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OffsetFlag\": \""
       <<aExchangeExecOrderField.OffsetFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aExchangeExecOrderField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionType\": \""
       <<aExchangeExecOrderField.ActionType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PosiDirection\": \""
       <<aExchangeExecOrderField.PosiDirection  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ReservePositionFlag\": \""
       <<aExchangeExecOrderField.ReservePositionFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseFlag\": \""
       <<aExchangeExecOrderField.CloseFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecOrderLocalID\": \""
       <<aExchangeExecOrderField.ExecOrderLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aExchangeExecOrderField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aExchangeExecOrderField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aExchangeExecOrderField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aExchangeExecOrderField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aExchangeExecOrderField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aExchangeExecOrderField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSubmitStatus\": \""
       <<aExchangeExecOrderField.OrderSubmitStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"NotifySequence\": \""
       <<aExchangeExecOrderField.NotifySequence  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aExchangeExecOrderField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementID\": \""
       <<aExchangeExecOrderField.SettlementID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecOrderSysID\": \""
       <<aExchangeExecOrderField.ExecOrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertDate\": \""
       <<aExchangeExecOrderField.InsertDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertTime\": \""
       <<aExchangeExecOrderField.InsertTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CancelTime\": \""
       <<aExchangeExecOrderField.CancelTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecResult\": \""
       <<aExchangeExecOrderField.ExecResult  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClearingPartID\": \""
       <<aExchangeExecOrderField.ClearingPartID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SequenceNo\": \""
       <<aExchangeExecOrderField.SequenceNo  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryExchangeExecOrderField const& aQryExchangeExecOrderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryExchangeExecOrderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aQryExchangeExecOrderField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aQryExchangeExecOrderField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aQryExchangeExecOrderField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryExchangeExecOrderField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aQryExchangeExecOrderField.TraderID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryExecOrderActionField const& aQryExecOrderActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryExecOrderActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryExecOrderActionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryExecOrderActionField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryExecOrderActionField.ExchangeID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcExchangeExecOrderActionField const& aExchangeExecOrderActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcExchangeExecOrderActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aExchangeExecOrderActionField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecOrderSysID\": \""
       <<aExchangeExecOrderActionField.ExecOrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionFlag\": \""
       <<aExchangeExecOrderActionField.ActionFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionDate\": \""
       <<aExchangeExecOrderActionField.ActionDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionTime\": \""
       <<aExchangeExecOrderActionField.ActionTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aExchangeExecOrderActionField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aExchangeExecOrderActionField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecOrderLocalID\": \""
       <<aExchangeExecOrderActionField.ExecOrderLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionLocalID\": \""
       <<aExchangeExecOrderActionField.ActionLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aExchangeExecOrderActionField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aExchangeExecOrderActionField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aExchangeExecOrderActionField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderActionStatus\": \""
       <<aExchangeExecOrderActionField.OrderActionStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aExchangeExecOrderActionField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionType\": \""
       <<aExchangeExecOrderActionField.ActionType  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryExchangeExecOrderActionField const& aQryExchangeExecOrderActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryExchangeExecOrderActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aQryExchangeExecOrderActionField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aQryExchangeExecOrderActionField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryExchangeExecOrderActionField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aQryExchangeExecOrderActionField.TraderID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcErrExecOrderField const& aErrExecOrderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcErrExecOrderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aErrExecOrderField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aErrExecOrderField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aErrExecOrderField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecOrderRef\": \""
       <<aErrExecOrderField.ExecOrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aErrExecOrderField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Volume\": \""
       <<aErrExecOrderField.Volume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aErrExecOrderField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aErrExecOrderField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OffsetFlag\": \""
       <<aErrExecOrderField.OffsetFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aErrExecOrderField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionType\": \""
       <<aErrExecOrderField.ActionType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PosiDirection\": \""
       <<aErrExecOrderField.PosiDirection  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ReservePositionFlag\": \""
       <<aErrExecOrderField.ReservePositionFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseFlag\": \""
       <<aErrExecOrderField.CloseFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aErrExecOrderField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aErrExecOrderField.ErrorMsg  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryErrExecOrderField const& aQryErrExecOrderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryErrExecOrderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryErrExecOrderField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryErrExecOrderField.InvestorID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcErrExecOrderActionField const& aErrExecOrderActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcErrExecOrderActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aErrExecOrderActionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aErrExecOrderActionField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecOrderActionRef\": \""
       <<aErrExecOrderActionField.ExecOrderActionRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecOrderRef\": \""
       <<aErrExecOrderActionField.ExecOrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aErrExecOrderActionField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aErrExecOrderActionField.FrontID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aErrExecOrderActionField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aErrExecOrderActionField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExecOrderSysID\": \""
       <<aErrExecOrderActionField.ExecOrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionFlag\": \""
       <<aErrExecOrderActionField.ActionFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aErrExecOrderActionField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aErrExecOrderActionField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aErrExecOrderActionField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aErrExecOrderActionField.ErrorMsg  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryErrExecOrderActionField const& aQryErrExecOrderActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryErrExecOrderActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryErrExecOrderActionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryErrExecOrderActionField.InvestorID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcOptionInstrTradingRightField const& aOptionInstrTradingRightField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcOptionInstrTradingRightField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aOptionInstrTradingRightField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorRange\": \""
       <<aOptionInstrTradingRightField.InvestorRange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aOptionInstrTradingRightField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aOptionInstrTradingRightField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Direction\": \""
       <<aOptionInstrTradingRightField.Direction  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingRight\": \""
       <<aOptionInstrTradingRightField.TradingRight  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryOptionInstrTradingRightField const& aQryOptionInstrTradingRightField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryOptionInstrTradingRightField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryOptionInstrTradingRightField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryOptionInstrTradingRightField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryOptionInstrTradingRightField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Direction\": \""
       <<aQryOptionInstrTradingRightField.Direction  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInputForQuoteField const& aInputForQuoteField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInputForQuoteField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aInputForQuoteField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aInputForQuoteField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aInputForQuoteField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ForQuoteRef\": \""
       <<aInputForQuoteField.ForQuoteRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aInputForQuoteField.UserID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcForQuoteField const& aForQuoteField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcForQuoteField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aForQuoteField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aForQuoteField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aForQuoteField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ForQuoteRef\": \""
       <<aForQuoteField.ForQuoteRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aForQuoteField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ForQuoteLocalID\": \""
       <<aForQuoteField.ForQuoteLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aForQuoteField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aForQuoteField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aForQuoteField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aForQuoteField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aForQuoteField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aForQuoteField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertDate\": \""
       <<aForQuoteField.InsertDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertTime\": \""
       <<aForQuoteField.InsertTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ForQuoteStatus\": \""
       <<aForQuoteField.ForQuoteStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aForQuoteField.FrontID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aForQuoteField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StatusMsg\": \""
       <<aForQuoteField.StatusMsg  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActiveUserID\": \""
       <<aForQuoteField.ActiveUserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerForQutoSeq\": \""
       <<aForQuoteField.BrokerForQutoSeq  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryForQuoteField const& aQryForQuoteField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryForQuoteField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryForQuoteField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryForQuoteField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryForQuoteField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryForQuoteField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertTimeStart\": \""
       <<aQryForQuoteField.InsertTimeStart  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertTimeEnd\": \""
       <<aQryForQuoteField.InsertTimeEnd  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcExchangeForQuoteField const& aExchangeForQuoteField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcExchangeForQuoteField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ForQuoteLocalID\": \""
       <<aExchangeForQuoteField.ForQuoteLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aExchangeForQuoteField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aExchangeForQuoteField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aExchangeForQuoteField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aExchangeForQuoteField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aExchangeForQuoteField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aExchangeForQuoteField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertDate\": \""
       <<aExchangeForQuoteField.InsertDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertTime\": \""
       <<aExchangeForQuoteField.InsertTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ForQuoteStatus\": \""
       <<aExchangeForQuoteField.ForQuoteStatus  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryExchangeForQuoteField const& aQryExchangeForQuoteField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryExchangeForQuoteField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aQryExchangeForQuoteField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aQryExchangeForQuoteField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aQryExchangeForQuoteField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryExchangeForQuoteField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aQryExchangeForQuoteField.TraderID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInputQuoteField const& aInputQuoteField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInputQuoteField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aInputQuoteField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aInputQuoteField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aInputQuoteField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"QuoteRef\": \""
       <<aInputQuoteField.QuoteRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aInputQuoteField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskPrice\": \""
       <<aInputQuoteField.AskPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidPrice\": \""
       <<aInputQuoteField.BidPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskVolume\": \""
       <<aInputQuoteField.AskVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidVolume\": \""
       <<aInputQuoteField.BidVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aInputQuoteField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aInputQuoteField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskOffsetFlag\": \""
       <<aInputQuoteField.AskOffsetFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidOffsetFlag\": \""
       <<aInputQuoteField.BidOffsetFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskHedgeFlag\": \""
       <<aInputQuoteField.AskHedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidHedgeFlag\": \""
       <<aInputQuoteField.BidHedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskOrderRef\": \""
       <<aInputQuoteField.AskOrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidOrderRef\": \""
       <<aInputQuoteField.BidOrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ForQuoteSysID\": \""
       <<aInputQuoteField.ForQuoteSysID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInputQuoteActionField const& aInputQuoteActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInputQuoteActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aInputQuoteActionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aInputQuoteActionField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"QuoteActionRef\": \""
       <<aInputQuoteActionField.QuoteActionRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"QuoteRef\": \""
       <<aInputQuoteActionField.QuoteRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aInputQuoteActionField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aInputQuoteActionField.FrontID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aInputQuoteActionField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aInputQuoteActionField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"QuoteSysID\": \""
       <<aInputQuoteActionField.QuoteSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionFlag\": \""
       <<aInputQuoteActionField.ActionFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aInputQuoteActionField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aInputQuoteActionField.InstrumentID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQuoteField const& aQuoteField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQuoteField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQuoteField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQuoteField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQuoteField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"QuoteRef\": \""
       <<aQuoteField.QuoteRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aQuoteField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskPrice\": \""
       <<aQuoteField.AskPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidPrice\": \""
       <<aQuoteField.BidPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskVolume\": \""
       <<aQuoteField.AskVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidVolume\": \""
       <<aQuoteField.BidVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aQuoteField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aQuoteField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskOffsetFlag\": \""
       <<aQuoteField.AskOffsetFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidOffsetFlag\": \""
       <<aQuoteField.BidOffsetFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskHedgeFlag\": \""
       <<aQuoteField.AskHedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidHedgeFlag\": \""
       <<aQuoteField.BidHedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"QuoteLocalID\": \""
       <<aQuoteField.QuoteLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQuoteField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aQuoteField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aQuoteField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aQuoteField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aQuoteField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aQuoteField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"NotifySequence\": \""
       <<aQuoteField.NotifySequence  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSubmitStatus\": \""
       <<aQuoteField.OrderSubmitStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aQuoteField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementID\": \""
       <<aQuoteField.SettlementID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"QuoteSysID\": \""
       <<aQuoteField.QuoteSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertDate\": \""
       <<aQuoteField.InsertDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertTime\": \""
       <<aQuoteField.InsertTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CancelTime\": \""
       <<aQuoteField.CancelTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"QuoteStatus\": \""
       <<aQuoteField.QuoteStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClearingPartID\": \""
       <<aQuoteField.ClearingPartID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SequenceNo\": \""
       <<aQuoteField.SequenceNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskOrderSysID\": \""
       <<aQuoteField.AskOrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidOrderSysID\": \""
       <<aQuoteField.BidOrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aQuoteField.FrontID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aQuoteField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserProductInfo\": \""
       <<aQuoteField.UserProductInfo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StatusMsg\": \""
       <<aQuoteField.StatusMsg  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActiveUserID\": \""
       <<aQuoteField.ActiveUserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerQuoteSeq\": \""
       <<aQuoteField.BrokerQuoteSeq  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskOrderRef\": \""
       <<aQuoteField.AskOrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidOrderRef\": \""
       <<aQuoteField.BidOrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ForQuoteSysID\": \""
       <<aQuoteField.ForQuoteSysID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQuoteActionField const& aQuoteActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQuoteActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQuoteActionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQuoteActionField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"QuoteActionRef\": \""
       <<aQuoteActionField.QuoteActionRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"QuoteRef\": \""
       <<aQuoteActionField.QuoteRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aQuoteActionField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aQuoteActionField.FrontID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aQuoteActionField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQuoteActionField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"QuoteSysID\": \""
       <<aQuoteActionField.QuoteSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionFlag\": \""
       <<aQuoteActionField.ActionFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionDate\": \""
       <<aQuoteActionField.ActionDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionTime\": \""
       <<aQuoteActionField.ActionTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aQuoteActionField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aQuoteActionField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"QuoteLocalID\": \""
       <<aQuoteActionField.QuoteLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionLocalID\": \""
       <<aQuoteActionField.ActionLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aQuoteActionField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aQuoteActionField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aQuoteActionField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderActionStatus\": \""
       <<aQuoteActionField.OrderActionStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aQuoteActionField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StatusMsg\": \""
       <<aQuoteActionField.StatusMsg  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQuoteActionField.InstrumentID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryQuoteField const& aQryQuoteField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryQuoteField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryQuoteField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryQuoteField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryQuoteField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryQuoteField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"QuoteSysID\": \""
       <<aQryQuoteField.QuoteSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertTimeStart\": \""
       <<aQryQuoteField.InsertTimeStart  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertTimeEnd\": \""
       <<aQryQuoteField.InsertTimeEnd  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcExchangeQuoteField const& aExchangeQuoteField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcExchangeQuoteField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskPrice\": \""
       <<aExchangeQuoteField.AskPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidPrice\": \""
       <<aExchangeQuoteField.BidPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskVolume\": \""
       <<aExchangeQuoteField.AskVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidVolume\": \""
       <<aExchangeQuoteField.BidVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aExchangeQuoteField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aExchangeQuoteField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskOffsetFlag\": \""
       <<aExchangeQuoteField.AskOffsetFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidOffsetFlag\": \""
       <<aExchangeQuoteField.BidOffsetFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskHedgeFlag\": \""
       <<aExchangeQuoteField.AskHedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidHedgeFlag\": \""
       <<aExchangeQuoteField.BidHedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"QuoteLocalID\": \""
       <<aExchangeQuoteField.QuoteLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aExchangeQuoteField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aExchangeQuoteField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aExchangeQuoteField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aExchangeQuoteField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aExchangeQuoteField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aExchangeQuoteField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"NotifySequence\": \""
       <<aExchangeQuoteField.NotifySequence  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSubmitStatus\": \""
       <<aExchangeQuoteField.OrderSubmitStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aExchangeQuoteField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementID\": \""
       <<aExchangeQuoteField.SettlementID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"QuoteSysID\": \""
       <<aExchangeQuoteField.QuoteSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertDate\": \""
       <<aExchangeQuoteField.InsertDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertTime\": \""
       <<aExchangeQuoteField.InsertTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CancelTime\": \""
       <<aExchangeQuoteField.CancelTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"QuoteStatus\": \""
       <<aExchangeQuoteField.QuoteStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClearingPartID\": \""
       <<aExchangeQuoteField.ClearingPartID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SequenceNo\": \""
       <<aExchangeQuoteField.SequenceNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskOrderSysID\": \""
       <<aExchangeQuoteField.AskOrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidOrderSysID\": \""
       <<aExchangeQuoteField.BidOrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ForQuoteSysID\": \""
       <<aExchangeQuoteField.ForQuoteSysID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryExchangeQuoteField const& aQryExchangeQuoteField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryExchangeQuoteField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aQryExchangeQuoteField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aQryExchangeQuoteField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aQryExchangeQuoteField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryExchangeQuoteField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aQryExchangeQuoteField.TraderID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryQuoteActionField const& aQryQuoteActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryQuoteActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryQuoteActionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryQuoteActionField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryQuoteActionField.ExchangeID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcExchangeQuoteActionField const& aExchangeQuoteActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcExchangeQuoteActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aExchangeQuoteActionField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"QuoteSysID\": \""
       <<aExchangeQuoteActionField.QuoteSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionFlag\": \""
       <<aExchangeQuoteActionField.ActionFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionDate\": \""
       <<aExchangeQuoteActionField.ActionDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionTime\": \""
       <<aExchangeQuoteActionField.ActionTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aExchangeQuoteActionField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aExchangeQuoteActionField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"QuoteLocalID\": \""
       <<aExchangeQuoteActionField.QuoteLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionLocalID\": \""
       <<aExchangeQuoteActionField.ActionLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aExchangeQuoteActionField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aExchangeQuoteActionField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aExchangeQuoteActionField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderActionStatus\": \""
       <<aExchangeQuoteActionField.OrderActionStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aExchangeQuoteActionField.UserID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryExchangeQuoteActionField const& aQryExchangeQuoteActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryExchangeQuoteActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aQryExchangeQuoteActionField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aQryExchangeQuoteActionField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryExchangeQuoteActionField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aQryExchangeQuoteActionField.TraderID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcOptionInstrDeltaField const& aOptionInstrDeltaField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcOptionInstrDeltaField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aOptionInstrDeltaField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorRange\": \""
       <<aOptionInstrDeltaField.InvestorRange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aOptionInstrDeltaField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aOptionInstrDeltaField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Delta\": \""
       <<aOptionInstrDeltaField.Delta  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcForQuoteRspField const& aForQuoteRspField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcForQuoteRspField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aForQuoteRspField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aForQuoteRspField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ForQuoteSysID\": \""
       <<aForQuoteRspField.ForQuoteSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ForQuoteTime\": \""
       <<aForQuoteRspField.ForQuoteTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionDay\": \""
       <<aForQuoteRspField.ActionDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aForQuoteRspField.ExchangeID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcStrikeOffsetField const& aStrikeOffsetField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcStrikeOffsetField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aStrikeOffsetField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorRange\": \""
       <<aStrikeOffsetField.InvestorRange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aStrikeOffsetField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aStrikeOffsetField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Offset\": \""
       <<aStrikeOffsetField.Offset  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryStrikeOffsetField const& aQryStrikeOffsetField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryStrikeOffsetField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryStrikeOffsetField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryStrikeOffsetField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryStrikeOffsetField.InstrumentID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcCombInstrumentGuardField const& aCombInstrumentGuardField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcCombInstrumentGuardField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aCombInstrumentGuardField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aCombInstrumentGuardField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"GuarantRatio\": \""
       <<aCombInstrumentGuardField.GuarantRatio  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryCombInstrumentGuardField const& aQryCombInstrumentGuardField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryCombInstrumentGuardField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryCombInstrumentGuardField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryCombInstrumentGuardField.InstrumentID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInputCombActionField const& aInputCombActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInputCombActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aInputCombActionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aInputCombActionField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aInputCombActionField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombActionRef\": \""
       <<aInputCombActionField.CombActionRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aInputCombActionField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Direction\": \""
       <<aInputCombActionField.Direction  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Volume\": \""
       <<aInputCombActionField.Volume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombDirection\": \""
       <<aInputCombActionField.CombDirection  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aInputCombActionField.HedgeFlag  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcCombActionField const& aCombActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcCombActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aCombActionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aCombActionField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aCombActionField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombActionRef\": \""
       <<aCombActionField.CombActionRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aCombActionField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Direction\": \""
       <<aCombActionField.Direction  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Volume\": \""
       <<aCombActionField.Volume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombDirection\": \""
       <<aCombActionField.CombDirection  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aCombActionField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionLocalID\": \""
       <<aCombActionField.ActionLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aCombActionField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aCombActionField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aCombActionField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aCombActionField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aCombActionField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aCombActionField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionStatus\": \""
       <<aCombActionField.ActionStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"NotifySequence\": \""
       <<aCombActionField.NotifySequence  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aCombActionField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementID\": \""
       <<aCombActionField.SettlementID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SequenceNo\": \""
       <<aCombActionField.SequenceNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aCombActionField.FrontID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aCombActionField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserProductInfo\": \""
       <<aCombActionField.UserProductInfo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StatusMsg\": \""
       <<aCombActionField.StatusMsg  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryCombActionField const& aQryCombActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryCombActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryCombActionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryCombActionField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryCombActionField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryCombActionField.ExchangeID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcExchangeCombActionField const& aExchangeCombActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcExchangeCombActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Direction\": \""
       <<aExchangeCombActionField.Direction  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Volume\": \""
       <<aExchangeCombActionField.Volume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombDirection\": \""
       <<aExchangeCombActionField.CombDirection  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aExchangeCombActionField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionLocalID\": \""
       <<aExchangeCombActionField.ActionLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aExchangeCombActionField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aExchangeCombActionField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aExchangeCombActionField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aExchangeCombActionField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aExchangeCombActionField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aExchangeCombActionField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionStatus\": \""
       <<aExchangeCombActionField.ActionStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"NotifySequence\": \""
       <<aExchangeCombActionField.NotifySequence  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aExchangeCombActionField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementID\": \""
       <<aExchangeCombActionField.SettlementID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SequenceNo\": \""
       <<aExchangeCombActionField.SequenceNo  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryExchangeCombActionField const& aQryExchangeCombActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryExchangeCombActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aQryExchangeCombActionField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aQryExchangeCombActionField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aQryExchangeCombActionField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryExchangeCombActionField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aQryExchangeCombActionField.TraderID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcProductExchRateField const& aProductExchRateField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcProductExchRateField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ProductID\": \""
       <<aProductExchRateField.ProductID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"QuoteCurrencyID\": \""
       <<aProductExchRateField.QuoteCurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeRate\": \""
       <<aProductExchRateField.ExchangeRate  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryProductExchRateField const& aQryProductExchRateField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryProductExchRateField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ProductID\": \""
       <<aQryProductExchRateField.ProductID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcMarketDataField const& aMarketDataField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcMarketDataField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aMarketDataField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aMarketDataField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aMarketDataField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aMarketDataField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastPrice\": \""
       <<aMarketDataField.LastPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreSettlementPrice\": \""
       <<aMarketDataField.PreSettlementPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreClosePrice\": \""
       <<aMarketDataField.PreClosePrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreOpenInterest\": \""
       <<aMarketDataField.PreOpenInterest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenPrice\": \""
       <<aMarketDataField.OpenPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HighestPrice\": \""
       <<aMarketDataField.HighestPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LowestPrice\": \""
       <<aMarketDataField.LowestPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Volume\": \""
       <<aMarketDataField.Volume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Turnover\": \""
       <<aMarketDataField.Turnover  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenInterest\": \""
       <<aMarketDataField.OpenInterest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClosePrice\": \""
       <<aMarketDataField.ClosePrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementPrice\": \""
       <<aMarketDataField.SettlementPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UpperLimitPrice\": \""
       <<aMarketDataField.UpperLimitPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LowerLimitPrice\": \""
       <<aMarketDataField.LowerLimitPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreDelta\": \""
       <<aMarketDataField.PreDelta  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrDelta\": \""
       <<aMarketDataField.CurrDelta  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UpdateTime\": \""
       <<aMarketDataField.UpdateTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UpdateMillisec\": \""
       <<aMarketDataField.UpdateMillisec  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionDay\": \""
       <<aMarketDataField.ActionDay  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcMarketDataBaseField const& aMarketDataBaseField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcMarketDataBaseField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aMarketDataBaseField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreSettlementPrice\": \""
       <<aMarketDataBaseField.PreSettlementPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreClosePrice\": \""
       <<aMarketDataBaseField.PreClosePrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreOpenInterest\": \""
       <<aMarketDataBaseField.PreOpenInterest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreDelta\": \""
       <<aMarketDataBaseField.PreDelta  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcMarketDataStaticField const& aMarketDataStaticField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcMarketDataStaticField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenPrice\": \""
       <<aMarketDataStaticField.OpenPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HighestPrice\": \""
       <<aMarketDataStaticField.HighestPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LowestPrice\": \""
       <<aMarketDataStaticField.LowestPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClosePrice\": \""
       <<aMarketDataStaticField.ClosePrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UpperLimitPrice\": \""
       <<aMarketDataStaticField.UpperLimitPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LowerLimitPrice\": \""
       <<aMarketDataStaticField.LowerLimitPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementPrice\": \""
       <<aMarketDataStaticField.SettlementPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrDelta\": \""
       <<aMarketDataStaticField.CurrDelta  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcMarketDataLastMatchField const& aMarketDataLastMatchField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcMarketDataLastMatchField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastPrice\": \""
       <<aMarketDataLastMatchField.LastPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Volume\": \""
       <<aMarketDataLastMatchField.Volume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Turnover\": \""
       <<aMarketDataLastMatchField.Turnover  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenInterest\": \""
       <<aMarketDataLastMatchField.OpenInterest  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcMarketDataBestPriceField const& aMarketDataBestPriceField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcMarketDataBestPriceField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidPrice1\": \""
       <<aMarketDataBestPriceField.BidPrice1  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidVolume1\": \""
       <<aMarketDataBestPriceField.BidVolume1  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskPrice1\": \""
       <<aMarketDataBestPriceField.AskPrice1  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskVolume1\": \""
       <<aMarketDataBestPriceField.AskVolume1  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcMarketDataBid23Field const& aMarketDataBid23Field) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcMarketDataBid23Field\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidPrice2\": \""
       <<aMarketDataBid23Field.BidPrice2  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidVolume2\": \""
       <<aMarketDataBid23Field.BidVolume2  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidPrice3\": \""
       <<aMarketDataBid23Field.BidPrice3  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidVolume3\": \""
       <<aMarketDataBid23Field.BidVolume3  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcMarketDataAsk23Field const& aMarketDataAsk23Field) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcMarketDataAsk23Field\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskPrice2\": \""
       <<aMarketDataAsk23Field.AskPrice2  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskVolume2\": \""
       <<aMarketDataAsk23Field.AskVolume2  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskPrice3\": \""
       <<aMarketDataAsk23Field.AskPrice3  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskVolume3\": \""
       <<aMarketDataAsk23Field.AskVolume3  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcMarketDataBid45Field const& aMarketDataBid45Field) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcMarketDataBid45Field\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidPrice4\": \""
       <<aMarketDataBid45Field.BidPrice4  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidVolume4\": \""
       <<aMarketDataBid45Field.BidVolume4  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidPrice5\": \""
       <<aMarketDataBid45Field.BidPrice5  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BidVolume5\": \""
       <<aMarketDataBid45Field.BidVolume5  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcMarketDataAsk45Field const& aMarketDataAsk45Field) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcMarketDataAsk45Field\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskPrice4\": \""
       <<aMarketDataAsk45Field.AskPrice4  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskVolume4\": \""
       <<aMarketDataAsk45Field.AskVolume4  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskPrice5\": \""
       <<aMarketDataAsk45Field.AskPrice5  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AskVolume5\": \""
       <<aMarketDataAsk45Field.AskVolume5  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcMarketDataUpdateTimeField const& aMarketDataUpdateTimeField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcMarketDataUpdateTimeField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aMarketDataUpdateTimeField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UpdateTime\": \""
       <<aMarketDataUpdateTimeField.UpdateTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UpdateMillisec\": \""
       <<aMarketDataUpdateTimeField.UpdateMillisec  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionDay\": \""
       <<aMarketDataUpdateTimeField.ActionDay  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcMarketDataExchangeField const& aMarketDataExchangeField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcMarketDataExchangeField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aMarketDataExchangeField.ExchangeID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcSpecificInstrumentField const& aSpecificInstrumentField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcSpecificInstrumentField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aSpecificInstrumentField.InstrumentID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInstrumentStatusField const& aInstrumentStatusField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInstrumentStatusField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aInstrumentStatusField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aInstrumentStatusField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementGroupID\": \""
       <<aInstrumentStatusField.SettlementGroupID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aInstrumentStatusField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentStatus\": \""
       <<aInstrumentStatusField.InstrumentStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingSegmentSN\": \""
       <<aInstrumentStatusField.TradingSegmentSN  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"EnterTime\": \""
       <<aInstrumentStatusField.EnterTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"EnterReason\": \""
       <<aInstrumentStatusField.EnterReason  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryInstrumentStatusField const& aQryInstrumentStatusField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryInstrumentStatusField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryInstrumentStatusField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aQryInstrumentStatusField.ExchangeInstID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInvestorAccountField const& aInvestorAccountField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInvestorAccountField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aInvestorAccountField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aInvestorAccountField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aInvestorAccountField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aInvestorAccountField.CurrencyID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcPositionProfitAlgorithmField const& aPositionProfitAlgorithmField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcPositionProfitAlgorithmField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aPositionProfitAlgorithmField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aPositionProfitAlgorithmField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Algorithm\": \""
       <<aPositionProfitAlgorithmField.Algorithm  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Memo\": \""
       <<aPositionProfitAlgorithmField.Memo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aPositionProfitAlgorithmField.CurrencyID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcDiscountField const& aDiscountField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcDiscountField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aDiscountField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorRange\": \""
       <<aDiscountField.InvestorRange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aDiscountField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Discount\": \""
       <<aDiscountField.Discount  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryTransferBankField const& aQryTransferBankField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryTransferBankField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aQryTransferBankField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBrchID\": \""
       <<aQryTransferBankField.BankBrchID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTransferBankField const& aTransferBankField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTransferBankField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aTransferBankField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBrchID\": \""
       <<aTransferBankField.BankBrchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankName\": \""
       <<aTransferBankField.BankName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsActive\": \""
       <<aTransferBankField.IsActive  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryInvestorPositionDetailField const& aQryInvestorPositionDetailField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryInvestorPositionDetailField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryInvestorPositionDetailField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryInvestorPositionDetailField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryInvestorPositionDetailField.InstrumentID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInvestorPositionDetailField const& aInvestorPositionDetailField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInvestorPositionDetailField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aInvestorPositionDetailField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aInvestorPositionDetailField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aInvestorPositionDetailField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aInvestorPositionDetailField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Direction\": \""
       <<aInvestorPositionDetailField.Direction  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenDate\": \""
       <<aInvestorPositionDetailField.OpenDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeID\": \""
       <<aInvestorPositionDetailField.TradeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Volume\": \""
       <<aInvestorPositionDetailField.Volume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenPrice\": \""
       <<aInvestorPositionDetailField.OpenPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aInvestorPositionDetailField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementID\": \""
       <<aInvestorPositionDetailField.SettlementID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeType\": \""
       <<aInvestorPositionDetailField.TradeType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombInstrumentID\": \""
       <<aInvestorPositionDetailField.CombInstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aInvestorPositionDetailField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseProfitByDate\": \""
       <<aInvestorPositionDetailField.CloseProfitByDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseProfitByTrade\": \""
       <<aInvestorPositionDetailField.CloseProfitByTrade  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PositionProfitByDate\": \""
       <<aInvestorPositionDetailField.PositionProfitByDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PositionProfitByTrade\": \""
       <<aInvestorPositionDetailField.PositionProfitByTrade  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Margin\": \""
       <<aInvestorPositionDetailField.Margin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchMargin\": \""
       <<aInvestorPositionDetailField.ExchMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MarginRateByMoney\": \""
       <<aInvestorPositionDetailField.MarginRateByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MarginRateByVolume\": \""
       <<aInvestorPositionDetailField.MarginRateByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastSettlementPrice\": \""
       <<aInvestorPositionDetailField.LastSettlementPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementPrice\": \""
       <<aInvestorPositionDetailField.SettlementPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseVolume\": \""
       <<aInvestorPositionDetailField.CloseVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseAmount\": \""
       <<aInvestorPositionDetailField.CloseAmount  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTradingAccountPasswordField const& aTradingAccountPasswordField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTradingAccountPasswordField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aTradingAccountPasswordField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aTradingAccountPasswordField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aTradingAccountPasswordField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aTradingAccountPasswordField.CurrencyID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcMDTraderOfferField const& aMDTraderOfferField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcMDTraderOfferField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aMDTraderOfferField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aMDTraderOfferField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aMDTraderOfferField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aMDTraderOfferField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aMDTraderOfferField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderLocalID\": \""
       <<aMDTraderOfferField.OrderLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderConnectStatus\": \""
       <<aMDTraderOfferField.TraderConnectStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ConnectRequestDate\": \""
       <<aMDTraderOfferField.ConnectRequestDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ConnectRequestTime\": \""
       <<aMDTraderOfferField.ConnectRequestTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastReportDate\": \""
       <<aMDTraderOfferField.LastReportDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastReportTime\": \""
       <<aMDTraderOfferField.LastReportTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ConnectDate\": \""
       <<aMDTraderOfferField.ConnectDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ConnectTime\": \""
       <<aMDTraderOfferField.ConnectTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StartDate\": \""
       <<aMDTraderOfferField.StartDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StartTime\": \""
       <<aMDTraderOfferField.StartTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aMDTraderOfferField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aMDTraderOfferField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MaxTradeID\": \""
       <<aMDTraderOfferField.MaxTradeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MaxOrderMessageReference\": \""
       <<aMDTraderOfferField.MaxOrderMessageReference  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryMDTraderOfferField const& aQryMDTraderOfferField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryMDTraderOfferField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryMDTraderOfferField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aQryMDTraderOfferField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aQryMDTraderOfferField.TraderID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryNoticeField const& aQryNoticeField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryNoticeField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryNoticeField.BrokerID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcNoticeField const& aNoticeField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcNoticeField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aNoticeField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Content\": \""
       <<aNoticeField.Content  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SequenceLabel\": \""
       <<aNoticeField.SequenceLabel  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcUserRightField const& aUserRightField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcUserRightField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aUserRightField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aUserRightField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserRightType\": \""
       <<aUserRightField.UserRightType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsForbidden\": \""
       <<aUserRightField.IsForbidden  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQrySettlementInfoConfirmField const& aQrySettlementInfoConfirmField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQrySettlementInfoConfirmField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQrySettlementInfoConfirmField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQrySettlementInfoConfirmField.InvestorID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcLoadSettlementInfoField const& aLoadSettlementInfoField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcLoadSettlementInfoField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aLoadSettlementInfoField.BrokerID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcBrokerWithdrawAlgorithmField const& aBrokerWithdrawAlgorithmField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcBrokerWithdrawAlgorithmField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aBrokerWithdrawAlgorithmField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"WithdrawAlgorithm\": \""
       <<aBrokerWithdrawAlgorithmField.WithdrawAlgorithm  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UsingRatio\": \""
       <<aBrokerWithdrawAlgorithmField.UsingRatio  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IncludeCloseProfit\": \""
       <<aBrokerWithdrawAlgorithmField.IncludeCloseProfit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AllWithoutTrade\": \""
       <<aBrokerWithdrawAlgorithmField.AllWithoutTrade  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AvailIncludeCloseProfit\": \""
       <<aBrokerWithdrawAlgorithmField.AvailIncludeCloseProfit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsBrokerUserEvent\": \""
       <<aBrokerWithdrawAlgorithmField.IsBrokerUserEvent  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aBrokerWithdrawAlgorithmField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FundMortgageRatio\": \""
       <<aBrokerWithdrawAlgorithmField.FundMortgageRatio  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BalanceAlgorithm\": \""
       <<aBrokerWithdrawAlgorithmField.BalanceAlgorithm  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTradingAccountPasswordUpdateV1Field const& aTradingAccountPasswordUpdateV1Field) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTradingAccountPasswordUpdateV1Field\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aTradingAccountPasswordUpdateV1Field.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aTradingAccountPasswordUpdateV1Field.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OldPassword\": \""
       <<aTradingAccountPasswordUpdateV1Field.OldPassword  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"NewPassword\": \""
       <<aTradingAccountPasswordUpdateV1Field.NewPassword  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTradingAccountPasswordUpdateField const& aTradingAccountPasswordUpdateField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTradingAccountPasswordUpdateField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aTradingAccountPasswordUpdateField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aTradingAccountPasswordUpdateField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OldPassword\": \""
       <<aTradingAccountPasswordUpdateField.OldPassword  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"NewPassword\": \""
       <<aTradingAccountPasswordUpdateField.NewPassword  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aTradingAccountPasswordUpdateField.CurrencyID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryCombinationLegField const& aQryCombinationLegField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryCombinationLegField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombInstrumentID\": \""
       <<aQryCombinationLegField.CombInstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LegID\": \""
       <<aQryCombinationLegField.LegID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LegInstrumentID\": \""
       <<aQryCombinationLegField.LegInstrumentID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQrySyncStatusField const& aQrySyncStatusField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQrySyncStatusField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aQrySyncStatusField.TradingDay  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcCombinationLegField const& aCombinationLegField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcCombinationLegField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombInstrumentID\": \""
       <<aCombinationLegField.CombInstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LegID\": \""
       <<aCombinationLegField.LegID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LegInstrumentID\": \""
       <<aCombinationLegField.LegInstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Direction\": \""
       <<aCombinationLegField.Direction  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LegMultiple\": \""
       <<aCombinationLegField.LegMultiple  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ImplyLevel\": \""
       <<aCombinationLegField.ImplyLevel  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcSyncStatusField const& aSyncStatusField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcSyncStatusField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aSyncStatusField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DataSyncStatus\": \""
       <<aSyncStatusField.DataSyncStatus  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryLinkManField const& aQryLinkManField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryLinkManField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryLinkManField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryLinkManField.InvestorID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcLinkManField const& aLinkManField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcLinkManField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aLinkManField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aLinkManField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PersonType\": \""
       <<aLinkManField.PersonType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardType\": \""
       <<aLinkManField.IdentifiedCardType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardNo\": \""
       <<aLinkManField.IdentifiedCardNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PersonName\": \""
       <<aLinkManField.PersonName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Telephone\": \""
       <<aLinkManField.Telephone  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Address\": \""
       <<aLinkManField.Address  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ZipCode\": \""
       <<aLinkManField.ZipCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Priority\": \""
       <<aLinkManField.Priority  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UOAZipCode\": \""
       <<aLinkManField.UOAZipCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PersonFullName\": \""
       <<aLinkManField.PersonFullName  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryBrokerUserEventField const& aQryBrokerUserEventField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryBrokerUserEventField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryBrokerUserEventField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aQryBrokerUserEventField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserEventType\": \""
       <<aQryBrokerUserEventField.UserEventType  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcBrokerUserEventField const& aBrokerUserEventField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcBrokerUserEventField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aBrokerUserEventField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aBrokerUserEventField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserEventType\": \""
       <<aBrokerUserEventField.UserEventType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"EventSequenceNo\": \""
       <<aBrokerUserEventField.EventSequenceNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"EventDate\": \""
       <<aBrokerUserEventField.EventDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"EventTime\": \""
       <<aBrokerUserEventField.EventTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserEventInfo\": \""
       <<aBrokerUserEventField.UserEventInfo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aBrokerUserEventField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aBrokerUserEventField.InstrumentID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryContractBankField const& aQryContractBankField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryContractBankField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryContractBankField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aQryContractBankField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBrchID\": \""
       <<aQryContractBankField.BankBrchID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcContractBankField const& aContractBankField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcContractBankField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aContractBankField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aContractBankField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBrchID\": \""
       <<aContractBankField.BankBrchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankName\": \""
       <<aContractBankField.BankName  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInvestorPositionCombineDetailField const& aInvestorPositionCombineDetailField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInvestorPositionCombineDetailField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aInvestorPositionCombineDetailField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenDate\": \""
       <<aInvestorPositionCombineDetailField.OpenDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aInvestorPositionCombineDetailField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementID\": \""
       <<aInvestorPositionCombineDetailField.SettlementID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aInvestorPositionCombineDetailField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aInvestorPositionCombineDetailField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ComTradeID\": \""
       <<aInvestorPositionCombineDetailField.ComTradeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeID\": \""
       <<aInvestorPositionCombineDetailField.TradeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aInvestorPositionCombineDetailField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aInvestorPositionCombineDetailField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Direction\": \""
       <<aInvestorPositionCombineDetailField.Direction  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TotalAmt\": \""
       <<aInvestorPositionCombineDetailField.TotalAmt  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Margin\": \""
       <<aInvestorPositionCombineDetailField.Margin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchMargin\": \""
       <<aInvestorPositionCombineDetailField.ExchMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MarginRateByMoney\": \""
       <<aInvestorPositionCombineDetailField.MarginRateByMoney  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MarginRateByVolume\": \""
       <<aInvestorPositionCombineDetailField.MarginRateByVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LegID\": \""
       <<aInvestorPositionCombineDetailField.LegID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LegMultiple\": \""
       <<aInvestorPositionCombineDetailField.LegMultiple  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombInstrumentID\": \""
       <<aInvestorPositionCombineDetailField.CombInstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeGroupID\": \""
       <<aInvestorPositionCombineDetailField.TradeGroupID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcParkedOrderField const& aParkedOrderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcParkedOrderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aParkedOrderField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aParkedOrderField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aParkedOrderField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderRef\": \""
       <<aParkedOrderField.OrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aParkedOrderField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderPriceType\": \""
       <<aParkedOrderField.OrderPriceType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Direction\": \""
       <<aParkedOrderField.Direction  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombOffsetFlag\": \""
       <<aParkedOrderField.CombOffsetFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombHedgeFlag\": \""
       <<aParkedOrderField.CombHedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LimitPrice\": \""
       <<aParkedOrderField.LimitPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeTotalOriginal\": \""
       <<aParkedOrderField.VolumeTotalOriginal  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TimeCondition\": \""
       <<aParkedOrderField.TimeCondition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"GTDDate\": \""
       <<aParkedOrderField.GTDDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeCondition\": \""
       <<aParkedOrderField.VolumeCondition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MinVolume\": \""
       <<aParkedOrderField.MinVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ContingentCondition\": \""
       <<aParkedOrderField.ContingentCondition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StopPrice\": \""
       <<aParkedOrderField.StopPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ForceCloseReason\": \""
       <<aParkedOrderField.ForceCloseReason  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsAutoSuspend\": \""
       <<aParkedOrderField.IsAutoSuspend  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aParkedOrderField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aParkedOrderField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserForceClose\": \""
       <<aParkedOrderField.UserForceClose  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aParkedOrderField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParkedOrderID\": \""
       <<aParkedOrderField.ParkedOrderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserType\": \""
       <<aParkedOrderField.UserType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Status\": \""
       <<aParkedOrderField.Status  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aParkedOrderField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aParkedOrderField.ErrorMsg  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsSwapOrder\": \""
       <<aParkedOrderField.IsSwapOrder  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcParkedOrderActionField const& aParkedOrderActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcParkedOrderActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aParkedOrderActionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aParkedOrderActionField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderActionRef\": \""
       <<aParkedOrderActionField.OrderActionRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderRef\": \""
       <<aParkedOrderActionField.OrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aParkedOrderActionField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aParkedOrderActionField.FrontID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aParkedOrderActionField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aParkedOrderActionField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSysID\": \""
       <<aParkedOrderActionField.OrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionFlag\": \""
       <<aParkedOrderActionField.ActionFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LimitPrice\": \""
       <<aParkedOrderActionField.LimitPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeChange\": \""
       <<aParkedOrderActionField.VolumeChange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aParkedOrderActionField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aParkedOrderActionField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParkedOrderActionID\": \""
       <<aParkedOrderActionField.ParkedOrderActionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserType\": \""
       <<aParkedOrderActionField.UserType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Status\": \""
       <<aParkedOrderActionField.Status  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aParkedOrderActionField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aParkedOrderActionField.ErrorMsg  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryParkedOrderField const& aQryParkedOrderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryParkedOrderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryParkedOrderField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryParkedOrderField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryParkedOrderField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryParkedOrderField.ExchangeID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryParkedOrderActionField const& aQryParkedOrderActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryParkedOrderActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryParkedOrderActionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryParkedOrderActionField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryParkedOrderActionField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryParkedOrderActionField.ExchangeID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcRemoveParkedOrderField const& aRemoveParkedOrderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcRemoveParkedOrderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aRemoveParkedOrderField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aRemoveParkedOrderField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParkedOrderID\": \""
       <<aRemoveParkedOrderField.ParkedOrderID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcRemoveParkedOrderActionField const& aRemoveParkedOrderActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcRemoveParkedOrderActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aRemoveParkedOrderActionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aRemoveParkedOrderActionField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParkedOrderActionID\": \""
       <<aRemoveParkedOrderActionField.ParkedOrderActionID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInvestorWithdrawAlgorithmField const& aInvestorWithdrawAlgorithmField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInvestorWithdrawAlgorithmField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aInvestorWithdrawAlgorithmField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorRange\": \""
       <<aInvestorWithdrawAlgorithmField.InvestorRange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aInvestorWithdrawAlgorithmField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UsingRatio\": \""
       <<aInvestorWithdrawAlgorithmField.UsingRatio  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aInvestorWithdrawAlgorithmField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FundMortgageRatio\": \""
       <<aInvestorWithdrawAlgorithmField.FundMortgageRatio  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryInvestorPositionCombineDetailField const& aQryInvestorPositionCombineDetailField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryInvestorPositionCombineDetailField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryInvestorPositionCombineDetailField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryInvestorPositionCombineDetailField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombInstrumentID\": \""
       <<aQryInvestorPositionCombineDetailField.CombInstrumentID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcMarketDataAveragePriceField const& aMarketDataAveragePriceField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcMarketDataAveragePriceField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AveragePrice\": \""
       <<aMarketDataAveragePriceField.AveragePrice  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcVerifyInvestorPasswordField const& aVerifyInvestorPasswordField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcVerifyInvestorPasswordField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aVerifyInvestorPasswordField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aVerifyInvestorPasswordField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aVerifyInvestorPasswordField.Password  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcUserIPField const& aUserIPField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcUserIPField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aUserIPField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aUserIPField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IPAddress\": \""
       <<aUserIPField.IPAddress  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IPMask\": \""
       <<aUserIPField.IPMask  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MacAddress\": \""
       <<aUserIPField.MacAddress  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTradingNoticeInfoField const& aTradingNoticeInfoField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTradingNoticeInfoField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aTradingNoticeInfoField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aTradingNoticeInfoField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SendTime\": \""
       <<aTradingNoticeInfoField.SendTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FieldContent\": \""
       <<aTradingNoticeInfoField.FieldContent  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SequenceSeries\": \""
       <<aTradingNoticeInfoField.SequenceSeries  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SequenceNo\": \""
       <<aTradingNoticeInfoField.SequenceNo  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTradingNoticeField const& aTradingNoticeField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTradingNoticeField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aTradingNoticeField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorRange\": \""
       <<aTradingNoticeField.InvestorRange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aTradingNoticeField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SequenceSeries\": \""
       <<aTradingNoticeField.SequenceSeries  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aTradingNoticeField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SendTime\": \""
       <<aTradingNoticeField.SendTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SequenceNo\": \""
       <<aTradingNoticeField.SequenceNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FieldContent\": \""
       <<aTradingNoticeField.FieldContent  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryTradingNoticeField const& aQryTradingNoticeField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryTradingNoticeField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryTradingNoticeField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryTradingNoticeField.InvestorID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryErrOrderField const& aQryErrOrderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryErrOrderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryErrOrderField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryErrOrderField.InvestorID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcErrOrderField const& aErrOrderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcErrOrderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aErrOrderField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aErrOrderField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aErrOrderField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderRef\": \""
       <<aErrOrderField.OrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aErrOrderField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderPriceType\": \""
       <<aErrOrderField.OrderPriceType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Direction\": \""
       <<aErrOrderField.Direction  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombOffsetFlag\": \""
       <<aErrOrderField.CombOffsetFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombHedgeFlag\": \""
       <<aErrOrderField.CombHedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LimitPrice\": \""
       <<aErrOrderField.LimitPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeTotalOriginal\": \""
       <<aErrOrderField.VolumeTotalOriginal  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TimeCondition\": \""
       <<aErrOrderField.TimeCondition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"GTDDate\": \""
       <<aErrOrderField.GTDDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeCondition\": \""
       <<aErrOrderField.VolumeCondition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MinVolume\": \""
       <<aErrOrderField.MinVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ContingentCondition\": \""
       <<aErrOrderField.ContingentCondition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StopPrice\": \""
       <<aErrOrderField.StopPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ForceCloseReason\": \""
       <<aErrOrderField.ForceCloseReason  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsAutoSuspend\": \""
       <<aErrOrderField.IsAutoSuspend  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aErrOrderField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aErrOrderField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserForceClose\": \""
       <<aErrOrderField.UserForceClose  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aErrOrderField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aErrOrderField.ErrorMsg  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsSwapOrder\": \""
       <<aErrOrderField.IsSwapOrder  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcErrorConditionalOrderField const& aErrorConditionalOrderField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcErrorConditionalOrderField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aErrorConditionalOrderField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aErrorConditionalOrderField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aErrorConditionalOrderField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderRef\": \""
       <<aErrorConditionalOrderField.OrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aErrorConditionalOrderField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderPriceType\": \""
       <<aErrorConditionalOrderField.OrderPriceType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Direction\": \""
       <<aErrorConditionalOrderField.Direction  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombOffsetFlag\": \""
       <<aErrorConditionalOrderField.CombOffsetFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CombHedgeFlag\": \""
       <<aErrorConditionalOrderField.CombHedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LimitPrice\": \""
       <<aErrorConditionalOrderField.LimitPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeTotalOriginal\": \""
       <<aErrorConditionalOrderField.VolumeTotalOriginal  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TimeCondition\": \""
       <<aErrorConditionalOrderField.TimeCondition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"GTDDate\": \""
       <<aErrorConditionalOrderField.GTDDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeCondition\": \""
       <<aErrorConditionalOrderField.VolumeCondition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MinVolume\": \""
       <<aErrorConditionalOrderField.MinVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ContingentCondition\": \""
       <<aErrorConditionalOrderField.ContingentCondition  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StopPrice\": \""
       <<aErrorConditionalOrderField.StopPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ForceCloseReason\": \""
       <<aErrorConditionalOrderField.ForceCloseReason  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsAutoSuspend\": \""
       <<aErrorConditionalOrderField.IsAutoSuspend  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aErrorConditionalOrderField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aErrorConditionalOrderField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderLocalID\": \""
       <<aErrorConditionalOrderField.OrderLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aErrorConditionalOrderField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aErrorConditionalOrderField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aErrorConditionalOrderField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeInstID\": \""
       <<aErrorConditionalOrderField.ExchangeInstID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aErrorConditionalOrderField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aErrorConditionalOrderField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSubmitStatus\": \""
       <<aErrorConditionalOrderField.OrderSubmitStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"NotifySequence\": \""
       <<aErrorConditionalOrderField.NotifySequence  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aErrorConditionalOrderField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementID\": \""
       <<aErrorConditionalOrderField.SettlementID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSysID\": \""
       <<aErrorConditionalOrderField.OrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSource\": \""
       <<aErrorConditionalOrderField.OrderSource  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderStatus\": \""
       <<aErrorConditionalOrderField.OrderStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderType\": \""
       <<aErrorConditionalOrderField.OrderType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeTraded\": \""
       <<aErrorConditionalOrderField.VolumeTraded  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeTotal\": \""
       <<aErrorConditionalOrderField.VolumeTotal  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertDate\": \""
       <<aErrorConditionalOrderField.InsertDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InsertTime\": \""
       <<aErrorConditionalOrderField.InsertTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActiveTime\": \""
       <<aErrorConditionalOrderField.ActiveTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SuspendTime\": \""
       <<aErrorConditionalOrderField.SuspendTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UpdateTime\": \""
       <<aErrorConditionalOrderField.UpdateTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CancelTime\": \""
       <<aErrorConditionalOrderField.CancelTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActiveTraderID\": \""
       <<aErrorConditionalOrderField.ActiveTraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClearingPartID\": \""
       <<aErrorConditionalOrderField.ClearingPartID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SequenceNo\": \""
       <<aErrorConditionalOrderField.SequenceNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aErrorConditionalOrderField.FrontID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aErrorConditionalOrderField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserProductInfo\": \""
       <<aErrorConditionalOrderField.UserProductInfo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StatusMsg\": \""
       <<aErrorConditionalOrderField.StatusMsg  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserForceClose\": \""
       <<aErrorConditionalOrderField.UserForceClose  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActiveUserID\": \""
       <<aErrorConditionalOrderField.ActiveUserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerOrderSeq\": \""
       <<aErrorConditionalOrderField.BrokerOrderSeq  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RelativeOrderSysID\": \""
       <<aErrorConditionalOrderField.RelativeOrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ZCETotalTradedVolume\": \""
       <<aErrorConditionalOrderField.ZCETotalTradedVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aErrorConditionalOrderField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aErrorConditionalOrderField.ErrorMsg  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IsSwapOrder\": \""
       <<aErrorConditionalOrderField.IsSwapOrder  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryErrOrderActionField const& aQryErrOrderActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryErrOrderActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryErrOrderActionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryErrOrderActionField.InvestorID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcErrOrderActionField const& aErrOrderActionField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcErrOrderActionField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aErrOrderActionField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aErrOrderActionField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderActionRef\": \""
       <<aErrOrderActionField.OrderActionRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderRef\": \""
       <<aErrOrderActionField.OrderRef  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aErrOrderActionField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrontID\": \""
       <<aErrOrderActionField.FrontID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aErrOrderActionField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aErrOrderActionField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderSysID\": \""
       <<aErrOrderActionField.OrderSysID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionFlag\": \""
       <<aErrOrderActionField.ActionFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LimitPrice\": \""
       <<aErrOrderActionField.LimitPrice  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VolumeChange\": \""
       <<aErrOrderActionField.VolumeChange  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionDate\": \""
       <<aErrOrderActionField.ActionDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionTime\": \""
       <<aErrOrderActionField.ActionTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TraderID\": \""
       <<aErrOrderActionField.TraderID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aErrOrderActionField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderLocalID\": \""
       <<aErrOrderActionField.OrderLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ActionLocalID\": \""
       <<aErrOrderActionField.ActionLocalID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aErrOrderActionField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ClientID\": \""
       <<aErrOrderActionField.ClientID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BusinessUnit\": \""
       <<aErrOrderActionField.BusinessUnit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrderActionStatus\": \""
       <<aErrOrderActionField.OrderActionStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aErrOrderActionField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"StatusMsg\": \""
       <<aErrOrderActionField.StatusMsg  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aErrOrderActionField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aErrOrderActionField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aErrOrderActionField.ErrorMsg  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryExchangeSequenceField const& aQryExchangeSequenceField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryExchangeSequenceField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryExchangeSequenceField.ExchangeID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcExchangeSequenceField const& aExchangeSequenceField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcExchangeSequenceField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aExchangeSequenceField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SequenceNo\": \""
       <<aExchangeSequenceField.SequenceNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MarketStatus\": \""
       <<aExchangeSequenceField.MarketStatus  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQueryMaxOrderVolumeWithPriceField const& aQueryMaxOrderVolumeWithPriceField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQueryMaxOrderVolumeWithPriceField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQueryMaxOrderVolumeWithPriceField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQueryMaxOrderVolumeWithPriceField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQueryMaxOrderVolumeWithPriceField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Direction\": \""
       <<aQueryMaxOrderVolumeWithPriceField.Direction  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OffsetFlag\": \""
       <<aQueryMaxOrderVolumeWithPriceField.OffsetFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aQueryMaxOrderVolumeWithPriceField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MaxVolume\": \""
       <<aQueryMaxOrderVolumeWithPriceField.MaxVolume  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Price\": \""
       <<aQueryMaxOrderVolumeWithPriceField.Price  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryBrokerTradingParamsField const& aQryBrokerTradingParamsField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryBrokerTradingParamsField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryBrokerTradingParamsField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryBrokerTradingParamsField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aQryBrokerTradingParamsField.CurrencyID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcBrokerTradingParamsField const& aBrokerTradingParamsField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcBrokerTradingParamsField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aBrokerTradingParamsField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aBrokerTradingParamsField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MarginPriceType\": \""
       <<aBrokerTradingParamsField.MarginPriceType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Algorithm\": \""
       <<aBrokerTradingParamsField.Algorithm  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AvailIncludeCloseProfit\": \""
       <<aBrokerTradingParamsField.AvailIncludeCloseProfit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aBrokerTradingParamsField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OptionRoyaltyPriceType\": \""
       <<aBrokerTradingParamsField.OptionRoyaltyPriceType  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryBrokerTradingAlgosField const& aQryBrokerTradingAlgosField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryBrokerTradingAlgosField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryBrokerTradingAlgosField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryBrokerTradingAlgosField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryBrokerTradingAlgosField.InstrumentID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcBrokerTradingAlgosField const& aBrokerTradingAlgosField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcBrokerTradingAlgosField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aBrokerTradingAlgosField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aBrokerTradingAlgosField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aBrokerTradingAlgosField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HandlePositionAlgoID\": \""
       <<aBrokerTradingAlgosField.HandlePositionAlgoID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FindMarginRateAlgoID\": \""
       <<aBrokerTradingAlgosField.FindMarginRateAlgoID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HandleTradingAccountAlgoID\": \""
       <<aBrokerTradingAlgosField.HandleTradingAccountAlgoID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQueryBrokerDepositField const& aQueryBrokerDepositField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQueryBrokerDepositField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQueryBrokerDepositField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQueryBrokerDepositField.ExchangeID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcBrokerDepositField const& aBrokerDepositField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcBrokerDepositField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aBrokerDepositField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aBrokerDepositField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aBrokerDepositField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aBrokerDepositField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PreBalance\": \""
       <<aBrokerDepositField.PreBalance  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrMargin\": \""
       <<aBrokerDepositField.CurrMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseProfit\": \""
       <<aBrokerDepositField.CloseProfit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Balance\": \""
       <<aBrokerDepositField.Balance  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Deposit\": \""
       <<aBrokerDepositField.Deposit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Withdraw\": \""
       <<aBrokerDepositField.Withdraw  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Available\": \""
       <<aBrokerDepositField.Available  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Reserve\": \""
       <<aBrokerDepositField.Reserve  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrozenMargin\": \""
       <<aBrokerDepositField.FrozenMargin  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryCFMMCBrokerKeyField const& aQryCFMMCBrokerKeyField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryCFMMCBrokerKeyField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryCFMMCBrokerKeyField.BrokerID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcCFMMCBrokerKeyField const& aCFMMCBrokerKeyField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcCFMMCBrokerKeyField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aCFMMCBrokerKeyField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aCFMMCBrokerKeyField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CreateDate\": \""
       <<aCFMMCBrokerKeyField.CreateDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CreateTime\": \""
       <<aCFMMCBrokerKeyField.CreateTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"KeyID\": \""
       <<aCFMMCBrokerKeyField.KeyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrentKey\": \""
       <<aCFMMCBrokerKeyField.CurrentKey  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"KeyKind\": \""
       <<aCFMMCBrokerKeyField.KeyKind  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcCFMMCTradingAccountKeyField const& aCFMMCTradingAccountKeyField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcCFMMCTradingAccountKeyField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aCFMMCTradingAccountKeyField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aCFMMCTradingAccountKeyField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aCFMMCTradingAccountKeyField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"KeyID\": \""
       <<aCFMMCTradingAccountKeyField.KeyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrentKey\": \""
       <<aCFMMCTradingAccountKeyField.CurrentKey  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryCFMMCTradingAccountKeyField const& aQryCFMMCTradingAccountKeyField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryCFMMCTradingAccountKeyField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryCFMMCTradingAccountKeyField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryCFMMCTradingAccountKeyField.InvestorID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcBrokerUserOTPParamField const& aBrokerUserOTPParamField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcBrokerUserOTPParamField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aBrokerUserOTPParamField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aBrokerUserOTPParamField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OTPVendorsID\": \""
       <<aBrokerUserOTPParamField.OTPVendorsID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SerialNumber\": \""
       <<aBrokerUserOTPParamField.SerialNumber  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AuthKey\": \""
       <<aBrokerUserOTPParamField.AuthKey  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastDrift\": \""
       <<aBrokerUserOTPParamField.LastDrift  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastSuccess\": \""
       <<aBrokerUserOTPParamField.LastSuccess  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OTPType\": \""
       <<aBrokerUserOTPParamField.OTPType  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcManualSyncBrokerUserOTPField const& aManualSyncBrokerUserOTPField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcManualSyncBrokerUserOTPField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aManualSyncBrokerUserOTPField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aManualSyncBrokerUserOTPField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OTPType\": \""
       <<aManualSyncBrokerUserOTPField.OTPType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FirstOTP\": \""
       <<aManualSyncBrokerUserOTPField.FirstOTP  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SecondOTP\": \""
       <<aManualSyncBrokerUserOTPField.SecondOTP  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcCommRateModelField const& aCommRateModelField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcCommRateModelField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aCommRateModelField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CommModelID\": \""
       <<aCommRateModelField.CommModelID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CommModelName\": \""
       <<aCommRateModelField.CommModelName  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryCommRateModelField const& aQryCommRateModelField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryCommRateModelField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryCommRateModelField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CommModelID\": \""
       <<aQryCommRateModelField.CommModelID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcMarginModelField const& aMarginModelField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcMarginModelField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aMarginModelField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MarginModelID\": \""
       <<aMarginModelField.MarginModelID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MarginModelName\": \""
       <<aMarginModelField.MarginModelName  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryMarginModelField const& aQryMarginModelField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryMarginModelField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryMarginModelField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MarginModelID\": \""
       <<aQryMarginModelField.MarginModelID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcEWarrantOffsetField const& aEWarrantOffsetField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcEWarrantOffsetField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aEWarrantOffsetField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aEWarrantOffsetField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aEWarrantOffsetField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aEWarrantOffsetField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aEWarrantOffsetField.InstrumentID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Direction\": \""
       <<aEWarrantOffsetField.Direction  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aEWarrantOffsetField.HedgeFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Volume\": \""
       <<aEWarrantOffsetField.Volume  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryEWarrantOffsetField const& aQryEWarrantOffsetField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryEWarrantOffsetField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryEWarrantOffsetField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryEWarrantOffsetField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchangeID\": \""
       <<aQryEWarrantOffsetField.ExchangeID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstrumentID\": \""
       <<aQryEWarrantOffsetField.InstrumentID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryInvestorProductGroupMarginField const& aQryInvestorProductGroupMarginField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryInvestorProductGroupMarginField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryInvestorProductGroupMarginField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQryInvestorProductGroupMarginField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ProductGroupID\": \""
       <<aQryInvestorProductGroupMarginField.ProductGroupID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aQryInvestorProductGroupMarginField.HedgeFlag  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcInvestorProductGroupMarginField const& aInvestorProductGroupMarginField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcInvestorProductGroupMarginField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ProductGroupID\": \""
       <<aInvestorProductGroupMarginField.ProductGroupID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aInvestorProductGroupMarginField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aInvestorProductGroupMarginField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aInvestorProductGroupMarginField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SettlementID\": \""
       <<aInvestorProductGroupMarginField.SettlementID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrozenMargin\": \""
       <<aInvestorProductGroupMarginField.FrozenMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LongFrozenMargin\": \""
       <<aInvestorProductGroupMarginField.LongFrozenMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ShortFrozenMargin\": \""
       <<aInvestorProductGroupMarginField.ShortFrozenMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UseMargin\": \""
       <<aInvestorProductGroupMarginField.UseMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LongUseMargin\": \""
       <<aInvestorProductGroupMarginField.LongUseMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ShortUseMargin\": \""
       <<aInvestorProductGroupMarginField.ShortUseMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchMargin\": \""
       <<aInvestorProductGroupMarginField.ExchMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LongExchMargin\": \""
       <<aInvestorProductGroupMarginField.LongExchMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ShortExchMargin\": \""
       <<aInvestorProductGroupMarginField.ShortExchMargin  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CloseProfit\": \""
       <<aInvestorProductGroupMarginField.CloseProfit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrozenCommission\": \""
       <<aInvestorProductGroupMarginField.FrozenCommission  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Commission\": \""
       <<aInvestorProductGroupMarginField.Commission  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FrozenCash\": \""
       <<aInvestorProductGroupMarginField.FrozenCash  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CashIn\": \""
       <<aInvestorProductGroupMarginField.CashIn  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PositionProfit\": \""
       <<aInvestorProductGroupMarginField.PositionProfit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OffsetAmount\": \""
       <<aInvestorProductGroupMarginField.OffsetAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LongOffsetAmount\": \""
       <<aInvestorProductGroupMarginField.LongOffsetAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ShortOffsetAmount\": \""
       <<aInvestorProductGroupMarginField.ShortOffsetAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ExchOffsetAmount\": \""
       <<aInvestorProductGroupMarginField.ExchOffsetAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LongExchOffsetAmount\": \""
       <<aInvestorProductGroupMarginField.LongExchOffsetAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ShortExchOffsetAmount\": \""
       <<aInvestorProductGroupMarginField.ShortExchOffsetAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"HedgeFlag\": \""
       <<aInvestorProductGroupMarginField.HedgeFlag  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQueryCFMMCTradingAccountTokenField const& aQueryCFMMCTradingAccountTokenField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQueryCFMMCTradingAccountTokenField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQueryCFMMCTradingAccountTokenField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aQueryCFMMCTradingAccountTokenField.InvestorID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcCFMMCTradingAccountTokenField const& aCFMMCTradingAccountTokenField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcCFMMCTradingAccountTokenField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aCFMMCTradingAccountTokenField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ParticipantID\": \""
       <<aCFMMCTradingAccountTokenField.ParticipantID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aCFMMCTradingAccountTokenField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"KeyID\": \""
       <<aCFMMCTradingAccountTokenField.KeyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Token\": \""
       <<aCFMMCTradingAccountTokenField.Token  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcReqOpenAccountField const& aReqOpenAccountField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcReqOpenAccountField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aReqOpenAccountField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aReqOpenAccountField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aReqOpenAccountField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aReqOpenAccountField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aReqOpenAccountField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aReqOpenAccountField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aReqOpenAccountField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aReqOpenAccountField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aReqOpenAccountField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aReqOpenAccountField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aReqOpenAccountField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aReqOpenAccountField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustomerName\": \""
       <<aReqOpenAccountField.CustomerName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdCardType\": \""
       <<aReqOpenAccountField.IdCardType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardNo\": \""
       <<aReqOpenAccountField.IdentifiedCardNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Gender\": \""
       <<aReqOpenAccountField.Gender  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CountryCode\": \""
       <<aReqOpenAccountField.CountryCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustType\": \""
       <<aReqOpenAccountField.CustType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Address\": \""
       <<aReqOpenAccountField.Address  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ZipCode\": \""
       <<aReqOpenAccountField.ZipCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Telephone\": \""
       <<aReqOpenAccountField.Telephone  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MobilePhone\": \""
       <<aReqOpenAccountField.MobilePhone  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Fax\": \""
       <<aReqOpenAccountField.Fax  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"EMail\": \""
       <<aReqOpenAccountField.EMail  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MoneyAccountStatus\": \""
       <<aReqOpenAccountField.MoneyAccountStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccount\": \""
       <<aReqOpenAccountField.BankAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPassWord\": \""
       <<aReqOpenAccountField.BankPassWord  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aReqOpenAccountField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aReqOpenAccountField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aReqOpenAccountField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VerifyCertNoFlag\": \""
       <<aReqOpenAccountField.VerifyCertNoFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aReqOpenAccountField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CashExchangeCode\": \""
       <<aReqOpenAccountField.CashExchangeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aReqOpenAccountField.Digest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccType\": \""
       <<aReqOpenAccountField.BankAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeviceID\": \""
       <<aReqOpenAccountField.DeviceID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAccType\": \""
       <<aReqOpenAccountField.BankSecuAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aReqOpenAccountField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAcc\": \""
       <<aReqOpenAccountField.BankSecuAcc  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPwdFlag\": \""
       <<aReqOpenAccountField.BankPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SecuPwdFlag\": \""
       <<aReqOpenAccountField.SecuPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperNo\": \""
       <<aReqOpenAccountField.OperNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aReqOpenAccountField.TID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aReqOpenAccountField.UserID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcReqCancelAccountField const& aReqCancelAccountField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcReqCancelAccountField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aReqCancelAccountField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aReqCancelAccountField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aReqCancelAccountField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aReqCancelAccountField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aReqCancelAccountField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aReqCancelAccountField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aReqCancelAccountField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aReqCancelAccountField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aReqCancelAccountField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aReqCancelAccountField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aReqCancelAccountField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aReqCancelAccountField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustomerName\": \""
       <<aReqCancelAccountField.CustomerName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdCardType\": \""
       <<aReqCancelAccountField.IdCardType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardNo\": \""
       <<aReqCancelAccountField.IdentifiedCardNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Gender\": \""
       <<aReqCancelAccountField.Gender  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CountryCode\": \""
       <<aReqCancelAccountField.CountryCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustType\": \""
       <<aReqCancelAccountField.CustType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Address\": \""
       <<aReqCancelAccountField.Address  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ZipCode\": \""
       <<aReqCancelAccountField.ZipCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Telephone\": \""
       <<aReqCancelAccountField.Telephone  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MobilePhone\": \""
       <<aReqCancelAccountField.MobilePhone  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Fax\": \""
       <<aReqCancelAccountField.Fax  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"EMail\": \""
       <<aReqCancelAccountField.EMail  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MoneyAccountStatus\": \""
       <<aReqCancelAccountField.MoneyAccountStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccount\": \""
       <<aReqCancelAccountField.BankAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPassWord\": \""
       <<aReqCancelAccountField.BankPassWord  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aReqCancelAccountField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aReqCancelAccountField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aReqCancelAccountField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VerifyCertNoFlag\": \""
       <<aReqCancelAccountField.VerifyCertNoFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aReqCancelAccountField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CashExchangeCode\": \""
       <<aReqCancelAccountField.CashExchangeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aReqCancelAccountField.Digest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccType\": \""
       <<aReqCancelAccountField.BankAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeviceID\": \""
       <<aReqCancelAccountField.DeviceID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAccType\": \""
       <<aReqCancelAccountField.BankSecuAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aReqCancelAccountField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAcc\": \""
       <<aReqCancelAccountField.BankSecuAcc  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPwdFlag\": \""
       <<aReqCancelAccountField.BankPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SecuPwdFlag\": \""
       <<aReqCancelAccountField.SecuPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperNo\": \""
       <<aReqCancelAccountField.OperNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aReqCancelAccountField.TID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aReqCancelAccountField.UserID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcReqChangeAccountField const& aReqChangeAccountField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcReqChangeAccountField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aReqChangeAccountField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aReqChangeAccountField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aReqChangeAccountField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aReqChangeAccountField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aReqChangeAccountField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aReqChangeAccountField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aReqChangeAccountField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aReqChangeAccountField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aReqChangeAccountField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aReqChangeAccountField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aReqChangeAccountField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aReqChangeAccountField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustomerName\": \""
       <<aReqChangeAccountField.CustomerName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdCardType\": \""
       <<aReqChangeAccountField.IdCardType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardNo\": \""
       <<aReqChangeAccountField.IdentifiedCardNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Gender\": \""
       <<aReqChangeAccountField.Gender  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CountryCode\": \""
       <<aReqChangeAccountField.CountryCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustType\": \""
       <<aReqChangeAccountField.CustType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Address\": \""
       <<aReqChangeAccountField.Address  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ZipCode\": \""
       <<aReqChangeAccountField.ZipCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Telephone\": \""
       <<aReqChangeAccountField.Telephone  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MobilePhone\": \""
       <<aReqChangeAccountField.MobilePhone  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Fax\": \""
       <<aReqChangeAccountField.Fax  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"EMail\": \""
       <<aReqChangeAccountField.EMail  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MoneyAccountStatus\": \""
       <<aReqChangeAccountField.MoneyAccountStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccount\": \""
       <<aReqChangeAccountField.BankAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPassWord\": \""
       <<aReqChangeAccountField.BankPassWord  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"NewBankAccount\": \""
       <<aReqChangeAccountField.NewBankAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"NewBankPassWord\": \""
       <<aReqChangeAccountField.NewBankPassWord  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aReqChangeAccountField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aReqChangeAccountField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccType\": \""
       <<aReqChangeAccountField.BankAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aReqChangeAccountField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VerifyCertNoFlag\": \""
       <<aReqChangeAccountField.VerifyCertNoFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aReqChangeAccountField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aReqChangeAccountField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPwdFlag\": \""
       <<aReqChangeAccountField.BankPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SecuPwdFlag\": \""
       <<aReqChangeAccountField.SecuPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aReqChangeAccountField.TID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aReqChangeAccountField.Digest  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcReqTransferField const& aReqTransferField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcReqTransferField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aReqTransferField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aReqTransferField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aReqTransferField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aReqTransferField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aReqTransferField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aReqTransferField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aReqTransferField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aReqTransferField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aReqTransferField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aReqTransferField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aReqTransferField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aReqTransferField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustomerName\": \""
       <<aReqTransferField.CustomerName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdCardType\": \""
       <<aReqTransferField.IdCardType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardNo\": \""
       <<aReqTransferField.IdentifiedCardNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustType\": \""
       <<aReqTransferField.CustType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccount\": \""
       <<aReqTransferField.BankAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPassWord\": \""
       <<aReqTransferField.BankPassWord  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aReqTransferField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aReqTransferField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aReqTransferField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureSerial\": \""
       <<aReqTransferField.FutureSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aReqTransferField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VerifyCertNoFlag\": \""
       <<aReqTransferField.VerifyCertNoFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aReqTransferField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeAmount\": \""
       <<aReqTransferField.TradeAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureFetchAmount\": \""
       <<aReqTransferField.FutureFetchAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FeePayFlag\": \""
       <<aReqTransferField.FeePayFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustFee\": \""
       <<aReqTransferField.CustFee  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerFee\": \""
       <<aReqTransferField.BrokerFee  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Message\": \""
       <<aReqTransferField.Message  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aReqTransferField.Digest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccType\": \""
       <<aReqTransferField.BankAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeviceID\": \""
       <<aReqTransferField.DeviceID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAccType\": \""
       <<aReqTransferField.BankSecuAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aReqTransferField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAcc\": \""
       <<aReqTransferField.BankSecuAcc  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPwdFlag\": \""
       <<aReqTransferField.BankPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SecuPwdFlag\": \""
       <<aReqTransferField.SecuPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperNo\": \""
       <<aReqTransferField.OperNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aReqTransferField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aReqTransferField.TID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TransferStatus\": \""
       <<aReqTransferField.TransferStatus  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcRspTransferField const& aRspTransferField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcRspTransferField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aRspTransferField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aRspTransferField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aRspTransferField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aRspTransferField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aRspTransferField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aRspTransferField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aRspTransferField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aRspTransferField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aRspTransferField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aRspTransferField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aRspTransferField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aRspTransferField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustomerName\": \""
       <<aRspTransferField.CustomerName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdCardType\": \""
       <<aRspTransferField.IdCardType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardNo\": \""
       <<aRspTransferField.IdentifiedCardNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustType\": \""
       <<aRspTransferField.CustType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccount\": \""
       <<aRspTransferField.BankAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPassWord\": \""
       <<aRspTransferField.BankPassWord  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aRspTransferField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aRspTransferField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aRspTransferField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureSerial\": \""
       <<aRspTransferField.FutureSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aRspTransferField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VerifyCertNoFlag\": \""
       <<aRspTransferField.VerifyCertNoFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aRspTransferField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeAmount\": \""
       <<aRspTransferField.TradeAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureFetchAmount\": \""
       <<aRspTransferField.FutureFetchAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FeePayFlag\": \""
       <<aRspTransferField.FeePayFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustFee\": \""
       <<aRspTransferField.CustFee  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerFee\": \""
       <<aRspTransferField.BrokerFee  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Message\": \""
       <<aRspTransferField.Message  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aRspTransferField.Digest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccType\": \""
       <<aRspTransferField.BankAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeviceID\": \""
       <<aRspTransferField.DeviceID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAccType\": \""
       <<aRspTransferField.BankSecuAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aRspTransferField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAcc\": \""
       <<aRspTransferField.BankSecuAcc  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPwdFlag\": \""
       <<aRspTransferField.BankPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SecuPwdFlag\": \""
       <<aRspTransferField.SecuPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperNo\": \""
       <<aRspTransferField.OperNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aRspTransferField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aRspTransferField.TID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TransferStatus\": \""
       <<aRspTransferField.TransferStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aRspTransferField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aRspTransferField.ErrorMsg  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcReqRepealField const& aReqRepealField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcReqRepealField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RepealTimeInterval\": \""
       <<aReqRepealField.RepealTimeInterval  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RepealedTimes\": \""
       <<aReqRepealField.RepealedTimes  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankRepealFlag\": \""
       <<aReqRepealField.BankRepealFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerRepealFlag\": \""
       <<aReqRepealField.BrokerRepealFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateRepealSerial\": \""
       <<aReqRepealField.PlateRepealSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankRepealSerial\": \""
       <<aReqRepealField.BankRepealSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureRepealSerial\": \""
       <<aReqRepealField.FutureRepealSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aReqRepealField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aReqRepealField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aReqRepealField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aReqRepealField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aReqRepealField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aReqRepealField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aReqRepealField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aReqRepealField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aReqRepealField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aReqRepealField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aReqRepealField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aReqRepealField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustomerName\": \""
       <<aReqRepealField.CustomerName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdCardType\": \""
       <<aReqRepealField.IdCardType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardNo\": \""
       <<aReqRepealField.IdentifiedCardNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustType\": \""
       <<aReqRepealField.CustType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccount\": \""
       <<aReqRepealField.BankAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPassWord\": \""
       <<aReqRepealField.BankPassWord  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aReqRepealField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aReqRepealField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aReqRepealField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureSerial\": \""
       <<aReqRepealField.FutureSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aReqRepealField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VerifyCertNoFlag\": \""
       <<aReqRepealField.VerifyCertNoFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aReqRepealField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeAmount\": \""
       <<aReqRepealField.TradeAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureFetchAmount\": \""
       <<aReqRepealField.FutureFetchAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FeePayFlag\": \""
       <<aReqRepealField.FeePayFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustFee\": \""
       <<aReqRepealField.CustFee  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerFee\": \""
       <<aReqRepealField.BrokerFee  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Message\": \""
       <<aReqRepealField.Message  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aReqRepealField.Digest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccType\": \""
       <<aReqRepealField.BankAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeviceID\": \""
       <<aReqRepealField.DeviceID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAccType\": \""
       <<aReqRepealField.BankSecuAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aReqRepealField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAcc\": \""
       <<aReqRepealField.BankSecuAcc  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPwdFlag\": \""
       <<aReqRepealField.BankPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SecuPwdFlag\": \""
       <<aReqRepealField.SecuPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperNo\": \""
       <<aReqRepealField.OperNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aReqRepealField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aReqRepealField.TID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TransferStatus\": \""
       <<aReqRepealField.TransferStatus  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcRspRepealField const& aRspRepealField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcRspRepealField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RepealTimeInterval\": \""
       <<aRspRepealField.RepealTimeInterval  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RepealedTimes\": \""
       <<aRspRepealField.RepealedTimes  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankRepealFlag\": \""
       <<aRspRepealField.BankRepealFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerRepealFlag\": \""
       <<aRspRepealField.BrokerRepealFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateRepealSerial\": \""
       <<aRspRepealField.PlateRepealSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankRepealSerial\": \""
       <<aRspRepealField.BankRepealSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureRepealSerial\": \""
       <<aRspRepealField.FutureRepealSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aRspRepealField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aRspRepealField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aRspRepealField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aRspRepealField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aRspRepealField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aRspRepealField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aRspRepealField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aRspRepealField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aRspRepealField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aRspRepealField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aRspRepealField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aRspRepealField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustomerName\": \""
       <<aRspRepealField.CustomerName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdCardType\": \""
       <<aRspRepealField.IdCardType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardNo\": \""
       <<aRspRepealField.IdentifiedCardNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustType\": \""
       <<aRspRepealField.CustType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccount\": \""
       <<aRspRepealField.BankAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPassWord\": \""
       <<aRspRepealField.BankPassWord  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aRspRepealField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aRspRepealField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aRspRepealField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureSerial\": \""
       <<aRspRepealField.FutureSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aRspRepealField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VerifyCertNoFlag\": \""
       <<aRspRepealField.VerifyCertNoFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aRspRepealField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeAmount\": \""
       <<aRspRepealField.TradeAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureFetchAmount\": \""
       <<aRspRepealField.FutureFetchAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FeePayFlag\": \""
       <<aRspRepealField.FeePayFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustFee\": \""
       <<aRspRepealField.CustFee  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerFee\": \""
       <<aRspRepealField.BrokerFee  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Message\": \""
       <<aRspRepealField.Message  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aRspRepealField.Digest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccType\": \""
       <<aRspRepealField.BankAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeviceID\": \""
       <<aRspRepealField.DeviceID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAccType\": \""
       <<aRspRepealField.BankSecuAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aRspRepealField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAcc\": \""
       <<aRspRepealField.BankSecuAcc  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPwdFlag\": \""
       <<aRspRepealField.BankPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SecuPwdFlag\": \""
       <<aRspRepealField.SecuPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperNo\": \""
       <<aRspRepealField.OperNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aRspRepealField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aRspRepealField.TID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TransferStatus\": \""
       <<aRspRepealField.TransferStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aRspRepealField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aRspRepealField.ErrorMsg  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcReqQueryAccountField const& aReqQueryAccountField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcReqQueryAccountField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aReqQueryAccountField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aReqQueryAccountField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aReqQueryAccountField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aReqQueryAccountField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aReqQueryAccountField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aReqQueryAccountField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aReqQueryAccountField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aReqQueryAccountField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aReqQueryAccountField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aReqQueryAccountField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aReqQueryAccountField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aReqQueryAccountField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustomerName\": \""
       <<aReqQueryAccountField.CustomerName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdCardType\": \""
       <<aReqQueryAccountField.IdCardType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardNo\": \""
       <<aReqQueryAccountField.IdentifiedCardNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustType\": \""
       <<aReqQueryAccountField.CustType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccount\": \""
       <<aReqQueryAccountField.BankAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPassWord\": \""
       <<aReqQueryAccountField.BankPassWord  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aReqQueryAccountField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aReqQueryAccountField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureSerial\": \""
       <<aReqQueryAccountField.FutureSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aReqQueryAccountField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aReqQueryAccountField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VerifyCertNoFlag\": \""
       <<aReqQueryAccountField.VerifyCertNoFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aReqQueryAccountField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aReqQueryAccountField.Digest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccType\": \""
       <<aReqQueryAccountField.BankAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeviceID\": \""
       <<aReqQueryAccountField.DeviceID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAccType\": \""
       <<aReqQueryAccountField.BankSecuAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aReqQueryAccountField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAcc\": \""
       <<aReqQueryAccountField.BankSecuAcc  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPwdFlag\": \""
       <<aReqQueryAccountField.BankPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SecuPwdFlag\": \""
       <<aReqQueryAccountField.SecuPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperNo\": \""
       <<aReqQueryAccountField.OperNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aReqQueryAccountField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aReqQueryAccountField.TID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcRspQueryAccountField const& aRspQueryAccountField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcRspQueryAccountField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aRspQueryAccountField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aRspQueryAccountField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aRspQueryAccountField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aRspQueryAccountField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aRspQueryAccountField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aRspQueryAccountField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aRspQueryAccountField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aRspQueryAccountField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aRspQueryAccountField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aRspQueryAccountField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aRspQueryAccountField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aRspQueryAccountField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustomerName\": \""
       <<aRspQueryAccountField.CustomerName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdCardType\": \""
       <<aRspQueryAccountField.IdCardType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardNo\": \""
       <<aRspQueryAccountField.IdentifiedCardNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustType\": \""
       <<aRspQueryAccountField.CustType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccount\": \""
       <<aRspQueryAccountField.BankAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPassWord\": \""
       <<aRspQueryAccountField.BankPassWord  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aRspQueryAccountField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aRspQueryAccountField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureSerial\": \""
       <<aRspQueryAccountField.FutureSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aRspQueryAccountField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aRspQueryAccountField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VerifyCertNoFlag\": \""
       <<aRspQueryAccountField.VerifyCertNoFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aRspQueryAccountField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aRspQueryAccountField.Digest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccType\": \""
       <<aRspQueryAccountField.BankAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeviceID\": \""
       <<aRspQueryAccountField.DeviceID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAccType\": \""
       <<aRspQueryAccountField.BankSecuAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aRspQueryAccountField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAcc\": \""
       <<aRspQueryAccountField.BankSecuAcc  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPwdFlag\": \""
       <<aRspQueryAccountField.BankPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SecuPwdFlag\": \""
       <<aRspQueryAccountField.SecuPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperNo\": \""
       <<aRspQueryAccountField.OperNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aRspQueryAccountField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aRspQueryAccountField.TID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankUseAmount\": \""
       <<aRspQueryAccountField.BankUseAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankFetchAmount\": \""
       <<aRspQueryAccountField.BankFetchAmount  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcFutureSignIOField const& aFutureSignIOField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcFutureSignIOField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aFutureSignIOField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aFutureSignIOField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aFutureSignIOField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aFutureSignIOField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aFutureSignIOField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aFutureSignIOField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aFutureSignIOField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aFutureSignIOField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aFutureSignIOField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aFutureSignIOField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aFutureSignIOField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aFutureSignIOField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aFutureSignIOField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aFutureSignIOField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aFutureSignIOField.Digest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aFutureSignIOField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeviceID\": \""
       <<aFutureSignIOField.DeviceID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aFutureSignIOField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperNo\": \""
       <<aFutureSignIOField.OperNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aFutureSignIOField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aFutureSignIOField.TID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcRspFutureSignInField const& aRspFutureSignInField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcRspFutureSignInField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aRspFutureSignInField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aRspFutureSignInField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aRspFutureSignInField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aRspFutureSignInField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aRspFutureSignInField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aRspFutureSignInField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aRspFutureSignInField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aRspFutureSignInField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aRspFutureSignInField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aRspFutureSignInField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aRspFutureSignInField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aRspFutureSignInField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aRspFutureSignInField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aRspFutureSignInField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aRspFutureSignInField.Digest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aRspFutureSignInField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeviceID\": \""
       <<aRspFutureSignInField.DeviceID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aRspFutureSignInField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperNo\": \""
       <<aRspFutureSignInField.OperNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aRspFutureSignInField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aRspFutureSignInField.TID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aRspFutureSignInField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aRspFutureSignInField.ErrorMsg  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PinKey\": \""
       <<aRspFutureSignInField.PinKey  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MacKey\": \""
       <<aRspFutureSignInField.MacKey  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcReqFutureSignOutField const& aReqFutureSignOutField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcReqFutureSignOutField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aReqFutureSignOutField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aReqFutureSignOutField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aReqFutureSignOutField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aReqFutureSignOutField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aReqFutureSignOutField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aReqFutureSignOutField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aReqFutureSignOutField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aReqFutureSignOutField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aReqFutureSignOutField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aReqFutureSignOutField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aReqFutureSignOutField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aReqFutureSignOutField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aReqFutureSignOutField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aReqFutureSignOutField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aReqFutureSignOutField.Digest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aReqFutureSignOutField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeviceID\": \""
       <<aReqFutureSignOutField.DeviceID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aReqFutureSignOutField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperNo\": \""
       <<aReqFutureSignOutField.OperNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aReqFutureSignOutField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aReqFutureSignOutField.TID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcRspFutureSignOutField const& aRspFutureSignOutField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcRspFutureSignOutField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aRspFutureSignOutField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aRspFutureSignOutField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aRspFutureSignOutField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aRspFutureSignOutField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aRspFutureSignOutField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aRspFutureSignOutField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aRspFutureSignOutField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aRspFutureSignOutField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aRspFutureSignOutField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aRspFutureSignOutField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aRspFutureSignOutField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aRspFutureSignOutField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aRspFutureSignOutField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aRspFutureSignOutField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aRspFutureSignOutField.Digest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aRspFutureSignOutField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeviceID\": \""
       <<aRspFutureSignOutField.DeviceID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aRspFutureSignOutField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperNo\": \""
       <<aRspFutureSignOutField.OperNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aRspFutureSignOutField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aRspFutureSignOutField.TID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aRspFutureSignOutField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aRspFutureSignOutField.ErrorMsg  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcReqQueryTradeResultBySerialField const& aReqQueryTradeResultBySerialField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcReqQueryTradeResultBySerialField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aReqQueryTradeResultBySerialField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aReqQueryTradeResultBySerialField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aReqQueryTradeResultBySerialField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aReqQueryTradeResultBySerialField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aReqQueryTradeResultBySerialField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aReqQueryTradeResultBySerialField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aReqQueryTradeResultBySerialField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aReqQueryTradeResultBySerialField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aReqQueryTradeResultBySerialField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aReqQueryTradeResultBySerialField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aReqQueryTradeResultBySerialField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aReqQueryTradeResultBySerialField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Reference\": \""
       <<aReqQueryTradeResultBySerialField.Reference  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RefrenceIssureType\": \""
       <<aReqQueryTradeResultBySerialField.RefrenceIssureType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RefrenceIssure\": \""
       <<aReqQueryTradeResultBySerialField.RefrenceIssure  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustomerName\": \""
       <<aReqQueryTradeResultBySerialField.CustomerName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdCardType\": \""
       <<aReqQueryTradeResultBySerialField.IdCardType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardNo\": \""
       <<aReqQueryTradeResultBySerialField.IdentifiedCardNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustType\": \""
       <<aReqQueryTradeResultBySerialField.CustType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccount\": \""
       <<aReqQueryTradeResultBySerialField.BankAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPassWord\": \""
       <<aReqQueryTradeResultBySerialField.BankPassWord  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aReqQueryTradeResultBySerialField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aReqQueryTradeResultBySerialField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aReqQueryTradeResultBySerialField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeAmount\": \""
       <<aReqQueryTradeResultBySerialField.TradeAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aReqQueryTradeResultBySerialField.Digest  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcRspQueryTradeResultBySerialField const& aRspQueryTradeResultBySerialField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcRspQueryTradeResultBySerialField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aRspQueryTradeResultBySerialField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aRspQueryTradeResultBySerialField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aRspQueryTradeResultBySerialField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aRspQueryTradeResultBySerialField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aRspQueryTradeResultBySerialField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aRspQueryTradeResultBySerialField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aRspQueryTradeResultBySerialField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aRspQueryTradeResultBySerialField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aRspQueryTradeResultBySerialField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aRspQueryTradeResultBySerialField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aRspQueryTradeResultBySerialField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aRspQueryTradeResultBySerialField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aRspQueryTradeResultBySerialField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aRspQueryTradeResultBySerialField.ErrorMsg  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Reference\": \""
       <<aRspQueryTradeResultBySerialField.Reference  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RefrenceIssureType\": \""
       <<aRspQueryTradeResultBySerialField.RefrenceIssureType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RefrenceIssure\": \""
       <<aRspQueryTradeResultBySerialField.RefrenceIssure  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OriginReturnCode\": \""
       <<aRspQueryTradeResultBySerialField.OriginReturnCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OriginDescrInfoForReturnCode\": \""
       <<aRspQueryTradeResultBySerialField.OriginDescrInfoForReturnCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccount\": \""
       <<aRspQueryTradeResultBySerialField.BankAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPassWord\": \""
       <<aRspQueryTradeResultBySerialField.BankPassWord  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aRspQueryTradeResultBySerialField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aRspQueryTradeResultBySerialField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aRspQueryTradeResultBySerialField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeAmount\": \""
       <<aRspQueryTradeResultBySerialField.TradeAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aRspQueryTradeResultBySerialField.Digest  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcReqDayEndFileReadyField const& aReqDayEndFileReadyField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcReqDayEndFileReadyField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aReqDayEndFileReadyField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aReqDayEndFileReadyField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aReqDayEndFileReadyField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aReqDayEndFileReadyField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aReqDayEndFileReadyField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aReqDayEndFileReadyField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aReqDayEndFileReadyField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aReqDayEndFileReadyField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aReqDayEndFileReadyField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aReqDayEndFileReadyField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aReqDayEndFileReadyField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aReqDayEndFileReadyField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FileBusinessCode\": \""
       <<aReqDayEndFileReadyField.FileBusinessCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aReqDayEndFileReadyField.Digest  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcReturnResultField const& aReturnResultField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcReturnResultField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ReturnCode\": \""
       <<aReturnResultField.ReturnCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DescrInfoForReturnCode\": \""
       <<aReturnResultField.DescrInfoForReturnCode  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcVerifyFuturePasswordField const& aVerifyFuturePasswordField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcVerifyFuturePasswordField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aVerifyFuturePasswordField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aVerifyFuturePasswordField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aVerifyFuturePasswordField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aVerifyFuturePasswordField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aVerifyFuturePasswordField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aVerifyFuturePasswordField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aVerifyFuturePasswordField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aVerifyFuturePasswordField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aVerifyFuturePasswordField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aVerifyFuturePasswordField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aVerifyFuturePasswordField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aVerifyFuturePasswordField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aVerifyFuturePasswordField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aVerifyFuturePasswordField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccount\": \""
       <<aVerifyFuturePasswordField.BankAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPassWord\": \""
       <<aVerifyFuturePasswordField.BankPassWord  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aVerifyFuturePasswordField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aVerifyFuturePasswordField.TID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aVerifyFuturePasswordField.CurrencyID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcVerifyCustInfoField const& aVerifyCustInfoField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcVerifyCustInfoField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustomerName\": \""
       <<aVerifyCustInfoField.CustomerName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdCardType\": \""
       <<aVerifyCustInfoField.IdCardType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardNo\": \""
       <<aVerifyCustInfoField.IdentifiedCardNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustType\": \""
       <<aVerifyCustInfoField.CustType  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcVerifyFuturePasswordAndCustInfoField const& aVerifyFuturePasswordAndCustInfoField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcVerifyFuturePasswordAndCustInfoField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustomerName\": \""
       <<aVerifyFuturePasswordAndCustInfoField.CustomerName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdCardType\": \""
       <<aVerifyFuturePasswordAndCustInfoField.IdCardType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardNo\": \""
       <<aVerifyFuturePasswordAndCustInfoField.IdentifiedCardNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustType\": \""
       <<aVerifyFuturePasswordAndCustInfoField.CustType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aVerifyFuturePasswordAndCustInfoField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aVerifyFuturePasswordAndCustInfoField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aVerifyFuturePasswordAndCustInfoField.CurrencyID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcDepositResultInformField const& aDepositResultInformField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcDepositResultInformField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DepositSeqNo\": \""
       <<aDepositResultInformField.DepositSeqNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aDepositResultInformField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aDepositResultInformField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Deposit\": \""
       <<aDepositResultInformField.Deposit  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aDepositResultInformField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ReturnCode\": \""
       <<aDepositResultInformField.ReturnCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DescrInfoForReturnCode\": \""
       <<aDepositResultInformField.DescrInfoForReturnCode  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcReqSyncKeyField const& aReqSyncKeyField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcReqSyncKeyField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aReqSyncKeyField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aReqSyncKeyField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aReqSyncKeyField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aReqSyncKeyField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aReqSyncKeyField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aReqSyncKeyField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aReqSyncKeyField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aReqSyncKeyField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aReqSyncKeyField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aReqSyncKeyField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aReqSyncKeyField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aReqSyncKeyField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aReqSyncKeyField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aReqSyncKeyField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Message\": \""
       <<aReqSyncKeyField.Message  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeviceID\": \""
       <<aReqSyncKeyField.DeviceID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aReqSyncKeyField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperNo\": \""
       <<aReqSyncKeyField.OperNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aReqSyncKeyField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aReqSyncKeyField.TID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcRspSyncKeyField const& aRspSyncKeyField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcRspSyncKeyField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aRspSyncKeyField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aRspSyncKeyField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aRspSyncKeyField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aRspSyncKeyField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aRspSyncKeyField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aRspSyncKeyField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aRspSyncKeyField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aRspSyncKeyField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aRspSyncKeyField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aRspSyncKeyField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aRspSyncKeyField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aRspSyncKeyField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aRspSyncKeyField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aRspSyncKeyField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Message\": \""
       <<aRspSyncKeyField.Message  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeviceID\": \""
       <<aRspSyncKeyField.DeviceID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aRspSyncKeyField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperNo\": \""
       <<aRspSyncKeyField.OperNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aRspSyncKeyField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aRspSyncKeyField.TID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aRspSyncKeyField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aRspSyncKeyField.ErrorMsg  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcNotifyQueryAccountField const& aNotifyQueryAccountField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcNotifyQueryAccountField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aNotifyQueryAccountField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aNotifyQueryAccountField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aNotifyQueryAccountField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aNotifyQueryAccountField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aNotifyQueryAccountField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aNotifyQueryAccountField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aNotifyQueryAccountField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aNotifyQueryAccountField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aNotifyQueryAccountField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aNotifyQueryAccountField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aNotifyQueryAccountField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aNotifyQueryAccountField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustomerName\": \""
       <<aNotifyQueryAccountField.CustomerName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdCardType\": \""
       <<aNotifyQueryAccountField.IdCardType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardNo\": \""
       <<aNotifyQueryAccountField.IdentifiedCardNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustType\": \""
       <<aNotifyQueryAccountField.CustType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccount\": \""
       <<aNotifyQueryAccountField.BankAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPassWord\": \""
       <<aNotifyQueryAccountField.BankPassWord  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aNotifyQueryAccountField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aNotifyQueryAccountField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureSerial\": \""
       <<aNotifyQueryAccountField.FutureSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aNotifyQueryAccountField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aNotifyQueryAccountField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VerifyCertNoFlag\": \""
       <<aNotifyQueryAccountField.VerifyCertNoFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aNotifyQueryAccountField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aNotifyQueryAccountField.Digest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccType\": \""
       <<aNotifyQueryAccountField.BankAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeviceID\": \""
       <<aNotifyQueryAccountField.DeviceID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAccType\": \""
       <<aNotifyQueryAccountField.BankSecuAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aNotifyQueryAccountField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAcc\": \""
       <<aNotifyQueryAccountField.BankSecuAcc  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPwdFlag\": \""
       <<aNotifyQueryAccountField.BankPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SecuPwdFlag\": \""
       <<aNotifyQueryAccountField.SecuPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperNo\": \""
       <<aNotifyQueryAccountField.OperNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aNotifyQueryAccountField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aNotifyQueryAccountField.TID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankUseAmount\": \""
       <<aNotifyQueryAccountField.BankUseAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankFetchAmount\": \""
       <<aNotifyQueryAccountField.BankFetchAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aNotifyQueryAccountField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aNotifyQueryAccountField.ErrorMsg  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTransferSerialField const& aTransferSerialField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTransferSerialField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aTransferSerialField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aTransferSerialField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aTransferSerialField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aTransferSerialField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aTransferSerialField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aTransferSerialField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aTransferSerialField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aTransferSerialField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccType\": \""
       <<aTransferSerialField.BankAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccount\": \""
       <<aTransferSerialField.BankAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aTransferSerialField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aTransferSerialField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aTransferSerialField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureAccType\": \""
       <<aTransferSerialField.FutureAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aTransferSerialField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InvestorID\": \""
       <<aTransferSerialField.InvestorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"FutureSerial\": \""
       <<aTransferSerialField.FutureSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdCardType\": \""
       <<aTransferSerialField.IdCardType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardNo\": \""
       <<aTransferSerialField.IdentifiedCardNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aTransferSerialField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeAmount\": \""
       <<aTransferSerialField.TradeAmount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustFee\": \""
       <<aTransferSerialField.CustFee  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerFee\": \""
       <<aTransferSerialField.BrokerFee  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AvailabilityFlag\": \""
       <<aTransferSerialField.AvailabilityFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperatorCode\": \""
       <<aTransferSerialField.OperatorCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankNewAccount\": \""
       <<aTransferSerialField.BankNewAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aTransferSerialField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aTransferSerialField.ErrorMsg  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryTransferSerialField const& aQryTransferSerialField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryTransferSerialField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryTransferSerialField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aQryTransferSerialField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aQryTransferSerialField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aQryTransferSerialField.CurrencyID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcNotifyFutureSignInField const& aNotifyFutureSignInField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcNotifyFutureSignInField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aNotifyFutureSignInField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aNotifyFutureSignInField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aNotifyFutureSignInField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aNotifyFutureSignInField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aNotifyFutureSignInField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aNotifyFutureSignInField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aNotifyFutureSignInField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aNotifyFutureSignInField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aNotifyFutureSignInField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aNotifyFutureSignInField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aNotifyFutureSignInField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aNotifyFutureSignInField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aNotifyFutureSignInField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aNotifyFutureSignInField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aNotifyFutureSignInField.Digest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aNotifyFutureSignInField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeviceID\": \""
       <<aNotifyFutureSignInField.DeviceID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aNotifyFutureSignInField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperNo\": \""
       <<aNotifyFutureSignInField.OperNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aNotifyFutureSignInField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aNotifyFutureSignInField.TID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aNotifyFutureSignInField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aNotifyFutureSignInField.ErrorMsg  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PinKey\": \""
       <<aNotifyFutureSignInField.PinKey  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MacKey\": \""
       <<aNotifyFutureSignInField.MacKey  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcNotifyFutureSignOutField const& aNotifyFutureSignOutField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcNotifyFutureSignOutField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aNotifyFutureSignOutField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aNotifyFutureSignOutField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aNotifyFutureSignOutField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aNotifyFutureSignOutField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aNotifyFutureSignOutField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aNotifyFutureSignOutField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aNotifyFutureSignOutField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aNotifyFutureSignOutField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aNotifyFutureSignOutField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aNotifyFutureSignOutField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aNotifyFutureSignOutField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aNotifyFutureSignOutField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aNotifyFutureSignOutField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aNotifyFutureSignOutField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aNotifyFutureSignOutField.Digest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aNotifyFutureSignOutField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeviceID\": \""
       <<aNotifyFutureSignOutField.DeviceID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aNotifyFutureSignOutField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperNo\": \""
       <<aNotifyFutureSignOutField.OperNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aNotifyFutureSignOutField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aNotifyFutureSignOutField.TID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aNotifyFutureSignOutField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aNotifyFutureSignOutField.ErrorMsg  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcNotifySyncKeyField const& aNotifySyncKeyField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcNotifySyncKeyField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aNotifySyncKeyField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aNotifySyncKeyField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aNotifySyncKeyField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aNotifySyncKeyField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aNotifySyncKeyField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aNotifySyncKeyField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aNotifySyncKeyField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aNotifySyncKeyField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aNotifySyncKeyField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aNotifySyncKeyField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aNotifySyncKeyField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aNotifySyncKeyField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aNotifySyncKeyField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aNotifySyncKeyField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Message\": \""
       <<aNotifySyncKeyField.Message  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeviceID\": \""
       <<aNotifySyncKeyField.DeviceID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aNotifySyncKeyField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperNo\": \""
       <<aNotifySyncKeyField.OperNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RequestID\": \""
       <<aNotifySyncKeyField.RequestID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aNotifySyncKeyField.TID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aNotifySyncKeyField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aNotifySyncKeyField.ErrorMsg  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryAccountregisterField const& aQryAccountregisterField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryAccountregisterField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryAccountregisterField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aQryAccountregisterField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aQryAccountregisterField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aQryAccountregisterField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aQryAccountregisterField.CurrencyID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcAccountregisterField const& aAccountregisterField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcAccountregisterField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDay\": \""
       <<aAccountregisterField.TradeDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aAccountregisterField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aAccountregisterField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccount\": \""
       <<aAccountregisterField.BankAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aAccountregisterField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aAccountregisterField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aAccountregisterField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdCardType\": \""
       <<aAccountregisterField.IdCardType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardNo\": \""
       <<aAccountregisterField.IdentifiedCardNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustomerName\": \""
       <<aAccountregisterField.CustomerName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aAccountregisterField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OpenOrDestroy\": \""
       <<aAccountregisterField.OpenOrDestroy  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"RegDate\": \""
       <<aAccountregisterField.RegDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OutDate\": \""
       <<aAccountregisterField.OutDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aAccountregisterField.TID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustType\": \""
       <<aAccountregisterField.CustType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccType\": \""
       <<aAccountregisterField.BankAccType  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcOpenAccountField const& aOpenAccountField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcOpenAccountField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aOpenAccountField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aOpenAccountField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aOpenAccountField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aOpenAccountField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aOpenAccountField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aOpenAccountField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aOpenAccountField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aOpenAccountField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aOpenAccountField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aOpenAccountField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aOpenAccountField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aOpenAccountField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustomerName\": \""
       <<aOpenAccountField.CustomerName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdCardType\": \""
       <<aOpenAccountField.IdCardType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardNo\": \""
       <<aOpenAccountField.IdentifiedCardNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Gender\": \""
       <<aOpenAccountField.Gender  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CountryCode\": \""
       <<aOpenAccountField.CountryCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustType\": \""
       <<aOpenAccountField.CustType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Address\": \""
       <<aOpenAccountField.Address  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ZipCode\": \""
       <<aOpenAccountField.ZipCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Telephone\": \""
       <<aOpenAccountField.Telephone  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MobilePhone\": \""
       <<aOpenAccountField.MobilePhone  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Fax\": \""
       <<aOpenAccountField.Fax  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"EMail\": \""
       <<aOpenAccountField.EMail  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MoneyAccountStatus\": \""
       <<aOpenAccountField.MoneyAccountStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccount\": \""
       <<aOpenAccountField.BankAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPassWord\": \""
       <<aOpenAccountField.BankPassWord  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aOpenAccountField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aOpenAccountField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aOpenAccountField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VerifyCertNoFlag\": \""
       <<aOpenAccountField.VerifyCertNoFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aOpenAccountField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CashExchangeCode\": \""
       <<aOpenAccountField.CashExchangeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aOpenAccountField.Digest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccType\": \""
       <<aOpenAccountField.BankAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeviceID\": \""
       <<aOpenAccountField.DeviceID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAccType\": \""
       <<aOpenAccountField.BankSecuAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aOpenAccountField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAcc\": \""
       <<aOpenAccountField.BankSecuAcc  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPwdFlag\": \""
       <<aOpenAccountField.BankPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SecuPwdFlag\": \""
       <<aOpenAccountField.SecuPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperNo\": \""
       <<aOpenAccountField.OperNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aOpenAccountField.TID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aOpenAccountField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aOpenAccountField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aOpenAccountField.ErrorMsg  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcCancelAccountField const& aCancelAccountField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcCancelAccountField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aCancelAccountField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aCancelAccountField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aCancelAccountField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aCancelAccountField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aCancelAccountField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aCancelAccountField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aCancelAccountField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aCancelAccountField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aCancelAccountField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aCancelAccountField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aCancelAccountField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aCancelAccountField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustomerName\": \""
       <<aCancelAccountField.CustomerName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdCardType\": \""
       <<aCancelAccountField.IdCardType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardNo\": \""
       <<aCancelAccountField.IdentifiedCardNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Gender\": \""
       <<aCancelAccountField.Gender  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CountryCode\": \""
       <<aCancelAccountField.CountryCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustType\": \""
       <<aCancelAccountField.CustType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Address\": \""
       <<aCancelAccountField.Address  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ZipCode\": \""
       <<aCancelAccountField.ZipCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Telephone\": \""
       <<aCancelAccountField.Telephone  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MobilePhone\": \""
       <<aCancelAccountField.MobilePhone  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Fax\": \""
       <<aCancelAccountField.Fax  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"EMail\": \""
       <<aCancelAccountField.EMail  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MoneyAccountStatus\": \""
       <<aCancelAccountField.MoneyAccountStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccount\": \""
       <<aCancelAccountField.BankAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPassWord\": \""
       <<aCancelAccountField.BankPassWord  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aCancelAccountField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aCancelAccountField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aCancelAccountField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VerifyCertNoFlag\": \""
       <<aCancelAccountField.VerifyCertNoFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aCancelAccountField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CashExchangeCode\": \""
       <<aCancelAccountField.CashExchangeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aCancelAccountField.Digest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccType\": \""
       <<aCancelAccountField.BankAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DeviceID\": \""
       <<aCancelAccountField.DeviceID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAccType\": \""
       <<aCancelAccountField.BankSecuAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aCancelAccountField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSecuAcc\": \""
       <<aCancelAccountField.BankSecuAcc  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPwdFlag\": \""
       <<aCancelAccountField.BankPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SecuPwdFlag\": \""
       <<aCancelAccountField.SecuPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OperNo\": \""
       <<aCancelAccountField.OperNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aCancelAccountField.TID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aCancelAccountField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aCancelAccountField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aCancelAccountField.ErrorMsg  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcChangeAccountField const& aChangeAccountField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcChangeAccountField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeCode\": \""
       <<aChangeAccountField.TradeCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankID\": \""
       <<aChangeAccountField.BankID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankBranchID\": \""
       <<aChangeAccountField.BankBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aChangeAccountField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerBranchID\": \""
       <<aChangeAccountField.BrokerBranchID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeDate\": \""
       <<aChangeAccountField.TradeDate  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradeTime\": \""
       <<aChangeAccountField.TradeTime  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankSerial\": \""
       <<aChangeAccountField.BankSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TradingDay\": \""
       <<aChangeAccountField.TradingDay  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"PlateSerial\": \""
       <<aChangeAccountField.PlateSerial  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LastFragment\": \""
       <<aChangeAccountField.LastFragment  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SessionID\": \""
       <<aChangeAccountField.SessionID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustomerName\": \""
       <<aChangeAccountField.CustomerName  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdCardType\": \""
       <<aChangeAccountField.IdCardType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentifiedCardNo\": \""
       <<aChangeAccountField.IdentifiedCardNo  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Gender\": \""
       <<aChangeAccountField.Gender  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CountryCode\": \""
       <<aChangeAccountField.CountryCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CustType\": \""
       <<aChangeAccountField.CustType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Address\": \""
       <<aChangeAccountField.Address  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ZipCode\": \""
       <<aChangeAccountField.ZipCode  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Telephone\": \""
       <<aChangeAccountField.Telephone  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MobilePhone\": \""
       <<aChangeAccountField.MobilePhone  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Fax\": \""
       <<aChangeAccountField.Fax  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"EMail\": \""
       <<aChangeAccountField.EMail  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"MoneyAccountStatus\": \""
       <<aChangeAccountField.MoneyAccountStatus  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccount\": \""
       <<aChangeAccountField.BankAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPassWord\": \""
       <<aChangeAccountField.BankPassWord  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"NewBankAccount\": \""
       <<aChangeAccountField.NewBankAccount  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"NewBankPassWord\": \""
       <<aChangeAccountField.NewBankPassWord  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aChangeAccountField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Password\": \""
       <<aChangeAccountField.Password  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankAccType\": \""
       <<aChangeAccountField.BankAccType  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"InstallID\": \""
       <<aChangeAccountField.InstallID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"VerifyCertNoFlag\": \""
       <<aChangeAccountField.VerifyCertNoFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aChangeAccountField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerIDByBank\": \""
       <<aChangeAccountField.BrokerIDByBank  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BankPwdFlag\": \""
       <<aChangeAccountField.BankPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SecuPwdFlag\": \""
       <<aChangeAccountField.SecuPwdFlag  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"TID\": \""
       <<aChangeAccountField.TID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Digest\": \""
       <<aChangeAccountField.Digest  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorID\": \""
       <<aChangeAccountField.ErrorID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"ErrorMsg\": \""
       <<aChangeAccountField.ErrorMsg  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcSecAgentACIDMapField const& aSecAgentACIDMapField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcSecAgentACIDMapField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aSecAgentACIDMapField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aSecAgentACIDMapField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aSecAgentACIDMapField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aSecAgentACIDMapField.CurrencyID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerSecAgentID\": \""
       <<aSecAgentACIDMapField.BrokerSecAgentID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQrySecAgentACIDMapField const& aQrySecAgentACIDMapField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQrySecAgentACIDMapField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQrySecAgentACIDMapField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aQrySecAgentACIDMapField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aQrySecAgentACIDMapField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aQrySecAgentACIDMapField.CurrencyID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcUserRightsAssignField const& aUserRightsAssignField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcUserRightsAssignField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aUserRightsAssignField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aUserRightsAssignField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DRIdentityID\": \""
       <<aUserRightsAssignField.DRIdentityID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcBrokerUserRightAssignField const& aBrokerUserRightAssignField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcBrokerUserRightAssignField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aBrokerUserRightAssignField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DRIdentityID\": \""
       <<aBrokerUserRightAssignField.DRIdentityID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Tradeable\": \""
       <<aBrokerUserRightAssignField.Tradeable  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcDRTransferField const& aDRTransferField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcDRTransferField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrigDRIdentityID\": \""
       <<aDRTransferField.OrigDRIdentityID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DestDRIdentityID\": \""
       <<aDRTransferField.DestDRIdentityID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"OrigBrokerID\": \""
       <<aDRTransferField.OrigBrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"DestBrokerID\": \""
       <<aDRTransferField.DestBrokerID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcFensUserInfoField const& aFensUserInfoField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcFensUserInfoField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aFensUserInfoField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aFensUserInfoField.UserID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"LoginMode\": \""
       <<aFensUserInfoField.LoginMode  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcCurrTransferIdentityField const& aCurrTransferIdentityField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcCurrTransferIdentityField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"IdentityID\": \""
       <<aCurrTransferIdentityField.IdentityID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcLoginForbiddenUserField const& aLoginForbiddenUserField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcLoginForbiddenUserField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aLoginForbiddenUserField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aLoginForbiddenUserField.UserID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcQryLoginForbiddenUserField const& aQryLoginForbiddenUserField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcQryLoginForbiddenUserField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aQryLoginForbiddenUserField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"UserID\": \""
       <<aQryLoginForbiddenUserField.UserID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcMulticastGroupInfoField const& aMulticastGroupInfoField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcMulticastGroupInfoField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"GroupIP\": \""
       <<aMulticastGroupInfoField.GroupIP  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"GroupPort\": \""
       <<aMulticastGroupInfoField.GroupPort  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"SourceIP\": \""
       <<aMulticastGroupInfoField.SourceIP  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(
    std::basic_ostream< CharT, TraitsT >& os,  // NOLINT(runtime/references)
    CThostFtdcTradingAccountReserveField const& aTradingAccountReserveField) {  // NOLINT(whitespace/line_length)
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CThostFtdcTradingAccountReserveField\": {" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"BrokerID\": \""
       <<aTradingAccountReserveField.BrokerID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"AccountID\": \""
       <<aTradingAccountReserveField.AccountID  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"Reserve\": \""
       <<aTradingAccountReserveField.Reserve  <<"\"," <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"        \"CurrencyID\": \""
       <<aTradingAccountReserveField.CurrencyID  <<"\"" <<std::endl;  // NOLINT(whitespace/line_length)
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

#endif  // FTDC_USERAPI_STRUCT_PRINT_HH_
