---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/chmin.cpp
    title: src/chmin.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/FloydWarshall.cpp\"\n#include <vector>\n\nusing namespace\
    \ std;\n\n#line 1 \"src/chmin.cpp\"\ntemplate<class T>\ninline bool chmin(T &a,\
    \ const T b) { return a > b && (a = b, true); }\n#line 6 \"src/FloydWarshall.cpp\"\
    \n\ntemplate<class T>\nvector<vector<T>> FloydWarshall(const vector<vector<T>>\
    \ &in, const T diag = T{}) {\n    const int N = in.size();\n    assert(N == in[0].size());\n\
    \n    auto d = in;\n    for (int i = 0; i < N; i++) d[i][i] = diag;\n    for (int\
    \ k = 0; k < N; k++) {\n        for (int i = 0; i < N; i++) {\n            for\
    \ (int j = 0; j < N; j++) {\n                chmin(d[i][j], d[i][k] + d[k][j]);\n\
    \            }\n        }\n    }\n    return d;\n}\n"
  code: "#include <vector>\n\nusing namespace std;\n\n#include \"chmin.cpp\"\n\ntemplate<class\
    \ T>\nvector<vector<T>> FloydWarshall(const vector<vector<T>> &in, const T diag\
    \ = T{}) {\n    const int N = in.size();\n    assert(N == in[0].size());\n\n \
    \   auto d = in;\n    for (int i = 0; i < N; i++) d[i][i] = diag;\n    for (int\
    \ k = 0; k < N; k++) {\n        for (int i = 0; i < N; i++) {\n            for\
    \ (int j = 0; j < N; j++) {\n                chmin(d[i][j], d[i][k] + d[k][j]);\n\
    \            }\n        }\n    }\n    return d;\n}\n"
  dependsOn:
  - src/chmin.cpp
  isVerificationFile: false
  path: src/FloydWarshall.cpp
  requiredBy: []
  timestamp: '2021-01-18 14:51:19+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/FloydWarshall.cpp
layout: document
redirect_from:
- /library/src/FloydWarshall.cpp
- /library/src/FloydWarshall.cpp.html
title: src/FloydWarshall.cpp
---
