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
  bundledCode: "#line 2 \"src/Compress.hpp\"\n\n#include <vector>\n\nusing namespace\
    \ std;\n\ntemplate<class T>\nclass Compress {\nprivate:\n    vector<T> comp{};\n\
    \npublic:\n    Compress() = default;\n    explicit Compress(const vector<T> &vec)\
    \ : comp(vec) { build(); }\n\n    void add(const T &x) { comp.emplace_back(x);\
    \ }\n\n    void build() {\n        sort(comp.begin(), comp.end());\n        comp.erase(unique(comp.begin(),\
    \ comp.end(), comp.end()));\n    }\n\n    [[nodiscard]] vector<int> get(const\
    \ vector<T> &vec) const {\n        vector<int> ret(vec.size());\n        transform(vec.begin(),\
    \ vec.end(), ret.begin(), [&](const T &x) { return get(x); });\n        return\
    \ ret;\n    }\n    [[nodiscard]] int get(const T &x) const { return lower_bound(comp.begin(),\
    \ comp.end(), x) - begin(comp); }\n\n    const T &operator[](const int k) const\
    \ { return comp[k]; }\n};\n"
  code: "#pragma once\n\n#include <vector>\n\nusing namespace std;\n\ntemplate<class\
    \ T>\nclass Compress {\nprivate:\n    vector<T> comp{};\n\npublic:\n    Compress()\
    \ = default;\n    explicit Compress(const vector<T> &vec) : comp(vec) { build();\
    \ }\n\n    void add(const T &x) { comp.emplace_back(x); }\n\n    void build()\
    \ {\n        sort(comp.begin(), comp.end());\n        comp.erase(unique(comp.begin(),\
    \ comp.end(), comp.end()));\n    }\n\n    [[nodiscard]] vector<int> get(const\
    \ vector<T> &vec) const {\n        vector<int> ret(vec.size());\n        transform(vec.begin(),\
    \ vec.end(), ret.begin(), [&](const T &x) { return get(x); });\n        return\
    \ ret;\n    }\n    [[nodiscard]] int get(const T &x) const { return lower_bound(comp.begin(),\
    \ comp.end(), x) - begin(comp); }\n\n    const T &operator[](const int k) const\
    \ { return comp[k]; }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/Compress.hpp
  requiredBy:
  - src/empty.cpp
  timestamp: '2021-01-31 19:19:57+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/Compress.hpp
layout: document
redirect_from:
- /library/src/Compress.hpp
- /library/src/Compress.hpp.html
title: src/Compress.hpp
---
