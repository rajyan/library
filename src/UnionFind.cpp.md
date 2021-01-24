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
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/UnionFind.cpp\"\n#include <vector>\n\nusing namespace\
    \ std;\n\nclass UnionFind {\nprivate:\n    vector<int> data;\npublic:\n    explicit\
    \ UnionFind(int size) : data(size, -1) {}\n    [[nodiscard]] int root(int x) {\
    \ return data[x] < 0 ? x : data[x] = root(data[x]); }\n    [[nodiscard]] bool\
    \ is_same(int x, int y) { return root(x) == root(y); }\n    [[nodiscard]] int\
    \ size(int x) { return -data[root(x)]; }\n\n    bool unify(int x, int y) {\n \
    \       x = root(x);\n        y = root(y);\n        if (x != y) {\n          \
    \  if (data[y] < data[x]) swap(x, y);\n            data[x] += data[y];\n     \
    \       data[y] = x;\n            return true;\n        }\n        return false;\n\
    \    }\n};\n"
  code: "#include <vector>\n\nusing namespace std;\n\nclass UnionFind {\nprivate:\n\
    \    vector<int> data;\npublic:\n    explicit UnionFind(int size) : data(size,\
    \ -1) {}\n    [[nodiscard]] int root(int x) { return data[x] < 0 ? x : data[x]\
    \ = root(data[x]); }\n    [[nodiscard]] bool is_same(int x, int y) { return root(x)\
    \ == root(y); }\n    [[nodiscard]] int size(int x) { return -data[root(x)]; }\n\
    \n    bool unify(int x, int y) {\n        x = root(x);\n        y = root(y);\n\
    \        if (x != y) {\n            if (data[y] < data[x]) swap(x, y);\n     \
    \       data[x] += data[y];\n            data[y] = x;\n            return true;\n\
    \        }\n        return false;\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/UnionFind.cpp
  requiredBy: []
  timestamp: '2021-01-17 00:12:39+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/unionfind.test.cpp
  - test/aoj/DSL_1_A.test.cpp
documentation_of: src/UnionFind.cpp
layout: document
redirect_from:
- /library/src/UnionFind.cpp
- /library/src/UnionFind.cpp.html
title: src/UnionFind.cpp
---
