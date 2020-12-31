---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yosupo/lca.test.cpp
    title: test/yosupo/lca.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/makevec.cpp\"\n#include <vector>\n\nusing namespace\
    \ std;\n\ntemplate<class T>\nvector<T> make_vec(size_t s, T val) { return vector<T>(s,\
    \ val); }\ntemplate<class... Size>\nauto make_vec(size_t s, Size... tail) {\n\t\
    return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));\n}\n"
  code: "#include <vector>\n\nusing namespace std;\n\ntemplate<class T>\nvector<T>\
    \ make_vec(size_t s, T val) { return vector<T>(s, val); }\ntemplate<class... Size>\n\
    auto make_vec(size_t s, Size... tail) {\n\treturn vector<decltype(make_vec(tail...))>(s,\
    \ make_vec(tail...));\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/makevec.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:28:17+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/lca.test.cpp
documentation_of: src/makevec.cpp
layout: document
redirect_from:
- /library/src/makevec.cpp
- /library/src/makevec.cpp.html
title: src/makevec.cpp
---
