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
    \ namespace std;\n\nclass LCA {\nprivate:\n\n\tint N, lg_N;\n\tvector<int> depth;\n\
    \tvector<vector<int>> par;\n\n\tvoid build(const vector<vector<int>> &tree, int\
    \ root) {\n\n\t\tauto dfs = [&](auto &&f, int now) -> void {\n\t\t\tfor (const\
    \ auto &next : tree[now]) {\n\t\t\t\tif (par[0][next] == -1) {\n\t\t\t\t\tpar[0][next]\
    \ = now;\n\t\t\t\t\tdepth[next] = depth[now] + 1;\n\t\t\t\t\tf(f, next);\n\t\t\
    \t\t}\n\t\t\t}\n\t\t};\n\n\t\tpar[0][root] = root;\n\t\tdfs(dfs, root);\n\n\t\t\
    for (int bit = 0; bit < lg_N; bit++) {\n\t\t\tfor (int i = 0; i < N; i++) {\n\t\
    \t\t\tpar[bit + 1][i] = par[bit][par[bit][i]];\n\t\t\t}\n\t\t}\n\t}\n\n\tint ancestor(int\
    \ now, int n) {\n\t\tif (n <= 0) return now;\n\t\tfor (int i = 0, lg_n = 32 -\
    \ nlz(n); i < lg_n; i++) {\n\t\t\tif (n & (1LL << i)) now = par[i][now];\n\t\t\
    }\n\t\treturn now;\n\t}\n\n\tint nlz(unsigned int x) {\n\t\tunion {\n\t\t\tunsigned\
    \ int as_uint32;\n\t\t\tfloat        as_float;\n\t\t} data;\n\t\tdata.as_float\
    \ = (float)x + 0.5;\n\t\tint n = 158 - (data.as_uint32 >> 23);\n\t\treturn n;\n\
    \t}\n\npublic:\n\tLCA(const vector<vector<int>> &tree, int root = 0) : N(tree.size()),\
    \ lg_N(32 - nlz(N)), depth(N), par(lg_N + 1, vector<int>(N, -1)) { build(tree,\
    \ root); }\n\n\tint get_lca(int u, int v) {\n\n\t\tif (depth[u] < depth[v]) swap(u,\
    \ v);\n\t\tu = ancestor(u, depth[u] - depth[v]);\n\t\tif (u == v) return u;\n\n\
    \t\tfor (int i = 32 - nlz(depth[u]); i >= 0; i--) {\n\t\t\tif (par[i][u] != par[i][v])\
    \ {\n\t\t\t\tu = par[i][u];\n\t\t\t\tv = par[i][v];\n\t\t\t}\n\t\t}\n\t\treturn\
    \ par[0][u];\n\t}\n\n\tint dist(int u, int v) {\n\t\treturn depth[u] + depth[v]\
    \ - 2 * depth[get_lca(u, v)];\n\t}\n};\n"
  code: "#include <vector>\n\nusing namespace std;\n\nclass LCA {\nprivate:\n\n\t\
    int N, lg_N;\n\tvector<int> depth;\n\tvector<vector<int>> par;\n\n\tvoid build(const\
    \ vector<vector<int>> &tree, int root) {\n\n\t\tauto dfs = [&](auto &&f, int now)\
    \ -> void {\n\t\t\tfor (const auto &next : tree[now]) {\n\t\t\t\tif (par[0][next]\
    \ == -1) {\n\t\t\t\t\tpar[0][next] = now;\n\t\t\t\t\tdepth[next] = depth[now]\
    \ + 1;\n\t\t\t\t\tf(f, next);\n\t\t\t\t}\n\t\t\t}\n\t\t};\n\n\t\tpar[0][root]\
    \ = root;\n\t\tdfs(dfs, root);\n\n\t\tfor (int bit = 0; bit < lg_N; bit++) {\n\
    \t\t\tfor (int i = 0; i < N; i++) {\n\t\t\t\tpar[bit + 1][i] = par[bit][par[bit][i]];\n\
    \t\t\t}\n\t\t}\n\t}\n\n\tint ancestor(int now, int n) {\n\t\tif (n <= 0) return\
    \ now;\n\t\tfor (int i = 0, lg_n = 32 - nlz(n); i < lg_n; i++) {\n\t\t\tif (n\
    \ & (1LL << i)) now = par[i][now];\n\t\t}\n\t\treturn now;\n\t}\n\n\tint nlz(unsigned\
    \ int x) {\n\t\tunion {\n\t\t\tunsigned int as_uint32;\n\t\t\tfloat        as_float;\n\
    \t\t} data;\n\t\tdata.as_float = (float)x + 0.5;\n\t\tint n = 158 - (data.as_uint32\
    \ >> 23);\n\t\treturn n;\n\t}\n\npublic:\n\tLCA(const vector<vector<int>> &tree,\
    \ int root = 0) : N(tree.size()), lg_N(32 - nlz(N)), depth(N), par(lg_N + 1, vector<int>(N,\
    \ -1)) { build(tree, root); }\n\n\tint get_lca(int u, int v) {\n\n\t\tif (depth[u]\
    \ < depth[v]) swap(u, v);\n\t\tu = ancestor(u, depth[u] - depth[v]);\n\t\tif (u\
    \ == v) return u;\n\n\t\tfor (int i = 32 - nlz(depth[u]); i >= 0; i--) {\n\t\t\
    \tif (par[i][u] != par[i][v]) {\n\t\t\t\tu = par[i][u];\n\t\t\t\tv = par[i][v];\n\
    \t\t\t}\n\t\t}\n\t\treturn par[0][u];\n\t}\n\n\tint dist(int u, int v) {\n\t\t\
    return depth[u] + depth[v] - 2 * depth[get_lca(u, v)];\n\t}\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/LowestCommonAncestor.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:28:17+09:00'
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
