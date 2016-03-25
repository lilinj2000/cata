// Copyright (c) 2010
// All rights reserved.

#include <boost/program_options.hpp>
#include <fstream>
#include <iostream>
#include "MDOptions.hh"

namespace cata {

MDOptions::MDOptions():
    options_("MDOptions") {
  namespace po = boost::program_options;

  options_.add_options()
      ("cata_md.flow_path", po::value<std::string>(&flow_path),
       "flow path")
      ("cata_md.front_address", po::value<std::string>(&front_address),
       "front address")
      ("cata_md.broker_id", po::value<std::string>(&broker_id),
       "broker id")
      ("cata_md.user_id", po::value<std::string>(&user_id),
       "user id")
      ("cata_md.password", po::value<std::string>(&password),
       "password")
      ("cata_md.protocol", po::value<std::string>(&protocol),
         "the protocol is tcp, udp, or multi");
  return;
}

MDOptions::~MDOptions() {
}

po::options_description* MDOptions::configOptions() {
  return &options_;
}

};  // namespace cata
