---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/own/Random_runlength.test.cpp
    title: test/own/Random_runlength.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/runLength.cpp\"\n#include <string>\n#include <vector>\n\
    \nusing namespace std;\n\nvector<pair<char, int>> runLength(string s) {\n    char\
    \ prev = s[0];\n    vector<pair<char, int>> res{{prev, 0}};\n    for (const auto\
    \ &c : s) {\n        if (c == prev) res.back().second++;\n        else res.emplace_back(c,\
    \ 1);\n        prev = c;\n    }\n    return res;\n}\n"
  code: "#include <string>\n#include <vector>\n\nusing namespace std;\n\nvector<pair<char,\
    \ int>> runLength(string s) {\n    char prev = s[0];\n    vector<pair<char, int>>\
    \ res{{prev, 0}};\n    for (const auto &c : s) {\n        if (c == prev) res.back().second++;\n\
    \        else res.emplace_back(c, 1);\n        prev = c;\n    }\n    return res;\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: src/runLength.cpp
  requiredBy: []
  timestamp: '2021-01-24 12:59:22+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/own/Random_runlength.test.cpp
documentation_of: src/runLength.cpp
layout: document
redirect_from:
- /library/src/runLength.cpp
- /library/src/runLength.cpp.html
title: src/runLength.cpp
---
