---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/own/Matrix2D_Basic.test.cpp
    title: test/own/Matrix2D_Basic.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/own/Point2D_Basic.test.cpp
    title: test/own/Point2D_Basic.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yosupo/lca.test.cpp
    title: test/yosupo/lca.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/makevec.hpp\"\n\n#include <vector>\n\nusing namespace\
    \ std;\n\ntemplate<class T>\nvector<T> make_vec(size_t s, T val) { return vector<T>(s,\
    \ val); }\ntemplate<class... Size>\nauto make_vec(size_t s, Size... tail) {\n\
    \    return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));\n}\n"
  code: "#pragma once\n\n#include <vector>\n\nusing namespace std;\n\ntemplate<class\
    \ T>\nvector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }\ntemplate<class...\
    \ Size>\nauto make_vec(size_t s, Size... tail) {\n    return vector<decltype(make_vec(tail...))>(s,\
    \ make_vec(tail...));\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/makevec.hpp
  requiredBy: []
  timestamp: '2021-01-31 19:19:57+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/lca.test.cpp
  - test/own/Matrix2D_Basic.test.cpp
  - test/own/Point2D_Basic.test.cpp
documentation_of: src/makevec.hpp
layout: document
redirect_from:
- /library/src/makevec.hpp
- /library/src/makevec.hpp.html
title: src/makevec.hpp
---
