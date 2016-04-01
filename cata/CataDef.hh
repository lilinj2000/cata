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

};  // namespace cata

#endif
