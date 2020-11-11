---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://cp-algorithms.com/algebra/prime-sieve-linear.html
    - https://wandbox.org/permlink/6YepW3J9SQNFwWxu
  bundledCode: "#line 1 \"library/Prime.cpp\"\n#include <vector>\n\nusing namespace\
    \ std;\nusing lint = long long;\n\nclass Prime {\nprivate:\n\tvector<int> min_pf;\
    \ // min_pf[i] = minimum prime factor of i\n\tvector<int> prime;\n\n\t// linear\
    \ sieve https://cp-algorithms.com/algebra/prime-sieve-linear.html\n\tvoid sieve(int\
    \ N) {\n\t\tmin_pf[0] = min_pf[1] = -1;\n\t\tfor (int i = 2; i < N; i++) {\n\t\
    \t\tif (min_pf[i] == 0) {\n\t\t\t\tprime.emplace_back(i);\n\t\t\t\tmin_pf[i] =\
    \ i;\n\t\t\t}\n\t\t\tfor (int j = 0; j < (int)(prime.size()); ++j) {\n\t\t\t\t\
    if (prime[j] > min_pf[i] || i * prime[j] >= N) break;\n\t\t\t\tmin_pf[i * prime[j]]\
    \ = prime[j];\n\t\t\t}\n\t\t}\n\t}\n\npublic:\n\tPrime(int N = 1100000) : min_pf(N\
    \ + 1) { sieve(N + 1); }\n\n\tvector<pair<lint, int>> factorize(lint n) {\n\t\t\
    vector<pair<lint, int>> res;\n\t\tlint sz = (lint)min_pf.size();\n\n\t\tif (n\
    \ >= sz) {\n\t\t\tfor (lint i = 2; i * i <= n; i++) {\n\t\t\t\tint cnt = 0;\n\t\
    \t\t\twhile (n % i == 0) {\n\t\t\t\t\tcnt++;\n\t\t\t\t\tn /= i;\n\t\t\t\t}\n\t\
    \t\t\tif (cnt) res.emplace_back(i, cnt);\n\t\t\t}\n\t\t\tres.emplace_back(n, 1);\n\
    \t\t}\n\t\telse {\n\t\t\tint prev = min_pf[n], cnt = -1;\n\t\t\twhile (n > 0)\
    \ {\n\t\t\t\tint now = min_pf[n];\n\t\t\t\tn /= now;\n\t\t\t\tcnt++;\n\t\t\t\t\
    if (prev != now) {\n\t\t\t\t\tres.emplace_back(prev, cnt);\n\t\t\t\t\tprev = now;\n\
    \t\t\t\t\tcnt = 0;\n\t\t\t\t}\n\t\t\t}\n\t\t}\n\n\t\treturn res;\n\t}\n\n\t//\
    \ verified using boost miller_rabin_test https://wandbox.org/permlink/6YepW3J9SQNFwWxu\n\
    \tbool isPrime(lint n) {\n\t\tif (n < (int)(min_pf.size())) return min_pf[n] ==\
    \ n;\n\t\telse if (n == 2 || n == 3) return true;\n\t\telse if (n % 2 == 0 ||\
    \ n % 3 == 0) return false;\n\t\telse if (n % 6 != 1 && n % 6 != 5) return false;\n\
    \t\tfor (lint i = 5; i * i <= n; i += 6) {\n\t\t\tif (n % i == 0) return false;\n\
    \t\t\tif (n % (i + 2) == 0) return false;\n\t\t}\n\t\treturn true;\n\t}\n};\n"
  code: "#include <vector>\n\nusing namespace std;\nusing lint = long long;\n\nclass\
    \ Prime {\nprivate:\n\tvector<int> min_pf; // min_pf[i] = minimum prime factor\
    \ of i\n\tvector<int> prime;\n\n\t// linear sieve https://cp-algorithms.com/algebra/prime-sieve-linear.html\n\
    \tvoid sieve(int N) {\n\t\tmin_pf[0] = min_pf[1] = -1;\n\t\tfor (int i = 2; i\
    \ < N; i++) {\n\t\t\tif (min_pf[i] == 0) {\n\t\t\t\tprime.emplace_back(i);\n\t\
    \t\t\tmin_pf[i] = i;\n\t\t\t}\n\t\t\tfor (int j = 0; j < (int)(prime.size());\
    \ ++j) {\n\t\t\t\tif (prime[j] > min_pf[i] || i * prime[j] >= N) break;\n\t\t\t\
    \tmin_pf[i * prime[j]] = prime[j];\n\t\t\t}\n\t\t}\n\t}\n\npublic:\n\tPrime(int\
    \ N = 1100000) : min_pf(N + 1) { sieve(N + 1); }\n\n\tvector<pair<lint, int>>\
    \ factorize(lint n) {\n\t\tvector<pair<lint, int>> res;\n\t\tlint sz = (lint)min_pf.size();\n\
    \n\t\tif (n >= sz) {\n\t\t\tfor (lint i = 2; i * i <= n; i++) {\n\t\t\t\tint cnt\
    \ = 0;\n\t\t\t\twhile (n % i == 0) {\n\t\t\t\t\tcnt++;\n\t\t\t\t\tn /= i;\n\t\t\
    \t\t}\n\t\t\t\tif (cnt) res.emplace_back(i, cnt);\n\t\t\t}\n\t\t\tres.emplace_back(n,\
    \ 1);\n\t\t}\n\t\telse {\n\t\t\tint prev = min_pf[n], cnt = -1;\n\t\t\twhile (n\
    \ > 0) {\n\t\t\t\tint now = min_pf[n];\n\t\t\t\tn /= now;\n\t\t\t\tcnt++;\n\t\t\
    \t\tif (prev != now) {\n\t\t\t\t\tres.emplace_back(prev, cnt);\n\t\t\t\t\tprev\
    \ = now;\n\t\t\t\t\tcnt = 0;\n\t\t\t\t}\n\t\t\t}\n\t\t}\n\n\t\treturn res;\n\t\
    }\n\n\t// verified using boost miller_rabin_test https://wandbox.org/permlink/6YepW3J9SQNFwWxu\n\
    \tbool isPrime(lint n) {\n\t\tif (n < (int)(min_pf.size())) return min_pf[n] ==\
    \ n;\n\t\telse if (n == 2 || n == 3) return true;\n\t\telse if (n % 2 == 0 ||\
    \ n % 3 == 0) return false;\n\t\telse if (n % 6 != 1 && n % 6 != 5) return false;\n\
    \t\tfor (lint i = 5; i * i <= n; i += 6) {\n\t\t\tif (n % i == 0) return false;\n\
    \t\t\tif (n % (i + 2) == 0) return false;\n\t\t}\n\t\treturn true;\n\t}\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: library/Prime.cpp
  requiredBy: []
  timestamp: '2020-06-30 00:42:52+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: library/Prime.cpp
layout: document
redirect_from:
- /library/library/Prime.cpp
- /library/library/Prime.cpp.html
title: library/Prime.cpp
---
