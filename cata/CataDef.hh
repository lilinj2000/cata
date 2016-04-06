// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_DEF_HH
#define CATA_DEF_HH

#include <set>
#include <string>

namespace cata {

typedef std::set<std::string> InstrumentSet;

class ServiceCallback {
 public:
  virtual void onRspMessage(const std::string& msg) = 0;

  virtual void onRtnMessage(const std::string& msg) = 0;

  virtual ~ServiceCallback() {}
};

typedef enum {
  HF_SPECULATION = '1',
  HF_ARBITRAGE = '2',
  HF_HEDGE = '3',
  HF_ALL = '\0'
}HedgeFlagType;

typedef enum {
  D_Buy = '0',
  D_Sell = '1'
}DirectionType;

typedef enum {
  OF_Open = '0',
  OF_Close = '1',
  OF_ForceClose = '2',
  OF_CloseToday = '3',
  OF_CloseYesterday = '4',
  OF_ForceOff = '5',
  OF_LocalForceClose = '6'
}OffsetFlagType;

};  // namespace cata

#endif
