// Copyright (c) 2010
// All rights reserved.

#include <memory>
#include <unordered_map>
#include "fmt/format.h"
#include "boost/regex.hpp"
#include "Log.hh"

namespace cata {
namespace log {

static std::string logger_name = "GLOBAL";
std::shared_ptr<spdlog::logger>
logger = spdlog::stdout_logger_mt(logger_name);

static void get_log_level(
    spdlog::level::level_enum* level,
    const std::string& name) {
  static std::unordered_map<std::string, spdlog::level::level_enum> levels;
  if (levels.empty()) {
#define INSERT_LEVEL(E) levels["E"] = spdlog::level::E
    INSERT_LEVEL(trace);
    INSERT_LEVEL(debug);
    INSERT_LEVEL(info);
    // INSERT_LEVELS(warning);
    // INSERT_LEVELS(error);
    INSERT_LEVEL(critical);
    INSERT_LEVEL(off);
    levels["warning"] = spdlog::level::warn;
    levels["error"] = spdlog::level::err;
  }

  auto i_iter = levels.find(name);
  if (i_iter != levels.end()) {
    *level = i_iter->second;
  } else {
    throw std::runtime_error(
        fmt::format("Invalid log level: {}", name));
  }
}

class Sink {
 public:
  virtual spdlog::sink_ptr create(
      const std::string& type,
      const rapidjson::Document& doc,
      size_t index) = 0;
};

class ConsoleSink : public Sink {
 public:
  virtual spdlog::sink_ptr create(
      const std::string& type,
      const rapidjson::Document& doc,
      size_t index) {
    if (type == "stdout_sink_mt") {
      return std::make_shared<spdlog::sinks::stdout_sink_mt>();
  } else if (type == "stdout_sink_st") {
      return std::make_shared<spdlog::sinks::stdout_sink_st>();
    } else if (type == "stderr_sink_mt") {
      return std::make_shared<spdlog::sinks::stderr_sink_mt>();
    } else if (type == "stderr_sink_st") {
      return std::make_shared<spdlog::sinks::stderr_sink_st>();
    }
  }
};

class FileSink : public Sink {
 public:
  virtual spdlog::sink_ptr create(
      const std::string& type,
      const rapidjson::Document& doc,
      size_t index) {
    std::string key = fmt::format("/log/sinks/{}/sink/file_name", index);
    std::string file_name;
    json::get_item_value(&file_name, doc, key);

    if (type == "simple_file_sink_mt") {
      return std::make_shared<spdlog::sinks::simple_file_sink_mt>(file_name);
    } else if (type == "simple_file_sink_st") {
      return std::make_shared<spdlog::sinks::simple_file_sink_st>(file_name);
    }

    return nullptr;
  }
};

Sink* createSink(const std::string& type) {
    boost::regex re_console("^std[out|err]_sink_[m|s]t$");

    boost::regex re_file("^simple_file_sink_[m|s]t$");

    boost::smatch mat;
    if (boost::regex_match(type, mat, re_console)) {
      return new ConsoleSink();
    } else if (boost::regex_match(type, mat, re_file)) {
        return new FileSink();
      }

    return nullptr;
};

void init(const rapidjson::Document& doc) {
  // log_level
  spdlog::level::level_enum log_level;
  std::string level_name;
  json::get_item_value(&level_name, doc, "/log/level", false);
  if (!level_name.empty()) {
    get_log_level(&log_level, level_name);
    spdlog::set_level(log_level);
  }

  // log/sinks
  std::vector<spdlog::sink_ptr> sinks;
  for (auto index = 0;
       index < rapidjson::Pointer("/log/sinks").GetTokenCount();
       ++index) {
    std::string key = fmt::format("/log/sinks/{}/sink/type", index);
    std::string type;
    json::get_item_value(&type, doc, key);

    std::unique_ptr<Sink> sink(createSink(type));
    if (sink.get()) {
      sinks.push_back(sink->create(type, doc, index));
    }
  }
}

}  // namespace log

}  // namespace cata
