---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yosupo/static_range_sum.test.cpp
    title: test/yosupo/static_range_sum.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/CumulativeSum.hpp\"\n#include <cassert>\n#include <vector>\n\
    \nusing namespace std;\n\ntemplate<class T>\nclass CuSum {\nprivate:\n    vector<T>\
    \ cusum;\n\npublic:\n    explicit CuSum(vector<T> const &vec) : cusum(vec.size()\
    \ + 1) {\n        for (int i = 0; i < (int)vec.size(); i++) cusum[i + 1] = cusum[i]\
    \ + vec[i];\n    }\n    explicit CuSum(const int N) : cusum(N + 1) {}\n    void\
    \ add(const int i, const T &x) { cusum[i + 1] += x; }\n    void build() { for\
    \ (int i = 0; i < (int)cusum.size() - 1; i++) cusum[i + 1] += cusum[i]; }\n\n\
    \    // partial sum of 0-indexed [l, r)\n    T operator()(int l, int r) {\n  \
    \      if (r < l || r < 0) {\n            assert(0);\n            return T{};\n\
    \        }\n        else return cusum[r] - cusum[l];\n    }\n    // 0-indexed\n\
    \    const T &operator[](int i) { return cusum[i + 1]; }\n    T back() { return\
    \ cusum.back(); }\n};\n\n"
  code: "#include <cassert>\n#include <vector>\n\nusing namespace std;\n\ntemplate<class\
    \ T>\nclass CuSum {\nprivate:\n    vector<T> cusum;\n\npublic:\n    explicit CuSum(vector<T>\
    \ const &vec) : cusum(vec.size() + 1) {\n        for (int i = 0; i < (int)vec.size();\
    \ i++) cusum[i + 1] = cusum[i] + vec[i];\n    }\n    explicit CuSum(const int\
    \ N) : cusum(N + 1) {}\n    void add(const int i, const T &x) { cusum[i + 1] +=\
    \ x; }\n    void build() { for (int i = 0; i < (int)cusum.size() - 1; i++) cusum[i\
    \ + 1] += cusum[i]; }\n\n    // partial sum of 0-indexed [l, r)\n    T operator()(int\
    \ l, int r) {\n        if (r < l || r < 0) {\n            assert(0);\n       \
    \     return T{};\n        }\n        else return cusum[r] - cusum[l];\n    }\n\
    \    // 0-indexed\n    const T &operator[](int i) { return cusum[i + 1]; }\n \
    \   T back() { return cusum.back(); }\n};\n\n"
  dependsOn: []
  isVerificationFile: false
  path: src/CumulativeSum.hpp
  requiredBy: []
  timestamp: '2021-01-27 22:37:38+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/static_range_sum.test.cpp
documentation_of: src/CumulativeSum.hpp
layout: document
redirect_from:
- /library/src/CumulativeSum.hpp
- /library/src/CumulativeSum.hpp.html
title: src/CumulativeSum.hpp
---
