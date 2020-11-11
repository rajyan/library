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
  bundledCode: "#line 1 \"library/fnv1a.cpp\"\n#include <iostream>\n\nusing namespace\
    \ std;\n\ninline uint64_t fnv1a_64(string data) {\n\n\tuint64_t hash = 0xcbf29ce484222325;\n\
    \tconstexpr uint64_t prime = 0x100000001b3;\n\n\tfor (int i = 0; i < (int)data.size();\
    \ ++i) {\n\t\thash = hash ^ data[i];\n\t\thash *= prime;\n\t}\n\n\treturn hash;\n\
    }\n"
  code: "#include <iostream>\n\nusing namespace std;\n\ninline uint64_t fnv1a_64(string\
    \ data) {\n\n\tuint64_t hash = 0xcbf29ce484222325;\n\tconstexpr uint64_t prime\
    \ = 0x100000001b3;\n\n\tfor (int i = 0; i < (int)data.size(); ++i) {\n\t\thash\
    \ = hash ^ data[i];\n\t\thash *= prime;\n\t}\n\n\treturn hash;\n}"
  dependsOn: []
  isVerificationFile: false
  path: library/fnv1a.cpp
  requiredBy: []
  timestamp: '2020-08-23 11:44:21+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/associative_array.test.cpp
documentation_of: library/fnv1a.cpp
layout: document
redirect_from:
- /library/library/fnv1a.cpp
- /library/library/fnv1a.cpp.html
title: library/fnv1a.cpp
---
