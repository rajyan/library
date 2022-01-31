---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/BellmanFord.hpp
    title: src/BellmanFord.hpp
  - icon: ':heavy_check_mark:'
    path: src/Dijkstra.hpp
    title: src/Dijkstra.hpp
  - icon: ':heavy_check_mark:'
    path: src/FloydWarshall.hpp
    title: src/FloydWarshall.hpp
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
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: '#line 2 "src/chmin.hpp"


    template<class T>

    inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }

    '
  code: '#pragma once


    template<class T>

    inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }

    '
  dependsOn: []
  isVerificationFile: false
  path: src/chmin.hpp
  requiredBy:
  - src/BellmanFord.hpp
  - src/Dijkstra.hpp
  - src/FloydWarshall.hpp
  timestamp: '2021-01-31 19:19:57+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/GRL_1_B.test.cpp
  - test/aoj/GRL_1_A.test.cpp
  - test/aoj/GRL_1_C.test.cpp
documentation_of: src/chmin.hpp
layout: document
redirect_from:
- /library/src/chmin.hpp
- /library/src/chmin.hpp.html
title: src/chmin.hpp
---
