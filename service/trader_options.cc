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


#include "trader_options.h"

namespace cata {

using soil::json::get_item_value;

TraderOptions::TraderOptions(
    const rapidjson::Document& doc) {
  flow_path = "./";
  get_item_value(&flow_path, doc, "/cata_trader/flow_path", false);

  get_item_value(&front_address, doc, "/cata_trader/front_address");

  get_item_value(&broker_id, doc, "/cata_trader/broker_id");
  get_item_value(&user_id, doc, "/cata_trader/user_id");
  get_item_value(&password, doc, "/cata_trader/password");
  get_item_value(&investor_id, doc, "/cata_trader/investor_id");

  return;
}

TraderOptions::~TraderOptions() {
}

};  // namespace cata
