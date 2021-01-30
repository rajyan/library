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
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL_1_A.test.cpp
    title: test/aoj/GRL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL_1_B.test.cpp
    title: test/aoj/GRL_1_B.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/Edge.hpp\"\ntemplate<class T>\nstruct Edge {\n    int\
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
  path: src/Edge.hpp
  requiredBy:
  - src/BellmanFord.hpp
  - src/Dijkstra.hpp
  timestamp: '2021-01-27 22:37:38+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/GRL_1_B.test.cpp
  - test/aoj/GRL_1_A.test.cpp
documentation_of: src/Edge.hpp
layout: document
redirect_from:
- /library/src/Edge.hpp
- /library/src/Edge.hpp.html
title: src/Edge.hpp
---
