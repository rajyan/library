---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/TopologicalSort.hpp\"\n\n#include <iostream>\n#include\
    \ <vector>\n#include <queue>\n#include <algorithm>\n\nusing namespace std;\n\n\
    class TopologicalSort {\npublic:\n    explicit TopologicalSort(int n) : V(n),\
    \ edges(n), used(n) {}\n    explicit TopologicalSort(vector<vector<int>> &edges)\
    \ : V(edges.size()), used(edges.size()) { this->edges = edges; }\n\n    void add_edge(int\
    \ from, int to) { edges[from].emplace_back(to); }\n\n    vector<int> build() {\n\
    \n        vector<int> res, in(V);\n        for (int i = 0; i < V; i++) for (const\
    \ auto &e : edges[i]) in[e]++;\n\n        res.reserve(V);\n        queue<int>\
    \ que;\n        for (int i = 0; i < V; i++) {\n            if (in[i] == 0 && !used[i])\
    \ {\n                used[i] = 1;\n                que.emplace(i);\n         \
    \   }\n        }\n        while (!que.empty()) {\n            int now = que.front();\n\
    \            que.pop();\n            res.emplace_back(now);\n            for (const\
    \ auto &e : edges[now]) {\n                in[e]--;\n                if (in[e]\
    \ == 0) {\n                    if (used[e]) return vector<int>(); // unable to\
    \ sort\n                    used[e] = used[now] + 1;\n                    que.emplace(e);\n\
    \                }\n            }\n        }\n\n        return res;\n    }\n\n\
    \    [[nodiscard]] int longest_path() {\n        if (none_of(used.begin(), used.end(),\
    \ [](int u) { return u > 0; })) build();\n        return *max_element(used.begin(),\
    \ used.end()) - 1;\n    }\n\nprivate:\n    int V;\n    vector<vector<int>> edges;\n\
    \    vector<int> used;\n};\n"
  code: "#pragma once\n\n#include <iostream>\n#include <vector>\n#include <queue>\n\
    #include <algorithm>\n\nusing namespace std;\n\nclass TopologicalSort {\npublic:\n\
    \    explicit TopologicalSort(int n) : V(n), edges(n), used(n) {}\n    explicit\
    \ TopologicalSort(vector<vector<int>> &edges) : V(edges.size()), used(edges.size())\
    \ { this->edges = edges; }\n\n    void add_edge(int from, int to) { edges[from].emplace_back(to);\
    \ }\n\n    vector<int> build() {\n\n        vector<int> res, in(V);\n        for\
    \ (int i = 0; i < V; i++) for (const auto &e : edges[i]) in[e]++;\n\n        res.reserve(V);\n\
    \        queue<int> que;\n        for (int i = 0; i < V; i++) {\n            if\
    \ (in[i] == 0 && !used[i]) {\n                used[i] = 1;\n                que.emplace(i);\n\
    \            }\n        }\n        while (!que.empty()) {\n            int now\
    \ = que.front();\n            que.pop();\n            res.emplace_back(now);\n\
    \            for (const auto &e : edges[now]) {\n                in[e]--;\n  \
    \              if (in[e] == 0) {\n                    if (used[e]) return vector<int>();\
    \ // unable to sort\n                    used[e] = used[now] + 1;\n          \
    \          que.emplace(e);\n                }\n            }\n        }\n\n  \
    \      return res;\n    }\n\n    [[nodiscard]] int longest_path() {\n        if\
    \ (none_of(used.begin(), used.end(), [](int u) { return u > 0; })) build();\n\
    \        return *max_element(used.begin(), used.end()) - 1;\n    }\n\nprivate:\n\
    \    int V;\n    vector<vector<int>> edges;\n    vector<int> used;\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/TopologicalSort.hpp
  requiredBy: []
  timestamp: '2021-02-04 09:18:49+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/TopologicalSort.hpp
layout: document
redirect_from:
- /library/src/TopologicalSort.hpp
- /library/src/TopologicalSort.hpp.html
title: src/TopologicalSort.hpp
---
