---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/FloydWarshall.hpp
    title: src/FloydWarshall.hpp
  - icon: ':heavy_check_mark:'
    path: src/chmin.hpp
    title: src/chmin.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C
  bundledCode: "#line 1 \"test/aoj/GRL_1_C.test.cpp\"\n\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C\"\
    \n\n#include <iostream>\n#include <iomanip>\n#include <string>\n#include <vector>\n\
    \nusing namespace std;\nusing lint = long long;\nconstexpr lint LINF = 1LL <<\
    \ 60;\n\n#line 2 \"src/FloydWarshall.hpp\"\n\n#include <cassert>\n#line 5 \"src/FloydWarshall.hpp\"\
    \n\n#line 2 \"src/chmin.hpp\"\n\ntemplate<class T>\ninline bool chmin(T &a, const\
    \ T b) { return a > b && (a = b, true); }\n#line 7 \"src/FloydWarshall.hpp\"\n\
    \nusing namespace std;\n\ntemplate<class T>\nvector<vector<T>> FloydWarshall(const\
    \ vector<vector<T>> &in, const T diag = T{}) {\n\n    const int N = in.size();\n\
    \    assert(N == (int)in[0].size());\n    const T inf = in[0][0];\n\n    auto\
    \ d = in;\n    for (int i = 0; i < N; i++) d[i][i] = diag;\n    for (int k = 0;\
    \ k < N; k++) {\n        for (int i = 0; i < N; i++) {\n            for (int j\
    \ = 0; j < N; j++) {\n                if (d[i][k] < inf && d[k][j] < inf) chmin(d[i][j],\
    \ d[i][k] + d[k][j]);\n            }\n        }\n    }\n    return d;\n}\n#line\
    \ 14 \"test/aoj/GRL_1_C.test.cpp\"\n\nstruct init {\n    init() {\n        cin.tie(nullptr);\n\
    \        ios::sync_with_stdio(false);\n        cout << fixed << setprecision(10);\n\
    \    }\n} init_;\n\nint main() {\n\n    int N, M;\n    cin >> N >> M;\n\n    vector<vector<lint>>\
    \ edges(N, vector<lint>(N, LINF));\n    for (int i = 0; i < M; i++) {\n      \
    \  int u, v, c;\n        cin >> u >> v >> c;\n        edges[u][v] = c;\n    }\n\
    \n    auto cost = FloydWarshall(edges);\n\n    for (int i = 0; i < N; i++) {\n\
    \        if (cost[i][i] < 0) {\n            cout << \"NEGATIVE CYCLE\\n\";\n \
    \           return 0;\n        }\n    }\n\n    for (const auto &row : cost) {\n\
    \        for (const auto &e : row) {\n            cout << (e != LINF ? to_string(e)\
    \ : \"INF\");\n            if (&e != &row.back()) cout << ' ';\n        }\n  \
    \      cout << '\\n';\n    }\n\n    return 0;\n}\n"
  code: "\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C\"\
    \n\n#include <iostream>\n#include <iomanip>\n#include <string>\n#include <vector>\n\
    \nusing namespace std;\nusing lint = long long;\nconstexpr lint LINF = 1LL <<\
    \ 60;\n\n#include \"../../src/FloydWarshall.hpp\"\n\nstruct init {\n    init()\
    \ {\n        cin.tie(nullptr);\n        ios::sync_with_stdio(false);\n       \
    \ cout << fixed << setprecision(10);\n    }\n} init_;\n\nint main() {\n\n    int\
    \ N, M;\n    cin >> N >> M;\n\n    vector<vector<lint>> edges(N, vector<lint>(N,\
    \ LINF));\n    for (int i = 0; i < M; i++) {\n        int u, v, c;\n        cin\
    \ >> u >> v >> c;\n        edges[u][v] = c;\n    }\n\n    auto cost = FloydWarshall(edges);\n\
    \n    for (int i = 0; i < N; i++) {\n        if (cost[i][i] < 0) {\n         \
    \   cout << \"NEGATIVE CYCLE\\n\";\n            return 0;\n        }\n    }\n\n\
    \    for (const auto &row : cost) {\n        for (const auto &e : row) {\n   \
    \         cout << (e != LINF ? to_string(e) : \"INF\");\n            if (&e !=\
    \ &row.back()) cout << ' ';\n        }\n        cout << '\\n';\n    }\n\n    return\
    \ 0;\n}\n"
  dependsOn:
  - src/FloydWarshall.hpp
  - src/chmin.hpp
  isVerificationFile: true
  path: test/aoj/GRL_1_C.test.cpp
  requiredBy: []
  timestamp: '2021-01-31 19:19:57+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/GRL_1_C.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/GRL_1_C.test.cpp
- /verify/test/aoj/GRL_1_C.test.cpp.html
title: test/aoj/GRL_1_C.test.cpp
---
