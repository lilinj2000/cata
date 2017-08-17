// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_LOG_HH
#define CATA_LOG_HH

#include "spdlog/spdlog.h"
#include "json.hh"

namespace cata {
namespace log {

void init(const rapidjson::Document& doc);

extern std::shared_ptr<spdlog::logger> logger;

#define LOG_TRACE(...) SPDLOG_TRACE(logger, ...)
#define LOG_TRACE_IF(flag, ...) SPDLOG_TRACE_IF(logger, flag, ...)
#define LOG_DEBUG(...) SPDLOG_DEBUG(logger, ...)
#define LOG_DEBUG_IF(flag, ...) SPDLOG_DEBUG_IF(logger, flag, ...)

}  // namespace log

}  // namespace cata

#endif
