#!/usr/bin/python

import re

callback_pattern = re.compile(r'''On(Rsp|Rtn|Front|Heart|Package)''')
thost_pattern = re.compile(r'''CThostFtdc''')
on_rsp_pattern = re.compile(r'''OnRsp''')
on_rsp_error_pattern = re.compile(r'''OnRspError''')
on_rtn_pattern = re.compile(r'''OnRtn''')
login_pattern = re.compile(r'''(Login|Logout)''')

# file = open("ThostFtdcMdApi.h")
file = open("ThostFtdcTraderApi.h")

hh_file = open('Spi.hh', 'wb')
cc_file = open('Spi.cc', 'wb')

func_index = 2
index = 3

for line in file:
    # print line
    result = callback_pattern.search(line)
    if result:
        # print line
        words = re.split('\s|,|\(|\)|{|}|;', line)
        words = filter(None, words)
        # print words
        func_name = words[func_index]
        callback_name = func_name[0].lower() + func_name[1:]
        # print func_name
        if len(words)==3:
            hh_file.write("virtual void %s();\n\n" % func_name)
            cc_file.write("void MDSpiImpl::%s() {\n" % func_name)
            cc_file.write("\tSOIL_FUNC_TRACE;\n}\n\n")
            continue

        hh_file.write("virtual void %s(\n" % func_name)
        cc_file.write("void MDSpiImpl::%s(\n" % func_name)
        args = []
        for index in xrange(3, len(words), 2):
            if index+1 == len(words)-1:
                last_flag = ''
            else:
                last_flag = ',\n'

            arg = words[index+1]
            var = words[index]
            args.append(arg)
            hh_file.write('\t%s %s%s' % (var, arg, last_flag))
            cc_file.write('\t%s %s%s' % (var, arg, last_flag))
        hh_file.write(');\n\n')
        cc_file.write(') {\n')

        cc_file.write('\tSOIL_FUNC_TRACE;\n\n')
        is_rsp = False
        is_rtn = False
        is_login = False
        if login_pattern.search(line):
            is_login = True

        if on_rsp_error_pattern.search(line):
            is_rsp = True
            cc_file.write('\tCATA_ON_RSP_ERROR_CALLBACK(\n\t\t%s' % callback_name)
        elif (not is_login) and on_rsp_pattern.search(line):
            is_rsp = True
            cc_file.write('\tCATA_ON_RSP_CALLBACK(\n\t\t%s' % callback_name)
        elif on_rtn_pattern.search(line):
            is_rtn = True
            cc_file.write('\tCATA_ON_RTN_CALLBACK(\n\t\t%s' % callback_name)

        for arg in args:
            arg_pointer = False
            if '*' in arg:
                arg_pointer = True
                arg = arg.replace('*', '')

            if is_rsp or is_rtn:
                cc_file.write(',\n\t\t%s' % arg)
            elif arg_pointer:
                cc_file.write('\tSOIL_DEBUG_IF_PRINT(%s);\n' % arg)
            else:
                cc_file.write('\tSOIL_DEBUG_PRINT(%s);\n' % arg)

        if is_rsp or is_rtn:
            cc_file.write(');\n')
        cc_file.write('}\n\n')



    


