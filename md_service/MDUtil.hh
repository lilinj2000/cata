// Copyright (c) 2010
// All rights reserved.

#ifndef MD_UTIL_HH
#define MD_UTIL_HH

#include "ThostFtdcUserApiStruct.h"
#include "cata/CataDef.hh"

namespace cata {

class MDUtil {
 public:
  MDUtil();

  ~MDUtil();

  DepthMarketData* toDepthMarketData(CThostFtdcDepthMarketDataField *pData);
};

};  // namespace cata

#endif
