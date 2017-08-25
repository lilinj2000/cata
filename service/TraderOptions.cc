// Copyright (c) 2010
// All rights reserved.

#include "TraderOptions.hh"

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
