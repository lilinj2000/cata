#ifndef CATA_UTIL_HH
#define CATA_UTIL_HH

#include "cata/CataDef.hh"
#include "ThostFtdcUserApiStruct.h"

namespace cata
{

class CATAUtil
{
 public:
  CATAUtil();

  ~CATAUtil();

  DepthMarketData* toDepthMarketData(CThostFtdcDepthMarketDataField *pData);
  
};

};

#endif
