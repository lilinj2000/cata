// Copyright (c) 2010
// All rights reserved.

#include "MDOptions.hh"

namespace cata {

using soil::json::get_item_value;

MDOptions::MDOptions(const rapidjson::Document& doc) {
  flow_path = "./";
  get_item_value(&flow_path, doc, "/cata_md/flow_path", false);

  get_item_value(&front_address, doc, "/cata_md/front_address");

  get_item_value(&broker_id, doc, "/cata_md/broker_id");
  get_item_value(&user_id, doc, "/cata_md/user_id");
  get_item_value(&password, doc, "/cata_md/password");

  get_item_value(&protocol, doc, "/cata_md/protocol");

  return;
}

MDOptions::~MDOptions() {
}

};  // namespace cata
