---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/BellmanFord.cpp
    title: src/BellmanFord.cpp
  - icon: ':x:'
    path: src/Dijkstra.cpp
    title: src/Dijkstra.cpp
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/aoj/GRL_1_A.test.cpp
    title: test/aoj/GRL_1_A.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
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
  - src/Dijkstra.cpp
  - src/BellmanFord.cpp
  timestamp: '2021-01-18 09:44:26+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/aoj/GRL_1_A.test.cpp
documentation_of: src/chmin.cpp
layout: document
redirect_from:
- /library/src/chmin.cpp
- /library/src/chmin.cpp.html
title: src/chmin.cpp
---
