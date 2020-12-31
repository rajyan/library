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
    \nusing namespace std;\n\ntemplate<class T>\nstruct Edge {\n\tint from, to;\n\t\
    T cost;\n\tEdge() {}\n\tEdge(int from, int to, T cost) : from(from), to(to), cost(cost)\
    \ {}\n};\n\ntemplate<class T>\nvector<T> BellmanFord(const vector<Edge<T>> &edges,\
    \ const int V, const int st) {\n\n\tconst T inf = numeric_limits<T>::max() / 2;\n\
    \tvector<T> cost(V, inf);\n\tcost[st] = 0;\n\tfor (int i = 0; i < V - 1; i++)\
    \ {\n\t\tfor (const auto &e : edges) {\n\t\t\tif (cost[e.from] == inf) continue;\n\
    \t\t\tcost[e.to] = min(cost[e.to], cost[e.from] + e.cost);\n\t\t}\n\t}\n\n\tfor\
    \ (int i = 0; i < V; i++) {\n\t\tfor (const auto &e : edges) { // finding negative\
    \ loop\n\t\t\tif (cost[e.from] == inf) continue;\n\t\t\tif (cost[e.from] == -inf)\
    \ cost[e.to] = -inf; // src is nloop -> dst is nloop\n\t\t\telse if (cost[e.to]\
    \ > cost[e.from] + e.cost) cost[e.to] = -inf; // chmin is possible -> nloop\n\t\
    \t}\n\t}\n\n\t\n\treturn cost;\n}\n"
  code: "#include <vector>\n#include <algorithm>\n\nusing namespace std;\n\ntemplate<class\
    \ T>\nstruct Edge {\n\tint from, to;\n\tT cost;\n\tEdge() {}\n\tEdge(int from,\
    \ int to, T cost) : from(from), to(to), cost(cost) {}\n};\n\ntemplate<class T>\n\
    vector<T> BellmanFord(const vector<Edge<T>> &edges, const int V, const int st)\
    \ {\n\n\tconst T inf = numeric_limits<T>::max() / 2;\n\tvector<T> cost(V, inf);\n\
    \tcost[st] = 0;\n\tfor (int i = 0; i < V - 1; i++) {\n\t\tfor (const auto &e :\
    \ edges) {\n\t\t\tif (cost[e.from] == inf) continue;\n\t\t\tcost[e.to] = min(cost[e.to],\
    \ cost[e.from] + e.cost);\n\t\t}\n\t}\n\n\tfor (int i = 0; i < V; i++) {\n\t\t\
    for (const auto &e : edges) { // finding negative loop\n\t\t\tif (cost[e.from]\
    \ == inf) continue;\n\t\t\tif (cost[e.from] == -inf) cost[e.to] = -inf; // src\
    \ is nloop -> dst is nloop\n\t\t\telse if (cost[e.to] > cost[e.from] + e.cost)\
    \ cost[e.to] = -inf; // chmin is possible -> nloop\n\t\t}\n\t}\n\n\t\n\treturn\
    \ cost;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/BellmanFord.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:28:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/BellmanFord.cpp
layout: document
redirect_from:
- /library/src/BellmanFord.cpp
- /library/src/BellmanFord.cpp.html
title: src/BellmanFord.cpp
---
