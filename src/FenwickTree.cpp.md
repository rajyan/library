---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/DSL_2_B.test.cpp
    title: test/aoj/DSL_2_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yosupo/point_add_range_sum.test.cpp
    title: test/yosupo/point_add_range_sum.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/FenwickTree.cpp\"\n#include <vector>\n\nusing namespace\
    \ std;\n\ntemplate<class T>\nclass FenwickTree {\nprivate:\n\tint n;\n\tvector<T>\
    \ bit;\npublic:\n\tFenwickTree(int sz, T&& x = T(0)) : n(sz), bit(n + 1) {\n\t\
    \tfor (int i = 0; i < n; i++) add(i, x);\n\t}\n\n\tT sum(int k) const {\n\t\t\
    T res = 0;\n\t\tfor (k--; k >= 0; k = (k & (k + 1)) - 1) res += bit[k];\n\t\t\
    return res;\n\t}\n\tT sum(int l, int r) const { return sum(r) - sum(l); }\n\n\t\
    void add(int k, const T& x) {\n\t\tfor (; k < n; k |= k + 1) bit[k] += x;\n\t\
    }\n\tvoid set(int k, const T& x) { add(k, x - sum(k, k + 1)); }\n};\n"
  code: "#include <vector>\n\nusing namespace std;\n\ntemplate<class T>\nclass FenwickTree\
    \ {\nprivate:\n\tint n;\n\tvector<T> bit;\npublic:\n\tFenwickTree(int sz, T&&\
    \ x = T(0)) : n(sz), bit(n + 1) {\n\t\tfor (int i = 0; i < n; i++) add(i, x);\n\
    \t}\n\n\tT sum(int k) const {\n\t\tT res = 0;\n\t\tfor (k--; k >= 0; k = (k &\
    \ (k + 1)) - 1) res += bit[k];\n\t\treturn res;\n\t}\n\tT sum(int l, int r) const\
    \ { return sum(r) - sum(l); }\n\n\tvoid add(int k, const T& x) {\n\t\tfor (; k\
    \ < n; k |= k + 1) bit[k] += x;\n\t}\n\tvoid set(int k, const T& x) { add(k, x\
    \ - sum(k, k + 1)); }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/FenwickTree.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:28:17+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/point_add_range_sum.test.cpp
  - test/aoj/DSL_2_B.test.cpp
documentation_of: src/FenwickTree.cpp
layout: document
redirect_from:
- /library/src/FenwickTree.cpp
- /library/src/FenwickTree.cpp.html
title: src/FenwickTree.cpp
---
