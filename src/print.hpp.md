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
  bundledCode: "#line 2 \"src/print.hpp\"\n\n#include <sstream>\n\nusing namespace\
    \ std;\n\ntemplate<typename T, typename = void_t<>>\nstruct iterable: false_type\
    \ {};\ntemplate<typename T>\nstruct iterable<T, void_t<decltype(declval<T>().begin(),\
    \ declval<T>().end())>>: negation<is_same<T, string>> {};\n\nstruct params { string\
    \ d, l, r, lp, rp; };\n#ifdef _DEBUG\nparams p_{\",\", \"[\", \"]\", \"(\", \"\
    )\"};\n#else\nparams p_{\" \", \"\", \"\", \"\", \"\"};\n#endif\ntemplate<class\
    \ T>\nenable_if_t<!iterable<T>::value, string> str(const T &v) {\n    stringstream\
    \ ss;\n    ss << v;\n    return ss.str();\n}\ntemplate<class ...T>\nstring str(const\
    \ pair<T...> &t) {\n    return p_.lp + str(t.first) + p_.d + str(t.second) + p_.rp;\n\
    }\ntemplate<class T>\nenable_if_t<iterable<T>::value, string> str(const T &r)\
    \ {\n    string res(p_.l);\n    for (const auto &e : r) res += str(e) + (&e !=\
    \ &*prev(r.end()) ? p_.d : \"\");\n    return res + p_.r;\n}\n\ntemplate<class\
    \ T>\nvoid print(T &&o) {\n    cout << str(o) << '\\n';\n    exit(0);\n}\n"
  code: "#pragma once\n\n#include <sstream>\n\nusing namespace std;\n\ntemplate<typename\
    \ T, typename = void_t<>>\nstruct iterable: false_type {};\ntemplate<typename\
    \ T>\nstruct iterable<T, void_t<decltype(declval<T>().begin(), declval<T>().end())>>:\
    \ negation<is_same<T, string>> {};\n\nstruct params { string d, l, r, lp, rp;\
    \ };\n#ifdef _DEBUG\nparams p_{\",\", \"[\", \"]\", \"(\", \")\"};\n#else\nparams\
    \ p_{\" \", \"\", \"\", \"\", \"\"};\n#endif\ntemplate<class T>\nenable_if_t<!iterable<T>::value,\
    \ string> str(const T &v) {\n    stringstream ss;\n    ss << v;\n    return ss.str();\n\
    }\ntemplate<class ...T>\nstring str(const pair<T...> &t) {\n    return p_.lp +\
    \ str(t.first) + p_.d + str(t.second) + p_.rp;\n}\ntemplate<class T>\nenable_if_t<iterable<T>::value,\
    \ string> str(const T &r) {\n    string res(p_.l);\n    for (const auto &e : r)\
    \ res += str(e) + (&e != &*prev(r.end()) ? p_.d : \"\");\n    return res + p_.r;\n\
    }\n\ntemplate<class T>\nvoid print(T &&o) {\n    cout << str(o) << '\\n';\n  \
    \  exit(0);\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/print.hpp
  requiredBy:
  - src/debug_template.hpp
  timestamp: '2021-02-12 05:37:49+09:00'
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
