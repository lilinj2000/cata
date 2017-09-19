// Copyright (c) 2010
// All rights reserved.

#ifndef CATA_HELPER_HH
#define CATA_HELPER_HH

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
