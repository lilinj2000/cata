// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_MDAPI_FACTORY_HH
#define CATA_MDAPI_FACTORY_HH

#include "ThostFtdcMdApi.h"

namespace cata {

class MdApiFactory {
 public:
  virtual CThostFtdcMdApi* create(
      const char *pszFlowPath = "",
      const bool bIsUsingUdp = false,
      const bool bIsMulticast = false) = 0;

  virtual ~MdApiFactory() {
  }
};

class ThostFtdcMdApiFactory :
      public MdApiFactory{
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

  virtual ~ThostFtdcMdApiFactory() {
  }
};

}  // namespace cata

#endif
