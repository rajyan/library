---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/184.test.cpp
    title: test/yukicoder/184.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/debug_template.hpp\"\n\n#define _CRT_SECURE_NO_WARNINGS\n\
    \n#include <iostream>\n#include <vector>\n#include <set>\n#include <map>\n\nusing\
    \ namespace std;\n\ntemplate<class T>\nostream &operator<<(ostream &os, const\
    \ vector<T> &vec) {\n    os << \"[ \";\n    for (const auto &e : vec) os << e\
    \ << \" \";\n    os << \"]\\n\";\n    return os;\n}\n\ntemplate<class T>\nostream\
    \ &operator<<(ostream &os, const set <T> &st) {\n    os << \"[ \";\n    for (const\
    \ auto &e : st) os << e << \" \";\n    os << \"]\\n\";\n    return os;\n}\n\n\
    template<class T1, class T2>\nostream &operator<<(ostream &os, const pair <T1,\
    \ T2> &p) {\n    os << '(' << p.first << ',' << p.second << ')';\n    return os;\n\
    }\n\ntemplate<class T1, class T2>\nostream &operator<<(ostream &os, const map\
    \ <T1, T2> &mp) {\n    os << \"[ \";\n    for (const auto &e : mp) os << e <<\
    \ \" \";\n    os << \"]\\n\";\n    return os;\n}\n\ntemplate<class T>\nvoid dump(const\
    \ char *str, T &&h) { cerr << str << \" = \" << h << \"\\n\"; };\ntemplate<class\
    \ Head, class... Tail>\nvoid dump(const char *str, Head &&h, Tail &&... t) {\n\
    \    while (*str != ',') cerr << *str++;\n    cerr << \" = \" << h << \"\\n\"\
    ;\n    dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);\n}\n"
  code: "#pragma once\n\n#define _CRT_SECURE_NO_WARNINGS\n\n#include <iostream>\n\
    #include <vector>\n#include <set>\n#include <map>\n\nusing namespace std;\n\n\
    template<class T>\nostream &operator<<(ostream &os, const vector<T> &vec) {\n\
    \    os << \"[ \";\n    for (const auto &e : vec) os << e << \" \";\n    os <<\
    \ \"]\\n\";\n    return os;\n}\n\ntemplate<class T>\nostream &operator<<(ostream\
    \ &os, const set <T> &st) {\n    os << \"[ \";\n    for (const auto &e : st) os\
    \ << e << \" \";\n    os << \"]\\n\";\n    return os;\n}\n\ntemplate<class T1,\
    \ class T2>\nostream &operator<<(ostream &os, const pair <T1, T2> &p) {\n    os\
    \ << '(' << p.first << ',' << p.second << ')';\n    return os;\n}\n\ntemplate<class\
    \ T1, class T2>\nostream &operator<<(ostream &os, const map <T1, T2> &mp) {\n\
    \    os << \"[ \";\n    for (const auto &e : mp) os << e << \" \";\n    os <<\
    \ \"]\\n\";\n    return os;\n}\n\ntemplate<class T>\nvoid dump(const char *str,\
    \ T &&h) { cerr << str << \" = \" << h << \"\\n\"; };\ntemplate<class Head, class...\
    \ Tail>\nvoid dump(const char *str, Head &&h, Tail &&... t) {\n    while (*str\
    \ != ',') cerr << *str++;\n    cerr << \" = \" << h << \"\\n\";\n    dump(str\
    \ + (*(str + 1) == ' ' ? 2 : 1), t...);\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/debug_template.hpp
  requiredBy: []
  timestamp: '2021-01-27 22:37:38+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yukicoder/184.test.cpp
documentation_of: src/debug_template.hpp
layout: document
redirect_from:
- /library/src/debug_template.hpp
- /library/src/debug_template.hpp.html
title: src/debug_template.hpp
---
