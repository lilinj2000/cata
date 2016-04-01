#!/usr/bin/python

import re

ids = set([])

def processLine(line, msg_type):
    words = re.split('\W+', line)

    IDX_FUNC_NAME = 3
    IDX_FIELD_NAME = 4
    IDX_FIELD = 5

    func_name = words[IDX_FUNC_NAME]
    field_name = words[IDX_FIELD_NAME]
    field = words[IDX_FIELD]
    is_rsp_error = False
    if field_name == "CThostFtdcRspInfoField":
        is_rsp_error = True

    is_rsp_userlogin = False
    if func_name == "OnRspUserLogin":
        is_rsp_userlogin = True

    spi_hh_file.write('  virtual void %s(\n' % func_name)
    if msg_type == "rsp":
        if not is_rsp_error:
            spi_hh_file.write('      %s *%s,  // NOLINT(whitespace/line_length)\n' % (field_name, field))
        spi_hh_file.write('      CThostFtdcRspInfoField *pRspInfo,\n')
        spi_hh_file.write('      int nRequestID, bool bIsLast);\n\n')
    elif msg_type == "rtn":
        spi_hh_file.write('      %s *%s);\n\n' % (field_name, field))
    elif msg_type == "err_rtn":
        spi_hh_file.write('      %s *%s,\n' % (field_name, field))
        spi_hh_file.write('      CThostFtdcRspInfoField *pRspInfo);\n\n')

    message_name = func_name.replace('On', '') + "Message"
    spi_cc_file.write('void TraderSpiImpl::%s(\n' % func_name)
    if msg_type == "rsp":
        if not is_rsp_error:
            spi_cc_file.write('      %s *%s,  // NOLINT(whitespace/line_length)\n' % (field_name, field))
        spi_cc_file.write('      CThostFtdcRspInfoField *pRspInfo,\n')
        spi_cc_file.write('      int nRequestID, bool bIsLast) {\n')
    elif msg_type == "rtn":
        spi_cc_file.write('      %s *%s) {\n' % (field_name, field))
    elif msg_type == "err_rtn":
        spi_cc_file.write('      %s *%s,\n' % (field_name, field))
        spi_cc_file.write('      CThostFtdcRspInfoField *pRspInfo) {\n')

    spi_cc_file.write('  TRADER_TRACE <<"TraderSpiImpl::%s()";\n\n' % func_name)
    if is_rsp_userlogin:
        spi_cc_file.write('  std::unique_ptr<RspUserLoginMessage> rsp_message(\n')
        spi_cc_file.write('    new RspUserLoginMessage(pRspUserLogin,\n')
        spi_cc_file.write('                            pRspInfo,\n')
        spi_cc_file.write('                            nRequestID, bIsLast));\n\n')
        spi_cc_file.write('  service_->rspLogin(rsp_message.get());\n')
        spi_cc_file.write('  service_->pushData(rsp_message.release());\n')
    elif msg_type == "rsp":
        spi_cc_file.write('  pushMsg<%s>(\n' % message_name)
        if not is_rsp_error:
            spi_cc_file.write('                 %s,\n' % field)
        spi_cc_file.write('                 pRspInfo, nRequestID, bIsLast);\n')
    elif msg_type == "rtn":
        spi_cc_file.write('  pushMsg<%s>(%s);\n' % (message_name, field))
    elif msg_type == "err_rtn":
        spi_cc_file.write('  pushMsg<%s>(%s, pRspInfo);\n' % (message_name, field))
    spi_cc_file.write('}\n\n')

    return

onrsp_pattern = re.compile(r'''OnRsp''')

onrtn_pattern = re.compile(r'''OnRtn''')

onerr_rtn_pattern = re.compile(r'''OnErrRtn''')

file_list = ["ThostFtdcTraderApi.h"]

spi_hh_file = open("spi_hh.data", "wb")
spi_cc_file = open("spi_cc.data", "wb")

for file_name in file_list:
    with open(file_name) as file:
        for line in file:
            # print line
            if onrsp_pattern.search(line):
                processLine(line, "rsp")
                continue

            if onrtn_pattern.search(line):
                processLine(line, "rtn")
                continue

            if onerr_rtn_pattern.search(line):
                processLine(line, "err_rtn")
                continue

spi_hh_file.close()
spi_cc_file.close()

# TraderSpiImpl.hh process
with open("TraderSpiImpl.hh.temp") as spi_hh_file:
    spi_hh = spi_hh_file.read()

with open("spi_hh.data") as spi_hh_file:
    spi_hh_func = spi_hh_file.read()

spi_hh = spi_hh.replace('[TRADER_SPI_FUNCTION]', spi_hh_func)

with open("TraderSpiImpl.hh", "wb") as spi_hh_file:
    spi_hh_file.write(spi_hh)

# TraderSpiImpl.cc process
with open("TraderSpiImpl.cc.temp") as spi_cc_file:
    spi_cc = spi_cc_file.read()

with open("spi_cc.data") as spi_cc_file:
    spi_cc_func = spi_cc_file.read()

spi_cc = spi_cc.replace('[TRADER_SPI_FUNCTION]', spi_cc_func)

with open("TraderSpiImpl.cc", "wb") as spi_cc_file:
    spi_cc_file.write(spi_cc)
