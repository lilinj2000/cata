// Copyright 2017 The Cata Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// -----------------------------------------------------------------------------
// File: Helper.h
// -----------------------------------------------------------------------------
//
// [file_descrition]
//
// Example:
//
//   ... ...
//
//


#ifndef CATA_HELPER_H_
#define CATA_HELPER_H_

#define CATA_ON_RSP_ERROR_CALLBACK(C, E, I, L)  \
  if (callback()) {                             \
    callback()->C(                              \
        E ? fmt::format("{}", *E) : "",         \
        I,                                      \
        L);                                     \
  }

#define CATA_ON_RSP_CALLBACK(C, R, E, I, L)     \
  if (callback()) {                             \
    callback()->C(                              \
        R ? fmt::format("{}", *R) : "",         \
        E ? fmt::format("{}", *E) : "",         \
        I,                                      \
        L);                                     \
  }

#define CATA_ON_RTN_CALLBACK(C, R)              \
  if (callback()) {                             \
    callback()->C(                              \
        R ? fmt::format("{}", *R) : "");        \
  }

#endif
