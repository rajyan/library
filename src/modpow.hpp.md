---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/NTL_1_B.test.cpp
    title: test/aoj/NTL_1_B.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/modpow.hpp\"\n\nusing lint = long long;\nconstexpr int\
    \ MOD = 1000000007;\n\nlint modpow(lint a, lint n, lint mod = MOD) {\n    lint\
    \ res = 1;\n    while (n > 0) {\n        if (n & 1) res = res * a % mod;\n   \
    \     a = a * a % mod;\n        n >>= 1;\n    }\n    return res;\n}\n"
  code: "\nusing lint = long long;\nconstexpr int MOD = 1000000007;\n\nlint modpow(lint\
    \ a, lint n, lint mod = MOD) {\n    lint res = 1;\n    while (n > 0) {\n     \
    \   if (n & 1) res = res * a % mod;\n        a = a * a % mod;\n        n >>= 1;\n\
    \    }\n    return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/modpow.hpp
  requiredBy: []
  timestamp: '2021-01-27 22:37:38+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/NTL_1_B.test.cpp
documentation_of: src/modpow.hpp
layout: document
redirect_from:
- /library/src/modpow.hpp
- /library/src/modpow.hpp.html
title: src/modpow.hpp
---
