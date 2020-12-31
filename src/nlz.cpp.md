---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/nlz.cpp\"\nint nlz(unsigned int x) {\n\tunion {\n\t\t\
    unsigned int as_uint32;\n\t\tfloat        as_float;\n\t} data;\n\tdata.as_float\
    \ = (float)x + 0.5;\n\tint n = 158 - (data.as_uint32 >> 23);\n\treturn n;\n}\n"
  code: "int nlz(unsigned int x) {\n\tunion {\n\t\tunsigned int as_uint32;\n\t\tfloat\
    \        as_float;\n\t} data;\n\tdata.as_float = (float)x + 0.5;\n\tint n = 158\
    \ - (data.as_uint32 >> 23);\n\treturn n;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/nlz.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:28:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/nlz.cpp
layout: document
redirect_from:
- /library/src/nlz.cpp
- /library/src/nlz.cpp.html
title: src/nlz.cpp
---
