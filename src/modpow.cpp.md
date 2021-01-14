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
    \ MOD = 1000000007;\n\nlint modpow(lint a, lint n, lint mod = MOD) {\n    lint\
    \ res = 1;\n    while (n > 0) {\n        if (n & 1) res = res * a % mod;\n   \
    \     a = a * a % mod;\n        n >>= 1;\n    }\n    return res;\n}\n"
  code: "\nusing lint = long long;\nconstexpr int MOD = 1000000007;\n\nlint modpow(lint\
    \ a, lint n, lint mod = MOD) {\n    lint res = 1;\n    while (n > 0) {\n     \
    \   if (n & 1) res = res * a % mod;\n        a = a * a % mod;\n        n >>= 1;\n\
    \    }\n    return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/modpow.cpp
  requiredBy: []
  timestamp: '2021-01-01 20:28:23+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/modpow.cpp
layout: document
redirect_from:
- /library/src/modpow.cpp
- /library/src/modpow.cpp.html
title: src/modpow.cpp
---