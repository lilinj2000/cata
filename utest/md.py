#!/usr/bin/env python

import json

cata_md = { 
    "flow_path": "./mdflow",

    # ctpfz
    # front_address = tcp://ctpfz1-front1.citicsf.com:51213
    # front_address = tcp://ctpfz1-front3.citicsf.com:51213
    # broker_id = 66666
    # user_id = 04452
    # password = 123456

    # simnow
    # front_address = tcp://180.168.146.187:10010"
    # user_id = 037135
    # password = y888888

    "front_address": "tcp://180.168.146.187:10010",
    "broker_id": "",
    "user_id": "",
    "password": "",

    # protocol: tcp, udp, or multi
    "protocol": "tcp"
    }

sink1 = {
    "sink": {
        "type": "stdout_sink_mt",
        "level": "trace"
        }
    }

sink2 = {
    "sink": {
        "type": "rotating_file_sink_mt",
        "file_name": "logs/md.log",
        "max_file_size": 5000000,
        "max_files": 10
        }
    }

log = {
    "level": "trace",
    "sinks": [sink1, sink2]
    }

config = {
    "cata_md": cata_md,
    "log": log
    } 

with open('md.json', 'w') as f:
    json.dump(config, f, sort_keys=True, indent=4)
