---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/184.test.cpp
    title: test/yukicoder/184.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/Factorial.hpp\"\n\n#include <vector>\n\nusing namespace\
    \ std;\nusing lint = long long;\nconstexpr int MOD = 1000000007;\n\nclass Factorial\
    \ {\nprivate:\n    vector<lint> fac, inv, finv;\n\n    void build(int N) {\n \
    \       fac[0] = fac[1] = 1;\n        inv[1] = 1;\n        finv[0] = finv[1] =\
    \ 1;\n\n        for (int i = 2; i < N; i++) {\n            fac[i] = fac[i - 1]\
    \ * i % MOD;\n            inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;\n   \
    \         finv[i] = finv[i - 1] * inv[i] % MOD;\n        }\n    }\n\npublic:\n\
    \    explicit Factorial(int N = 110000) : fac(N + 1), inv(N + 1), finv(N + 1)\
    \ { build(N + 1); }\n\n    [[nodiscard]] lint Cmod(int n, int k) {\n        if\
    \ (n < k || k < 0) return 0LL;\n        return fac[n] * (finv[k] * finv[n - k]\
    \ % MOD) % MOD;\n    }\n\n    [[nodiscard]] lint Pmod(int n, int k) {\n      \
    \  if (n < k || k < 0) return 0LL;\n        return fac[n] * finv[n - k] % MOD;\n\
    \    }\n\n    [[nodiscard]] lint Hmod(int n, int k) {\n        if (n < 0 || k\
    \ < 0) return 0LL;\n        return k == 0 ? 1 : Cmod(n + k - 1, k);\n    }\n\n\
    };\n"
  code: "#pragma once\n\n#include <vector>\n\nusing namespace std;\nusing lint = long\
    \ long;\nconstexpr int MOD = 1000000007;\n\nclass Factorial {\nprivate:\n    vector<lint>\
    \ fac, inv, finv;\n\n    void build(int N) {\n        fac[0] = fac[1] = 1;\n \
    \       inv[1] = 1;\n        finv[0] = finv[1] = 1;\n\n        for (int i = 2;\
    \ i < N; i++) {\n            fac[i] = fac[i - 1] * i % MOD;\n            inv[i]\
    \ = MOD - inv[MOD % i] * (MOD / i) % MOD;\n            finv[i] = finv[i - 1] *\
    \ inv[i] % MOD;\n        }\n    }\n\npublic:\n    explicit Factorial(int N = 110000)\
    \ : fac(N + 1), inv(N + 1), finv(N + 1) { build(N + 1); }\n\n    [[nodiscard]]\
    \ lint Cmod(int n, int k) {\n        if (n < k || k < 0) return 0LL;\n       \
    \ return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;\n    }\n\n    [[nodiscard]]\
    \ lint Pmod(int n, int k) {\n        if (n < k || k < 0) return 0LL;\n       \
    \ return fac[n] * finv[n - k] % MOD;\n    }\n\n    [[nodiscard]] lint Hmod(int\
    \ n, int k) {\n        if (n < 0 || k < 0) return 0LL;\n        return k == 0\
    \ ? 1 : Cmod(n + k - 1, k);\n    }\n\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/Factorial.hpp
  requiredBy: []
  timestamp: '2021-01-31 19:19:57+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yukicoder/184.test.cpp
documentation_of: src/Factorial.hpp
layout: document
redirect_from:
- /library/src/Factorial.hpp
- /library/src/Factorial.hpp.html
title: src/Factorial.hpp
---
