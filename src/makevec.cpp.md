---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/own/Matrix2D_Basic.test.cpp
    title: test/own/Matrix2D_Basic.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/own/Point2D_Basic.test.cpp
    title: test/own/Point2D_Basic.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yosupo/lca.test.cpp
    title: test/yosupo/lca.test.cpp
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/makevec.cpp\"\n#include <vector>\n\nusing namespace\
    \ std;\n\ntemplate<class T>\nvector<T> make_vec(size_t s, T val) { return vector<T>(s,\
    \ val); }\ntemplate<class... Size>\nauto make_vec(size_t s, Size... tail) {\n\
    \    return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));\n}\n"
  code: "#include <vector>\n\nusing namespace std;\n\ntemplate<class T>\nvector<T>\
    \ make_vec(size_t s, T val) { return vector<T>(s, val); }\ntemplate<class... Size>\n\
    auto make_vec(size_t s, Size... tail) {\n    return vector<decltype(make_vec(tail...))>(s,\
    \ make_vec(tail...));\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/makevec.cpp
  requiredBy: []
  timestamp: '2021-01-01 20:28:23+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - test/yosupo/lca.test.cpp
  - test/own/Matrix2D_Basic.test.cpp
  - test/own/Point2D_Basic.test.cpp
documentation_of: src/makevec.cpp
layout: document
redirect_from:
- /library/src/makevec.cpp
- /library/src/makevec.cpp.html
title: src/makevec.cpp
---
