---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/Dijkstra.cpp
    title: src/Dijkstra.cpp
  - icon: ':warning:'
    path: src/Edge.cpp
    title: src/Edge.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A
  bundledCode: "#line 1 \"test/aoj/GRL_1_A.cpp\"\n\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A\"\
    \n\n#include <iostream>\n#include <iomanip>\n#include <string>\n#include <vector>\n\
    \nusing namespace std;\nusing lint = long long;\nconstexpr lint LINF = 1LL <<\
    \ 60;\n\n#line 2 \"src/Dijkstra.cpp\"\n#include <algorithm>\n#include <queue>\n\
    \nusing namespace std;\n\n#line 1 \"src/Edge.cpp\"\ntemplate<class T>\nstruct\
    \ Edge {\n    int from{}, to{};\n    T cost;\n    Edge() = default;\n    Edge(int\
    \ to, T cost) : to(to), cost(cost) {}\n    Edge(int from, int to, T cost) : from(from),\
    \ to(to), cost(cost) {}\n    bool operator>(const Edge &r) const { return this->cost\
    \ > r.cost; }\n};\n#line 8 \"src/Dijkstra.cpp\"\n\ntemplate<class T>\nvector<T>\
    \ Dijkstra(const vector<vector<Edge<T>>> &edges, const int st) {\n\n    const\
    \ int V = (int)edges.size();\n    const T inf = numeric_limits<T>::max() / 2;\n\
    \    vector<T> cost(V, inf);\n    cost[st] = 0;\n\n    priority_queue <Edge<T>,\
    \ vector<Edge<T>>, greater<Edge<T>>> pq;\n    pq.emplace(st, cost[st]);\n\n  \
    \  while (!pq.empty()) {\n\n        Edge<T> now(pq.top().to, pq.top().cost);\n\
    \        pq.pop();\n\n        if (cost[now.to] < now.cost) continue;\n       \
    \ for (const Edge<T> &e : edges[now.to]) {\n            T tmp_cost = now.cost\
    \ + e.cost;\n            if (cost[e.to] > tmp_cost) {\n                cost[e.to]\
    \ = tmp_cost;\n                pq.emplace(e.to, cost[e.to]);\n            }\n\
    \        }\n    }\n\n    return cost; // min cost to vertex idx from st\n}\n#line\
    \ 14 \"test/aoj/GRL_1_A.cpp\"\n\nstruct init {\n    init() {\n        cin.tie(nullptr);\n\
    \        ios::sync_with_stdio(false);\n        cout << fixed << setprecision(10);\n\
    \    }\n} init_;\n\nint main() {\n\n    int N, M, s, t;\n    cin >> N >> M >>\
    \ s;\n\n    vector<vector<Edge<lint>>> edges(N);\n    for (int i = 0; i < M; i++)\
    \ {\n        int u, v, c;\n        cin >> u >> v >> c;\n        edges[u].emplace_back(v,\
    \ c);\n    }\n\n    for (const auto &cost : Dijkstra(edges, s)) {\n        cout\
    \ << (cost < LINF ? to_string(cost) : \"INF\") << '\\n';\n    }\n\n    return\
    \ 0;\n}\n"
  code: "\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A\"\
    \n\n#include <iostream>\n#include <iomanip>\n#include <string>\n#include <vector>\n\
    \nusing namespace std;\nusing lint = long long;\nconstexpr lint LINF = 1LL <<\
    \ 60;\n\n#include \"../../src/Dijkstra.cpp\"\n\nstruct init {\n    init() {\n\
    \        cin.tie(nullptr);\n        ios::sync_with_stdio(false);\n        cout\
    \ << fixed << setprecision(10);\n    }\n} init_;\n\nint main() {\n\n    int N,\
    \ M, s, t;\n    cin >> N >> M >> s;\n\n    vector<vector<Edge<lint>>> edges(N);\n\
    \    for (int i = 0; i < M; i++) {\n        int u, v, c;\n        cin >> u >>\
    \ v >> c;\n        edges[u].emplace_back(v, c);\n    }\n\n    for (const auto\
    \ &cost : Dijkstra(edges, s)) {\n        cout << (cost < LINF ? to_string(cost)\
    \ : \"INF\") << '\\n';\n    }\n\n    return 0;\n}\n"
  dependsOn:
  - src/Dijkstra.cpp
  - src/Edge.cpp
  isVerificationFile: false
  path: test/aoj/GRL_1_A.cpp
  requiredBy: []
  timestamp: '2021-01-18 09:18:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: test/aoj/GRL_1_A.cpp
layout: document
redirect_from:
- /library/test/aoj/GRL_1_A.cpp
- /library/test/aoj/GRL_1_A.cpp.html
title: test/aoj/GRL_1_A.cpp
---
