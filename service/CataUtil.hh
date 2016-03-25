// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_UTIL_HH
#define CATA_UTIL_HH

#include "ThostFtdcUserApiStruct.h"
#include "cata/CataDef.hh"

namespace cata {

class CATAUtil {
 public:
  CATAUtil();

  ~CATAUtil();

  DepthMarketData* toDepthMarketData(CThostFtdcDepthMarketDataField *pData);
};

};  // namespace cata

#endif
