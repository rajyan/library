---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/bisearch.cpp
    title: src/bisearch.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_B&lang=ja
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_B&lang=ja
  bundledCode: "#line 1 \"test/aoj/ALDS1_4_B.test.cpp\"\n\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_B&lang=ja\"\
    \n\n#line 1 \"src/bisearch.cpp\"\n#include <cmath>\n\nusing namespace std;\n\n\
    template<class T, class F>\nT bisearch(T OK, T NG, F f) {\n    T ok = OK;\n  \
    \  T ng = NG;\n\n    while (abs(ok - ng) > 1) {\n        auto mid = (ok + ng)\
    \ / 2;\n\n        if (f(mid)) ok = mid;\n        else ng = mid;\n    }\n\n   \
    \ return ok;\n}\n#line 5 \"test/aoj/ALDS1_4_B.test.cpp\"\n\n#include <iostream>\n\
    #include <iomanip>\n#include <vector>\n\nusing namespace std;\nusing lint = long\
    \ long;\n\nstruct init {\n    init() {\n        cin.tie(nullptr);\n        ios::sync_with_stdio(false);\n\
    \        cout << fixed << setprecision(10);\n    }\n} init_;\n\nint main() {\n\
    \n    int n;\n    cin >> n;\n    vector<int> S(n);\n    for (int i = 0; i < n;\
    \ i++) cin >> S[i];\n\n    int q;\n    cin >> q;\n    vector<int> T(n);\n    for\
    \ (int i = 0; i < q; i++) cin >> T[i];\n\n    int ans = 0;\n    for (int i = 0;\
    \ i < q; i++) {\n        auto f = [&](int index) { return index < n && S[index]\
    \ <= T[i]; };\n        int index = bisearch(0, n, f);\n        ans += S[index]\
    \ == T[i];\n    }\n    \n    cout << ans << '\\n';\n\n    return 0;\n}\n"
  code: "\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_B&lang=ja\"\
    \n\n#include \"../../src/bisearch.cpp\"\n\n#include <iostream>\n#include <iomanip>\n\
    #include <vector>\n\nusing namespace std;\nusing lint = long long;\n\nstruct init\
    \ {\n    init() {\n        cin.tie(nullptr);\n        ios::sync_with_stdio(false);\n\
    \        cout << fixed << setprecision(10);\n    }\n} init_;\n\nint main() {\n\
    \n    int n;\n    cin >> n;\n    vector<int> S(n);\n    for (int i = 0; i < n;\
    \ i++) cin >> S[i];\n\n    int q;\n    cin >> q;\n    vector<int> T(n);\n    for\
    \ (int i = 0; i < q; i++) cin >> T[i];\n\n    int ans = 0;\n    for (int i = 0;\
    \ i < q; i++) {\n        auto f = [&](int index) { return index < n && S[index]\
    \ <= T[i]; };\n        int index = bisearch(0, n, f);\n        ans += S[index]\
    \ == T[i];\n    }\n    \n    cout << ans << '\\n';\n\n    return 0;\n}\n"
  dependsOn:
  - src/bisearch.cpp
  isVerificationFile: true
  path: test/aoj/ALDS1_4_B.test.cpp
  requiredBy: []
  timestamp: '2021-01-27 22:01:17+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/ALDS1_4_B.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/ALDS1_4_B.test.cpp
- /verify/test/aoj/ALDS1_4_B.test.cpp.html
title: test/aoj/ALDS1_4_B.test.cpp
---
