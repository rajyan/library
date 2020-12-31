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
    #include <algorithm>\n\nusing namespace std;\nconst int INF = 1010101010;\n\n\
    template<class T>\ninline bool chmin(T &a, T b) { return a > b && (a = b, true);\
    \ }\n\nint main() {\n\n\tint N, M;\n\tcin >> N >> M;\n\n\tvector<vector<int>>\
    \ d(N, vector<int>(N, INF));\n\tfor (int i = 0; i < N; i++) d[i][i] = 0;\n\t\n\
    \tfor (int i = 0; i < M; i++) {\n\t\tint a, b, c;\n\t\tcin >> a >> b >> c;\n\t\
    \ta--, b--;\n\t\td[a][b] = c;\n\t\td[b][a] = c;\n\t}\n\n\tfor (int k = 0; k <\
    \ N; k++) {\n\t\tfor (int i = 0; i < N; i++) {\n\t\t\tfor (int j = 0; j < N; j++)\
    \ {\n\t\t\t\tchmin(d[i][j], d[i][k] + d[k][j]);\n\t\t\t}\n\t\t}\n\t}\n\n}\n"
  code: "#include <iostream>\n#include <vector>\n#include <algorithm>\n\nusing namespace\
    \ std;\nconst int INF = 1010101010;\n\ntemplate<class T>\ninline bool chmin(T\
    \ &a, T b) { return a > b && (a = b, true); }\n\nint main() {\n\n\tint N, M;\n\
    \tcin >> N >> M;\n\n\tvector<vector<int>> d(N, vector<int>(N, INF));\n\tfor (int\
    \ i = 0; i < N; i++) d[i][i] = 0;\n\t\n\tfor (int i = 0; i < M; i++) {\n\t\tint\
    \ a, b, c;\n\t\tcin >> a >> b >> c;\n\t\ta--, b--;\n\t\td[a][b] = c;\n\t\td[b][a]\
    \ = c;\n\t}\n\n\tfor (int k = 0; k < N; k++) {\n\t\tfor (int i = 0; i < N; i++)\
    \ {\n\t\t\tfor (int j = 0; j < N; j++) {\n\t\t\t\tchmin(d[i][j], d[i][k] + d[k][j]);\n\
    \t\t\t}\n\t\t}\n\t}\n\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/WarshalFloyd.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:28:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/WarshalFloyd.cpp
layout: document
redirect_from:
- /library/src/WarshalFloyd.cpp
- /library/src/WarshalFloyd.cpp.html
title: src/WarshalFloyd.cpp
---
