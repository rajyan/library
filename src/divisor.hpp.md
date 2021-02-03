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
  bundledCode: "#line 2 \"src/divisor.hpp\"\n\n#include <vector>\n#include <algorithm>\n\
    \nusing namespace std;\n\ntemplate<class T>\nvector<T> divisor(const T n) {\n\
    \    vector<T> res;\n    for (T i = 1; i * i <= n; i++) {\n        if (n % i ==\
    \ 0) {\n            res.emplace_back(i);\n            if (i * i != n) res.emplace_back(n\
    \ / i);\n        }\n    }\n    sort(res.begin(), res.end());\n    return res;\n\
    }\n"
  code: "#pragma once\n\n#include <vector>\n#include <algorithm>\n\nusing namespace\
    \ std;\n\ntemplate<class T>\nvector<T> divisor(const T n) {\n    vector<T> res;\n\
    \    for (T i = 1; i * i <= n; i++) {\n        if (n % i == 0) {\n           \
    \ res.emplace_back(i);\n            if (i * i != n) res.emplace_back(n / i);\n\
    \        }\n    }\n    sort(res.begin(), res.end());\n    return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/divisor.hpp
  requiredBy: []
  timestamp: '2021-01-31 19:19:57+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/divisor.hpp
layout: document
redirect_from:
- /library/src/divisor.hpp
- /library/src/divisor.hpp.html
title: src/divisor.hpp
---