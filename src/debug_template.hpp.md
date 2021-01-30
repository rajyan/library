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
    \n#include <iostream>\n\nusing namespace std;\n\ntemplate<typename T, typename\
    \ = void_t<>>\nstruct is_iterable: false_type {};\ntemplate<typename T>\nstruct\
    \ is_iterable<T, void_t<decltype(declval<T>().begin(), declval<T>().end())>>:\
    \ negation<is_same<T, string>> {};\n\ntemplate<class T1, class T2>\nostream &operator<<(ostream\
    \ &os, const pair<T1, T2> &p) {\n    os << '(' << p.first << ',' << p.second <<\
    \ ')';\n    return os;\n}\ntemplate<class T>\nenable_if_t<is_iterable<T>::value,\
    \ ostream> &operator<<(ostream &os, const T &r) {\n    os << '[';\n    for (const\
    \ auto &e : r) os << e << (&e != &*(--r.end()) ? \" \" : \"\");\n    os << ']';\n\
    \    return os;\n}\n\ntemplate<class T>\nvoid dump(const char *str, T &&h) { cerr\
    \ << str << \" = \" << h << \"\\n\"; };\ntemplate<class Head, class... Tail>\n\
    void dump(const char *str, Head &&h, Tail &&... t) {\n    while (*str != ',')\
    \ cerr << *str++;\n    cerr << \" = \" << h << \"\\n\";\n    dump(str + (*(str\
    \ + 1) == ' ' ? 2 : 1), t...);\n}\n"
  code: "#pragma once\n\n#define _CRT_SECURE_NO_WARNINGS\n\n#include <iostream>\n\n\
    using namespace std;\n\ntemplate<typename T, typename = void_t<>>\nstruct is_iterable:\
    \ false_type {};\ntemplate<typename T>\nstruct is_iterable<T, void_t<decltype(declval<T>().begin(),\
    \ declval<T>().end())>>: negation<is_same<T, string>> {};\n\ntemplate<class T1,\
    \ class T2>\nostream &operator<<(ostream &os, const pair<T1, T2> &p) {\n    os\
    \ << '(' << p.first << ',' << p.second << ')';\n    return os;\n}\ntemplate<class\
    \ T>\nenable_if_t<is_iterable<T>::value, ostream> &operator<<(ostream &os, const\
    \ T &r) {\n    os << '[';\n    for (const auto &e : r) os << e << (&e != &*(--r.end())\
    \ ? \" \" : \"\");\n    os << ']';\n    return os;\n}\n\ntemplate<class T>\nvoid\
    \ dump(const char *str, T &&h) { cerr << str << \" = \" << h << \"\\n\"; };\n\
    template<class Head, class... Tail>\nvoid dump(const char *str, Head &&h, Tail\
    \ &&... t) {\n    while (*str != ',') cerr << *str++;\n    cerr << \" = \" <<\
    \ h << \"\\n\";\n    dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/debug_template.hpp
  requiredBy: []
  timestamp: '2021-01-30 15:30:53+09:00'
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
