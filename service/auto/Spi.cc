void MDSpiImpl::OnFrontConnected() {
	SOIL_FUNC_TRACE;
}

void MDSpiImpl::OnFrontDisconnected(
	int nReason) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(nReason);
}

void MDSpiImpl::OnHeartBeatWarning(
	int nTimeLapse) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(nTimeLapse);
}

void MDSpiImpl::OnRspAuthenticate(
	CThostFtdcRspAuthenticateField *pRspAuthenticateField,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspAuthenticate,
		pRspAuthenticateField,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspUserLogin(
	CThostFtdcRspUserLoginField *pRspUserLogin,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_IF_PRINT(pRspUserLogin);
	SOIL_DEBUG_IF_PRINT(pRspInfo);
	SOIL_DEBUG_PRINT(nRequestID);
	SOIL_DEBUG_PRINT(bIsLast);
}

void MDSpiImpl::OnRspUserLogout(
	CThostFtdcUserLogoutField *pUserLogout,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_IF_PRINT(pUserLogout);
	SOIL_DEBUG_IF_PRINT(pRspInfo);
	SOIL_DEBUG_PRINT(nRequestID);
	SOIL_DEBUG_PRINT(bIsLast);
}

void MDSpiImpl::OnRspUserPasswordUpdate(
	CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspUserPasswordUpdate,
		pUserPasswordUpdate,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspTradingAccountPasswordUpdate(
	CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspTradingAccountPasswordUpdate,
		pTradingAccountPasswordUpdate,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspUserAuthMethod(
	CThostFtdcRspUserAuthMethodField *pRspUserAuthMethod,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspUserAuthMethod,
		pRspUserAuthMethod,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspGenUserCaptcha(
	CThostFtdcRspGenUserCaptchaField *pRspGenUserCaptcha,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspGenUserCaptcha,
		pRspGenUserCaptcha,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspGenUserText(
	CThostFtdcRspGenUserTextField *pRspGenUserText,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspGenUserText,
		pRspGenUserText,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspOrderInsert(
	CThostFtdcInputOrderField *pInputOrder,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspOrderInsert,
		pInputOrder,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspParkedOrderInsert(
	CThostFtdcParkedOrderField *pParkedOrder,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspParkedOrderInsert,
		pParkedOrder,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspParkedOrderAction(
	CThostFtdcParkedOrderActionField *pParkedOrderAction,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspParkedOrderAction,
		pParkedOrderAction,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspOrderAction(
	CThostFtdcInputOrderActionField *pInputOrderAction,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspOrderAction,
		pInputOrderAction,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQueryMaxOrderVolume(
	CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQueryMaxOrderVolume,
		pQueryMaxOrderVolume,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspSettlementInfoConfirm(
	CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspSettlementInfoConfirm,
		pSettlementInfoConfirm,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspRemoveParkedOrder(
	CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspRemoveParkedOrder,
		pRemoveParkedOrder,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspRemoveParkedOrderAction(
	CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspRemoveParkedOrderAction,
		pRemoveParkedOrderAction,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspExecOrderInsert(
	CThostFtdcInputExecOrderField *pInputExecOrder,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspExecOrderInsert,
		pInputExecOrder,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspExecOrderAction(
	CThostFtdcInputExecOrderActionField *pInputExecOrderAction,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspExecOrderAction,
		pInputExecOrderAction,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspForQuoteInsert(
	CThostFtdcInputForQuoteField *pInputForQuote,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspForQuoteInsert,
		pInputForQuote,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQuoteInsert(
	CThostFtdcInputQuoteField *pInputQuote,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQuoteInsert,
		pInputQuote,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQuoteAction(
	CThostFtdcInputQuoteActionField *pInputQuoteAction,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQuoteAction,
		pInputQuoteAction,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspBatchOrderAction(
	CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspBatchOrderAction,
		pInputBatchOrderAction,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspOptionSelfCloseInsert(
	CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspOptionSelfCloseInsert,
		pInputOptionSelfClose,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspOptionSelfCloseAction(
	CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspOptionSelfCloseAction,
		pInputOptionSelfCloseAction,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspCombActionInsert(
	CThostFtdcInputCombActionField *pInputCombAction,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspCombActionInsert,
		pInputCombAction,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryOrder(
	CThostFtdcOrderField *pOrder,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryOrder,
		pOrder,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryTrade(
	CThostFtdcTradeField *pTrade,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryTrade,
		pTrade,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryInvestorPosition(
	CThostFtdcInvestorPositionField *pInvestorPosition,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryInvestorPosition,
		pInvestorPosition,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryTradingAccount(
	CThostFtdcTradingAccountField *pTradingAccount,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryTradingAccount,
		pTradingAccount,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryInvestor(
	CThostFtdcInvestorField *pInvestor,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryInvestor,
		pInvestor,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryTradingCode(
	CThostFtdcTradingCodeField *pTradingCode,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryTradingCode,
		pTradingCode,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryInstrumentMarginRate(
	CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryInstrumentMarginRate,
		pInstrumentMarginRate,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryInstrumentCommissionRate(
	CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryInstrumentCommissionRate,
		pInstrumentCommissionRate,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryExchange(
	CThostFtdcExchangeField *pExchange,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryExchange,
		pExchange,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryProduct(
	CThostFtdcProductField *pProduct,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryProduct,
		pProduct,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryInstrument(
	CThostFtdcInstrumentField *pInstrument,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryInstrument,
		pInstrument,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryDepthMarketData(
	CThostFtdcDepthMarketDataField *pDepthMarketData,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryDepthMarketData,
		pDepthMarketData,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQrySettlementInfo(
	CThostFtdcSettlementInfoField *pSettlementInfo,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQrySettlementInfo,
		pSettlementInfo,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryTransferBank(
	CThostFtdcTransferBankField *pTransferBank,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryTransferBank,
		pTransferBank,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryInvestorPositionDetail(
	CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryInvestorPositionDetail,
		pInvestorPositionDetail,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryNotice(
	CThostFtdcNoticeField *pNotice,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryNotice,
		pNotice,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQrySettlementInfoConfirm(
	CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQrySettlementInfoConfirm,
		pSettlementInfoConfirm,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryInvestorPositionCombineDetail(
	CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryInvestorPositionCombineDetail,
		pInvestorPositionCombineDetail,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryCFMMCTradingAccountKey(
	CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryCFMMCTradingAccountKey,
		pCFMMCTradingAccountKey,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryEWarrantOffset(
	CThostFtdcEWarrantOffsetField *pEWarrantOffset,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryEWarrantOffset,
		pEWarrantOffset,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryInvestorProductGroupMargin(
	CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryInvestorProductGroupMargin,
		pInvestorProductGroupMargin,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryExchangeMarginRate(
	CThostFtdcExchangeMarginRateField *pExchangeMarginRate,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryExchangeMarginRate,
		pExchangeMarginRate,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryExchangeMarginRateAdjust(
	CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryExchangeMarginRateAdjust,
		pExchangeMarginRateAdjust,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryExchangeRate(
	CThostFtdcExchangeRateField *pExchangeRate,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryExchangeRate,
		pExchangeRate,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQrySecAgentACIDMap(
	CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQrySecAgentACIDMap,
		pSecAgentACIDMap,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryProductExchRate(
	CThostFtdcProductExchRateField *pProductExchRate,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryProductExchRate,
		pProductExchRate,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryProductGroup(
	CThostFtdcProductGroupField *pProductGroup,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryProductGroup,
		pProductGroup,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryMMInstrumentCommissionRate(
	CThostFtdcMMInstrumentCommissionRateField *pMMInstrumentCommissionRate,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryMMInstrumentCommissionRate,
		pMMInstrumentCommissionRate,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryMMOptionInstrCommRate(
	CThostFtdcMMOptionInstrCommRateField *pMMOptionInstrCommRate,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryMMOptionInstrCommRate,
		pMMOptionInstrCommRate,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryInstrumentOrderCommRate(
	CThostFtdcInstrumentOrderCommRateField *pInstrumentOrderCommRate,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryInstrumentOrderCommRate,
		pInstrumentOrderCommRate,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQrySecAgentTradingAccount(
	CThostFtdcTradingAccountField *pTradingAccount,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQrySecAgentTradingAccount,
		pTradingAccount,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQrySecAgentCheckMode(
	CThostFtdcSecAgentCheckModeField *pSecAgentCheckMode,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQrySecAgentCheckMode,
		pSecAgentCheckMode,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQrySecAgentTradeInfo(
	CThostFtdcSecAgentTradeInfoField *pSecAgentTradeInfo,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQrySecAgentTradeInfo,
		pSecAgentTradeInfo,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryOptionInstrTradeCost(
	CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryOptionInstrTradeCost,
		pOptionInstrTradeCost,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryOptionInstrCommRate(
	CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryOptionInstrCommRate,
		pOptionInstrCommRate,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryExecOrder(
	CThostFtdcExecOrderField *pExecOrder,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryExecOrder,
		pExecOrder,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryForQuote(
	CThostFtdcForQuoteField *pForQuote,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryForQuote,
		pForQuote,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryQuote(
	CThostFtdcQuoteField *pQuote,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryQuote,
		pQuote,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryOptionSelfClose(
	CThostFtdcOptionSelfCloseField *pOptionSelfClose,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryOptionSelfClose,
		pOptionSelfClose,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryInvestUnit(
	CThostFtdcInvestUnitField *pInvestUnit,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryInvestUnit,
		pInvestUnit,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryCombInstrumentGuard(
	CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryCombInstrumentGuard,
		pCombInstrumentGuard,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryCombAction(
	CThostFtdcCombActionField *pCombAction,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryCombAction,
		pCombAction,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryTransferSerial(
	CThostFtdcTransferSerialField *pTransferSerial,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryTransferSerial,
		pTransferSerial,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryAccountregister(
	CThostFtdcAccountregisterField *pAccountregister,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryAccountregister,
		pAccountregister,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspError(
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_ERROR_CALLBACK(
		onRspError,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRtnOrder(
	CThostFtdcOrderField *pOrder) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnOrder,
		pOrder);
}

void MDSpiImpl::OnRtnTrade(
	CThostFtdcTradeField *pTrade) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnTrade,
		pTrade);
}

void MDSpiImpl::OnRtnInstrumentStatus(
	CThostFtdcInstrumentStatusField *pInstrumentStatus) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnInstrumentStatus,
		pInstrumentStatus);
}

void MDSpiImpl::OnRtnBulletin(
	CThostFtdcBulletinField *pBulletin) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnBulletin,
		pBulletin);
}

void MDSpiImpl::OnRtnTradingNotice(
	CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnTradingNotice,
		pTradingNoticeInfo);
}

void MDSpiImpl::OnRtnErrorConditionalOrder(
	CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnErrorConditionalOrder,
		pErrorConditionalOrder);
}

void MDSpiImpl::OnRtnExecOrder(
	CThostFtdcExecOrderField *pExecOrder) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnExecOrder,
		pExecOrder);
}

void MDSpiImpl::OnRtnQuote(
	CThostFtdcQuoteField *pQuote) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnQuote,
		pQuote);
}

void MDSpiImpl::OnRtnForQuoteRsp(
	CThostFtdcForQuoteRspField *pForQuoteRsp) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnForQuoteRsp,
		pForQuoteRsp);
}

void MDSpiImpl::OnRtnCFMMCTradingAccountToken(
	CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnCFMMCTradingAccountToken,
		pCFMMCTradingAccountToken);
}

void MDSpiImpl::OnRtnOptionSelfClose(
	CThostFtdcOptionSelfCloseField *pOptionSelfClose) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnOptionSelfClose,
		pOptionSelfClose);
}

void MDSpiImpl::OnRtnCombAction(
	CThostFtdcCombActionField *pCombAction) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnCombAction,
		pCombAction);
}

void MDSpiImpl::OnRspQryContractBank(
	CThostFtdcContractBankField *pContractBank,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryContractBank,
		pContractBank,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryParkedOrder(
	CThostFtdcParkedOrderField *pParkedOrder,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryParkedOrder,
		pParkedOrder,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryParkedOrderAction(
	CThostFtdcParkedOrderActionField *pParkedOrderAction,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryParkedOrderAction,
		pParkedOrderAction,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryTradingNotice(
	CThostFtdcTradingNoticeField *pTradingNotice,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryTradingNotice,
		pTradingNotice,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryBrokerTradingParams(
	CThostFtdcBrokerTradingParamsField *pBrokerTradingParams,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryBrokerTradingParams,
		pBrokerTradingParams,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQryBrokerTradingAlgos(
	CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQryBrokerTradingAlgos,
		pBrokerTradingAlgos,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQueryCFMMCTradingAccountToken(
	CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQueryCFMMCTradingAccountToken,
		pQueryCFMMCTradingAccountToken,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRtnFromBankToFutureByBank(
	CThostFtdcRspTransferField *pRspTransfer) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnFromBankToFutureByBank,
		pRspTransfer);
}

void MDSpiImpl::OnRtnFromFutureToBankByBank(
	CThostFtdcRspTransferField *pRspTransfer) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnFromFutureToBankByBank,
		pRspTransfer);
}

void MDSpiImpl::OnRtnRepealFromBankToFutureByBank(
	CThostFtdcRspRepealField *pRspRepeal) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnRepealFromBankToFutureByBank,
		pRspRepeal);
}

void MDSpiImpl::OnRtnRepealFromFutureToBankByBank(
	CThostFtdcRspRepealField *pRspRepeal) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnRepealFromFutureToBankByBank,
		pRspRepeal);
}

void MDSpiImpl::OnRtnFromBankToFutureByFuture(
	CThostFtdcRspTransferField *pRspTransfer) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnFromBankToFutureByFuture,
		pRspTransfer);
}

void MDSpiImpl::OnRtnFromFutureToBankByFuture(
	CThostFtdcRspTransferField *pRspTransfer) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnFromFutureToBankByFuture,
		pRspTransfer);
}

void MDSpiImpl::OnRtnRepealFromBankToFutureByFutureManual(
	CThostFtdcRspRepealField *pRspRepeal) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnRepealFromBankToFutureByFutureManual,
		pRspRepeal);
}

void MDSpiImpl::OnRtnRepealFromFutureToBankByFutureManual(
	CThostFtdcRspRepealField *pRspRepeal) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnRepealFromFutureToBankByFutureManual,
		pRspRepeal);
}

void MDSpiImpl::OnRtnQueryBankBalanceByFuture(
	CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnQueryBankBalanceByFuture,
		pNotifyQueryAccount);
}

void MDSpiImpl::OnRtnRepealFromBankToFutureByFuture(
	CThostFtdcRspRepealField *pRspRepeal) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnRepealFromBankToFutureByFuture,
		pRspRepeal);
}

void MDSpiImpl::OnRtnRepealFromFutureToBankByFuture(
	CThostFtdcRspRepealField *pRspRepeal) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnRepealFromFutureToBankByFuture,
		pRspRepeal);
}

void MDSpiImpl::OnRspFromBankToFutureByFuture(
	CThostFtdcReqTransferField *pReqTransfer,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspFromBankToFutureByFuture,
		pReqTransfer,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspFromFutureToBankByFuture(
	CThostFtdcReqTransferField *pReqTransfer,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspFromFutureToBankByFuture,
		pReqTransfer,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRspQueryBankAccountMoneyByFuture(
	CThostFtdcReqQueryAccountField *pReqQueryAccount,
	CThostFtdcRspInfoField *pRspInfo,
	int nRequestID,
	bool bIsLast) {
	SOIL_FUNC_TRACE;

	CATA_ON_RSP_CALLBACK(
		onRspQueryBankAccountMoneyByFuture,
		pReqQueryAccount,
		pRspInfo,
		nRequestID,
		bIsLast);
}

void MDSpiImpl::OnRtnOpenAccountByBank(
	CThostFtdcOpenAccountField *pOpenAccount) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnOpenAccountByBank,
		pOpenAccount);
}

void MDSpiImpl::OnRtnCancelAccountByBank(
	CThostFtdcCancelAccountField *pCancelAccount) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnCancelAccountByBank,
		pCancelAccount);
}

void MDSpiImpl::OnRtnChangeAccountByBank(
	CThostFtdcChangeAccountField *pChangeAccount) {
	SOIL_FUNC_TRACE;

	CATA_ON_RTN_CALLBACK(
		onRtnChangeAccountByBank,
		pChangeAccount);
}

