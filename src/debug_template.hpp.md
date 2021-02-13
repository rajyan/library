---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/print.hpp
    title: src/print.hpp
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
  bundledCode: "#line 1 \"src/debug_template.hpp\"\n#define _CRT_SECURE_NO_WARNINGS\n\
    \n#include <iostream>\n\n#line 2 \"src/print.hpp\"\n\n#include <sstream>\n\nusing\
    \ namespace std;\n\nstruct params { string d, l, r, lp, rp; };\n#ifdef _DEBUG\n\
    params p_{\",\", \"[\", \"]\", \"(\", \")\"};\n#else\nparams p_{\" \", \"\", \"\
    \", \"\", \"\"};\n#endif\n\ntemplate<typename T, typename = void_t<>>\nstruct\
    \ iterable: false_type {};\ntemplate<typename T>\nstruct iterable<T, void_t<decltype(declval<T>().begin(),\
    \ declval<T>().end())>>: negation<is_same<T, string>> {};\n\ntemplate<class T>\n\
    enable_if_t<!iterable<T>::value, string> str(const T &v) {\n    stringstream ss;\n\
    \    ss << v;\n    return ss.str();\n}\ntemplate<class ...T>\nstring str(const\
    \ pair<T...> &t) {\n    return p_.lp + str(t.first) + p_.d + str(t.second) + p_.rp;\n\
    }\ntemplate<class T>\nenable_if_t<iterable<T>::value, string> str(const T &r)\
    \ {\n    string res(p_.l);\n    for (const auto &e : r) res += str(e) + (&e !=\
    \ &*prev(r.end()) ? p_.d : \"\");\n    return res + p_.r;\n}\n\ntemplate<class\
    \ T>\nvoid print(T &&o) {\n    cout << str(o) << '\\n';\n    exit(0);\n}\n#line\
    \ 6 \"src/debug_template.hpp\"\n\nusing namespace std;\n\ntemplate<class T>\n\
    void dump(const char *name, T &&h) { cerr << name << \" = \" << str(h) << \"\\\
    n\"; };\ntemplate<class Head, class... Tail>\nvoid dump(const char *names, Head\
    \ &&h, Tail &&... t) {\n    while (*names != ',') cerr << *names++;\n    cerr\
    \ << \" = \" << str(h) << \"\\n\";\n    dump(names + (*(names + 1) == ' ' ? 2\
    \ : 1), t...);\n}\n"
  code: "#define _CRT_SECURE_NO_WARNINGS\n\n#include <iostream>\n\n#include \"print.hpp\"\
    \n\nusing namespace std;\n\ntemplate<class T>\nvoid dump(const char *name, T &&h)\
    \ { cerr << name << \" = \" << str(h) << \"\\n\"; };\ntemplate<class Head, class...\
    \ Tail>\nvoid dump(const char *names, Head &&h, Tail &&... t) {\n    while (*names\
    \ != ',') cerr << *names++;\n    cerr << \" = \" << str(h) << \"\\n\";\n    dump(names\
    \ + (*(names + 1) == ' ' ? 2 : 1), t...);\n}\n"
  dependsOn:
  - src/print.hpp
  isVerificationFile: false
  path: src/debug_template.hpp
  requiredBy: []
  timestamp: '2021-02-12 07:37:24+09:00'
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
