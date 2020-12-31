---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/divisor.cpp\"\n#include <vector>\n#include <algorithm>\n\
    \nusing namespace std;\n\ntemplate<class T>\nvector<T> divisor(const T n) {\n\t\
    vector<T> res;\n\tfor (T i = 1; i * i <= n; i++) {\n\t\tif (n % i == 0) {\n\t\t\
    \tres.emplace_back(i);\n\t\t\tif (i * i != n) res.emplace_back(n / i);\n\t\t}\n\
    \t}\n\tsort(res.begin(), res.end());\n\treturn res;\n}\n"
  code: "#include <vector>\n#include <algorithm>\n\nusing namespace std;\n\ntemplate<class\
    \ T>\nvector<T> divisor(const T n) {\n\tvector<T> res;\n\tfor (T i = 1; i * i\
    \ <= n; i++) {\n\t\tif (n % i == 0) {\n\t\t\tres.emplace_back(i);\n\t\t\tif (i\
    \ * i != n) res.emplace_back(n / i);\n\t\t}\n\t}\n\tsort(res.begin(), res.end());\n\
    \treturn res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/divisor.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:28:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/divisor.cpp
layout: document
redirect_from:
- /library/src/divisor.cpp
- /library/src/divisor.cpp.html
title: src/divisor.cpp
---
