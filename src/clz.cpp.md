---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/LowestCommonAncestor.cpp
    title: src/LowestCommonAncestor.cpp
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/own/RandNum_clz.test.cpp
    title: test/own/RandNum_clz.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yosupo/lca.test.cpp
    title: test/yosupo/lca.test.cpp
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/clz.cpp\"\n\nusing lint = long long;\n\ninline int clz(lint\
    \ x) {\n    union {\n        unsigned long long as_uint64;\n        double as_double;\n\
    \    } data{};\n    data.as_double = (double)x + 0.5;\n    int n = 1054 - (int)(data.as_uint64\
    \ >> 52);\n    return 32 + n;\n}\n"
  code: "\nusing lint = long long;\n\ninline int clz(lint x) {\n    union {\n    \
    \    unsigned long long as_uint64;\n        double as_double;\n    } data{};\n\
    \    data.as_double = (double)x + 0.5;\n    int n = 1054 - (int)(data.as_uint64\
    \ >> 52);\n    return 32 + n;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/clz.cpp
  requiredBy:
  - src/LowestCommonAncestor.cpp
  timestamp: '2021-01-17 15:47:25+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - test/yosupo/lca.test.cpp
  - test/own/RandNum_clz.test.cpp
documentation_of: src/clz.cpp
layout: document
redirect_from:
- /library/src/clz.cpp
- /library/src/clz.cpp.html
title: src/clz.cpp
---
