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
  bundledCode: "#line 1 \"library/nlz.cpp\"\nint nlz(unsigned int x) {\n\tunion {\n\
    \t\tunsigned int as_uint32;\n\t\tfloat        as_float;\n\t} data;\n\tdata.as_float\
    \ = (float)x + 0.5;\n\tint n = 158 - (data.as_uint32 >> 23);\n\treturn n;\n}\n"
  code: "int nlz(unsigned int x) {\n\tunion {\n\t\tunsigned int as_uint32;\n\t\tfloat\
    \        as_float;\n\t} data;\n\tdata.as_float = (float)x + 0.5;\n\tint n = 158\
    \ - (data.as_uint32 >> 23);\n\treturn n;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: library/nlz.cpp
  requiredBy: []
  timestamp: '2020-05-13 00:59:04+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/lca.test.cpp
documentation_of: library/nlz.cpp
layout: document
redirect_from:
- /library/library/nlz.cpp
- /library/library/nlz.cpp.html
title: library/nlz.cpp
---
