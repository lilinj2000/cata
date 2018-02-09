// Copyright 2017 The Cata Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// -----------------------------------------------------------------------------
// File: [file_name]
// -----------------------------------------------------------------------------
//
// [file_descrition]
//
// Example:
//
//   ... ...
//
//


#ifndef SERVICE_MD_API_FACTORY_H_
#define SERVICE_MD_API_FACTORY_H_

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

#endif  // SERVICE_MD_API_FACTORY_H_
