// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_MDAPISERVICE_HH
#define CATA_MDAPISERVICE_HH

#include "ThostFtdcMdApi.h"

namespace cata {

class MdApiService {
 public:
  virtual CThostFtdcMdApi* create(
      const char *pszFlowPath = "",
      const bool bIsUsingUdp = false,
      const bool bIsMulticast = false) = 0;

  virtual ~MdApiService() {
  }
};

class ThostFtdcMdApiService :
      public MdApiService{
 public:
  virtual CThostFtdcMdApi* create(
      const char *pszFlowPath = "",
      const bool bIsUsingUdp = false,
      const bool bIsMulticast = false) {
    return CThostFtdcMdApi::CreateFtdcMdApi(
        pszFlowPath,
        bIsUsingUdp,
        bIsMulticast);
  }

  virtual ~ThostFtdcMdApiService() {
  }
};

}  // namespace cata

#endif
