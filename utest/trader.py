#!/usr/bin/env python

import json

cata_trader = { 
    "flow_path": "traderflow/",

    # ctpfz
    # front_address = tcp://ctpfz1-front1.citicsf.com:51213
    # front_address = tcp://ctpfz1-front3.citicsf.com:51213
    # broker_id = 66666
    # user_id = 04452
    # password = 123456

    # simnow
    # front_address = tcp://180.168.146.187:10000"
    # front_address = tcp://180.168.146.187:10030" 7x24
    # user_id = 037135
    # password = y888888
    # investor_id = 037135

    "front_address": "tcp://180.168.146.187:10030",
    "broker_id": "9999",
    "user_id": "037135",
    "password": "y888888",

    "investor_id": "037135"
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
        "file_name": "logs/trader.log",
        "max_file_size": 5000000,
        "max_files": 10
        }
    }

log = {
    "level": "trace",
    "sinks": [sink1, sink2]
    }

tests = {
    "instru": "cu1712",
    "price": 50010,
    "volume": 1
    }

config = {
    "cata_trader": cata_trader,
    "tests": tests,
    "log": log
    } 

with open('trader.json', 'w') as f:
    json.dump(config, f, sort_keys=True, indent=4)
