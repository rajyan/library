---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/BellmanFord.cpp
    title: src/BellmanFord.cpp
  - icon: ':heavy_check_mark:'
    path: src/Dijkstra.cpp
    title: src/Dijkstra.cpp
  - icon: ':heavy_check_mark:'
    path: src/FloydWarshall.cpp
    title: src/FloydWarshall.cpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL_1_A.test.cpp
    title: test/aoj/GRL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL_1_B.test.cpp
    title: test/aoj/GRL_1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL_1_C.test.cpp
    title: test/aoj/GRL_1_C.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: '#line 1 "src/chmin.cpp"

    template<class T>

    inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }

    '
  code: 'template<class T>

    inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }

    '
  dependsOn: []
  isVerificationFile: false
  path: src/chmin.cpp
  requiredBy:
  - src/BellmanFord.cpp
  - src/Dijkstra.cpp
  - src/FloydWarshall.cpp
  timestamp: '2021-01-18 09:44:26+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/GRL_1_A.test.cpp
  - test/aoj/GRL_1_B.test.cpp
  - test/aoj/GRL_1_C.test.cpp
documentation_of: src/chmin.cpp
layout: document
redirect_from:
- /library/src/chmin.cpp
- /library/src/chmin.cpp.html
title: src/chmin.cpp
---
