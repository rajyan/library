---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/UnionFind.cpp\"\n#include <vector>\nusing namespace\
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
  path: src/UnionFind.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:28:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/UnionFind.cpp
layout: document
redirect_from:
- /library/src/UnionFind.cpp
- /library/src/UnionFind.cpp.html
title: src/UnionFind.cpp
---
