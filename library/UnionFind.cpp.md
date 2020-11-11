---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/DSL_1_A.test.cpp
    title: test/aoj/DSL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yosupo/unionfind.test.cpp
    title: test/yosupo/unionfind.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"library/UnionFind.cpp\"\n#include <vector>\nusing namespace\
    \ std;\n\nclass UnionFind {\nprivate:\n\tvector<int> data;\npublic:\n\tUnionFind(int\
    \ size) : data(size, -1) { }\n\tint root(int x) { return data[x] < 0 ? x : data[x]\
    \ = root(data[x]); }\n\tbool is_same(int x, int y) { return root(x) == root(y);\
    \ }\n\tint size(int x) { return -data[root(x)]; }\n\n\tbool unify(int x, int y)\
    \ {\n\t\tx = root(x); y = root(y);\n\t\tif (x != y) {\n\t\t\tif (data[y] < data[x])\
    \ swap(x, y);\n\t\t\tdata[x] += data[y]; data[y] = x;\n\t\t\treturn true;\n\t\t\
    }\n\t\treturn false;\n\t}\n};\n"
  code: "#include <vector>\nusing namespace std;\n\nclass UnionFind {\nprivate:\n\t\
    vector<int> data;\npublic:\n\tUnionFind(int size) : data(size, -1) { }\n\tint\
    \ root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }\n\tbool is_same(int\
    \ x, int y) { return root(x) == root(y); }\n\tint size(int x) { return -data[root(x)];\
    \ }\n\n\tbool unify(int x, int y) {\n\t\tx = root(x); y = root(y);\n\t\tif (x\
    \ != y) {\n\t\t\tif (data[y] < data[x]) swap(x, y);\n\t\t\tdata[x] += data[y];\
    \ data[y] = x;\n\t\t\treturn true;\n\t\t}\n\t\treturn false;\n\t}\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: library/UnionFind.cpp
  requiredBy: []
  timestamp: '2020-05-06 15:17:57+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/DSL_1_A.test.cpp
  - test/yosupo/unionfind.test.cpp
documentation_of: library/UnionFind.cpp
layout: document
redirect_from:
- /library/library/UnionFind.cpp
- /library/library/UnionFind.cpp.html
title: library/UnionFind.cpp
---
