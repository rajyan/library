---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/Prime.hpp
    title: src/Prime.hpp
  - icon: ':heavy_check_mark:'
    path: src/ctz.hpp
    title: src/ctz.hpp
  - icon: ':warning:'
    path: src/empty.cpp
    title: src/empty.cpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/own/Random_ctz.test.cpp
    title: test/own/Random_ctz.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/own/Random_popcount.test.cpp
    title: test/own/Random_popcount.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yosupo/enumerate_primes.test.cpp
    title: test/yosupo/enumerate_primes.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/popcount.hpp\"\n\nusing lint = long long;\n\ninline\
    \ int popcount(lint n) {\n    n = (n & 0x5555555555555555) + (n >> 1 & 0x5555555555555555);\n\
    \    n = (n & 0x3333333333333333) + (n >> 2 & 0x3333333333333333);\n    n = (n\
    \ & 0x0f0f0f0f0f0f0f0f) + (n >> 4 & 0x0f0f0f0f0f0f0f0f);\n    n = (n & 0x00ff00ff00ff00ff)\
    \ + (n >> 8 & 0x00ff00ff00ff00ff);\n    n = (n & 0x0000ffff0000ffff) + (n >> 16\
    \ & 0x0000ffff0000ffff);\n    n = (n & 0x00000000ffffffff) + (n >> 32 & 0x00000000ffffffff);\n\
    \    return n;\n}\n"
  code: "#pragma once\n\nusing lint = long long;\n\ninline int popcount(lint n) {\n\
    \    n = (n & 0x5555555555555555) + (n >> 1 & 0x5555555555555555);\n    n = (n\
    \ & 0x3333333333333333) + (n >> 2 & 0x3333333333333333);\n    n = (n & 0x0f0f0f0f0f0f0f0f)\
    \ + (n >> 4 & 0x0f0f0f0f0f0f0f0f);\n    n = (n & 0x00ff00ff00ff00ff) + (n >> 8\
    \ & 0x00ff00ff00ff00ff);\n    n = (n & 0x0000ffff0000ffff) + (n >> 16 & 0x0000ffff0000ffff);\n\
    \    n = (n & 0x00000000ffffffff) + (n >> 32 & 0x00000000ffffffff);\n    return\
    \ n;\n}"
  dependsOn: []
  isVerificationFile: false
  path: src/popcount.hpp
  requiredBy:
  - src/Prime.hpp
  - src/empty.cpp
  - src/ctz.hpp
  timestamp: '2021-01-31 19:19:57+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/enumerate_primes.test.cpp
  - test/own/Random_popcount.test.cpp
  - test/own/Random_ctz.test.cpp
documentation_of: src/popcount.hpp
layout: document
redirect_from:
- /library/src/popcount.hpp
- /library/src/popcount.hpp.html
title: src/popcount.hpp
---
