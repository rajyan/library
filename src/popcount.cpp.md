---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/Prime.cpp
    title: src/Prime.cpp
  - icon: ':heavy_check_mark:'
    path: src/ctz.cpp
    title: src/ctz.cpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/own/RandNum_ctz.test.cpp
    title: test/own/RandNum_ctz.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/own/RandNum_popcount.test.cpp
    title: test/own/RandNum_popcount.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yosupo/enumerate_primes.test.cpp
    title: test/yosupo/enumerate_primes.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/popcount.cpp\"\n\nusing lint = long long;\n\ninline\
    \ int popcount(lint n) {\n    n = (n & 0x5555555555555555) + (n >> 1 & 0x5555555555555555);\n\
    \    n = (n & 0x3333333333333333) + (n >> 2 & 0x3333333333333333);\n    n = (n\
    \ & 0x0f0f0f0f0f0f0f0f) + (n >> 4 & 0x0f0f0f0f0f0f0f0f);\n    n = (n & 0x00ff00ff00ff00ff)\
    \ + (n >> 8 & 0x00ff00ff00ff00ff);\n    n = (n & 0x0000ffff0000ffff) + (n >> 16\
    \ & 0x0000ffff0000ffff);\n    n = (n & 0x00000000ffffffff) + (n >> 32 & 0x00000000ffffffff);\n\
    \    return n;\n}\n"
  code: "\nusing lint = long long;\n\ninline int popcount(lint n) {\n    n = (n &\
    \ 0x5555555555555555) + (n >> 1 & 0x5555555555555555);\n    n = (n & 0x3333333333333333)\
    \ + (n >> 2 & 0x3333333333333333);\n    n = (n & 0x0f0f0f0f0f0f0f0f) + (n >> 4\
    \ & 0x0f0f0f0f0f0f0f0f);\n    n = (n & 0x00ff00ff00ff00ff) + (n >> 8 & 0x00ff00ff00ff00ff);\n\
    \    n = (n & 0x0000ffff0000ffff) + (n >> 16 & 0x0000ffff0000ffff);\n    n = (n\
    \ & 0x00000000ffffffff) + (n >> 32 & 0x00000000ffffffff);\n    return n;\n}"
  dependsOn: []
  isVerificationFile: false
  path: src/popcount.cpp
  requiredBy:
  - src/ctz.cpp
  - src/Prime.cpp
  timestamp: '2021-01-01 20:28:23+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/enumerate_primes.test.cpp
  - test/own/RandNum_popcount.test.cpp
  - test/own/RandNum_ctz.test.cpp
documentation_of: src/popcount.cpp
layout: document
redirect_from:
- /library/src/popcount.cpp
- /library/src/popcount.cpp.html
title: src/popcount.cpp
---
