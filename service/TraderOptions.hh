// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_TRADEROPTIONS_HH
#define CATA_TRADEROPTIONS_HH

#include <string>
#include "soil/json.hh"

namespace cata {

class TraderOptions {
 public:
  explicit TraderOptions(
      const rapidjson::Document& doc);
  virtual ~TraderOptions();

  std::string flow_path;
  std::string front_address;

  std::string broker_id;
  std::string user_id;
  std::string password;

  std::string investor_id;
};

}  // namespace cata

#endif
