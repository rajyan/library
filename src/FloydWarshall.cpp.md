---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/chmin.cpp
    title: src/chmin.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL_1_C.test.cpp
    title: test/aoj/GRL_1_C.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/FloydWarshall.cpp\"\n#include <cassert>\n#include <vector>\n\
    \nusing namespace std;\n\n#line 1 \"src/chmin.cpp\"\ntemplate<class T>\ninline\
    \ bool chmin(T &a, const T b) { return a > b && (a = b, true); }\n#line 7 \"src/FloydWarshall.cpp\"\
    \n\ntemplate<class T>\nvector<vector<T>> FloydWarshall(const vector<vector<T>>\
    \ &in, const T diag = T{}) {\n\n    const int N = in.size();\n    assert(N ==\
    \ (int)in[0].size());\n    const T inf = in[0][0];\n\n    auto d = in;\n    for\
    \ (int i = 0; i < N; i++) d[i][i] = diag;\n    for (int k = 0; k < N; k++) {\n\
    \        for (int i = 0; i < N; i++) {\n            for (int j = 0; j < N; j++)\
    \ {\n                if (d[i][k] < inf && d[k][j] < inf) chmin(d[i][j], d[i][k]\
    \ + d[k][j]);\n            }\n        }\n    }\n    return d;\n}\n"
  code: "#include <cassert>\n#include <vector>\n\nusing namespace std;\n\n#include\
    \ \"chmin.cpp\"\n\ntemplate<class T>\nvector<vector<T>> FloydWarshall(const vector<vector<T>>\
    \ &in, const T diag = T{}) {\n\n    const int N = in.size();\n    assert(N ==\
    \ (int)in[0].size());\n    const T inf = in[0][0];\n\n    auto d = in;\n    for\
    \ (int i = 0; i < N; i++) d[i][i] = diag;\n    for (int k = 0; k < N; k++) {\n\
    \        for (int i = 0; i < N; i++) {\n            for (int j = 0; j < N; j++)\
    \ {\n                if (d[i][k] < inf && d[k][j] < inf) chmin(d[i][j], d[i][k]\
    \ + d[k][j]);\n            }\n        }\n    }\n    return d;\n}\n"
  dependsOn:
  - src/chmin.cpp
  isVerificationFile: false
  path: src/FloydWarshall.cpp
  requiredBy: []
  timestamp: '2021-01-18 15:49:39+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/GRL_1_C.test.cpp
documentation_of: src/FloydWarshall.cpp
layout: document
redirect_from:
- /library/src/FloydWarshall.cpp
- /library/src/FloydWarshall.cpp.html
title: src/FloydWarshall.cpp
---
