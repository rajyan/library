---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/own/Random_runlength.test.cpp
    title: test/own/Random_runlength.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/runLength.hpp\"\n\n#include <string>\n#include <vector>\n\
    \nusing namespace std;\n\nvector<pair<char, int>> runLength(string s) {\n    char\
    \ prev = s[0];\n    vector<pair<char, int>> res{{prev, 0}};\n    for (const auto\
    \ &c : s) {\n        if (c == prev) res.back().second++;\n        else res.emplace_back(c,\
    \ 1);\n        prev = c;\n    }\n    return res;\n}\n"
  code: "#pragma once\n\n#include <string>\n#include <vector>\n\nusing namespace std;\n\
    \nvector<pair<char, int>> runLength(string s) {\n    char prev = s[0];\n    vector<pair<char,\
    \ int>> res{{prev, 0}};\n    for (const auto &c : s) {\n        if (c == prev)\
    \ res.back().second++;\n        else res.emplace_back(c, 1);\n        prev = c;\n\
    \    }\n    return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/runLength.hpp
  requiredBy: []
  timestamp: '2021-01-31 19:19:57+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/own/Random_runlength.test.cpp
documentation_of: src/runLength.hpp
layout: document
redirect_from:
- /library/src/runLength.hpp
- /library/src/runLength.hpp.html
title: src/runLength.hpp
---
