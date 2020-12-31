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
    \ <queue>\n\nusing namespace std;\n\nclass Topological_sort {\nprivate:\n\tint\
    \ V;\n\tvector<vector<int>> edges;\n\tvector<int> used;\n\npublic:\n\tTopological_sort(int\
    \ n) :V(n), edges(n), used(n) {}\n\tTopological_sort(vector<vector<int>> &edges)\
    \ :V(edges.size()), used(edges.size()) { this->edges = edges; }\n\n\tvoid add_edge(int\
    \ from, int to) { edges[from].emplace_back(to); }\n\n\tvector<int> build() {\n\
    \n\t\tvector<int> res, in(V);\n\t\tfor (int i = 0; i < V; i++) for (const auto\
    \ &e : edges[i]) in[e]++;\n\n\t\tres.reserve(V);\n\t\tqueue<int> que;\n\t\tfor\
    \ (int i = 0; i < V; i++) {\n\t\t\tif (in[i] == 0 && !used[i]) {\n\t\t\t\tused[i]\
    \ = 1;\n\t\t\t\tque.emplace(i);\n\t\t\t}\n\t\t}\n\t\twhile (!que.empty()) {\n\t\
    \t\tint now = que.front();\n\t\t\tDMP(now, in);\n\t\t\tque.pop();\n\t\t\tres.emplace_back(now);\n\
    \t\t\tfor (const auto &e : edges[now]) {\n\t\t\t\tin[e]--;\n\t\t\t\tif (in[e]\
    \ == 0) {\n\t\t\t\t\tif (used[e]) return vector<int>(); // unable to sort\n\t\t\
    \t\t\tused[e] = used[now] + 1;\n\t\t\t\t\tque.emplace(e);\n\t\t\t\t}\n\t\t\t}\n\
    \t\t}\n\n\t\treturn res;\n\t}\n\n\tint longest_path() {\n\t\tif (none_of(used.begin(),\
    \ used.end(), [](int u) { return u > 0; })) build();\n\t\treturn *max_element(used.begin(),\
    \ used.end()) - 1;\n\t}\n\n};\n"
  code: "#include <cassert>\n#include <cstdio>\n#include <cmath>\n#include <iostream>\n\
    #include <vector>\n#include <queue>\n\nusing namespace std;\n\nclass Topological_sort\
    \ {\nprivate:\n\tint V;\n\tvector<vector<int>> edges;\n\tvector<int> used;\n\n\
    public:\n\tTopological_sort(int n) :V(n), edges(n), used(n) {}\n\tTopological_sort(vector<vector<int>>\
    \ &edges) :V(edges.size()), used(edges.size()) { this->edges = edges; }\n\n\t\
    void add_edge(int from, int to) { edges[from].emplace_back(to); }\n\n\tvector<int>\
    \ build() {\n\n\t\tvector<int> res, in(V);\n\t\tfor (int i = 0; i < V; i++) for\
    \ (const auto &e : edges[i]) in[e]++;\n\n\t\tres.reserve(V);\n\t\tqueue<int> que;\n\
    \t\tfor (int i = 0; i < V; i++) {\n\t\t\tif (in[i] == 0 && !used[i]) {\n\t\t\t\
    \tused[i] = 1;\n\t\t\t\tque.emplace(i);\n\t\t\t}\n\t\t}\n\t\twhile (!que.empty())\
    \ {\n\t\t\tint now = que.front();\n\t\t\tDMP(now, in);\n\t\t\tque.pop();\n\t\t\
    \tres.emplace_back(now);\n\t\t\tfor (const auto &e : edges[now]) {\n\t\t\t\tin[e]--;\n\
    \t\t\t\tif (in[e] == 0) {\n\t\t\t\t\tif (used[e]) return vector<int>(); // unable\
    \ to sort\n\t\t\t\t\tused[e] = used[now] + 1;\n\t\t\t\t\tque.emplace(e);\n\t\t\
    \t\t}\n\t\t\t}\n\t\t}\n\n\t\treturn res;\n\t}\n\n\tint longest_path() {\n\t\t\
    if (none_of(used.begin(), used.end(), [](int u) { return u > 0; })) build();\n\
    \t\treturn *max_element(used.begin(), used.end()) - 1;\n\t}\n\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/TopologicalSort.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:28:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/TopologicalSort.cpp
layout: document
redirect_from:
- /library/src/TopologicalSort.cpp
- /library/src/TopologicalSort.cpp.html
title: src/TopologicalSort.cpp
---
