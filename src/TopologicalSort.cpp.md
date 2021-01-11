---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/TopologicalSort.cpp\"\n#include <cassert>\n#include\
    \ <cstdio>\n#include <cmath>\n#include <iostream>\n#include <vector>\n#include\
    \ <queue>\n\nusing namespace std;\n\nclass TopologicalSort {\nprivate:\n    int\
    \ V;\n    vector<vector<int>> edges;\n    vector<int> used;\n\npublic:\n    TopologicalSort(int\
    \ n) : V(n), edges(n), used(n) {}\n    TopologicalSort(vector<vector<int>> &edges)\
    \ : V(edges.size()), used(edges.size()) { this->edges = edges; }\n\n    void add_edge(int\
    \ from, int to) { edges[from].emplace_back(to); }\n\n    vector<int> build() {\n\
    \n        vector<int> res, in(V);\n        for (int i = 0; i < V; i++) for (const\
    \ auto &e : edges[i]) in[e]++;\n\n        res.reserve(V);\n        queue<int>\
    \ que;\n        for (int i = 0; i < V; i++) {\n            if (in[i] == 0 && !used[i])\
    \ {\n                used[i] = 1;\n                que.emplace(i);\n         \
    \   }\n        }\n        while (!que.empty()) {\n            int now = que.front();\n\
    \            DMP(now, in);\n            que.pop();\n            res.emplace_back(now);\n\
    \            for (const auto &e : edges[now]) {\n                in[e]--;\n  \
    \              if (in[e] == 0) {\n                    if (used[e]) return vector<int>();\
    \ // unable to sort\n                    used[e] = used[now] + 1;\n          \
    \          que.emplace(e);\n                }\n            }\n        }\n\n  \
    \      return res;\n    }\n\n    int longest_path() {\n        if (none_of(used.begin(),\
    \ used.end(), [](int u) { return u > 0; })) build();\n        return *max_element(used.begin(),\
    \ used.end()) - 1;\n    }\n\n};\n"
  code: "#include <cassert>\n#include <cstdio>\n#include <cmath>\n#include <iostream>\n\
    #include <vector>\n#include <queue>\n\nusing namespace std;\n\nclass TopologicalSort\
    \ {\nprivate:\n    int V;\n    vector<vector<int>> edges;\n    vector<int> used;\n\
    \npublic:\n    TopologicalSort(int n) : V(n), edges(n), used(n) {}\n    TopologicalSort(vector<vector<int>>\
    \ &edges) : V(edges.size()), used(edges.size()) { this->edges = edges; }\n\n \
    \   void add_edge(int from, int to) { edges[from].emplace_back(to); }\n\n    vector<int>\
    \ build() {\n\n        vector<int> res, in(V);\n        for (int i = 0; i < V;\
    \ i++) for (const auto &e : edges[i]) in[e]++;\n\n        res.reserve(V);\n  \
    \      queue<int> que;\n        for (int i = 0; i < V; i++) {\n            if\
    \ (in[i] == 0 && !used[i]) {\n                used[i] = 1;\n                que.emplace(i);\n\
    \            }\n        }\n        while (!que.empty()) {\n            int now\
    \ = que.front();\n            DMP(now, in);\n            que.pop();\n        \
    \    res.emplace_back(now);\n            for (const auto &e : edges[now]) {\n\
    \                in[e]--;\n                if (in[e] == 0) {\n               \
    \     if (used[e]) return vector<int>(); // unable to sort\n                 \
    \   used[e] = used[now] + 1;\n                    que.emplace(e);\n          \
    \      }\n            }\n        }\n\n        return res;\n    }\n\n    int longest_path()\
    \ {\n        if (none_of(used.begin(), used.end(), [](int u) { return u > 0; }))\
    \ build();\n        return *max_element(used.begin(), used.end()) - 1;\n    }\n\
    \n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/TopologicalSort.cpp
  requiredBy: []
  timestamp: '2021-01-11 11:52:04+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/TopologicalSort.cpp
layout: document
redirect_from:
- /library/src/TopologicalSort.cpp
- /library/src/TopologicalSort.cpp.html
title: src/TopologicalSort.cpp
---
