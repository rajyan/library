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
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/FenwickTree.hpp\"\n\n#include <vector>\n\nusing namespace\
    \ std;\n\ntemplate<class T>\nclass FenwickTree {\npublic:\n    explicit FenwickTree(int\
    \ sz, T &&x = T{}) : n(sz), bit(n + 1) {\n        for (int i = 0; i < n; i++)\
    \ add(i, x);\n    }\n\n    void add(int k, const T &x) { for (; k < n; k |= k\
    \ + 1) bit[k] += x; }\n    void set(int k, const T &x) { add(k, x - sum(k, k +\
    \ 1)); }\n\n    [[nodiscard]] T sum(int k) const {\n        T res = 0;\n     \
    \   for (k--; k >= 0; k = (k & (k + 1)) - 1) res += bit[k];\n        return res;\n\
    \    }\n    [[nodiscard]] T sum(int l, int r) const { return sum(r) - sum(l);\
    \ }\n\nprivate:\n    int n;\n    vector<T> bit;\n};\n"
  code: "#pragma once\n\n#include <vector>\n\nusing namespace std;\n\ntemplate<class\
    \ T>\nclass FenwickTree {\npublic:\n    explicit FenwickTree(int sz, T &&x = T{})\
    \ : n(sz), bit(n + 1) {\n        for (int i = 0; i < n; i++) add(i, x);\n    }\n\
    \n    void add(int k, const T &x) { for (; k < n; k |= k + 1) bit[k] += x; }\n\
    \    void set(int k, const T &x) { add(k, x - sum(k, k + 1)); }\n\n    [[nodiscard]]\
    \ T sum(int k) const {\n        T res = 0;\n        for (k--; k >= 0; k = (k &\
    \ (k + 1)) - 1) res += bit[k];\n        return res;\n    }\n    [[nodiscard]]\
    \ T sum(int l, int r) const { return sum(r) - sum(l); }\n\nprivate:\n    int n;\n\
    \    vector<T> bit;\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/FenwickTree.hpp
  requiredBy: []
  timestamp: '2021-02-13 18:30:55+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/point_add_range_sum.test.cpp
  - test/aoj/DSL_2_B.test.cpp
documentation_of: src/FenwickTree.hpp
layout: document
redirect_from:
- /library/src/FenwickTree.hpp
- /library/src/FenwickTree.hpp.html
title: src/FenwickTree.hpp
---
