---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/LowestCommonAncestor.cpp
    title: src/LowestCommonAncestor.cpp
  - icon: ':heavy_check_mark:'
    path: src/makevec.cpp
    title: src/makevec.cpp
  - icon: ':heavy_check_mark:'
    path: src/nlz.cpp
    title: src/nlz.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/lca
    links:
    - https://judge.yosupo.jp/problem/lca
  bundledCode: "#line 1 \"test/yosupo/lca.test.cpp\"\n\n#define PROBLEM \"https://judge.yosupo.jp/problem/lca\"\
    \n\n#line 1 \"src/makevec.cpp\"\n#include <vector>\n\nusing namespace std;\n\n\
    template<class T>\nvector<T> make_vec(size_t s, T val) { return vector<T>(s, val);\
    \ }\ntemplate<class... Size>\nauto make_vec(size_t s, Size... tail) {\n\treturn\
    \ vector<decltype(make_vec(tail...))>(s, make_vec(tail...));\n}\n#line 1 \"src/nlz.cpp\"\
    \nint nlz(unsigned int x) {\n\tunion {\n\t\tunsigned int as_uint32;\n\t\tfloat\
    \        as_float;\n\t} data;\n\tdata.as_float = (float)x + 0.5;\n\tint n = 158\
    \ - (data.as_uint32 >> 23);\n\treturn n;\n}\n#line 2 \"src/LowestCommonAncestor.cpp\"\
    \n\nusing namespace std;\n\nclass LCA {\nprivate:\n\n\tint N, lg_N;\n\tvector<int>\
    \ depth;\n\tvector<vector<int>> par;\n\n\tvoid build(const vector<vector<int>>\
    \ &tree, int root) {\n\n\t\tauto dfs = [&](auto &&f, int now) -> void {\n\t\t\t\
    for (const auto &next : tree[now]) {\n\t\t\t\tif (par[0][next] == -1) {\n\t\t\t\
    \t\tpar[0][next] = now;\n\t\t\t\t\tdepth[next] = depth[now] + 1;\n\t\t\t\t\tf(f,\
    \ next);\n\t\t\t\t}\n\t\t\t}\n\t\t};\n\n\t\tpar[0][root] = root;\n\t\tdfs(dfs,\
    \ root);\n\n\t\tfor (int bit = 0; bit < lg_N; bit++) {\n\t\t\tfor (int i = 0;\
    \ i < N; i++) {\n\t\t\t\tpar[bit + 1][i] = par[bit][par[bit][i]];\n\t\t\t}\n\t\
    \t}\n\t}\n\n\tint ancestor(int now, int n) {\n\t\tif (n <= 0) return now;\n\t\t\
    for (int i = 0, lg_n = 32 - nlz(n); i < lg_n; i++) {\n\t\t\tif (n & (1LL << i))\
    \ now = par[i][now];\n\t\t}\n\t\treturn now;\n\t}\n\n\tint nlz(unsigned int x)\
    \ {\n\t\tunion {\n\t\t\tunsigned int as_uint32;\n\t\t\tfloat        as_float;\n\
    \t\t} data;\n\t\tdata.as_float = (float)x + 0.5;\n\t\tint n = 158 - (data.as_uint32\
    \ >> 23);\n\t\treturn n;\n\t}\n\npublic:\n\tLCA(const vector<vector<int>> &tree,\
    \ int root = 0) : N(tree.size()), lg_N(32 - nlz(N)), depth(N), par(lg_N + 1, vector<int>(N,\
    \ -1)) { build(tree, root); }\n\n\tint get_lca(int u, int v) {\n\n\t\tif (depth[u]\
    \ < depth[v]) swap(u, v);\n\t\tu = ancestor(u, depth[u] - depth[v]);\n\t\tif (u\
    \ == v) return u;\n\n\t\tfor (int i = 32 - nlz(depth[u]); i >= 0; i--) {\n\t\t\
    \tif (par[i][u] != par[i][v]) {\n\t\t\t\tu = par[i][u];\n\t\t\t\tv = par[i][v];\n\
    \t\t\t}\n\t\t}\n\t\treturn par[0][u];\n\t}\n\n\tint dist(int u, int v) {\n\t\t\
    return depth[u] + depth[v] - 2 * depth[get_lca(u, v)];\n\t}\n};\n#line 7 \"test/yosupo/lca.test.cpp\"\
    \n\n#include <iostream>\n#include <iomanip>\n#line 11 \"test/yosupo/lca.test.cpp\"\
    \n\nusing namespace std;\nusing lint = long long;\nconstexpr int MOD = 1000000007,\
    \ INF = 1010101010;\nconstexpr lint LINF = 1LL << 60;\n\nstruct init {\n\tinit()\
    \ {\n\t\tcin.tie(nullptr); ios::sync_with_stdio(false);\n\t\tcout << fixed <<\
    \ setprecision(10);\n\t}\n} init_;\n\nint main() {\n\n\tint N, Q;\n\tcin >> N\
    \ >> Q;\n\n\tauto edges = make_vec(N, 0, 0);\n\tfor (int i = 0; i < N - 1; i++)\
    \ {\n\t\tint p;\n\t\tcin >> p;\n\t\tedges[p].emplace_back(i + 1);\n\t\tedges[i\
    \ + 1].emplace_back(p);\n\t}\n\n\tLCA lca(edges);\n\tfor (int i = 0; i < Q; i++)\
    \ {\n\t\tint u, v;\n\t\tcin >> u >> v;\n\t\tcout << lca.get_lca(u, v) << \"\\\
    n\";\n\t}\n\n\treturn 0;\n}\n"
  code: "\n#define PROBLEM \"https://judge.yosupo.jp/problem/lca\"\n\n#include \"\
    ../../src/makevec.cpp\"\n#include \"../../src/nlz.cpp\"\n#include \"../../src/LowestCommonAncestor.cpp\"\
    \n\n#include <iostream>\n#include <iomanip>\n#include <vector>\n\nusing namespace\
    \ std;\nusing lint = long long;\nconstexpr int MOD = 1000000007, INF = 1010101010;\n\
    constexpr lint LINF = 1LL << 60;\n\nstruct init {\n\tinit() {\n\t\tcin.tie(nullptr);\
    \ ios::sync_with_stdio(false);\n\t\tcout << fixed << setprecision(10);\n\t}\n\
    } init_;\n\nint main() {\n\n\tint N, Q;\n\tcin >> N >> Q;\n\n\tauto edges = make_vec(N,\
    \ 0, 0);\n\tfor (int i = 0; i < N - 1; i++) {\n\t\tint p;\n\t\tcin >> p;\n\t\t\
    edges[p].emplace_back(i + 1);\n\t\tedges[i + 1].emplace_back(p);\n\t}\n\n\tLCA\
    \ lca(edges);\n\tfor (int i = 0; i < Q; i++) {\n\t\tint u, v;\n\t\tcin >> u >>\
    \ v;\n\t\tcout << lca.get_lca(u, v) << \"\\n\";\n\t}\n\n\treturn 0;\n}\n"
  dependsOn:
  - src/makevec.cpp
  - src/nlz.cpp
  - src/LowestCommonAncestor.cpp
  isVerificationFile: true
  path: test/yosupo/lca.test.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:47:53+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo/lca.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo/lca.test.cpp
- /verify/test/yosupo/lca.test.cpp.html
title: test/yosupo/lca.test.cpp
---
