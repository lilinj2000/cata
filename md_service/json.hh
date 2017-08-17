// Copyright (c) 2010
// All rights reserved.

#include <string>
#include <stdexcept>
#include <typeinfo>
#include "rapidjson/Document.h"
#include "rapidjson/pointer.h"

namespace json {

template <typename T>
void get_item_value(
    T* value,
    const rapidjson::Document& doc,
    const std::string& key,
    bool except = true,
    size_t* unresolvedTokenIndex = 0) {
  if (const rapidjson::Value* v = rapidjson::Pointer(key).Get(doc)) {
    if (typeid(T) == typeid(std::string)) {
      *value = v->GetString();
    } else if (typeid(T) == typeid(bool)) {
      *value = v->GetBool();
    } else if (typeid(T) == typeid(int8_t)
               || typeid(T) == typeid(int16_t)
               || typeid(T) == typeid(int32_t)) {
      *value = v->GetInt();
    } else if (typeid(T) == typeid(uint8_t)
               || typeid(T) == typeid(uint16_t)
               || typeid(T) == typeid(uint32_t)){
      *value = v->GetUint();
    } else if (typeid(T) == typeid(int64_t)) {
      *value = v->GetInt64();
    } else if (typeid(T) == typeid(uint64_t)) {
      *value = v->GetUint64();
    } else if (typeid(T) == typeid(float)
               || typeid(T) == typeid(double)) {
      *value = v->GetDouble();
    }
  } else if (except) {
    throw std::runtime_error(key + " not found");
  }
}

}  // namespace json
