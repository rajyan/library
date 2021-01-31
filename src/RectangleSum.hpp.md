---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/empty.cpp
    title: src/empty.cpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/RectangleSum.hpp\"\n\n#include <vector>\n\nusing namespace\
    \ std;\n\n// 2d Cumulative Sum\ntemplate<class T>\nclass RecSum {\nprivate:\n\
    \    int H, W;\n    vector<vector<T>> data;\n\npublic:\n    explicit RecSum(vector<vector<T>>\
    \ const &vec) : H(vec.size()), W(vec[0].size()), data(H + 1, vector<T>(W + 1,\
    \ 0)) {\n        for (int row = 0; row < H; row++) {\n            for (int col\
    \ = 0; col < W; col++) {\n                data[row + 1][col + 1] += data[row +\
    \ 1][col] + data[row][col + 1] - data[row][col] + vec[row][col];\n           \
    \ }\n        }\n    }\n\n    RecSum(int H, int W) : H(H), W(W), data(H + 1, vector<T>(W\
    \ + 1, 0)) {}\n    void add(int x, int y, T z) { data[x + 1][y + 1] += z; }\n\
    \    void init() {\n        for (int row = 0; row < H; row++) {\n            for\
    \ (int col = 0; col < W; col++) {\n                data[row + 1][col + 1] += data[row\
    \ + 1][col] + data[row][col + 1] - data[row][col];\n            }\n        }\n\
    \    }\n\n    // [sx, gx) x [sy, gy)\n    T operator()(int sx, int sy, int gx,\
    \ int gy) {\n        return data[gx][gy] - data[sx][gy] - data[gx][sy] + data[sx][sy];\n\
    \    }\n};\n"
  code: "#pragma once\n\n#include <vector>\n\nusing namespace std;\n\n// 2d Cumulative\
    \ Sum\ntemplate<class T>\nclass RecSum {\nprivate:\n    int H, W;\n    vector<vector<T>>\
    \ data;\n\npublic:\n    explicit RecSum(vector<vector<T>> const &vec) : H(vec.size()),\
    \ W(vec[0].size()), data(H + 1, vector<T>(W + 1, 0)) {\n        for (int row =\
    \ 0; row < H; row++) {\n            for (int col = 0; col < W; col++) {\n    \
    \            data[row + 1][col + 1] += data[row + 1][col] + data[row][col + 1]\
    \ - data[row][col] + vec[row][col];\n            }\n        }\n    }\n\n    RecSum(int\
    \ H, int W) : H(H), W(W), data(H + 1, vector<T>(W + 1, 0)) {}\n    void add(int\
    \ x, int y, T z) { data[x + 1][y + 1] += z; }\n    void init() {\n        for\
    \ (int row = 0; row < H; row++) {\n            for (int col = 0; col < W; col++)\
    \ {\n                data[row + 1][col + 1] += data[row + 1][col] + data[row][col\
    \ + 1] - data[row][col];\n            }\n        }\n    }\n\n    // [sx, gx) x\
    \ [sy, gy)\n    T operator()(int sx, int sy, int gx, int gy) {\n        return\
    \ data[gx][gy] - data[sx][gy] - data[gx][sy] + data[sx][sy];\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: src/RectangleSum.hpp
  requiredBy:
  - src/empty.cpp
  timestamp: '2021-01-31 19:19:57+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/RectangleSum.hpp
layout: document
redirect_from:
- /library/src/RectangleSum.hpp
- /library/src/RectangleSum.hpp.html
title: src/RectangleSum.hpp
---
