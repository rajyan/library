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
    \ std;\n\n// 2d Cumulative Sum\ntemplate< class T >\nclass RecSum {\nprivate:\n\
    \tint H, W;\n\tvector<vector<T>> data;\n\npublic:\n\tRecSum(vector<vector<T>>\
    \ const& vec) : H(vec.size()), W(vec[0].size()), data(H + 1, vector<T>(W + 1,\
    \ 0)) {\n\t\tfor (int row = 0; row < H; row++) {\n\t\t\tfor (int col = 0; col\
    \ < W; col++) {\n\t\t\t\tdata[row + 1][col + 1] += data[row + 1][col] + data[row][col\
    \ + 1] - data[row][col] + vec[row][col];\n\t\t\t}\n\t\t}\n\t}\n\n\tRecSum(int\
    \ H, int W) : H(H), W(W), data(H + 1, vector<T>(W + 1, 0)) {}\n\tvoid add(int\
    \ x, int y, T z) { data[x + 1][y + 1] += z; }\n\tvoid init() {\n\t\tfor (int row\
    \ = 0; row < H; row++) {\n\t\t\tfor (int col = 0; col < W; col++) {\n\t\t\t\t\
    data[row + 1][col + 1] += data[row + 1][col] + data[row][col + 1] - data[row][col];\n\
    \t\t\t}\n\t\t}\n\t}\n\n\t// [sx, gx) x [sy, gy)\n\tT operator()(int sx, int sy,\
    \ int gx, int gy) {\n\t\treturn data[gx][gy] - data[sx][gy] - data[gx][sy] + data[sx][sy];\n\
    \t}\n};\n"
  code: "#include <vector>\n\nusing namespace std;\n\n// 2d Cumulative Sum\ntemplate<\
    \ class T >\nclass RecSum {\nprivate:\n\tint H, W;\n\tvector<vector<T>> data;\n\
    \npublic:\n\tRecSum(vector<vector<T>> const& vec) : H(vec.size()), W(vec[0].size()),\
    \ data(H + 1, vector<T>(W + 1, 0)) {\n\t\tfor (int row = 0; row < H; row++) {\n\
    \t\t\tfor (int col = 0; col < W; col++) {\n\t\t\t\tdata[row + 1][col + 1] += data[row\
    \ + 1][col] + data[row][col + 1] - data[row][col] + vec[row][col];\n\t\t\t}\n\t\
    \t}\n\t}\n\n\tRecSum(int H, int W) : H(H), W(W), data(H + 1, vector<T>(W + 1,\
    \ 0)) {}\n\tvoid add(int x, int y, T z) { data[x + 1][y + 1] += z; }\n\tvoid init()\
    \ {\n\t\tfor (int row = 0; row < H; row++) {\n\t\t\tfor (int col = 0; col < W;\
    \ col++) {\n\t\t\t\tdata[row + 1][col + 1] += data[row + 1][col] + data[row][col\
    \ + 1] - data[row][col];\n\t\t\t}\n\t\t}\n\t}\n\n\t// [sx, gx) x [sy, gy)\n\t\
    T operator()(int sx, int sy, int gx, int gy) {\n\t\treturn data[gx][gy] - data[sx][gy]\
    \ - data[gx][sy] + data[sx][sy];\n\t}\n};"
  dependsOn: []
  isVerificationFile: false
  path: src/RectangleSum.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:28:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/RectangleSum.cpp
layout: document
redirect_from:
- /library/src/RectangleSum.cpp
- /library/src/RectangleSum.cpp.html
title: src/RectangleSum.cpp
---
