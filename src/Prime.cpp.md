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
  bundledCode: "#line 1 \"src/Prime.cpp\"\n#include <vector>\n\nusing namespace std;\n\
    using lint = long long;\n\nclass Prime {\nprivate:\n    vector<int> min_pf; //\
    \ min_pf[i] = minimum prime factor of i\n    vector<int> prime;\n\n    // linear\
    \ sieve https://cp-algorithms.com/algebra/prime-sieve-linear.html\n    void sieve(int\
    \ N) {\n        min_pf[0] = min_pf[1] = -1;\n        for (int i = 2; i < N; i++)\
    \ {\n            if (min_pf[i] == 0) {\n                prime.emplace_back(i);\n\
    \                min_pf[i] = i;\n            }\n            for (int j = 0; j\
    \ < (int)(prime.size()); ++j) {\n                if (prime[j] > min_pf[i] || i\
    \ * prime[j] >= N) break;\n                min_pf[i * prime[j]] = prime[j];\n\
    \            }\n        }\n    }\n\npublic:\n    Prime(int N = 1100000) : min_pf(N\
    \ + 1) { sieve(N + 1); }\n\n    vector<pair<lint, int>> factorize(lint n) {\n\
    \        vector<pair<lint, int>> res;\n        lint sz = (lint)min_pf.size();\n\
    \n        if (n >= sz) {\n            for (lint i = 2; i * i <= n; i++) {\n  \
    \              int cnt = 0;\n                while (n % i == 0) {\n          \
    \          cnt++;\n                    n /= i;\n                }\n          \
    \      if (cnt) res.emplace_back(i, cnt);\n            }\n            res.emplace_back(n,\
    \ 1);\n        }\n        else {\n            int prev = min_pf[n], cnt = -1;\n\
    \            while (n > 0) {\n                int now = min_pf[n];\n         \
    \       n /= now;\n                cnt++;\n                if (prev != now) {\n\
    \                    res.emplace_back(prev, cnt);\n                    prev =\
    \ now;\n                    cnt = 0;\n                }\n            }\n     \
    \   }\n\n        return res;\n    }\n\n    // verified using boost miller_rabin_test\
    \ https://wandbox.org/permlink/6YepW3J9SQNFwWxu\n    bool isPrime(lint n) {\n\
    \        if (n < (int)(min_pf.size())) return min_pf[n] == n;\n        else if\
    \ (n == 2 || n == 3) return true;\n        else if (n % 2 == 0 || n % 3 == 0)\
    \ return false;\n        else if (n % 6 != 1 && n % 6 != 5) return false;\n  \
    \      for (lint i = 5; i * i <= n; i += 6) {\n            if (n % i == 0) return\
    \ false;\n            if (n % (i + 2) == 0) return false;\n        }\n       \
    \ return true;\n    }\n};\n"
  code: "#include <vector>\n\nusing namespace std;\nusing lint = long long;\n\nclass\
    \ Prime {\nprivate:\n    vector<int> min_pf; // min_pf[i] = minimum prime factor\
    \ of i\n    vector<int> prime;\n\n    // linear sieve https://cp-algorithms.com/algebra/prime-sieve-linear.html\n\
    \    void sieve(int N) {\n        min_pf[0] = min_pf[1] = -1;\n        for (int\
    \ i = 2; i < N; i++) {\n            if (min_pf[i] == 0) {\n                prime.emplace_back(i);\n\
    \                min_pf[i] = i;\n            }\n            for (int j = 0; j\
    \ < (int)(prime.size()); ++j) {\n                if (prime[j] > min_pf[i] || i\
    \ * prime[j] >= N) break;\n                min_pf[i * prime[j]] = prime[j];\n\
    \            }\n        }\n    }\n\npublic:\n    Prime(int N = 1100000) : min_pf(N\
    \ + 1) { sieve(N + 1); }\n\n    vector<pair<lint, int>> factorize(lint n) {\n\
    \        vector<pair<lint, int>> res;\n        lint sz = (lint)min_pf.size();\n\
    \n        if (n >= sz) {\n            for (lint i = 2; i * i <= n; i++) {\n  \
    \              int cnt = 0;\n                while (n % i == 0) {\n          \
    \          cnt++;\n                    n /= i;\n                }\n          \
    \      if (cnt) res.emplace_back(i, cnt);\n            }\n            res.emplace_back(n,\
    \ 1);\n        }\n        else {\n            int prev = min_pf[n], cnt = -1;\n\
    \            while (n > 0) {\n                int now = min_pf[n];\n         \
    \       n /= now;\n                cnt++;\n                if (prev != now) {\n\
    \                    res.emplace_back(prev, cnt);\n                    prev =\
    \ now;\n                    cnt = 0;\n                }\n            }\n     \
    \   }\n\n        return res;\n    }\n\n    // verified using boost miller_rabin_test\
    \ https://wandbox.org/permlink/6YepW3J9SQNFwWxu\n    bool isPrime(lint n) {\n\
    \        if (n < (int)(min_pf.size())) return min_pf[n] == n;\n        else if\
    \ (n == 2 || n == 3) return true;\n        else if (n % 2 == 0 || n % 3 == 0)\
    \ return false;\n        else if (n % 6 != 1 && n % 6 != 5) return false;\n  \
    \      for (lint i = 5; i * i <= n; i += 6) {\n            if (n % i == 0) return\
    \ false;\n            if (n % (i + 2) == 0) return false;\n        }\n       \
    \ return true;\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/Prime.cpp
  requiredBy: []
  timestamp: '2021-01-01 20:28:23+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/Prime.cpp
layout: document
redirect_from:
- /library/src/Prime.cpp
- /library/src/Prime.cpp.html
title: src/Prime.cpp
---
