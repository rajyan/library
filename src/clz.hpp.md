---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/LowestCommonAncestor.hpp
    title: src/LowestCommonAncestor.hpp
  - icon: ':heavy_check_mark:'
    path: src/SegmentTree.hpp
    title: src/SegmentTree.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/own/Random_clz.test.cpp
    title: test/own/Random_clz.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yosupo/lca.test.cpp
    title: test/yosupo/lca.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yosupo/point_add_range_sum_2.test.cpp
    title: test/yosupo/point_add_range_sum_2.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/clz.hpp\"\n\nusing lint = long long;\n\ninline int clz(lint\
    \ x) {\n    union {\n        unsigned long long as_uint64;\n        double as_double;\n\
    \    } data{};\n    data.as_double = (double)x + 0.5;\n    int n = 1054 - (int)(data.as_uint64\
    \ >> 52);\n    return 32 + n;\n}\n"
  code: "#pragma once\n\nusing lint = long long;\n\ninline int clz(lint x) {\n   \
    \ union {\n        unsigned long long as_uint64;\n        double as_double;\n\
    \    } data{};\n    data.as_double = (double)x + 0.5;\n    int n = 1054 - (int)(data.as_uint64\
    \ >> 52);\n    return 32 + n;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/clz.hpp
  requiredBy:
  - src/LowestCommonAncestor.hpp
  - src/SegmentTree.hpp
  timestamp: '2021-01-31 19:19:57+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/point_add_range_sum_2.test.cpp
  - test/yosupo/lca.test.cpp
  - test/own/Random_clz.test.cpp
documentation_of: src/clz.hpp
layout: document
redirect_from:
- /library/src/clz.hpp
- /library/src/clz.hpp.html
title: src/clz.hpp
---
