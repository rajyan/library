---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yosupo/lca.test.cpp
    title: test/yosupo/lca.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/LowestCommonAncestor.cpp\"\n#include <vector>\n\nusing\
    \ namespace std;\n\nclass LCA {\nprivate:\n\n    int N, lg_N;\n    vector<int>\
    \ depth;\n    vector<vector<int>> par;\n\n    void build(const vector<vector<int>>\
    \ &tree, int root) {\n\n        auto dfs = [&](auto &&f, int now) -> void {\n\
    \            for (const auto &next : tree[now]) {\n                if (par[0][next]\
    \ == -1) {\n                    par[0][next] = now;\n                    depth[next]\
    \ = depth[now] + 1;\n                    f(f, next);\n                }\n    \
    \        }\n        };\n\n        par[0][root] = root;\n        dfs(dfs, root);\n\
    \n        for (int bit = 0; bit < lg_N; bit++) {\n            for (int i = 0;\
    \ i < N; i++) {\n                par[bit + 1][i] = par[bit][par[bit][i]];\n  \
    \          }\n        }\n    }\n\n    int ancestor(int now, int n) {\n       \
    \ if (n <= 0) return now;\n        for (int i = 0, lg_n = 32 - nlz(n); i < lg_n;\
    \ i++) {\n            if (n & (1LL << i)) now = par[i][now];\n        }\n    \
    \    return now;\n    }\n\n    int nlz(unsigned int x) {\n        union {\n  \
    \          unsigned int as_uint32;\n            float as_float;\n        } data;\n\
    \        data.as_float = (float)x + 0.5;\n        int n = 158 - (data.as_uint32\
    \ >> 23);\n        return n;\n    }\n\npublic:\n    LCA(const vector<vector<int>>\
    \ &tree, int root = 0) : N(tree.size()), lg_N(32 - nlz(N)), depth(N),\n      \
    \                                                    par(lg_N + 1, vector<int>(N,\
    \ -1)) { build(tree, root); }\n\n    int get_lca(int u, int v) {\n\n        if\
    \ (depth[u] < depth[v]) swap(u, v);\n        u = ancestor(u, depth[u] - depth[v]);\n\
    \        if (u == v) return u;\n\n        for (int i = 32 - nlz(depth[u]); i >=\
    \ 0; i--) {\n            if (par[i][u] != par[i][v]) {\n                u = par[i][u];\n\
    \                v = par[i][v];\n            }\n        }\n        return par[0][u];\n\
    \    }\n\n    int dist(int u, int v) {\n        return depth[u] + depth[v] - 2\
    \ * depth[get_lca(u, v)];\n    }\n};\n"
  code: "#include <vector>\n\nusing namespace std;\n\nclass LCA {\nprivate:\n\n  \
    \  int N, lg_N;\n    vector<int> depth;\n    vector<vector<int>> par;\n\n    void\
    \ build(const vector<vector<int>> &tree, int root) {\n\n        auto dfs = [&](auto\
    \ &&f, int now) -> void {\n            for (const auto &next : tree[now]) {\n\
    \                if (par[0][next] == -1) {\n                    par[0][next] =\
    \ now;\n                    depth[next] = depth[now] + 1;\n                  \
    \  f(f, next);\n                }\n            }\n        };\n\n        par[0][root]\
    \ = root;\n        dfs(dfs, root);\n\n        for (int bit = 0; bit < lg_N; bit++)\
    \ {\n            for (int i = 0; i < N; i++) {\n                par[bit + 1][i]\
    \ = par[bit][par[bit][i]];\n            }\n        }\n    }\n\n    int ancestor(int\
    \ now, int n) {\n        if (n <= 0) return now;\n        for (int i = 0, lg_n\
    \ = 32 - nlz(n); i < lg_n; i++) {\n            if (n & (1LL << i)) now = par[i][now];\n\
    \        }\n        return now;\n    }\n\n    int nlz(unsigned int x) {\n    \
    \    union {\n            unsigned int as_uint32;\n            float as_float;\n\
    \        } data;\n        data.as_float = (float)x + 0.5;\n        int n = 158\
    \ - (data.as_uint32 >> 23);\n        return n;\n    }\n\npublic:\n    LCA(const\
    \ vector<vector<int>> &tree, int root = 0) : N(tree.size()), lg_N(32 - nlz(N)),\
    \ depth(N),\n                                                          par(lg_N\
    \ + 1, vector<int>(N, -1)) { build(tree, root); }\n\n    int get_lca(int u, int\
    \ v) {\n\n        if (depth[u] < depth[v]) swap(u, v);\n        u = ancestor(u,\
    \ depth[u] - depth[v]);\n        if (u == v) return u;\n\n        for (int i =\
    \ 32 - nlz(depth[u]); i >= 0; i--) {\n            if (par[i][u] != par[i][v])\
    \ {\n                u = par[i][u];\n                v = par[i][v];\n        \
    \    }\n        }\n        return par[0][u];\n    }\n\n    int dist(int u, int\
    \ v) {\n        return depth[u] + depth[v] - 2 * depth[get_lca(u, v)];\n    }\n\
    };\n"
  dependsOn: []
  isVerificationFile: false
  path: src/LowestCommonAncestor.cpp
  requiredBy: []
  timestamp: '2021-01-01 20:28:23+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/lca.test.cpp
documentation_of: src/LowestCommonAncestor.cpp
layout: document
redirect_from:
- /library/src/LowestCommonAncestor.cpp
- /library/src/LowestCommonAncestor.cpp.html
title: src/LowestCommonAncestor.cpp
---
