// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_MDOPTIONS_HH
#define CATA_MDOPTIONS_HH

#include <string>
#include "soil/Config.hh"

namespace cata {

namespace po = boost::program_options;

class MDOptions : public soil::Options {
 public:
  MDOptions();
  virtual ~MDOptions();

  virtual po::options_description* configOptions();

  std::string flow_path;
  std::string front_address;

  std::string broker_id;
  std::string user_id;
  std::string password;

  std::string protocol;

 private:
  boost::program_options::options_description options_;
};

}  // namespace cata

#endif
