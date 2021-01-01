---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yosupo/associative_array.test.cpp
    title: test/yosupo/associative_array.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/fnv1a.cpp\"\n#include <iostream>\n\nusing namespace\
    \ std;\n\ninline uint64_t fnv1a_64(string data) {\n\n    uint64_t hash = 0xcbf29ce484222325;\n\
    \    constexpr uint64_t prime = 0x100000001b3;\n\n    for (int i = 0; i < (int)data.size();\
    \ ++i) {\n        hash = hash ^ data[i];\n        hash *= prime;\n    }\n\n  \
    \  return hash;\n}\n"
  code: "#include <iostream>\n\nusing namespace std;\n\ninline uint64_t fnv1a_64(string\
    \ data) {\n\n    uint64_t hash = 0xcbf29ce484222325;\n    constexpr uint64_t prime\
    \ = 0x100000001b3;\n\n    for (int i = 0; i < (int)data.size(); ++i) {\n     \
    \   hash = hash ^ data[i];\n        hash *= prime;\n    }\n\n    return hash;\n\
    }"
  dependsOn: []
  isVerificationFile: false
  path: src/fnv1a.cpp
  requiredBy: []
  timestamp: '2021-01-01 20:28:23+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/associative_array.test.cpp
documentation_of: src/fnv1a.cpp
layout: document
redirect_from:
- /library/src/fnv1a.cpp
- /library/src/fnv1a.cpp.html
title: src/fnv1a.cpp
---
