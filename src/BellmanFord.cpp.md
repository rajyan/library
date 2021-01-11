---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/BellmanFord.cpp\"\n#include <vector>\n#include <algorithm>\n\
    \nusing namespace std;\n\ntemplate<class T>\nstruct Edge {\n    int from{}, to{};\n\
    \    T cost;\n    Edge() = default;\n    Edge(int from, int to, T cost) : from(from),\
    \ to(to), cost(cost) {}\n};\n\ntemplate<class T>\nvector<T> BellmanFord(const\
    \ vector<Edge<T>> &edges, const int V, const int st) {\n\n    const T inf = numeric_limits<T>::max()\
    \ / 2;\n    vector<T> cost(V, inf);\n    cost[st] = 0;\n    for (int i = 0; i\
    \ < V - 1; i++) {\n        for (const auto &e : edges) {\n            if (cost[e.from]\
    \ == inf) continue;\n            cost[e.to] = min(cost[e.to], cost[e.from] + e.cost);\n\
    \        }\n    }\n\n    for (int i = 0; i < V; i++) {\n        for (const auto\
    \ &e : edges) { // finding negative loop\n            if (cost[e.from] == inf)\
    \ continue;\n            if (cost[e.from] == -inf) cost[e.to] = -inf; // src is\
    \ nloop -> dst is nloop\n            else if (cost[e.to] > cost[e.from] + e.cost)\
    \ cost[e.to] = -inf; // chmin is possible -> nloop\n        }\n    }\n\n    return\
    \ cost;\n}\n"
  code: "#include <vector>\n#include <algorithm>\n\nusing namespace std;\n\ntemplate<class\
    \ T>\nstruct Edge {\n    int from{}, to{};\n    T cost;\n    Edge() = default;\n\
    \    Edge(int from, int to, T cost) : from(from), to(to), cost(cost) {}\n};\n\n\
    template<class T>\nvector<T> BellmanFord(const vector<Edge<T>> &edges, const int\
    \ V, const int st) {\n\n    const T inf = numeric_limits<T>::max() / 2;\n    vector<T>\
    \ cost(V, inf);\n    cost[st] = 0;\n    for (int i = 0; i < V - 1; i++) {\n  \
    \      for (const auto &e : edges) {\n            if (cost[e.from] == inf) continue;\n\
    \            cost[e.to] = min(cost[e.to], cost[e.from] + e.cost);\n        }\n\
    \    }\n\n    for (int i = 0; i < V; i++) {\n        for (const auto &e : edges)\
    \ { // finding negative loop\n            if (cost[e.from] == inf) continue;\n\
    \            if (cost[e.from] == -inf) cost[e.to] = -inf; // src is nloop -> dst\
    \ is nloop\n            else if (cost[e.to] > cost[e.from] + e.cost) cost[e.to]\
    \ = -inf; // chmin is possible -> nloop\n        }\n    }\n\n    return cost;\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: src/BellmanFord.cpp
  requiredBy: []
  timestamp: '2021-01-11 12:34:28+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/BellmanFord.cpp
layout: document
redirect_from:
- /library/src/BellmanFord.cpp
- /library/src/BellmanFord.cpp.html
title: src/BellmanFord.cpp
---
