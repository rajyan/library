---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: src/LowestCommonAncestor.cpp
    title: src/LowestCommonAncestor.cpp
  - icon: ':question:'
    path: src/clz.cpp
    title: src/clz.cpp
  - icon: ':question:'
    path: src/clz.cpp
    title: src/clz.cpp
  - icon: ':x:'
    path: src/makevec.cpp
    title: src/makevec.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/lca
    links:
    - https://judge.yosupo.jp/problem/lca
  bundledCode: "#line 1 \"test/yosupo/lca.test.cpp\"\n\n#define PROBLEM \"https://judge.yosupo.jp/problem/lca\"\
    \n\n#line 1 \"src/makevec.cpp\"\n#include <vector>\n\nusing namespace std;\n\n\
    template<class T>\nvector<T> make_vec(size_t s, T val) { return vector<T>(s, val);\
    \ }\ntemplate<class... Size>\nauto make_vec(size_t s, Size... tail) {\n    return\
    \ vector<decltype(make_vec(tail...))>(s, make_vec(tail...));\n}\n#line 1 \"src/clz.cpp\"\
    \n\nusing lint = long long;\n\ninline int clz(lint x) {\n    union {\n       \
    \ unsigned long long as_uint64;\n        double as_double;\n    } data{};\n  \
    \  data.as_double = (double)x + 0.5;\n    int n = 1054 - (int)(data.as_uint64\
    \ >> 52);\n    return 32 + n;\n}\n#line 2 \"src/LowestCommonAncestor.cpp\"\n\n\
    #line 1 \"src/clz.cpp\"\n\nusing lint = long long;\n\ninline int clz(lint x) {\n\
    \    union {\n        unsigned long long as_uint64;\n        double as_double;\n\
    \    } data{};\n    data.as_double = (double)x + 0.5;\n    int n = 1054 - (int)(data.as_uint64\
    \ >> 52);\n    return 32 + n;\n}\n#line 4 \"src/LowestCommonAncestor.cpp\"\n\n\
    using namespace std;\n\nclass LCA {\nprivate:\n\n    int N, lg_N;\n    vector<int>\
    \ depth;\n    vector<vector<int>> par;\n\n    void build(const vector<vector<int>>\
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
    \   }\n        return now;\n    }\n\npublic:\n    explicit LCA(const vector<vector<int>>\
    \ &tree, int root = 0) : N(tree.size()), lg_N(64 - clz(N)), depth(N),\n      \
    \                                                            par(lg_N + 1, vector<int>(N,\
    \ -1)) { build(tree, root); }\n\n    int get_lca(int u, int v) {\n\n        if\
    \ (depth[u] < depth[v]) swap(u, v);\n        u = ancestor(u, depth[u] - depth[v]);\n\
    \        if (u == v) return u;\n\n        for (int i = 64 - clz(depth[u]); i >=\
    \ 0; i--) {\n            if (par[i][u] != par[i][v]) {\n                u = par[i][u];\n\
    \                v = par[i][v];\n            }\n        }\n        return par[0][u];\n\
    \    }\n\n    int dist(int u, int v) {\n        return depth[u] + depth[v] - 2\
    \ * depth[get_lca(u, v)];\n    }\n};\n#line 7 \"test/yosupo/lca.test.cpp\"\n\n\
    #include <iostream>\n#include <iomanip>\n#line 11 \"test/yosupo/lca.test.cpp\"\
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
    ../../src/makevec.cpp\"\n#include \"../../src/clz.cpp\"\n#include \"../../src/LowestCommonAncestor.cpp\"\
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
  - src/clz.cpp
  - src/LowestCommonAncestor.cpp
  - src/clz.cpp
  isVerificationFile: true
  path: test/yosupo/lca.test.cpp
  requiredBy: []
  timestamp: '2021-01-17 16:03:18+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/yosupo/lca.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo/lca.test.cpp
- /verify/test/yosupo/lca.test.cpp.html
title: test/yosupo/lca.test.cpp
---
