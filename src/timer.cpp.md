---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/timer.cpp\"\n\n#include <chrono>\n\nusing namespace\
    \ std;\n\nclass Timer {\npublic:\n    Timer() { reset(); }\n\n    void reset()\
    \ {\n        start = chrono::high_resolution_clock::now();\n    }\n\n    chrono::microseconds::rep\
    \ elapsed() {\n        auto end = chrono::high_resolution_clock::now();\n    \
    \    return chrono::duration_cast<chrono::microseconds>(end - start).count();\n\
    \    }\n\nprivate:\n    chrono::high_resolution_clock::time_point start;\n};\n"
  code: "\n#include <chrono>\n\nusing namespace std;\n\nclass Timer {\npublic:\n \
    \   Timer() { reset(); }\n\n    void reset() {\n        start = chrono::high_resolution_clock::now();\n\
    \    }\n\n    chrono::microseconds::rep elapsed() {\n        auto end = chrono::high_resolution_clock::now();\n\
    \        return chrono::duration_cast<chrono::microseconds>(end - start).count();\n\
    \    }\n\nprivate:\n    chrono::high_resolution_clock::time_point start;\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/timer.cpp
  requiredBy: []
  timestamp: '2021-01-21 09:19:42+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/timer.cpp
layout: document
redirect_from:
- /library/src/timer.cpp
- /library/src/timer.cpp.html
title: src/timer.cpp
---
