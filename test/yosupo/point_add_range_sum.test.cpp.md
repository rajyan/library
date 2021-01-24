---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/FenwickTree.cpp
    title: src/FenwickTree.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/point_add_range_sum
    links:
    - https://judge.yosupo.jp/problem/point_add_range_sum
  bundledCode: "#line 1 \"test/yosupo/point_add_range_sum.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n\n#line 1 \"src/FenwickTree.cpp\"\
    \n#include <vector>\n\nusing namespace std;\n\ntemplate<class T>\nclass FenwickTree\
    \ {\nprivate:\n    int n;\n    vector<T> bit;\npublic:\n    explicit FenwickTree(int\
    \ sz, T &&x = T{}) : n(sz), bit(n + 1) {\n        for (int i = 0; i < n; i++)\
    \ add(i, x);\n    }\n\n    [[nodiscard]] T sum(int k) const {\n        T res =\
    \ 0;\n        for (k--; k >= 0; k = (k & (k + 1)) - 1) res += bit[k];\n      \
    \  return res;\n    }\n    [[nodiscard]] T sum(int l, int r) const { return sum(r)\
    \ - sum(l); }\n\n    void add(int k, const T &x) {\n        for (; k < n; k |=\
    \ k + 1) bit[k] += x;\n    }\n    void set(int k, const T &x) { add(k, x - sum(k,\
    \ k + 1)); }\n};\n#line 4 \"test/yosupo/point_add_range_sum.test.cpp\"\n\n#include\
    \ <iostream>\n#include <iomanip>\n\nusing namespace std;\nusing lint = long long;\n\
    \nstruct init {\n\tinit() {\n\t\tcin.tie(nullptr); ios::sync_with_stdio(false);\n\
    \t\tcout << fixed << setprecision(10);\n\t}\n} init_;\n\nint main() {\n\n\tint\
    \ n, q;\n\tcin >> n >> q;\n\n\tFenwickTree<lint> ft(n, 0);\n\tfor (int i = 0;\
    \ i < n; i++) {\n\t\tint a;\n\t\tcin >> a;\n\t\tft.set(i, a);\n\t}\n\n\tfor (int\
    \ i = 0; i < q; i++) {\n\t\tint c, x, y;\n\t\tcin >> c >> x >> y;\n\t\tif (c)\
    \ {\n\t\t\tcout << ft.sum(x, y) << \"\\n\";\n\t\t}\n\t\telse {\n\t\t\tft.add(x,\
    \ y);\n\t\t}\n\t}\n\n\treturn 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n\
    \n#include \"../../src/FenwickTree.cpp\"\n\n#include <iostream>\n#include <iomanip>\n\
    \nusing namespace std;\nusing lint = long long;\n\nstruct init {\n\tinit() {\n\
    \t\tcin.tie(nullptr); ios::sync_with_stdio(false);\n\t\tcout << fixed << setprecision(10);\n\
    \t}\n} init_;\n\nint main() {\n\n\tint n, q;\n\tcin >> n >> q;\n\n\tFenwickTree<lint>\
    \ ft(n, 0);\n\tfor (int i = 0; i < n; i++) {\n\t\tint a;\n\t\tcin >> a;\n\t\t\
    ft.set(i, a);\n\t}\n\n\tfor (int i = 0; i < q; i++) {\n\t\tint c, x, y;\n\t\t\
    cin >> c >> x >> y;\n\t\tif (c) {\n\t\t\tcout << ft.sum(x, y) << \"\\n\";\n\t\t\
    }\n\t\telse {\n\t\t\tft.add(x, y);\n\t\t}\n\t}\n\n\treturn 0;\n}\n"
  dependsOn:
  - src/FenwickTree.cpp
  isVerificationFile: true
  path: test/yosupo/point_add_range_sum.test.cpp
  requiredBy: []
  timestamp: '2021-01-18 14:54:11+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo/point_add_range_sum.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo/point_add_range_sum.test.cpp
- /verify/test/yosupo/point_add_range_sum.test.cpp.html
title: test/yosupo/point_add_range_sum.test.cpp
---
