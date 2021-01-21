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
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL_1_A.test.cpp
    title: test/aoj/GRL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL_1_B.test.cpp
    title: test/aoj/GRL_1_B.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/Edge.cpp\"\ntemplate<class T>\nstruct Edge {\n    int\
    \ from{}, to{};\n    T cost;\n    Edge() = default;\n    Edge(int to, T cost)\
    \ : to(to), cost(cost) {}\n    Edge(int from, int to, T cost) : from(from), to(to),\
    \ cost(cost) {}\n    bool operator>(const Edge &r) const { return this->cost >\
    \ r.cost; }\n};\n"
  code: "template<class T>\nstruct Edge {\n    int from{}, to{};\n    T cost;\n  \
    \  Edge() = default;\n    Edge(int to, T cost) : to(to), cost(cost) {}\n    Edge(int\
    \ from, int to, T cost) : from(from), to(to), cost(cost) {}\n    bool operator>(const\
    \ Edge &r) const { return this->cost > r.cost; }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/Edge.cpp
  requiredBy:
  - src/BellmanFord.cpp
  - src/Dijkstra.cpp
  timestamp: '2021-01-18 08:59:48+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/GRL_1_A.test.cpp
  - test/aoj/GRL_1_B.test.cpp
documentation_of: src/Edge.cpp
layout: document
redirect_from:
- /library/src/Edge.cpp
- /library/src/Edge.cpp.html
title: src/Edge.cpp
---
