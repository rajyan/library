---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/WarshalFloyd.cpp\"\n#include <iostream>\n#include <vector>\n\
    #include <algorithm>\n\nusing namespace std;\nconstexpr int INF = 1010101010;\n\
    \ntemplate<class T>\ninline bool chmin(T &a, T b) { return a > b && (a = b, true);\
    \ }\n\nint main() {\n\n    int N, M;\n    cin >> N >> M;\n\n    vector<vector<int>>\
    \ d(N, vector<int>(N, INF));\n    for (int i = 0; i < N; i++) d[i][i] = 0;\n\n\
    \    for (int i = 0; i < M; i++) {\n        int a, b, c;\n        cin >> a >>\
    \ b >> c;\n        a--, b--;\n        d[a][b] = c;\n        d[b][a] = c;\n   \
    \ }\n\n    for (int k = 0; k < N; k++) {\n        for (int i = 0; i < N; i++)\
    \ {\n            for (int j = 0; j < N; j++) {\n                chmin(d[i][j],\
    \ d[i][k] + d[k][j]);\n            }\n        }\n    }\n\n}\n"
  code: "#include <iostream>\n#include <vector>\n#include <algorithm>\n\nusing namespace\
    \ std;\nconstexpr int INF = 1010101010;\n\ntemplate<class T>\ninline bool chmin(T\
    \ &a, T b) { return a > b && (a = b, true); }\n\nint main() {\n\n    int N, M;\n\
    \    cin >> N >> M;\n\n    vector<vector<int>> d(N, vector<int>(N, INF));\n  \
    \  for (int i = 0; i < N; i++) d[i][i] = 0;\n\n    for (int i = 0; i < M; i++)\
    \ {\n        int a, b, c;\n        cin >> a >> b >> c;\n        a--, b--;\n  \
    \      d[a][b] = c;\n        d[b][a] = c;\n    }\n\n    for (int k = 0; k < N;\
    \ k++) {\n        for (int i = 0; i < N; i++) {\n            for (int j = 0; j\
    \ < N; j++) {\n                chmin(d[i][j], d[i][k] + d[k][j]);\n          \
    \  }\n        }\n    }\n\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/WarshalFloyd.cpp
  requiredBy: []
  timestamp: '2021-01-01 20:28:23+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/WarshalFloyd.cpp
layout: document
redirect_from:
- /library/src/WarshalFloyd.cpp
- /library/src/WarshalFloyd.cpp.html
title: src/WarshalFloyd.cpp
---
