---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/RectangleSum.cpp\"\n#include <vector>\n\nusing namespace\
    \ std;\n\n// 2d Cumulative Sum\ntemplate<class T>\nclass RecSum {\nprivate:\n\
    \    int H, W;\n    vector<vector<T>> data;\n\npublic:\n    RecSum(vector<vector<T>>\
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
  code: "#include <vector>\n\nusing namespace std;\n\n// 2d Cumulative Sum\ntemplate<class\
    \ T>\nclass RecSum {\nprivate:\n    int H, W;\n    vector<vector<T>> data;\n\n\
    public:\n    RecSum(vector<vector<T>> const &vec) : H(vec.size()), W(vec[0].size()),\
    \ data(H + 1, vector<T>(W + 1, 0)) {\n        for (int row = 0; row < H; row++)\
    \ {\n            for (int col = 0; col < W; col++) {\n                data[row\
    \ + 1][col + 1] += data[row + 1][col] + data[row][col + 1] - data[row][col] +\
    \ vec[row][col];\n            }\n        }\n    }\n\n    RecSum(int H, int W)\
    \ : H(H), W(W), data(H + 1, vector<T>(W + 1, 0)) {}\n    void add(int x, int y,\
    \ T z) { data[x + 1][y + 1] += z; }\n    void init() {\n        for (int row =\
    \ 0; row < H; row++) {\n            for (int col = 0; col < W; col++) {\n    \
    \            data[row + 1][col + 1] += data[row + 1][col] + data[row][col + 1]\
    \ - data[row][col];\n            }\n        }\n    }\n\n    // [sx, gx) x [sy,\
    \ gy)\n    T operator()(int sx, int sy, int gx, int gy) {\n        return data[gx][gy]\
    \ - data[sx][gy] - data[gx][sy] + data[sx][sy];\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: src/RectangleSum.cpp
  requiredBy: []
  timestamp: '2021-01-01 20:28:23+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/RectangleSum.cpp
layout: document
redirect_from:
- /library/src/RectangleSum.cpp
- /library/src/RectangleSum.cpp.html
title: src/RectangleSum.cpp
---
