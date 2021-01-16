---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/UnionFind.cpp
    title: src/UnionFind.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/unionfind
    links:
    - https://judge.yosupo.jp/problem/unionfind
  bundledCode: "#line 1 \"test/yosupo/unionfind.test.cpp\"\n\n#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\
    \n\n#line 1 \"src/UnionFind.cpp\"\n#include <vector>\n\nusing namespace std;\n\
    \nclass UnionFind {\nprivate:\n    vector<int> data;\npublic:\n    explicit UnionFind(int\
    \ size) : data(size, -1) {}\n    [[nodiscard]] int root(int x) { return data[x]\
    \ < 0 ? x : data[x] = root(data[x]); }\n    [[nodiscard]] bool is_same(int x,\
    \ int y) { return root(x) == root(y); }\n    [[nodiscard]] int size(int x) { return\
    \ -data[root(x)]; }\n\n    bool unify(int x, int y) {\n        x = root(x);\n\
    \        y = root(y);\n        if (x != y) {\n            if (data[y] < data[x])\
    \ swap(x, y);\n            data[x] += data[y];\n            data[y] = x;\n   \
    \         return true;\n        }\n        return false;\n    }\n};\n#line 5 \"\
    test/yosupo/unionfind.test.cpp\"\n\n#include <iostream>\n#include <iomanip>\n\n\
    using namespace std;\nusing lint = long long;\nconstexpr int MOD = 1000000007,\
    \ INF = 1010101010;\nconstexpr lint LINF = 1LL << 60;\n\nstruct init {\n\tinit()\
    \ {\n\t\tcin.tie(nullptr); ios::sync_with_stdio(false);\n\t\tcout << fixed <<\
    \ setprecision(10);\n\t}\n} init_;\n\nint main() {\n\n\tint N, Q;\n\tcin >> N\
    \ >> Q;\n\n\tUnionFind uf(N);\n\tfor (int i = 0; i < Q; i++) {\n\t\tint t, u,\
    \ v;\n\t\tcin >> t >> u >> v;\n\t\tif (t == 0) uf.unify(u, v);\n\t\telse cout\
    \ << uf.is_same(u, v) << \"\\n\";\n\t}\n\n\treturn 0;\n}\n"
  code: "\n#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n\n#include\
    \ \"../../src/UnionFind.cpp\"\n\n#include <iostream>\n#include <iomanip>\n\nusing\
    \ namespace std;\nusing lint = long long;\nconstexpr int MOD = 1000000007, INF\
    \ = 1010101010;\nconstexpr lint LINF = 1LL << 60;\n\nstruct init {\n\tinit() {\n\
    \t\tcin.tie(nullptr); ios::sync_with_stdio(false);\n\t\tcout << fixed << setprecision(10);\n\
    \t}\n} init_;\n\nint main() {\n\n\tint N, Q;\n\tcin >> N >> Q;\n\n\tUnionFind\
    \ uf(N);\n\tfor (int i = 0; i < Q; i++) {\n\t\tint t, u, v;\n\t\tcin >> t >> u\
    \ >> v;\n\t\tif (t == 0) uf.unify(u, v);\n\t\telse cout << uf.is_same(u, v) <<\
    \ \"\\n\";\n\t}\n\n\treturn 0;\n}\n"
  dependsOn:
  - src/UnionFind.cpp
  isVerificationFile: true
  path: test/yosupo/unionfind.test.cpp
  requiredBy: []
  timestamp: '2021-01-17 00:12:39+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo/unionfind.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo/unionfind.test.cpp
- /verify/test/yosupo/unionfind.test.cpp.html
title: test/yosupo/unionfind.test.cpp
---
