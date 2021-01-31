---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/empty.cpp
    title: src/empty.cpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yosupo/associative_array.test.cpp
    title: test/yosupo/associative_array.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/fnv1a.hpp\"\n\n#include <iostream>\n\nusing namespace\
    \ std;\n\ninline uint64_t fnv1a_64(const string& data) {\n\n    uint64_t hash\
    \ = 0xcbf29ce484222325;\n    constexpr uint64_t prime = 0x100000001b3;\n\n   \
    \ for (char i : data) {\n        hash = hash ^ i;\n        hash *= prime;\n  \
    \  }\n\n    return hash;\n}\n"
  code: "#pragma once\n\n#include <iostream>\n\nusing namespace std;\n\ninline uint64_t\
    \ fnv1a_64(const string& data) {\n\n    uint64_t hash = 0xcbf29ce484222325;\n\
    \    constexpr uint64_t prime = 0x100000001b3;\n\n    for (char i : data) {\n\
    \        hash = hash ^ i;\n        hash *= prime;\n    }\n\n    return hash;\n\
    }"
  dependsOn: []
  isVerificationFile: false
  path: src/fnv1a.hpp
  requiredBy:
  - src/empty.cpp
  timestamp: '2021-01-31 19:19:57+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/associative_array.test.cpp
documentation_of: src/fnv1a.hpp
layout: document
redirect_from:
- /library/src/fnv1a.hpp
- /library/src/fnv1a.hpp.html
title: src/fnv1a.hpp
---
