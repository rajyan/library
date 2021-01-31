---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/popcount.hpp
    title: src/popcount.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/Prime.hpp
    title: src/Prime.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/own/Random_ctz.test.cpp
    title: test/own/Random_ctz.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yosupo/enumerate_primes.test.cpp
    title: test/yosupo/enumerate_primes.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/ctz.hpp\"\n\n#line 2 \"src/popcount.hpp\"\n\nusing lint\
    \ = long long;\n\ninline int popcount(lint n) {\n    n = (n & 0x5555555555555555)\
    \ + (n >> 1 & 0x5555555555555555);\n    n = (n & 0x3333333333333333) + (n >> 2\
    \ & 0x3333333333333333);\n    n = (n & 0x0f0f0f0f0f0f0f0f) + (n >> 4 & 0x0f0f0f0f0f0f0f0f);\n\
    \    n = (n & 0x00ff00ff00ff00ff) + (n >> 8 & 0x00ff00ff00ff00ff);\n    n = (n\
    \ & 0x0000ffff0000ffff) + (n >> 16 & 0x0000ffff0000ffff);\n    n = (n & 0x00000000ffffffff)\
    \ + (n >> 32 & 0x00000000ffffffff);\n    return n;\n}\n#line 4 \"src/ctz.hpp\"\
    \n\nusing lint = long long;\n\ninline int ctz(lint n) {\n    return popcount(~n\
    \ & (n - 1));\n}\n"
  code: "#pragma once\n\n#include \"popcount.hpp\"\n\nusing lint = long long;\n\n\
    inline int ctz(lint n) {\n    return popcount(~n & (n - 1));\n}"
  dependsOn:
  - src/popcount.hpp
  isVerificationFile: false
  path: src/ctz.hpp
  requiredBy:
  - src/Prime.hpp
  timestamp: '2021-01-31 19:19:57+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/enumerate_primes.test.cpp
  - test/own/Random_ctz.test.cpp
documentation_of: src/ctz.hpp
layout: document
redirect_from:
- /library/src/ctz.hpp
- /library/src/ctz.hpp.html
title: src/ctz.hpp
---
