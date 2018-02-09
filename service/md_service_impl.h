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
// File: md_service_impl.h
// -----------------------------------------------------------------------------
//
// [file_descrition]
//
// Example:
//
//   ... ...
//
//


#ifndef SERVICE_MD_SERVICE_IMPL_H_
#define SERVICE_MD_SERVICE_IMPL_H_

#include <string>
#include <memory>
#include <set>

#include "service/md_api_factory.h"
#include "rapidjson/document.h"
#include "cata/md_service.h"
#include "soil/s_timer.h"

namespace cata {

class MDOptions;
class MDSpiImpl;

typedef std::set<std::string> InstrusType;

class MDServiceImpl : public MDService {
 public:
  MDServiceImpl(
      const rapidjson::Document& doc,
      MDCallback* callback,
      MdApiFactory* mdApiFactory);

  virtual ~MDServiceImpl();

  virtual void subMarketData(char *instrus[], int count);

  virtual void unsubMarketData(char *instrus[], int count);

  virtual void subQuoteData(char *instrus[], int count);

  virtual void unsubQuoteData(char *instrus[], int count);

  virtual std::string tradingDay();

  void login();

  void onRspLogin();

  void wait(const std::string& hint = "");
  void notify();

  MDCallback* callback() {
    return callback_;
  }

 private:
  std::unique_ptr<MDOptions> options_;

  CThostFtdcMdApi* md_api_;
  std::unique_ptr<MDSpiImpl> md_spi_;

  MDCallback* callback_;

  std::unique_ptr<soil::STimer> cond_;

  InstrusType md_instrus_;  // sub market data
  InstrusType qd_instrus_;  // sub quote data
};

};  // namespace cata

#endif  // SERVICE_MD_SERVICE_IMPL_H_
