---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/debug_template.cpp\"\n\n// for MSVC++\n#define _CRT_SECURE_NO_WARNINGS\n\
    \n#include <iostream>\n#include <vector>\n#include <set>\n#include <map>\n\nusing\
    \ namespace std;\n\ntemplate <class T>\nostream &operator<<(ostream &os, const\
    \ vector<T> &vec) {\n\tos << \"[ \";\n\tfor (const auto &e : vec) os << e << \"\
    \ \";\n\tos << \"]\\n\";\n\treturn os;\n}\n\ntemplate <class T>\nostream &operator<<(ostream\
    \ &os, const set<T> &st) {\n\tos << \"[ \";\n\tfor (const auto &e : st) os <<\
    \ e << \" \";\n\tos << \"]\\n\";\n\treturn os;\n}\n\ntemplate <class T1, class\
    \ T2>\nostream &operator<<(ostream &os, const pair<T1, T2> &p) {\n\tos << '('\
    \ << p.first << ',' << p.second << ')';\n\treturn os;\n}\n\ntemplate <class T1,\
    \ class T2>\nostream &operator<<(ostream &os, const map<T1, T2> &mp) {\n\tos <<\
    \ \"[ \";\n\tfor (const auto &e : mp) os << e << \" \";\n\tos << \"]\\n\";\n\t\
    return os;\n}\n\ntemplate <class T>\nvoid dump(const char* str, T &&h) { cerr\
    \ << str << \" = \" << h << \"\\n\"; };\ntemplate <class Head, class... Tail>\n\
    void dump(const char* str, Head &&h, Tail &&... t) {\n\twhile (*str != ',') cerr\
    \ << *str++; cerr << \" = \" << h << \"\\n\";\n\tdump(str + (*(str + 1) == ' '\
    \ ? 2 : 1), t...);\n}\n"
  code: "#pragma once\n\n// for MSVC++\n#define _CRT_SECURE_NO_WARNINGS\n\n#include\
    \ <iostream>\n#include <vector>\n#include <set>\n#include <map>\n\nusing namespace\
    \ std;\n\ntemplate <class T>\nostream &operator<<(ostream &os, const vector<T>\
    \ &vec) {\n\tos << \"[ \";\n\tfor (const auto &e : vec) os << e << \" \";\n\t\
    os << \"]\\n\";\n\treturn os;\n}\n\ntemplate <class T>\nostream &operator<<(ostream\
    \ &os, const set<T> &st) {\n\tos << \"[ \";\n\tfor (const auto &e : st) os <<\
    \ e << \" \";\n\tos << \"]\\n\";\n\treturn os;\n}\n\ntemplate <class T1, class\
    \ T2>\nostream &operator<<(ostream &os, const pair<T1, T2> &p) {\n\tos << '('\
    \ << p.first << ',' << p.second << ')';\n\treturn os;\n}\n\ntemplate <class T1,\
    \ class T2>\nostream &operator<<(ostream &os, const map<T1, T2> &mp) {\n\tos <<\
    \ \"[ \";\n\tfor (const auto &e : mp) os << e << \" \";\n\tos << \"]\\n\";\n\t\
    return os;\n}\n\ntemplate <class T>\nvoid dump(const char* str, T &&h) { cerr\
    \ << str << \" = \" << h << \"\\n\"; };\ntemplate <class Head, class... Tail>\n\
    void dump(const char* str, Head &&h, Tail &&... t) {\n\twhile (*str != ',') cerr\
    \ << *str++; cerr << \" = \" << h << \"\\n\";\n\tdump(str + (*(str + 1) == ' '\
    \ ? 2 : 1), t...);\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/debug_template.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:28:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/debug_template.cpp
layout: document
redirect_from:
- /library/src/debug_template.cpp
- /library/src/debug_template.cpp.html
title: src/debug_template.cpp
---
