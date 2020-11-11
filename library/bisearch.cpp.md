---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"library/bisearch.cpp\"\n\nauto judge = [&](auto key) {\n\
    \treturn key;\n};\n\nauto bisearch = [&](auto f) {\n\t\n\tauto ng = -1LL;\n\t\
    auto ok = LINF;\n\n\twhile (abs(ok - ng) > 1) {\n\t\tauto mid = (ok + ng) / 2;\n\
    \n\t\tif (f(mid)) ok = mid;\n\t\telse ng = mid;\n\t}\n\n\treturn ok;\n};\n"
  code: "\nauto judge = [&](auto key) {\n\treturn key;\n};\n\nauto bisearch = [&](auto\
    \ f) {\n\t\n\tauto ng = -1LL;\n\tauto ok = LINF;\n\n\twhile (abs(ok - ng) > 1)\
    \ {\n\t\tauto mid = (ok + ng) / 2;\n\n\t\tif (f(mid)) ok = mid;\n\t\telse ng =\
    \ mid;\n\t}\n\n\treturn ok;\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: library/bisearch.cpp
  requiredBy: []
  timestamp: '2020-08-17 22:16:42+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: library/bisearch.cpp
layout: document
redirect_from:
- /library/library/bisearch.cpp
- /library/library/bisearch.cpp.html
title: library/bisearch.cpp
---
