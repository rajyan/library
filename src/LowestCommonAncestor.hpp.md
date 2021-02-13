---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: src/clz.hpp
    title: src/clz.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yosupo/lca.test.cpp
    title: test/yosupo/lca.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/LowestCommonAncestor.hpp\"\n\n#include <vector>\n\n\
    #line 2 \"src/clz.hpp\"\n\nusing lint = long long;\n\ninline int clz(lint x) {\n\
    \    union {\n        unsigned long long as_uint64;\n        double as_double;\n\
    \    } data{};\n    data.as_double = (double)x + 0.5;\n    int n = 1054 - (int)(data.as_uint64\
    \ >> 52);\n    return 32 + n;\n}\n#line 6 \"src/LowestCommonAncestor.hpp\"\n\n\
    using namespace std;\n\nclass LCA {\npublic:\n    explicit LCA(const vector<vector<int>>\
    \ &tree, int root = 0) : N(tree.size()), lg_N(64 - clz(N)), depth(N),\n      \
    \                                                            par(lg_N + 1, vector<int>(N,\
    \ -1)) { build(tree, root); }\n\n    int get_lca(int u, int v) {\n\n        if\
    \ (depth[u] < depth[v]) swap(u, v);\n        u = ancestor(u, depth[u] - depth[v]);\n\
    \        if (u == v) return u;\n\n        for (int i = 64 - clz(depth[u]); i >=\
    \ 0; i--) {\n            if (par[i][u] != par[i][v]) {\n                u = par[i][u];\n\
    \                v = par[i][v];\n            }\n        }\n        return par[0][u];\n\
    \    }\n\n    int dist(int u, int v) {\n        return depth[u] + depth[v] - 2\
    \ * depth[get_lca(u, v)];\n    }\n\nprivate:\n    void build(const vector<vector<int>>\
    \ &tree, int root) {\n\n        auto dfs = [&](auto &&f, int now) -> void {\n\
    \            for (const auto &next : tree[now]) {\n                if (par[0][next]\
    \ == -1) {\n                    par[0][next] = now;\n                    depth[next]\
    \ = depth[now] + 1;\n                    f(f, next);\n                }\n    \
    \        }\n        };\n\n        par[0][root] = root;\n        dfs(dfs, root);\n\
    \n        for (int bit = 0; bit < lg_N; bit++) {\n            for (int i = 0;\
    \ i < N; i++) {\n                par[bit + 1][i] = par[bit][par[bit][i]];\n  \
    \          }\n        }\n    }\n\n    [[nodiscard]] int ancestor(int now, int\
    \ n) {\n        if (n <= 0) return now;\n        for (int i = 0, lg_n = 64 - clz(n);\
    \ i < lg_n; i++) {\n            if (n & (1LL << i)) now = par[i][now];\n     \
    \   }\n        return now;\n    }\n\n    int N, lg_N;\n    vector<int> depth;\n\
    \    vector<vector<int>> par;\n};\n"
  code: "#pragma once\n\n#include <vector>\n\n#include \"clz.hpp\"\n\nusing namespace\
    \ std;\n\nclass LCA {\npublic:\n    explicit LCA(const vector<vector<int>> &tree,\
    \ int root = 0) : N(tree.size()), lg_N(64 - clz(N)), depth(N),\n             \
    \                                                     par(lg_N + 1, vector<int>(N,\
    \ -1)) { build(tree, root); }\n\n    int get_lca(int u, int v) {\n\n        if\
    \ (depth[u] < depth[v]) swap(u, v);\n        u = ancestor(u, depth[u] - depth[v]);\n\
    \        if (u == v) return u;\n\n        for (int i = 64 - clz(depth[u]); i >=\
    \ 0; i--) {\n            if (par[i][u] != par[i][v]) {\n                u = par[i][u];\n\
    \                v = par[i][v];\n            }\n        }\n        return par[0][u];\n\
    \    }\n\n    int dist(int u, int v) {\n        return depth[u] + depth[v] - 2\
    \ * depth[get_lca(u, v)];\n    }\n\nprivate:\n    void build(const vector<vector<int>>\
    \ &tree, int root) {\n\n        auto dfs = [&](auto &&f, int now) -> void {\n\
    \            for (const auto &next : tree[now]) {\n                if (par[0][next]\
    \ == -1) {\n                    par[0][next] = now;\n                    depth[next]\
    \ = depth[now] + 1;\n                    f(f, next);\n                }\n    \
    \        }\n        };\n\n        par[0][root] = root;\n        dfs(dfs, root);\n\
    \n        for (int bit = 0; bit < lg_N; bit++) {\n            for (int i = 0;\
    \ i < N; i++) {\n                par[bit + 1][i] = par[bit][par[bit][i]];\n  \
    \          }\n        }\n    }\n\n    [[nodiscard]] int ancestor(int now, int\
    \ n) {\n        if (n <= 0) return now;\n        for (int i = 0, lg_n = 64 - clz(n);\
    \ i < lg_n; i++) {\n            if (n & (1LL << i)) now = par[i][now];\n     \
    \   }\n        return now;\n    }\n\n    int N, lg_N;\n    vector<int> depth;\n\
    \    vector<vector<int>> par;\n};\n"
  dependsOn:
  - src/clz.hpp
  isVerificationFile: false
  path: src/LowestCommonAncestor.hpp
  requiredBy: []
  timestamp: '2021-02-04 09:18:49+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/lca.test.cpp
documentation_of: src/LowestCommonAncestor.hpp
layout: document
redirect_from:
- /library/src/LowestCommonAncestor.hpp
- /library/src/LowestCommonAncestor.hpp.html
title: src/LowestCommonAncestor.hpp
---
