---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/Edge.hpp
    title: src/Edge.hpp
  - icon: ':heavy_check_mark:'
    path: src/chmin.hpp
    title: src/chmin.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL_1_B.test.cpp
    title: test/aoj/GRL_1_B.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/BellmanFord.hpp\"\n\n#include <vector>\n#include <algorithm>\n\
    \n#line 2 \"src/chmin.hpp\"\n\ntemplate<class T>\ninline bool chmin(T &a, const\
    \ T b) { return a > b && (a = b, true); }\n#line 2 \"src/Edge.hpp\"\n\ntemplate<class\
    \ T>\nstruct Edge {\n    int from{}, to{};\n    T cost;\n    Edge() = default;\n\
    \    Edge(int to, T cost) : to(to), cost(move(cost)) {}\n    Edge(int from, int\
    \ to, T cost) : from(from), to(to), cost(move(cost)) {}\n    bool operator>(const\
    \ Edge &r) const { return this->cost > r.cost; }\n};\n#line 8 \"src/BellmanFord.hpp\"\
    \n\nusing namespace std;\n\ntemplate<class T>\nvector<T> BellmanFord(const vector<Edge<T>>\
    \ &edges, const int V, const int st) {\n\n    const T inf = numeric_limits<T>::max()\
    \ / 2;\n    vector<T> cost(V, inf);\n    cost[st] = 0;\n    for (int i = 0; i\
    \ < V - 1; i++) {\n        for (const auto &e : edges) {\n            if (cost[e.from]\
    \ == inf) continue;\n            chmin(cost[e.to], cost[e.from] + e.cost);\n \
    \       }\n    }\n\n    for (int i = 0; i < V; i++) {\n        for (const auto\
    \ &e : edges) { // finding negative loop\n            if (cost[e.from] == inf)\
    \ continue;\n            if (cost[e.from] == -inf) cost[e.to] = -inf; // src is\
    \ nloop -> dst is nloop\n            else if (cost[e.to] > cost[e.from] + e.cost)\
    \ cost[e.to] = -inf; // chmin is possible -> nloop\n        }\n    }\n\n    return\
    \ cost;\n}\n"
  code: "#pragma once\n\n#include <vector>\n#include <algorithm>\n\n#include \"chmin.hpp\"\
    \n#include \"Edge.hpp\"\n\nusing namespace std;\n\ntemplate<class T>\nvector<T>\
    \ BellmanFord(const vector<Edge<T>> &edges, const int V, const int st) {\n\n \
    \   const T inf = numeric_limits<T>::max() / 2;\n    vector<T> cost(V, inf);\n\
    \    cost[st] = 0;\n    for (int i = 0; i < V - 1; i++) {\n        for (const\
    \ auto &e : edges) {\n            if (cost[e.from] == inf) continue;\n       \
    \     chmin(cost[e.to], cost[e.from] + e.cost);\n        }\n    }\n\n    for (int\
    \ i = 0; i < V; i++) {\n        for (const auto &e : edges) { // finding negative\
    \ loop\n            if (cost[e.from] == inf) continue;\n            if (cost[e.from]\
    \ == -inf) cost[e.to] = -inf; // src is nloop -> dst is nloop\n            else\
    \ if (cost[e.to] > cost[e.from] + e.cost) cost[e.to] = -inf; // chmin is possible\
    \ -> nloop\n        }\n    }\n\n    return cost;\n}\n"
  dependsOn:
  - src/chmin.hpp
  - src/Edge.hpp
  isVerificationFile: false
  path: src/BellmanFord.hpp
  requiredBy: []
  timestamp: '2021-02-22 09:25:55+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/GRL_1_B.test.cpp
documentation_of: src/BellmanFord.hpp
layout: document
redirect_from:
- /library/src/BellmanFord.hpp
- /library/src/BellmanFord.hpp.html
title: src/BellmanFord.hpp
---
