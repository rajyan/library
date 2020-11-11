---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"library/modpow.cpp\"\n\nusing lint = long long;\nconstexpr\
    \ int MOD = 1000000007;\n\nlint modpow(lint a, lint n, lint mod = MOD) {\n\tlint\
    \ res = 1;\n\twhile (n > 0) {\n\t\tif (n & 1) res = res * a % mod;\n\t\ta = a\
    \ * a % mod;\n\t\tn >>= 1;\n\t}\n\treturn res;\n}\n"
  code: "\nusing lint = long long;\nconstexpr int MOD = 1000000007;\n\nlint modpow(lint\
    \ a, lint n, lint mod = MOD) {\n\tlint res = 1;\n\twhile (n > 0) {\n\t\tif (n\
    \ & 1) res = res * a % mod;\n\t\ta = a * a % mod;\n\t\tn >>= 1;\n\t}\n\treturn\
    \ res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: library/modpow.cpp
  requiredBy: []
  timestamp: '2020-05-11 21:11:50+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: library/modpow.cpp
layout: document
redirect_from:
- /library/library/modpow.cpp
- /library/library/modpow.cpp.html
title: library/modpow.cpp
---
