---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/FenwickTree.hpp
    title: src/FenwickTree.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B
  bundledCode: "#line 1 \"test/aoj/DSL_2_B.test.cpp\"\n\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B\"\
    \n\n#line 2 \"src/FenwickTree.hpp\"\n\n#include <vector>\n\nusing namespace std;\n\
    \ntemplate<class T>\nclass FenwickTree {\npublic:\n    explicit FenwickTree(int\
    \ sz, T &&x = T{}) : n(sz), bit(n + 1) {\n        for (int i = 0; i < n; i++)\
    \ add(i, x);\n    }\n\n    void add(int k, const T &x) { for (; k < n; k |= k\
    \ + 1) bit[k] += x; }\n    void set(int k, const T &x) { add(k, x - sum(k, k +\
    \ 1)); }\n\n\n    [[nodiscard]] T sum(int k) const {\n        T res = 0;\n   \
    \     for (k--; k >= 0; k = (k & (k + 1)) - 1) res += bit[k];\n        return\
    \ res;\n    }\n    [[nodiscard]] T sum(int l, int r) const { return sum(r) - sum(l);\
    \ }\n\nprivate:\n    int n;\n    vector<T> bit;\n};\n#line 5 \"test/aoj/DSL_2_B.test.cpp\"\
    \n\n#include <iostream>\n#include <iomanip>\n#line 9 \"test/aoj/DSL_2_B.test.cpp\"\
    \n\nusing namespace std;\nusing lint = long long;\n\nstruct init {\n\tinit() {\n\
    \t\tcin.tie(nullptr); ios::sync_with_stdio(false);\n\t\tcout << fixed << setprecision(10);\n\
    \t}\n} init_;\n\nint main() {\n\n\tint n, q;\n\tcin >> n >> q;\n\n\tFenwickTree<lint>\
    \ ft(n, 0);\n\tvector<int> ans;\n\tfor (int i = 0; i < q; i++) {\n\t\tint c, x,\
    \ y;\n\t\tcin >> c >> x >> y;\n\t\tx--;\n\t\tif (c) {\n\t\t\tans.emplace_back(ft.sum(x,\
    \ y));\n\t\t}\n\t\telse {\n\t\t\tft.add(x, y);\n\t\t}\n\t}\n\n\tfor (const auto&\
    \ e : ans) cout << e << \"\\n\";\n\t\n\treturn 0;\n}\n"
  code: "\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B\"\
    \n\n#include \"../../src/FenwickTree.hpp\"\n\n#include <iostream>\n#include <iomanip>\n\
    #include <vector>\n\nusing namespace std;\nusing lint = long long;\n\nstruct init\
    \ {\n\tinit() {\n\t\tcin.tie(nullptr); ios::sync_with_stdio(false);\n\t\tcout\
    \ << fixed << setprecision(10);\n\t}\n} init_;\n\nint main() {\n\n\tint n, q;\n\
    \tcin >> n >> q;\n\n\tFenwickTree<lint> ft(n, 0);\n\tvector<int> ans;\n\tfor (int\
    \ i = 0; i < q; i++) {\n\t\tint c, x, y;\n\t\tcin >> c >> x >> y;\n\t\tx--;\n\t\
    \tif (c) {\n\t\t\tans.emplace_back(ft.sum(x, y));\n\t\t}\n\t\telse {\n\t\t\tft.add(x,\
    \ y);\n\t\t}\n\t}\n\n\tfor (const auto& e : ans) cout << e << \"\\n\";\n\t\n\t\
    return 0;\n}\n"
  dependsOn:
  - src/FenwickTree.hpp
  isVerificationFile: true
  path: test/aoj/DSL_2_B.test.cpp
  requiredBy: []
  timestamp: '2021-02-13 18:27:26+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/DSL_2_B.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/DSL_2_B.test.cpp
- /verify/test/aoj/DSL_2_B.test.cpp.html
title: test/aoj/DSL_2_B.test.cpp
---
