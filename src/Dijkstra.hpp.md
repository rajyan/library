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
    path: test/aoj/GRL_1_A.test.cpp
    title: test/aoj/GRL_1_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/Dijkstra.hpp\"\n\n#include <vector>\n#include <algorithm>\n\
    #include <queue>\n\n#line 2 \"src/chmin.hpp\"\n\ntemplate<class T>\ninline bool\
    \ chmin(T &a, const T b) { return a > b && (a = b, true); }\n#line 2 \"src/Edge.hpp\"\
    \n\ntemplate<class T>\nstruct Edge {\n    int from{}, to{};\n    T cost;\n   \
    \ Edge() = default;\n    Edge(int to, T cost) : to(to), cost(move(cost)) {}\n\
    \    Edge(int from, int to, T cost) : from(from), to(to), cost(move(cost)) {}\n\
    \    bool operator>(const Edge &r) const { return this->cost > r.cost; }\n};\n\
    #line 9 \"src/Dijkstra.hpp\"\n\nusing namespace std;\n\ntemplate<class T>\nvector<T>\
    \ Dijkstra(const vector<vector<Edge<T>>> &edges, const int st) {\n\n    const\
    \ int V = (int)edges.size();\n    const T inf = numeric_limits<T>::max() / 2;\n\
    \    vector<T> cost(V, inf);\n    cost[st] = 0;\n\n    priority_queue <Edge<T>,\
    \ vector<Edge<T>>, greater<>> pq;\n    pq.emplace(st, cost[st]);\n\n    while\
    \ (!pq.empty()) {\n\n        Edge<T> now(pq.top().to, pq.top().cost);\n      \
    \  pq.pop();\n\n        if (cost[now.to] < now.cost) continue;\n        for (const\
    \ Edge<T> &e : edges[now.to]) {\n            T tmp_cost = now.cost + e.cost;\n\
    \            if (chmin(cost[e.to], tmp_cost)) {\n                pq.emplace(e.to,\
    \ cost[e.to]);\n            }\n        }\n    }\n\n    return cost; // min cost\
    \ to vertex idx from st\n}\n"
  code: "#pragma once\n\n#include <vector>\n#include <algorithm>\n#include <queue>\n\
    \n#include \"chmin.hpp\"\n#include \"Edge.hpp\"\n\nusing namespace std;\n\ntemplate<class\
    \ T>\nvector<T> Dijkstra(const vector<vector<Edge<T>>> &edges, const int st) {\n\
    \n    const int V = (int)edges.size();\n    const T inf = numeric_limits<T>::max()\
    \ / 2;\n    vector<T> cost(V, inf);\n    cost[st] = 0;\n\n    priority_queue <Edge<T>,\
    \ vector<Edge<T>>, greater<>> pq;\n    pq.emplace(st, cost[st]);\n\n    while\
    \ (!pq.empty()) {\n\n        Edge<T> now(pq.top().to, pq.top().cost);\n      \
    \  pq.pop();\n\n        if (cost[now.to] < now.cost) continue;\n        for (const\
    \ Edge<T> &e : edges[now.to]) {\n            T tmp_cost = now.cost + e.cost;\n\
    \            if (chmin(cost[e.to], tmp_cost)) {\n                pq.emplace(e.to,\
    \ cost[e.to]);\n            }\n        }\n    }\n\n    return cost; // min cost\
    \ to vertex idx from st\n}\n"
  dependsOn:
  - src/chmin.hpp
  - src/Edge.hpp
  isVerificationFile: false
  path: src/Dijkstra.hpp
  requiredBy: []
  timestamp: '2021-02-22 09:25:55+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/GRL_1_A.test.cpp
documentation_of: src/Dijkstra.hpp
layout: document
redirect_from:
- /library/src/Dijkstra.hpp
- /library/src/Dijkstra.hpp.html
title: src/Dijkstra.hpp
---
