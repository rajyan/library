---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/BellmanFord.cpp
    title: src/BellmanFord.cpp
  - icon: ':warning:'
    path: src/Dijkstra.cpp
    title: src/Dijkstra.cpp
  - icon: ':warning:'
    path: test/aoj/GRL_1_A.cpp
    title: test/aoj/GRL_1_A.cpp
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
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
  - src/Dijkstra.cpp
  - src/BellmanFord.cpp
  - test/aoj/GRL_1_A.cpp
  timestamp: '2021-01-18 08:59:48+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/Edge.cpp
layout: document
redirect_from:
- /library/src/Edge.cpp
- /library/src/Edge.cpp.html
title: src/Edge.cpp
---
