#!/usr/bin/python

import re

struct_pattern = re.compile(r'''struct (.*)''')

left_brace_pattern = re.compile(r'''\{''')

right_brace_pattern = re.compile(r'''\};''')

comment_pattern = re.compile(r'''///''')

field_pattern = re.compile(r'''\s(\w+)\s(\w+);''')

file = open("ThostFtdcUserApiStruct.h")

struct_status = False
struct_name = ''
filed_name = ''
object_name = ''
tab = '    '
first_field = False

header_file = open('ThostFtdcUserApiStructPrint.hh', 'wb')

header_file.write('// Copyright (c) 2010\n')
header_file.write('// All rights reserved.\n\n')
header_file.write('#ifndef THOST_FTDC_USERAPI_STRUCT_PRINT_HH\n')
header_file.write('#define THOST_FTDC_USERAPI_STRUCT_PRINT_HH\n\n')

header_file.write('#include <ostream>\n')
header_file.write('#include "ThostFtdcUserApiStruct.h"\n')
header_file.write('#include "soil/json.hh"\n\n')

header_file.write('using rapidjson::StringBuffer;\n')
header_file.write('using rapidjson::PrettyWriter;\n')
header_file.write('using soil::json::write_value;\n\n')

for line in file:
    # print line
    result = struct_pattern.search(line)
    if result:
        # print '%s' % result.groups()
        struct_name = result.group(1)
        object_name = 'a' + struct_name.replace('CThostFtdc', '')
        header_file.write('inline std::ostream& operator<<(\n')
        header_file.write('    std::ostream& os,\n')
        header_file.write('    %s const& %s)' % (struct_name, object_name))
        # print '%s' % object_name
        # cpp_file.write('std::ostream& operator<<(std::ostream& os, const %s& %s)\n' % (struct_name, object_name))
        continue

    result = left_brace_pattern.search(line)
    if result:
        # print 'left brace: %s' % line
        struct_status = True
        header_file.write(' {  // NOLINT\n')
        header_file.write('    StringBuffer sb;\n')
        header_file.write('    PrettyWriter<StringBuffer> writer(sb);\n\n')
        header_file.write('    writer.StartObject();\n')
        header_file.write('    writer.Key(\"%s\");\n' % struct_name)
        header_file.write('        writer.StartObject();\n')

        first_field = True
        continue

    result = right_brace_pattern.search(line)
    if result:
        # print 'right brace: %s' % line
        struct_status = False
        header_file.write('        writer.EndObject();\n')
        header_file.write('    writer.EndObject();\n\n')
        header_file.write('    os <<sb.GetString();\n\n')
        header_file.write('    return os;\n')
        header_file.write('}\n\n')

        continue

    result = comment_pattern.search(line)
    if result:
        # print 'comment: %s' % line
        continue

    result = field_pattern.search(line)
    if result:
        # print 'field: %s\t%s' % (result.group(1), result.group(2))
        if struct_status:
            # print 'field: %s.%s' % (struct_name, result.group(2))
            # fieldname: obj.filed_value
            header_file.write('        writer.Key(\"%s\");\n' % result.group(2))
            header_file.write('        write_value(\n')
            header_file.write('            &writer,\n')
            header_file.write('            %s.%s);\n' % (object_name, result.group(2)))
        continue

    # print line

header_file.write('#endif\n')

    


