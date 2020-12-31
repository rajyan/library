---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/bisearch.cpp\"\n\nauto judge = [&](auto key) {\n\treturn\
    \ key;\n};\n\nauto bisearch = [&](auto f) {\n\t\n\tauto ng = -1LL;\n\tauto ok\
    \ = LINF;\n\n\twhile (abs(ok - ng) > 1) {\n\t\tauto mid = (ok + ng) / 2;\n\n\t\
    \tif (f(mid)) ok = mid;\n\t\telse ng = mid;\n\t}\n\n\treturn ok;\n};\n"
  code: "\nauto judge = [&](auto key) {\n\treturn key;\n};\n\nauto bisearch = [&](auto\
    \ f) {\n\t\n\tauto ng = -1LL;\n\tauto ok = LINF;\n\n\twhile (abs(ok - ng) > 1)\
    \ {\n\t\tauto mid = (ok + ng) / 2;\n\n\t\tif (f(mid)) ok = mid;\n\t\telse ng =\
    \ mid;\n\t}\n\n\treturn ok;\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/bisearch.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:28:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/bisearch.cpp
layout: document
redirect_from:
- /library/src/bisearch.cpp
- /library/src/bisearch.cpp.html
title: src/bisearch.cpp
---
