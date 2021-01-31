---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/empty.cpp
    title: src/empty.cpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/ALDS1_4_B.test.cpp
    title: test/aoj/ALDS1_4_B.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/bisearch.hpp\"\n\n#include <cmath>\n\nusing namespace\
    \ std;\n\ntemplate<class T, class F>\nT bisearch(T OK, T NG, F f) {\n    T ok\
    \ = OK;\n    T ng = NG;\n\n    while (abs(ok - ng) > 1) {\n        auto mid =\
    \ (ok + ng) / 2;\n\n        if (f(mid)) ok = mid;\n        else ng = mid;\n  \
    \  }\n\n    return ok;\n}\n"
  code: "#pragma once\n\n#include <cmath>\n\nusing namespace std;\n\ntemplate<class\
    \ T, class F>\nT bisearch(T OK, T NG, F f) {\n    T ok = OK;\n    T ng = NG;\n\
    \n    while (abs(ok - ng) > 1) {\n        auto mid = (ok + ng) / 2;\n\n      \
    \  if (f(mid)) ok = mid;\n        else ng = mid;\n    }\n\n    return ok;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/bisearch.hpp
  requiredBy:
  - src/empty.cpp
  timestamp: '2021-01-31 19:19:57+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/ALDS1_4_B.test.cpp
documentation_of: src/bisearch.hpp
layout: document
redirect_from:
- /library/src/bisearch.hpp
- /library/src/bisearch.hpp.html
title: src/bisearch.hpp
---
