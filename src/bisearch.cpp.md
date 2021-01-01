---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/bisearch.cpp\"\n\nauto judge = [&](auto key) {\n   \
    \ return key;\n};\n\nauto bisearch = [&](auto f) {\n\n    auto ng = -1LL;\n  \
    \  auto ok = LINF;\n\n    while (abs(ok - ng) > 1) {\n        auto mid = (ok +\
    \ ng) / 2;\n\n        if (f(mid)) ok = mid;\n        else ng = mid;\n    }\n\n\
    \    return ok;\n};\n"
  code: "\nauto judge = [&](auto key) {\n    return key;\n};\n\nauto bisearch = [&](auto\
    \ f) {\n\n    auto ng = -1LL;\n    auto ok = LINF;\n\n    while (abs(ok - ng)\
    \ > 1) {\n        auto mid = (ok + ng) / 2;\n\n        if (f(mid)) ok = mid;\n\
    \        else ng = mid;\n    }\n\n    return ok;\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/bisearch.cpp
  requiredBy: []
  timestamp: '2021-01-01 20:28:23+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/bisearch.cpp
layout: document
redirect_from:
- /library/src/bisearch.cpp
- /library/src/bisearch.cpp.html
title: src/bisearch.cpp
---
