---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/debug_template.hpp
    title: src/debug_template.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/184.test.cpp
    title: test/yukicoder/184.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/print.hpp\"\n\n#include <iostream>\n\nusing namespace\
    \ std;\n\ntemplate<typename T, typename = void_t<>>\nstruct is_iterable: false_type\
    \ {};\ntemplate<typename T>\nstruct is_iterable<T, void_t<decltype(declval<T>().begin(),\
    \ declval<T>().end())>>: negation<is_same<T, string>> {};\n\ntemplate<class T1,\
    \ class T2>\nostream &operator<<(ostream &os, const pair<T1, T2> &p) {\n#ifdef\
    \ _DEBUG\n    os << '(';\n#endif\n    os << p.first << ' ' << p.second;\n#ifdef\
    \ _DEBUG\n    os << ')';\n#endif\n    return os;\n}\ntemplate<class T>\nenable_if_t<is_iterable<T>::value,\
    \ ostream> &operator<<(ostream &os, const T &r) {\n#ifdef _DEBUG\n    os << '[';\n\
    #endif\n    for (const auto &e : r) os << e << (&e != &*prev(r.end()) ? \" \"\
    \ : \"\");\n#ifdef _DEBUG\n    os << ']';\n#endif\n    return os;\n}\n\ntemplate<class\
    \ T>\nvoid print(T &&o) {\n    cout << o << '\\n';\n    exit(0);\n}\n"
  code: "#pragma once\n\n#include <iostream>\n\nusing namespace std;\n\ntemplate<typename\
    \ T, typename = void_t<>>\nstruct is_iterable: false_type {};\ntemplate<typename\
    \ T>\nstruct is_iterable<T, void_t<decltype(declval<T>().begin(), declval<T>().end())>>:\
    \ negation<is_same<T, string>> {};\n\ntemplate<class T1, class T2>\nostream &operator<<(ostream\
    \ &os, const pair<T1, T2> &p) {\n#ifdef _DEBUG\n    os << '(';\n#endif\n    os\
    \ << p.first << ' ' << p.second;\n#ifdef _DEBUG\n    os << ')';\n#endif\n    return\
    \ os;\n}\ntemplate<class T>\nenable_if_t<is_iterable<T>::value, ostream> &operator<<(ostream\
    \ &os, const T &r) {\n#ifdef _DEBUG\n    os << '[';\n#endif\n    for (const auto\
    \ &e : r) os << e << (&e != &*prev(r.end()) ? \" \" : \"\");\n#ifdef _DEBUG\n\
    \    os << ']';\n#endif\n    return os;\n}\n\ntemplate<class T>\nvoid print(T\
    \ &&o) {\n    cout << o << '\\n';\n    exit(0);\n}"
  dependsOn: []
  isVerificationFile: false
  path: src/print.hpp
  requiredBy:
  - src/debug_template.hpp
  timestamp: '2021-01-31 19:17:09+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yukicoder/184.test.cpp
documentation_of: src/print.hpp
layout: document
redirect_from:
- /library/src/print.hpp
- /library/src/print.hpp.html
title: src/print.hpp
---
