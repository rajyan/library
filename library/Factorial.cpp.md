---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/184.test.cpp
    title: test/yukicoder/184.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"library/Factorial.cpp\"\n#include <vector>\n\nusing namespace\
    \ std;\nusing lint = long long;\nconstexpr int MOD = 1000000007;\n\nclass Factorial\
    \ {\nprivate:\n\tvector<lint> fac, inv, finv;\n\n\tvoid build(int N) {\n\t\tfac[0]\
    \ = fac[1] = 1; inv[1] = 1; finv[0] = finv[1] = 1;\n\n\t\tfor (int i = 2; i <\
    \ N; i++) {\n\t\t\tfac[i] = fac[i - 1] * i % MOD;\n\t\t\tinv[i] = MOD - inv[MOD%i]\
    \ * (MOD / i) % MOD;\n\t\t\tfinv[i] = finv[i - 1] * inv[i] % MOD;\n\t\t}\n\t}\n\
    \npublic:\n\tFactorial(int N = 110000) : fac(N + 1), inv(N + 1), finv(N + 1) {\
    \ build(N + 1); }\n\n\tlint Cmod (int n, int k) {\n\t\tif (n < k || k < 0) return\
    \ 0LL;\n\t\treturn fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;\n\t}\n\n\tlint\
    \ Pmod(int n, int k) {\n\t\tif (n < k || k < 0) return 0LL;\n\t\treturn fac[n]\
    \ * finv[n - k] % MOD;\n\t}\n\n\tlint Hmod(int n, int k) {\n\t\tif (n < 0 || k\
    \ < 0) return 0LL;\n\t\treturn k == 0 ? 1 : Cmod(n + k - 1, k);\n\t}\n\n};\n"
  code: "#include <vector>\n\nusing namespace std;\nusing lint = long long;\nconstexpr\
    \ int MOD = 1000000007;\n\nclass Factorial {\nprivate:\n\tvector<lint> fac, inv,\
    \ finv;\n\n\tvoid build(int N) {\n\t\tfac[0] = fac[1] = 1; inv[1] = 1; finv[0]\
    \ = finv[1] = 1;\n\n\t\tfor (int i = 2; i < N; i++) {\n\t\t\tfac[i] = fac[i -\
    \ 1] * i % MOD;\n\t\t\tinv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;\n\t\t\tfinv[i]\
    \ = finv[i - 1] * inv[i] % MOD;\n\t\t}\n\t}\n\npublic:\n\tFactorial(int N = 110000)\
    \ : fac(N + 1), inv(N + 1), finv(N + 1) { build(N + 1); }\n\n\tlint Cmod (int\
    \ n, int k) {\n\t\tif (n < k || k < 0) return 0LL;\n\t\treturn fac[n] * (finv[k]\
    \ * finv[n - k] % MOD) % MOD;\n\t}\n\n\tlint Pmod(int n, int k) {\n\t\tif (n <\
    \ k || k < 0) return 0LL;\n\t\treturn fac[n] * finv[n - k] % MOD;\n\t}\n\n\tlint\
    \ Hmod(int n, int k) {\n\t\tif (n < 0 || k < 0) return 0LL;\n\t\treturn k == 0\
    \ ? 1 : Cmod(n + k - 1, k);\n\t}\n\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: library/Factorial.cpp
  requiredBy: []
  timestamp: '2020-08-25 01:20:16+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yukicoder/184.test.cpp
documentation_of: library/Factorial.cpp
layout: document
redirect_from:
- /library/library/Factorial.cpp
- /library/library/Factorial.cpp.html
title: library/Factorial.cpp
---
