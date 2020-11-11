---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"library/run_length.cpp\"\n\n#include <string>\n#include\
    \ <vector>\n\nusing namespace std;\n\nvector<pair<char, int>> run_length(string\
    \ s) {\n\tchar prev = s[0];\n\tvector<pair<char, int>> res{ {prev, 0} };\n\tfor\
    \ (const auto &c : s) {\n\t\tif (c == prev) res.back().second++;\n\t\telse res.emplace_back(c,\
    \ 1);\n\t\tprev = c;\n\t}\n\treturn res;\n}\n"
  code: "\n#include <string>\n#include <vector>\n\nusing namespace std;\n\nvector<pair<char,\
    \ int>> run_length(string s) {\n\tchar prev = s[0];\n\tvector<pair<char, int>>\
    \ res{ {prev, 0} };\n\tfor (const auto &c : s) {\n\t\tif (c == prev) res.back().second++;\n\
    \t\telse res.emplace_back(c, 1);\n\t\tprev = c;\n\t}\n\treturn res;\n}"
  dependsOn: []
  isVerificationFile: false
  path: library/run_length.cpp
  requiredBy: []
  timestamp: '2020-05-06 16:43:27+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: library/run_length.cpp
layout: document
redirect_from:
- /library/library/run_length.cpp
- /library/library/run_length.cpp.html
title: library/run_length.cpp
---
