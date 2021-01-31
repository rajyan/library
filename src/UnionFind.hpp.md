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
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/UnionFind.hpp\"\n\n#include <vector>\n\nusing namespace\
    \ std;\n\nclass UnionFind {\nprivate:\n    vector<int> data;\npublic:\n    explicit\
    \ UnionFind(int size) : data(size, -1) {}\n    [[nodiscard]] int root(int x) {\
    \ return data[x] < 0 ? x : data[x] = root(data[x]); }\n    [[nodiscard]] bool\
    \ is_same(int x, int y) { return root(x) == root(y); }\n    [[nodiscard]] int\
    \ size(int x) { return -data[root(x)]; }\n\n    bool unify(int x, int y) {\n \
    \       x = root(x);\n        y = root(y);\n        if (x != y) {\n          \
    \  if (data[y] < data[x]) swap(x, y);\n            data[x] += data[y];\n     \
    \       data[y] = x;\n            return true;\n        }\n        return false;\n\
    \    }\n};\n"
  code: "#pragma once\n\n#include <vector>\n\nusing namespace std;\n\nclass UnionFind\
    \ {\nprivate:\n    vector<int> data;\npublic:\n    explicit UnionFind(int size)\
    \ : data(size, -1) {}\n    [[nodiscard]] int root(int x) { return data[x] < 0\
    \ ? x : data[x] = root(data[x]); }\n    [[nodiscard]] bool is_same(int x, int\
    \ y) { return root(x) == root(y); }\n    [[nodiscard]] int size(int x) { return\
    \ -data[root(x)]; }\n\n    bool unify(int x, int y) {\n        x = root(x);\n\
    \        y = root(y);\n        if (x != y) {\n            if (data[y] < data[x])\
    \ swap(x, y);\n            data[x] += data[y];\n            data[y] = x;\n   \
    \         return true;\n        }\n        return false;\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/UnionFind.hpp
  requiredBy: []
  timestamp: '2021-01-31 19:19:57+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/unionfind.test.cpp
  - test/aoj/DSL_1_A.test.cpp
documentation_of: src/UnionFind.hpp
layout: document
redirect_from:
- /library/src/UnionFind.hpp
- /library/src/UnionFind.hpp.html
title: src/UnionFind.hpp
---
