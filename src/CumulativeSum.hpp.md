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
  bundledCode: "#line 2 \"src/CumulativeSum.hpp\"\n\n#include <cassert>\n#include\
    \ <vector>\n\nusing namespace std;\n\ntemplate<class T>\nclass CuSum {\npublic:\n\
    \    explicit CuSum(vector<T> const &vec) : cusum(vec.size() + 1) {\n        for\
    \ (int i = 0; i < (int)vec.size(); i++) cusum[i + 1] = cusum[i] + vec[i];\n  \
    \  }\n\n    // partial sum of 0-indexed [0, k)\n    [[nodiscard]] T sum(int k)\
    \ {\n        assert(0 <= k && k < cusum.size());\n        return cusum[k];\n \
    \   }\n    // partial sum of 0-indexed [l, r)\n    [[nodiscard]] T sum(int l,\
    \ int r) {\n        assert(l <= r);\n        return sum(r) - sum(l);\n    }\n\n\
    private:\n    vector<T> cusum;\n};\n\n"
  code: "#pragma once\n\n#include <cassert>\n#include <vector>\n\nusing namespace\
    \ std;\n\ntemplate<class T>\nclass CuSum {\npublic:\n    explicit CuSum(vector<T>\
    \ const &vec) : cusum(vec.size() + 1) {\n        for (int i = 0; i < (int)vec.size();\
    \ i++) cusum[i + 1] = cusum[i] + vec[i];\n    }\n\n    // partial sum of 0-indexed\
    \ [0, k)\n    [[nodiscard]] T sum(int k) {\n        assert(0 <= k && k < cusum.size());\n\
    \        return cusum[k];\n    }\n    // partial sum of 0-indexed [l, r)\n   \
    \ [[nodiscard]] T sum(int l, int r) {\n        assert(l <= r);\n        return\
    \ sum(r) - sum(l);\n    }\n\nprivate:\n    vector<T> cusum;\n};\n\n"
  dependsOn: []
  isVerificationFile: false
  path: src/CumulativeSum.hpp
  requiredBy: []
  timestamp: '2021-02-13 18:30:55+09:00'
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
