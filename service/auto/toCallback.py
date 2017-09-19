#!/usr/bin/python

import re

callback_pattern = re.compile(r'''(OnRsp|OnRtn)''')
login_pattern = re.compile(r'''(Login|Logout)''')
thost_pattern = re.compile(r'''CThostFtdc''')

file = open("ThostFtdcTraderApi.h")

output_file = open('Callback.hh', 'wb')

func_index = 2
index = 3

for line in file:
    # print line
    result = (callback_pattern.search(line)) and (not login_pattern.search(line))
    if result:
        # print line
        words = re.split('\s|,|\(|\)|{|}|;|\*', line)
        words = filter(None, words)
        # print words
        func_name = words[func_index]
        callback_name = func_name[0].lower() + func_name[1:]
        # print callback_name
        output_file.write("virtual void %s(\n" % callback_name)
        args = []
        for index in xrange(3, len(words), 2):
            if index+1 == len(words)-1:
                last_flag = ''
            else:
                last_flag = ',\n'

            arg = ''
            var = ''
            if thost_pattern.search(words[index]):
                arg = 'the' + words[index+1][1:]
                var = 'const std::string&'
            else:
                arg = words[index+1]
                var = words[index]

            args.append(arg)
            output_file.write('\t%s %s%s' % (var, arg, last_flag))
        output_file.write(') {\n')

        output_file.write('\tSOIL_FUNC_TRACE;\n\n')
        for arg in args:
            output_file.write('\tSOIL_DEBUG_PRINT(%s);\n' % arg)
        output_file.write('}\n\n')
        # print args
                

        # print '%s' % result.groups()


    


