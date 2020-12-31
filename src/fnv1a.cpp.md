---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/fnv1a.cpp\"\n#include <iostream>\n\nusing namespace\
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
  path: src/fnv1a.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:28:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/fnv1a.cpp
layout: document
redirect_from:
- /library/src/fnv1a.cpp
- /library/src/fnv1a.cpp.html
title: src/fnv1a.cpp
---
