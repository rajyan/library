---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/modpow.hpp
    title: src/modpow.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B
  bundledCode: "#line 1 \"test/aoj/NTL_1_B.test.cpp\"\n\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B\"\
    \n\n#include <iostream>\n#include <iomanip>\n\nusing namespace std;\n\n#line 2\
    \ \"src/modpow.hpp\"\n\nusing lint = long long;\n\nlint modpow(lint a, lint n,\
    \ lint mod = 1000000007) {\n    lint res = 1;\n    while (n > 0) {\n        if\
    \ (n & 1) res = res * a % mod;\n        a = a * a % mod;\n        n >>= 1;\n \
    \   }\n    return res;\n}\n#line 10 \"test/aoj/NTL_1_B.test.cpp\"\n\nstruct init\
    \ {\n    init() {\n        cin.tie(nullptr);\n        ios::sync_with_stdio(false);\n\
    \        cout << fixed << setprecision(10);\n    }\n} init_;\n\nint main() {\n\
    \n    int m, n;\n    cin >> m >> n;\n\n    cout << modpow(m, n) << '\\n';\n\n\
    \    return 0;\n}\n\n"
  code: "\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B\"\
    \n\n#include <iostream>\n#include <iomanip>\n\nusing namespace std;\n\n#include\
    \ \"../../src/modpow.hpp\"\n\nstruct init {\n    init() {\n        cin.tie(nullptr);\n\
    \        ios::sync_with_stdio(false);\n        cout << fixed << setprecision(10);\n\
    \    }\n} init_;\n\nint main() {\n\n    int m, n;\n    cin >> m >> n;\n\n    cout\
    \ << modpow(m, n) << '\\n';\n\n    return 0;\n}\n\n"
  dependsOn:
  - src/modpow.hpp
  isVerificationFile: true
  path: test/aoj/NTL_1_B.test.cpp
  requiredBy: []
  timestamp: '2021-01-31 22:31:37+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/NTL_1_B.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/NTL_1_B.test.cpp
- /verify/test/aoj/NTL_1_B.test.cpp.html
title: test/aoj/NTL_1_B.test.cpp
---
