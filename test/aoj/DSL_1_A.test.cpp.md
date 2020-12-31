---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: library/UnionFind.cpp
    title: library/UnionFind.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A
  bundledCode: "#line 1 \"test/aoj/DSL_1_A.test.cpp\"\n\n#define PROBLEM 'http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A'\n\
    \n#line 1 \"library/UnionFind.cpp\"\n#include <vector>\nusing namespace std;\n\
    \nclass UnionFind {\nprivate:\n\tvector<int> data;\npublic:\n\tUnionFind(int size)\
    \ : data(size, -1) { }\n\tint root(int x) { return data[x] < 0 ? x : data[x] =\
    \ root(data[x]); }\n\tbool is_same(int x, int y) { return root(x) == root(y);\
    \ }\n\tint size(int x) { return -data[root(x)]; }\n\n\tbool unify(int x, int y)\
    \ {\n\t\tx = root(x); y = root(y);\n\t\tif (x != y) {\n\t\t\tif (data[y] < data[x])\
    \ swap(x, y);\n\t\t\tdata[x] += data[y]; data[y] = x;\n\t\t\treturn true;\n\t\t\
    }\n\t\treturn false;\n\t}\n};\n#line 5 \"test/aoj/DSL_1_A.test.cpp\"\n\n#include\
    \ <iostream>\n#include <iomanip>\n#line 9 \"test/aoj/DSL_1_A.test.cpp\"\n\nusing\
    \ namespace std;\nusing lint = long long;\nconstexpr int MOD = 1000000007, INF\
    \ = 1010101010;\nconstexpr lint LINF = 1LL << 60;\n\nstruct init {\n\tinit() {\n\
    \t\tcin.tie(nullptr); ios::sync_with_stdio(false);\n\t\tcout << fixed << setprecision(10);\n\
    \t}\n} init_;\n\nint main() {\n\n\tint n, q;\n\tcin >> n >> q;\n\n\tUnionFind\
    \ uf(n);\n\tfor (int i = 0; i < q; i++) {\n\t\tint c, x, y;\n\t\tcin >> c >> x\
    \ >> y;\n\n\t\tif (c) {\n\t\t\tcout << uf.is_same(x, y) << \"\\n\";\n\t\t}\n\t\
    \telse {\n\t\t\tuf.unify(x, y);\n\t\t}\n\t}\n\n\treturn 0;\n}\n"
  code: "\n#define PROBLEM 'http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A'\n\
    \n#include \"../../library/UnionFind.cpp\"\n\n#include <iostream>\n#include <iomanip>\n\
    #include <vector>\n\nusing namespace std;\nusing lint = long long;\nconstexpr\
    \ int MOD = 1000000007, INF = 1010101010;\nconstexpr lint LINF = 1LL << 60;\n\n\
    struct init {\n\tinit() {\n\t\tcin.tie(nullptr); ios::sync_with_stdio(false);\n\
    \t\tcout << fixed << setprecision(10);\n\t}\n} init_;\n\nint main() {\n\n\tint\
    \ n, q;\n\tcin >> n >> q;\n\n\tUnionFind uf(n);\n\tfor (int i = 0; i < q; i++)\
    \ {\n\t\tint c, x, y;\n\t\tcin >> c >> x >> y;\n\n\t\tif (c) {\n\t\t\tcout <<\
    \ uf.is_same(x, y) << \"\\n\";\n\t\t}\n\t\telse {\n\t\t\tuf.unify(x, y);\n\t\t\
    }\n\t}\n\n\treturn 0;\n}\n"
  dependsOn:
  - library/UnionFind.cpp
  isVerificationFile: true
  path: test/aoj/DSL_1_A.test.cpp
  requiredBy: []
  timestamp: '2020-08-23 21:27:08+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/DSL_1_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/DSL_1_A.test.cpp
- /verify/test/aoj/DSL_1_A.test.cpp.html
title: test/aoj/DSL_1_A.test.cpp
---