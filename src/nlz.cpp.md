---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yosupo/lca.test.cpp
    title: test/yosupo/lca.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/nlz.cpp\"\nint nlz(unsigned int x) {\n    union {\n\
    \        unsigned int as_uint32;\n        float as_float;\n    } data{};\n   \
    \ data.as_float = (float)x + 0.5;\n    int n = 158 - (data.as_uint32 >> 23);\n\
    \    return n;\n}\n"
  code: "int nlz(unsigned int x) {\n    union {\n        unsigned int as_uint32;\n\
    \        float as_float;\n    } data{};\n    data.as_float = (float)x + 0.5;\n\
    \    int n = 158 - (data.as_uint32 >> 23);\n    return n;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/nlz.cpp
  requiredBy: []
  timestamp: '2021-01-11 12:34:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/lca.test.cpp
documentation_of: src/nlz.cpp
layout: document
redirect_from:
- /library/src/nlz.cpp
- /library/src/nlz.cpp.html
title: src/nlz.cpp
---
