---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"library/popcount.cpp\"\n\nusing lint = long long;\n\ninline\
    \ int popcount(lint n) {\n\tn = (n & 0x5555555555555555) + (n >> 1 & 0x5555555555555555);\n\
    \tn = (n & 0x3333333333333333) + (n >> 2 & 0x3333333333333333);\n\tn = (n & 0x0f0f0f0f0f0f0f0f)\
    \ + (n >> 4 & 0x0f0f0f0f0f0f0f0f);\n\tn = (n & 0x00ff00ff00ff00ff) + (n >> 8 &\
    \ 0x00ff00ff00ff00ff);\n\tn = (n & 0x0000ffff0000ffff) + (n >> 16 & 0x0000ffff0000ffff);\n\
    \tn = (n & 0x00000000ffffffff) + (n >> 32 & 0x00000000ffffffff);\n\treturn n;\n\
    }\n"
  code: "\nusing lint = long long;\n\ninline int popcount(lint n) {\n\tn = (n & 0x5555555555555555)\
    \ + (n >> 1 & 0x5555555555555555);\n\tn = (n & 0x3333333333333333) + (n >> 2 &\
    \ 0x3333333333333333);\n\tn = (n & 0x0f0f0f0f0f0f0f0f) + (n >> 4 & 0x0f0f0f0f0f0f0f0f);\n\
    \tn = (n & 0x00ff00ff00ff00ff) + (n >> 8 & 0x00ff00ff00ff00ff);\n\tn = (n & 0x0000ffff0000ffff)\
    \ + (n >> 16 & 0x0000ffff0000ffff);\n\tn = (n & 0x00000000ffffffff) + (n >> 32\
    \ & 0x00000000ffffffff);\n\treturn n;\n}"
  dependsOn: []
  isVerificationFile: false
  path: library/popcount.cpp
  requiredBy: []
  timestamp: '2020-05-06 17:51:16+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: library/popcount.cpp
layout: document
redirect_from:
- /library/library/popcount.cpp
- /library/library/popcount.cpp.html
title: library/popcount.cpp
---
