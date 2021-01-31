---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/Timer.hpp\"\n\n#include <chrono>\n\nusing namespace\
    \ std;\n\nclass Timer {\npublic:\n    Timer() { reset(); }\n\n    void reset()\
    \ {\n        start = chrono::high_resolution_clock::now();\n    }\n\n    [[nodiscard]]\
    \ chrono::microseconds::rep elapsed() const {\n        auto end = chrono::high_resolution_clock::now();\n\
    \        return chrono::duration_cast<chrono::microseconds>(end - start).count();\n\
    \    }\n\nprivate:\n    chrono::high_resolution_clock::time_point start;\n};\n"
  code: "#pragma once\n\n#include <chrono>\n\nusing namespace std;\n\nclass Timer\
    \ {\npublic:\n    Timer() { reset(); }\n\n    void reset() {\n        start =\
    \ chrono::high_resolution_clock::now();\n    }\n\n    [[nodiscard]] chrono::microseconds::rep\
    \ elapsed() const {\n        auto end = chrono::high_resolution_clock::now();\n\
    \        return chrono::duration_cast<chrono::microseconds>(end - start).count();\n\
    \    }\n\nprivate:\n    chrono::high_resolution_clock::time_point start;\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/Timer.hpp
  requiredBy: []
  timestamp: '2021-01-31 19:19:57+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/Timer.hpp
layout: document
redirect_from:
- /library/src/Timer.hpp
- /library/src/Timer.hpp.html
title: src/Timer.hpp
---
