---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/Edge.cpp
    title: src/Edge.cpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: test/aoj/GRL_1_A.cpp
    title: test/aoj/GRL_1_A.cpp
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/Dijkstra.cpp\"\n#include <vector>\n#include <algorithm>\n\
    #include <queue>\n\nusing namespace std;\n\n#line 1 \"src/Edge.cpp\"\ntemplate<class\
    \ T>\nstruct Edge {\n    int from{}, to{};\n    T cost;\n    Edge() = default;\n\
    \    Edge(int to, T cost) : to(to), cost(cost) {}\n    Edge(int from, int to,\
    \ T cost) : from(from), to(to), cost(cost) {}\n    bool operator>(const Edge &r)\
    \ const { return this->cost > r.cost; }\n};\n#line 8 \"src/Dijkstra.cpp\"\n\n\
    template<class T>\nvector<T> Dijkstra(const vector<vector<Edge<T>>> &edges, const\
    \ int st) {\n\n    const int V = (int)edges.size();\n    const T inf = numeric_limits<T>::max()\
    \ / 2;\n    vector<T> cost(V, inf);\n    cost[st] = 0;\n\n    priority_queue <Edge<T>,\
    \ vector<Edge<T>>, greater<Edge<T>>> pq;\n    pq.emplace(st, cost[st]);\n\n  \
    \  while (!pq.empty()) {\n\n        Edge<T> now(pq.top().to, pq.top().cost);\n\
    \        pq.pop();\n\n        if (cost[now.to] < now.cost) continue;\n       \
    \ for (const Edge<T> &e : edges[now.to]) {\n            T tmp_cost = now.cost\
    \ + e.cost;\n            if (cost[e.to] > tmp_cost) {\n                cost[e.to]\
    \ = tmp_cost;\n                pq.emplace(e.to, cost[e.to]);\n            }\n\
    \        }\n    }\n\n    return cost; // min cost to vertex idx from st\n}\n"
  code: "#include <vector>\n#include <algorithm>\n#include <queue>\n\nusing namespace\
    \ std;\n\n#include \"Edge.cpp\"\n\ntemplate<class T>\nvector<T> Dijkstra(const\
    \ vector<vector<Edge<T>>> &edges, const int st) {\n\n    const int V = (int)edges.size();\n\
    \    const T inf = numeric_limits<T>::max() / 2;\n    vector<T> cost(V, inf);\n\
    \    cost[st] = 0;\n\n    priority_queue <Edge<T>, vector<Edge<T>>, greater<Edge<T>>>\
    \ pq;\n    pq.emplace(st, cost[st]);\n\n    while (!pq.empty()) {\n\n        Edge<T>\
    \ now(pq.top().to, pq.top().cost);\n        pq.pop();\n\n        if (cost[now.to]\
    \ < now.cost) continue;\n        for (const Edge<T> &e : edges[now.to]) {\n  \
    \          T tmp_cost = now.cost + e.cost;\n            if (cost[e.to] > tmp_cost)\
    \ {\n                cost[e.to] = tmp_cost;\n                pq.emplace(e.to,\
    \ cost[e.to]);\n            }\n        }\n    }\n\n    return cost; // min cost\
    \ to vertex idx from st\n}\n"
  dependsOn:
  - src/Edge.cpp
  isVerificationFile: false
  path: src/Dijkstra.cpp
  requiredBy:
  - test/aoj/GRL_1_A.cpp
  timestamp: '2021-01-18 08:59:48+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/Dijkstra.cpp
layout: document
redirect_from:
- /library/src/Dijkstra.cpp
- /library/src/Dijkstra.cpp.html
title: src/Dijkstra.cpp
---
