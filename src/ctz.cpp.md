---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/popcount.cpp
    title: src/popcount.cpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/Prime.cpp
    title: src/Prime.cpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/own/RandNum_ctz.test.cpp
    title: test/own/RandNum_ctz.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yosupo/enumerate_primes.test.cpp
    title: test/yosupo/enumerate_primes.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/ctz.cpp\"\n\n#line 1 \"src/popcount.cpp\"\n\nusing lint\
    \ = long long;\n\ninline int popcount(lint n) {\n    n = (n & 0x5555555555555555)\
    \ + (n >> 1 & 0x5555555555555555);\n    n = (n & 0x3333333333333333) + (n >> 2\
    \ & 0x3333333333333333);\n    n = (n & 0x0f0f0f0f0f0f0f0f) + (n >> 4 & 0x0f0f0f0f0f0f0f0f);\n\
    \    n = (n & 0x00ff00ff00ff00ff) + (n >> 8 & 0x00ff00ff00ff00ff);\n    n = (n\
    \ & 0x0000ffff0000ffff) + (n >> 16 & 0x0000ffff0000ffff);\n    n = (n & 0x00000000ffffffff)\
    \ + (n >> 32 & 0x00000000ffffffff);\n    return n;\n}\n#line 3 \"src/ctz.cpp\"\
    \n\nusing lint = long long;\n\ninline int ctz(lint n) {\n    return popcount(~n\
    \ & (n - 1));\n}\n"
  code: "\n#include \"popcount.cpp\"\n\nusing lint = long long;\n\ninline int ctz(lint\
    \ n) {\n    return popcount(~n & (n - 1));\n}"
  dependsOn:
  - src/popcount.cpp
  isVerificationFile: false
  path: src/ctz.cpp
  requiredBy:
  - src/Prime.cpp
  timestamp: '2021-01-22 23:13:50+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/enumerate_primes.test.cpp
  - test/own/RandNum_ctz.test.cpp
documentation_of: src/ctz.cpp
layout: document
redirect_from:
- /library/src/ctz.cpp
- /library/src/ctz.cpp.html
title: src/ctz.cpp
---
