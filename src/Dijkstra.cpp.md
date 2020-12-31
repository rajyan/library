---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/Dijkstra.cpp\"\n#include <vector>\n#include <algorithm>\n\
    #include <queue>\n\nusing namespace std;\n\ntemplate<class T>\nstruct Edge {\n\
    \tint to;\n\tT cost;\n\tEdge() {}\n\tEdge(int to, T cost) : to(to), cost(cost)\
    \ {}\n\tbool operator>(const Edge &r) const { return this->cost > r.cost; }\n\
    };\n\ntemplate<class T>\nvector<T> Dijkstra(const vector<vector<Edge<T>>> &edges,\
    \ const int st) {\n\n\tconst int V = (int)edges.size();\n\tconst T inf = numeric_limits<T>::max()\
    \ / 2;\n\tvector<T> cost(V, inf);\n\tcost[st] = 0;\n\n\tpriority_queue<Edge<T>,\
    \ vector<Edge<T>>, greater<Edge<T>>> pq;\n\tpq.emplace(st, cost[st]);\n\n\twhile\
    \ (!pq.empty()) {\n\n\t\tEdge<T> now(pq.top().to, pq.top().cost);\n\t\tpq.pop();\n\
    \n\t\tif (cost[now.to] < now.cost) continue;\n\t\tfor (const Edge<T> &e : edges[now.to])\
    \ {\n\t\t\tT tmp_cost = now.cost + e.cost;\n\t\t\tif (cost[e.to] > tmp_cost) {\n\
    \t\t\t\tcost[e.to] = tmp_cost;\n\t\t\t\tpq.emplace(e.to, cost[e.to]);\n\t\t\t\
    }\n\t\t}\n\t}\n\n\treturn cost; // min cost to vertex idx from st\n}\n"
  code: "#include <vector>\n#include <algorithm>\n#include <queue>\n\nusing namespace\
    \ std;\n\ntemplate<class T>\nstruct Edge {\n\tint to;\n\tT cost;\n\tEdge() {}\n\
    \tEdge(int to, T cost) : to(to), cost(cost) {}\n\tbool operator>(const Edge &r)\
    \ const { return this->cost > r.cost; }\n};\n\ntemplate<class T>\nvector<T> Dijkstra(const\
    \ vector<vector<Edge<T>>> &edges, const int st) {\n\n\tconst int V = (int)edges.size();\n\
    \tconst T inf = numeric_limits<T>::max() / 2;\n\tvector<T> cost(V, inf);\n\tcost[st]\
    \ = 0;\n\n\tpriority_queue<Edge<T>, vector<Edge<T>>, greater<Edge<T>>> pq;\n\t\
    pq.emplace(st, cost[st]);\n\n\twhile (!pq.empty()) {\n\n\t\tEdge<T> now(pq.top().to,\
    \ pq.top().cost);\n\t\tpq.pop();\n\n\t\tif (cost[now.to] < now.cost) continue;\n\
    \t\tfor (const Edge<T> &e : edges[now.to]) {\n\t\t\tT tmp_cost = now.cost + e.cost;\n\
    \t\t\tif (cost[e.to] > tmp_cost) {\n\t\t\t\tcost[e.to] = tmp_cost;\n\t\t\t\tpq.emplace(e.to,\
    \ cost[e.to]);\n\t\t\t}\n\t\t}\n\t}\n\n\treturn cost; // min cost to vertex idx\
    \ from st\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/Dijkstra.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:28:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/Dijkstra.cpp
layout: document
redirect_from:
- /library/src/Dijkstra.cpp
- /library/src/Dijkstra.cpp.html
title: src/Dijkstra.cpp
---
