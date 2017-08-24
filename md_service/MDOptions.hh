// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_MDOPTIONS_HH
#define CATA_MDOPTIONS_HH

#include <string>
#include "soil/json.hh"

namespace cata {

class MDOptions {
 public:
  explicit MDOptions(const rapidjson::Document& doc);

  virtual ~MDOptions();

  std::string flow_path;
  std::string front_address;

  std::string broker_id;
  std::string user_id;
  std::string password;

  std::string protocol;
};

}  // namespace cata

#endif
