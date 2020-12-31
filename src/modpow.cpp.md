---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/modpow.cpp\"\n\nusing lint = long long;\nconstexpr int\
    \ MOD = 1000000007;\n\nlint modpow(lint a, lint n, lint mod = MOD) {\n\tlint res\
    \ = 1;\n\twhile (n > 0) {\n\t\tif (n & 1) res = res * a % mod;\n\t\ta = a * a\
    \ % mod;\n\t\tn >>= 1;\n\t}\n\treturn res;\n}\n"
  code: "\nusing lint = long long;\nconstexpr int MOD = 1000000007;\n\nlint modpow(lint\
    \ a, lint n, lint mod = MOD) {\n\tlint res = 1;\n\twhile (n > 0) {\n\t\tif (n\
    \ & 1) res = res * a % mod;\n\t\ta = a * a % mod;\n\t\tn >>= 1;\n\t}\n\treturn\
    \ res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/modpow.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:28:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/modpow.cpp
layout: document
redirect_from:
- /library/src/modpow.cpp
- /library/src/modpow.cpp.html
title: src/modpow.cpp
---
