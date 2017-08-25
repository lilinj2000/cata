#!/usr/bin/python

import re

ids = set([])

def processLine(line, msg_type):
    if msg_type == "rsp":
        id_file = rsp_id_file
        to_file = rsp_file
    elif msg_type == "rtn" or msg_type == "err_rtn":
        id_file = rtn_id_file
        to_file = rtn_file
    elif msg_type == "req":
        id_file = req_id_file
        to_file = req_file
    elif msg_type == "req_qry":
        id_file = req_qry_id_file
        to_file = req_file
        msg_type = "req"        # reset the type to "req"

    words = re.split('\W+', line)

    IDX_FUNC_NAME = 3

    # message id handle
    # print words[IDX_FUNC_NAME:]
    func_name = words[IDX_FUNC_NAME]
    message_name = func_name.replace('On', '') + "Message"
    message_id = '_'.join(filter(None, re.split(r'([A-Z][a-z]*)', message_name))).upper()

    if message_id in ids:
        return
    
    ids.add(message_id)
    id_file.write('  %s,\n' % message_id)

    # rsp message handle
    # print message_name
    IDX_FIELD_NAME = 4
    IDX_FIELD = 5
    field_name = words[IDX_FIELD_NAME]
    field = words[IDX_FIELD]
    # print rsp_field_name
    # print rsp_field
    local_field = field[1:].lower() + "_"
    is_rsp_error = False
    if field_name == "CThostFtdcRspInfoField":
        is_rsp_error = True
    # print local_field
    if msg_type == "rsp":
        to_file.write('class %s : public RspMessage {\n' % message_name)
        to_file.write(' public:\n')
        to_file.write('  %s(\n' % message_name)
        if not is_rsp_error:
            to_file.write('     %s*\n' % field_name)
            to_file.write('        %s,\n' % field)
        to_file.write('  CThostFtdcRspInfoField* pRspInfo,\n')
        to_file.write('  int nRequestID, bool bIsLast):\n')
        to_file.write('      RspMessage(%s,\n' % message_id)
        to_file.write('                 "%s",\n' % func_name)
        to_file.write('                 pRspInfo, nRequestID, bIsLast) {\n')
    elif msg_type == "rtn":
        to_file.write('class %s : public Message {\n' % message_name);
        to_file.write(' public:\n')
        to_file.write('  explicit %s(\n' % message_name)
        to_file.write('     %s* %s):\n' % (field_name, field))
        to_file.write('      Message(%s,\n' % message_id)
        to_file.write('              "%s") {\n' % func_name)
    elif msg_type == "err_rtn":
        to_file.write('class %s : public Message {\n' % message_name);
        to_file.write(' public:\n')
        to_file.write('  %s(\n' % message_name)
        to_file.write('     %s* %s,\n' % (field_name, field))
        to_file.write('  CThostFtdcRspInfoField* pRspInfo):\n')
        to_file.write('      Message(%s,\n' % message_id)
        to_file.write('              "%s") {\n' % func_name)
        to_file.write('    if (pRspInfo) {\n')
        to_file.write('      rspinfo_.reset(new CThostFtdcRspInfoField());\n')
        to_file.write('      std::memcpy(rspinfo_.get(), pRspInfo,\n')
        to_file.write('                  sizeof(CThostFtdcRspInfoField));\n')
        to_file.write('    }\n\n')
    elif msg_type == "req":
        to_file.write('class %s : public Message {\n' % message_name);
        to_file.write(' public:\n')
        to_file.write('  %s(\n' % message_name)
        to_file.write('     %s*\n' % field_name)
        to_file.write('     %s,\n' % field)
        to_file.write('  int nRequestID):\n')
        to_file.write('      Message(%s,\n' % message_id)
        to_file.write('              "%s"),\n' % func_name)
        to_file.write('      request_id_(nRequestID) {\n')

    if not is_rsp_error:
        to_file.write('    if (%s) {\n' % field)
        to_file.write('      %s.reset(\n' % local_field)
        to_file.write('               new %s());\n' % field_name)
        to_file.write('      std::memcpy(%s.get(),\n' % local_field)
        to_file.write('                  %s,\n' % field)
        to_file.write('                  sizeof(%s));\n' % field_name)
        to_file.write('    }\n')
    to_file.write('  }\n\n')

    to_file.write('  virtual ~%s() {\n' % message_name)
    to_file.write('  }\n\n')

    to_file.write('  virtual std::string toString() const {\n')
    to_file.write('    json::Document doc;\n')
    to_file.write('    toJSON(&doc);\n')
    to_file.write('    return json::toString(doc);\n')
    to_file.write('  }\n\n')

    to_file.write('  virtual void toJSON(json::Document* doc) const {\n')
    to_file.write('    assert(doc);\n')

    to_file.write('    json::Document msg_doc;\n')
    if not is_rsp_error:
        to_file.write('    if (%s.get()) {\n' % local_field)
        to_file.write('      std::stringstream ss;\n')
        to_file.write('      ss <<(*%s);\n' % local_field)
        to_file.write('      json::Document d;\n')
        to_file.write('      json::fromString(ss.str(), &d);\n')
        to_file.write('      json::appendDoc(&msg_doc, d);\n')
        to_file.write('    }\n\n')

    if msg_type == "rsp":
        to_file.write('    RspMessage::toJSON(&msg_doc);\n')
    else:
        to_file.write('    Message::toJSON(&msg_doc);\n')

    to_file.write('    json::addMember<const json::Document&>(doc, name(), msg_doc);\n')
    to_file.write('  }\n\n')
    

    if msg_type == "err_rtn":
        to_file.write('  CThostFtdcRspInfoField* rspInfo() const {\n')
        to_file.write('    return rspinfo_.get();\n')
        to_file.write('  }\n\n')
    elif msg_type == "req":
        to_file.write('  int requestID() const {\n')
        to_file.write('    return request_id_;\n')
        to_file.write('  }\n\n')
        

    method_name = field[1:]
    method_name = method_name[:1].lower() + method_name[1:]
    # print method_name
    if not is_rsp_error:
        to_file.write('  %s*\n' % field_name)
        to_file.write('     %s() const {\n' % method_name)
        to_file.write('    return %s.get();\n' % local_field)
        to_file.write('  }\n\n')

    to_file.write(' private:\n')
    if not is_rsp_error:
        to_file.write('  std::unique_ptr<%s>\n' % field_name)
        to_file.write('                   %s;\n' % local_field)
    if msg_type == "err_rtn":
        to_file.write('  std::unique_ptr<CThostFtdcRspInfoField> rspinfo_;\n')
    elif msg_type == "req":
        to_file.write('  int request_id_;\n')

    to_file.write('};\n\n')
    return

onrsp_pattern = re.compile(r'''OnRsp''')

onrtn_pattern = re.compile(r'''OnRtn''')

onerr_rtn_pattern = re.compile(r'''OnErrRtn''')

req_pattern = re.compile(r'''int Req''')

reqqry_pattern = re.compile(r'''int ReqQry''')

file_list = ["ThostFtdcMdApi.h", "ThostFtdcTraderApi.h"]

req_id_file = open("req_id.data", "wb")
req_file = open("message_req.data", "wb")

req_qry_id_file = open("req_qry_id.data", "wb")

rsp_id_file = open("rsp_id.data", "wb")
rsp_file = open("message_rsp.data", "wb")

rtn_id_file = open("rtn_id.data", "wb")
rtn_file = open("message_rtn.data", "wb")

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

            if reqqry_pattern.search(line):
                processLine(line, "req_qry")
                continue

            if req_pattern.search(line):
                processLine(line, "req")
                continue


rsp_id_file.close()
rsp_file.close()
rtn_id_file.close()
rtn_file.close()
req_id_file.close()
req_file.close()
req_qry_id_file.close()

# Message.hh process
with open("Message.hh.temp") as msg_file:
    msg_hh = msg_file.read()

with open("req_id.data") as req_id_file:
    req_id = req_id_file.read()

with open("req_qry_id.data") as req_qry_id_file:
    req_qry_id = req_qry_id_file.read()

with open("rsp_id.data") as rsp_id_file:
    rsp_id = rsp_id_file.read()

with open("rtn_id.data") as rtn_id_file:
    rtn_id = rtn_id_file.read()

msg_hh = msg_hh.replace('[REQ_ID]', req_id)
msg_hh = msg_hh.replace('[REQ_QRY_ID]', req_qry_id)
msg_hh = msg_hh.replace('[RSP_ID]', rsp_id)
msg_hh = msg_hh.replace('[RTN_ID]', rtn_id)

with open("Message.hh", "wb") as msg_file:
    msg_file.write(msg_hh)

# RspMessage.hh
with open("RspMessage.hh.temp") as rsp_msg_file:
    rsp_msg_hh = rsp_msg_file.read()

with open("message_rsp.data") as rsp_msg_file:
    rsp_msg = rsp_msg_file.read()

# print rsp_msg
rsp_msg_hh = rsp_msg_hh.replace('[RSP_MESSAGE]', rsp_msg)

with open("RspMessage.hh", "wb") as rsp_msg_file:
    rsp_msg_file.write(rsp_msg_hh)

# RtnMessage.hh
with open("RtnMessage.hh.temp") as rtn_msg_file:
    rtn_msg_hh = rtn_msg_file.read()

with open("message_rtn.data") as rtn_msg_file:
    rtn_msg = rtn_msg_file.read()

# print rtn_msg
rtn_msg_hh = rtn_msg_hh.replace('[RTN_MESSAGE]', rtn_msg)

with open("RtnMessage.hh", "wb") as rtn_msg_file:
    rtn_msg_file.write(rtn_msg_hh)

# ReqMessage.hh
with open("ReqMessage.hh.temp") as req_msg_file:
    req_msg_hh = req_msg_file.read()

with open("message_req.data") as req_msg_file:
    req_msg = req_msg_file.read()

# print req_msg
req_msg_hh = req_msg_hh.replace('[REQ_MESSAGE]', req_msg)

with open("ReqMessage.hh", "wb") as req_msg_file:
    req_msg_file.write(req_msg_hh)
