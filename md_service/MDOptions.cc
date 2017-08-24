// Copyright (c) 2010
// All rights reserved.

#include "MDOptions.hh"

using namespace soil;
namespace cata {

MDOptions::MDOptions(const rapidjson::Document& doc) {

  flow_path = "./";
  json::get_item_value(&flow_path, doc, "/cata_md/flow_path", false);

  json::get_item_value(&front_address, doc, "/cata_md/front_address");

  json::get_item_value(&broker_id, doc, "/cata_md/broker_id");
  json::get_item_value(&user_id, doc, "/cata_md/user_id");
  json::get_item_value(&password, doc, "/cata_md/password");

  json::get_item_value(&protocol, doc, "/cata_md/protocol");

  return;
}

MDOptions::~MDOptions() {
}

};  // namespace cata
