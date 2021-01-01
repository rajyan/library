---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/popcount.cpp\"\n\nusing lint = long long;\n\ninline\
    \ int popcount(lint n) {\n    n = (n & 0x5555555555555555) + (n >> 1 & 0x5555555555555555);\n\
    \    n = (n & 0x3333333333333333) + (n >> 2 & 0x3333333333333333);\n    n = (n\
    \ & 0x0f0f0f0f0f0f0f0f) + (n >> 4 & 0x0f0f0f0f0f0f0f0f);\n    n = (n & 0x00ff00ff00ff00ff)\
    \ + (n >> 8 & 0x00ff00ff00ff00ff);\n    n = (n & 0x0000ffff0000ffff) + (n >> 16\
    \ & 0x0000ffff0000ffff);\n    n = (n & 0x00000000ffffffff) + (n >> 32 & 0x00000000ffffffff);\n\
    \    return n;\n}\n"
  code: "\nusing lint = long long;\n\ninline int popcount(lint n) {\n    n = (n &\
    \ 0x5555555555555555) + (n >> 1 & 0x5555555555555555);\n    n = (n & 0x3333333333333333)\
    \ + (n >> 2 & 0x3333333333333333);\n    n = (n & 0x0f0f0f0f0f0f0f0f) + (n >> 4\
    \ & 0x0f0f0f0f0f0f0f0f);\n    n = (n & 0x00ff00ff00ff00ff) + (n >> 8 & 0x00ff00ff00ff00ff);\n\
    \    n = (n & 0x0000ffff0000ffff) + (n >> 16 & 0x0000ffff0000ffff);\n    n = (n\
    \ & 0x00000000ffffffff) + (n >> 32 & 0x00000000ffffffff);\n    return n;\n}"
  dependsOn: []
  isVerificationFile: false
  path: src/popcount.cpp
  requiredBy: []
  timestamp: '2021-01-01 20:28:23+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/popcount.cpp
layout: document
redirect_from:
- /library/src/popcount.cpp
- /library/src/popcount.cpp.html
title: src/popcount.cpp
---
