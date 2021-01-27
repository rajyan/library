---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/chmin.hpp
    title: src/chmin.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL_1_C.test.cpp
    title: test/aoj/GRL_1_C.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/FloydWarshall.hpp\"\n#include <cassert>\n#include <vector>\n\
    \nusing namespace std;\n\n#line 1 \"src/chmin.hpp\"\ntemplate<class T>\ninline\
    \ bool chmin(T &a, const T b) { return a > b && (a = b, true); }\n#line 7 \"src/FloydWarshall.hpp\"\
    \n\ntemplate<class T>\nvector<vector<T>> FloydWarshall(const vector<vector<T>>\
    \ &in, const T diag = T{}) {\n\n    const int N = in.size();\n    assert(N ==\
    \ (int)in[0].size());\n    const T inf = in[0][0];\n\n    auto d = in;\n    for\
    \ (int i = 0; i < N; i++) d[i][i] = diag;\n    for (int k = 0; k < N; k++) {\n\
    \        for (int i = 0; i < N; i++) {\n            for (int j = 0; j < N; j++)\
    \ {\n                if (d[i][k] < inf && d[k][j] < inf) chmin(d[i][j], d[i][k]\
    \ + d[k][j]);\n            }\n        }\n    }\n    return d;\n}\n"
  code: "#include <cassert>\n#include <vector>\n\nusing namespace std;\n\n#include\
    \ \"chmin.hpp\"\n\ntemplate<class T>\nvector<vector<T>> FloydWarshall(const vector<vector<T>>\
    \ &in, const T diag = T{}) {\n\n    const int N = in.size();\n    assert(N ==\
    \ (int)in[0].size());\n    const T inf = in[0][0];\n\n    auto d = in;\n    for\
    \ (int i = 0; i < N; i++) d[i][i] = diag;\n    for (int k = 0; k < N; k++) {\n\
    \        for (int i = 0; i < N; i++) {\n            for (int j = 0; j < N; j++)\
    \ {\n                if (d[i][k] < inf && d[k][j] < inf) chmin(d[i][j], d[i][k]\
    \ + d[k][j]);\n            }\n        }\n    }\n    return d;\n}\n"
  dependsOn:
  - src/chmin.hpp
  isVerificationFile: false
  path: src/FloydWarshall.hpp
  requiredBy: []
  timestamp: '2021-01-27 22:37:38+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/GRL_1_C.test.cpp
documentation_of: src/FloydWarshall.hpp
layout: document
redirect_from:
- /library/src/FloydWarshall.hpp
- /library/src/FloydWarshall.hpp.html
title: src/FloydWarshall.hpp
---
