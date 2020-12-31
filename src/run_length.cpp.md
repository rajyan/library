---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/run_length.cpp\"\n#include <string>\n#include <vector>\n\
    \nusing namespace std;\n\nvector<pair<char, int>> run_length(string s) {\n\tchar\
    \ prev = s[0];\n\tvector<pair<char, int>> res{ {prev, 0} };\n\tfor (const auto\
    \ &c : s) {\n\t\tif (c == prev) res.back().second++;\n\t\telse res.emplace_back(c,\
    \ 1);\n\t\tprev = c;\n\t}\n\treturn res;\n}\n"
  code: "#include <string>\n#include <vector>\n\nusing namespace std;\n\nvector<pair<char,\
    \ int>> run_length(string s) {\n\tchar prev = s[0];\n\tvector<pair<char, int>>\
    \ res{ {prev, 0} };\n\tfor (const auto &c : s) {\n\t\tif (c == prev) res.back().second++;\n\
    \t\telse res.emplace_back(c, 1);\n\t\tprev = c;\n\t}\n\treturn res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/run_length.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:28:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/run_length.cpp
layout: document
redirect_from:
- /library/src/run_length.cpp
- /library/src/run_length.cpp.html
title: src/run_length.cpp
---
