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
    \ std;\n\ntemplate<class T>\nclass FenwickTree {\nprivate:\n    int n;\n    vector<T>\
    \ bit;\npublic:\n    explicit FenwickTree(int sz, T &&x = T(0)) : n(sz), bit(n\
    \ + 1) {\n        for (int i = 0; i < n; i++) add(i, x);\n    }\n\n    T sum(int\
    \ k) const {\n        T res = 0;\n        for (k--; k >= 0; k = (k & (k + 1))\
    \ - 1) res += bit[k];\n        return res;\n    }\n    T sum(int l, int r) const\
    \ { return sum(r) - sum(l); }\n\n    void add(int k, const T &x) {\n        for\
    \ (; k < n; k |= k + 1) bit[k] += x;\n    }\n    void set(int k, const T &x) {\
    \ add(k, x - sum(k, k + 1)); }\n};\n"
  code: "#include <vector>\n\nusing namespace std;\n\ntemplate<class T>\nclass FenwickTree\
    \ {\nprivate:\n    int n;\n    vector<T> bit;\npublic:\n    explicit FenwickTree(int\
    \ sz, T &&x = T(0)) : n(sz), bit(n + 1) {\n        for (int i = 0; i < n; i++)\
    \ add(i, x);\n    }\n\n    T sum(int k) const {\n        T res = 0;\n        for\
    \ (k--; k >= 0; k = (k & (k + 1)) - 1) res += bit[k];\n        return res;\n \
    \   }\n    T sum(int l, int r) const { return sum(r) - sum(l); }\n\n    void add(int\
    \ k, const T &x) {\n        for (; k < n; k |= k + 1) bit[k] += x;\n    }\n  \
    \  void set(int k, const T &x) { add(k, x - sum(k, k + 1)); }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/FenwickTree.cpp
  requiredBy: []
  timestamp: '2021-01-11 12:34:28+09:00'
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
