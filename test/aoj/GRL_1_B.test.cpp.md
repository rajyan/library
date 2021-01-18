---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/BellmanFord.cpp
    title: src/BellmanFord.cpp
  - icon: ':heavy_check_mark:'
    path: src/Edge.cpp
    title: src/Edge.cpp
  - icon: ':heavy_check_mark:'
    path: src/chmin.cpp
    title: src/chmin.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_B
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_B
  bundledCode: "#line 1 \"test/aoj/GRL_1_B.test.cpp\"\n\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_B\"\
    \n\n#include <iostream>\n#include <iomanip>\n#include <string>\n#include <vector>\n\
    #include <algorithm>\n\nusing namespace std;\nusing lint = long long;\nconstexpr\
    \ lint LINF = 1LL << 60;\n\n#line 3 \"src/BellmanFord.cpp\"\n\nusing namespace\
    \ std;\n\n#line 1 \"src/chmin.cpp\"\ntemplate<class T>\ninline bool chmin(T &a,\
    \ const T b) { return a > b && (a = b, true); }\n#line 1 \"src/Edge.cpp\"\ntemplate<class\
    \ T>\nstruct Edge {\n    int from{}, to{};\n    T cost;\n    Edge() = default;\n\
    \    Edge(int to, T cost) : to(to), cost(cost) {}\n    Edge(int from, int to,\
    \ T cost) : from(from), to(to), cost(cost) {}\n    bool operator>(const Edge &r)\
    \ const { return this->cost > r.cost; }\n};\n#line 8 \"src/BellmanFord.cpp\"\n\
    \ntemplate<class T>\nvector<T> BellmanFord(const vector<Edge<T>> &edges, const\
    \ int V, const int st) {\n\n    const T inf = numeric_limits<T>::max() / 2;\n\
    \    vector<T> cost(V, inf);\n    cost[st] = 0;\n    for (int i = 0; i < V - 1;\
    \ i++) {\n        for (const auto &e : edges) {\n            if (cost[e.from]\
    \ == inf) continue;\n            chmin(cost[e.to], cost[e.from] + e.cost);\n \
    \       }\n    }\n\n    for (int i = 0; i < V; i++) {\n        for (const auto\
    \ &e : edges) { // finding negative loop\n            if (cost[e.from] == inf)\
    \ continue;\n            if (cost[e.from] == -inf) cost[e.to] = -inf; // src is\
    \ nloop -> dst is nloop\n            else if (cost[e.to] > cost[e.from] + e.cost)\
    \ cost[e.to] = -inf; // chmin is possible -> nloop\n        }\n    }\n\n    return\
    \ cost;\n}\n#line 15 \"test/aoj/GRL_1_B.test.cpp\"\n\nstruct init {\n    init()\
    \ {\n        cin.tie(nullptr);\n        ios::sync_with_stdio(false);\n       \
    \ cout << fixed << setprecision(10);\n    }\n} init_;\n\nint main() {\n\n    int\
    \ N, M, s;\n    cin >> N >> M >> s;\n\n    vector<Edge<lint>> edges;\n    for\
    \ (int i = 0; i < M; i++) {\n        int u, v, c;\n        cin >> u >> v >> c;\n\
    \        edges.emplace_back(u, v, c);\n    }\n\n    auto costs = BellmanFord(edges,\
    \ N, s);\n    if (any_of(costs.begin(), costs.end(), [&](auto &c) { return c <\
    \ -LINF; })) {\n        cout << \"NEGATIVE CYCLE\\n\";\n        return 0;\n  \
    \  }\n    for (const auto &cost : costs) {\n        cout << (cost < LINF ? to_string(cost)\
    \ : \"INF\") << '\\n';\n    }\n\n    return 0;\n}\n"
  code: "\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_B\"\
    \n\n#include <iostream>\n#include <iomanip>\n#include <string>\n#include <vector>\n\
    #include <algorithm>\n\nusing namespace std;\nusing lint = long long;\nconstexpr\
    \ lint LINF = 1LL << 60;\n\n#include \"../../src/BellmanFord.cpp\"\n\nstruct init\
    \ {\n    init() {\n        cin.tie(nullptr);\n        ios::sync_with_stdio(false);\n\
    \        cout << fixed << setprecision(10);\n    }\n} init_;\n\nint main() {\n\
    \n    int N, M, s;\n    cin >> N >> M >> s;\n\n    vector<Edge<lint>> edges;\n\
    \    for (int i = 0; i < M; i++) {\n        int u, v, c;\n        cin >> u >>\
    \ v >> c;\n        edges.emplace_back(u, v, c);\n    }\n\n    auto costs = BellmanFord(edges,\
    \ N, s);\n    if (any_of(costs.begin(), costs.end(), [&](auto &c) { return c <\
    \ -LINF; })) {\n        cout << \"NEGATIVE CYCLE\\n\";\n        return 0;\n  \
    \  }\n    for (const auto &cost : costs) {\n        cout << (cost < LINF ? to_string(cost)\
    \ : \"INF\") << '\\n';\n    }\n\n    return 0;\n}\n"
  dependsOn:
  - src/BellmanFord.cpp
  - src/chmin.cpp
  - src/Edge.cpp
  isVerificationFile: true
  path: test/aoj/GRL_1_B.test.cpp
  requiredBy: []
  timestamp: '2021-01-18 11:00:53+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/GRL_1_B.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/GRL_1_B.test.cpp
- /verify/test/aoj/GRL_1_B.test.cpp.html
title: test/aoj/GRL_1_B.test.cpp
---
