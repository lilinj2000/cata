#!/usr/bin/env python

import json

cata_trader = { 
    "flow_path": "./",

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

    #"front_address": "tcp://180.168.146.187:10100",
    #"broker_id": "9999",
    #"user_id": "037135",
    #"password": "y888888",
    #"investor_id": "037135",
    #"app_id": "simnow_client_test",
    #"auth_code": "0000000000000000",
    #"exchange_id": "SHFE"

    "front_address": "tcp://172.31.108.48:51305",
    "broker_id": "66666",
    "user_id": "01306",
    "password": "Test@123456",
    "investor_id": "01306",
    "app_id": "Client_FF_1.0.0",
    "auth_code": "7IMPN6OAUGNFCCCF",
    "exchange_id": "CFFEX"
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
        "file_name": "trader.log",
        "max_file_size": 5000000,
        "max_files": 10
        }
    }

log = {
    "level": "trace",
    "sinks": [sink1, sink2]
    }

tests = {
    "prod": "cu",
    "instru": "cu2005",
    "price": 45000,
    "volume": 1
    }

config = {
    "cata_trader": cata_trader,
    "tests": tests,
    "log": log
    } 

with open('trader.json', 'w') as f:
    json.dump(config, f, sort_keys=True, indent=4)
