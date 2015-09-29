#include "MDOptions.hh"

#include <fstream>
#include <iostream>
#include <boost/program_options.hpp>

namespace cata
{

MDOptions::MDOptions():
    options_("MDOptions")
{
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
      ;

  return;
  
}

MDOptions::~MDOptions()
{
}

po::options_description* MDOptions::configOptions()
{
  return &options_;
}

};  
