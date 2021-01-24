---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/run_length.cpp\"\n#include <string>\n#include <vector>\n\
    \nusing namespace std;\n\nvector<pair<char, int>> run_length(string s) {\n   \
    \ char prev = s[0];\n    vector<pair<char, int>> res{{prev, 0}};\n    for (const\
    \ auto &c : s) {\n        if (c == prev) res.back().second++;\n        else res.emplace_back(c,\
    \ 1);\n        prev = c;\n    }\n    return res;\n}\n"
  code: "#include <string>\n#include <vector>\n\nusing namespace std;\n\nvector<pair<char,\
    \ int>> run_length(string s) {\n    char prev = s[0];\n    vector<pair<char, int>>\
    \ res{{prev, 0}};\n    for (const auto &c : s) {\n        if (c == prev) res.back().second++;\n\
    \        else res.emplace_back(c, 1);\n        prev = c;\n    }\n    return res;\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: src/run_length.cpp
  requiredBy: []
  timestamp: '2021-01-01 20:28:23+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/run_length.cpp
layout: document
redirect_from:
- /library/src/run_length.cpp
- /library/src/run_length.cpp.html
title: src/run_length.cpp
---
