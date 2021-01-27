---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/ALDS1_4_B.test.cpp
    title: test/aoj/ALDS1_4_B.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/bisearch.cpp\"\n#include <cmath>\n\nusing namespace\
    \ std;\n\ntemplate<class T, class F>\nT bisearch(T OK, T NG, F f) {\n    T ok\
    \ = OK;\n    T ng = NG;\n\n    while (abs(ok - ng) > 1) {\n        auto mid =\
    \ (ok + ng) / 2;\n\n        if (f(mid)) ok = mid;\n        else ng = mid;\n  \
    \  }\n\n    return ok;\n}\n"
  code: "#include <cmath>\n\nusing namespace std;\n\ntemplate<class T, class F>\n\
    T bisearch(T OK, T NG, F f) {\n    T ok = OK;\n    T ng = NG;\n\n    while (abs(ok\
    \ - ng) > 1) {\n        auto mid = (ok + ng) / 2;\n\n        if (f(mid)) ok =\
    \ mid;\n        else ng = mid;\n    }\n\n    return ok;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/bisearch.cpp
  requiredBy: []
  timestamp: '2021-01-27 22:01:17+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/ALDS1_4_B.test.cpp
documentation_of: src/bisearch.cpp
layout: document
redirect_from:
- /library/src/bisearch.cpp
- /library/src/bisearch.cpp.html
title: src/bisearch.cpp
---
