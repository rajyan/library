---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/print.hpp
    title: src/print.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/empty.cpp
    title: src/empty.cpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/184.test.cpp
    title: test/yukicoder/184.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/debug_template.hpp\"\n#define _CRT_SECURE_NO_WARNINGS\n\
    \n#include <iostream>\n\n#line 2 \"src/print.hpp\"\n\n#line 4 \"src/print.hpp\"\
    \n\nusing namespace std;\n\ntemplate<typename T, typename = void_t<>>\nstruct\
    \ is_iterable: false_type {};\ntemplate<typename T>\nstruct is_iterable<T, void_t<decltype(declval<T>().begin(),\
    \ declval<T>().end())>>: negation<is_same<T, string>> {};\n\ntemplate<class T1,\
    \ class T2>\nostream &operator<<(ostream &os, const pair<T1, T2> &p) {\n#ifdef\
    \ _DEBUG\n    os << '(';\n#endif\n    os << p.first << ' ' << p.second;\n#ifdef\
    \ _DEBUG\n    os << ')';\n#endif\n    return os;\n}\ntemplate<class T>\nenable_if_t<is_iterable<T>::value,\
    \ ostream> &operator<<(ostream &os, const T &r) {\n#ifdef _DEBUG\n    os << '[';\n\
    #endif\n    for (const auto &e : r) os << e << (&e != &*prev(r.end()) ? \" \"\
    \ : \"\");\n#ifdef _DEBUG\n    os << ']';\n#endif\n    return os;\n}\n\ntemplate<class\
    \ T>\nvoid print(T &&o) {\n    cout << o << '\\n';\n    exit(0);\n}\n#line 6 \"\
    src/debug_template.hpp\"\n\nusing namespace std;\n\ntemplate<class T>\nvoid dump(const\
    \ char *str, T &&h) { cerr << str << \" = \" << h << \"\\n\"; };\ntemplate<class\
    \ Head, class... Tail>\nvoid dump(const char *str, Head &&h, Tail &&... t) {\n\
    \    while (*str != ',') cerr << *str++;\n    cerr << \" = \" << h << \"\\n\"\
    ;\n    dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);\n}\n"
  code: "#define _CRT_SECURE_NO_WARNINGS\n\n#include <iostream>\n\n#include \"print.hpp\"\
    \n\nusing namespace std;\n\ntemplate<class T>\nvoid dump(const char *str, T &&h)\
    \ { cerr << str << \" = \" << h << \"\\n\"; };\ntemplate<class Head, class...\
    \ Tail>\nvoid dump(const char *str, Head &&h, Tail &&... t) {\n    while (*str\
    \ != ',') cerr << *str++;\n    cerr << \" = \" << h << \"\\n\";\n    dump(str\
    \ + (*(str + 1) == ' ' ? 2 : 1), t...);\n}\n"
  dependsOn:
  - src/print.hpp
  isVerificationFile: false
  path: src/debug_template.hpp
  requiredBy:
  - src/empty.cpp
  timestamp: '2021-01-31 19:19:57+09:00'
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
