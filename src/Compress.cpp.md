---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/Compress.cpp\"\n#include <vector>\n\nusing namespace\
    \ std;\n\ntemplate<class T>\nclass Compress {\nprivate:\n    vector<T> comp{};\n\
    \npublic:\n    Compress() = default;\n    explicit Compress(const vector<T> &vec)\
    \ : comp(vec) { build(); }\n\n    void add(const T &x) { comp.emplace_back(x);\
    \ }\n\n    void build() {\n        sort(begin(comp), end(comp));\n        comp.erase(unique(begin(comp),\
    \ end(comp)), end(comp));\n    }\n\n    [[nodiscard]] vector<int> get(const vector<T>\
    \ &vec) const {\n        vector<int> ret(vec.size());\n        transform(vec.begin(),\
    \ vec.end(), ret.begin(), [&](const T &x) { return get(x); });\n        return\
    \ ret;\n    }\n    [[nodiscard]] int get(const T &x) const { return lower_bound(comp.begin(),\
    \ comp.end(), x) - begin(comp); }\n\n    const T &operator[](const int k) const\
    \ { return comp[k]; }\n};\n"
  code: "#include <vector>\n\nusing namespace std;\n\ntemplate<class T>\nclass Compress\
    \ {\nprivate:\n    vector<T> comp{};\n\npublic:\n    Compress() = default;\n \
    \   explicit Compress(const vector<T> &vec) : comp(vec) { build(); }\n\n    void\
    \ add(const T &x) { comp.emplace_back(x); }\n\n    void build() {\n        sort(begin(comp),\
    \ end(comp));\n        comp.erase(unique(begin(comp), end(comp)), end(comp));\n\
    \    }\n\n    [[nodiscard]] vector<int> get(const vector<T> &vec) const {\n  \
    \      vector<int> ret(vec.size());\n        transform(vec.begin(), vec.end(),\
    \ ret.begin(), [&](const T &x) { return get(x); });\n        return ret;\n   \
    \ }\n    [[nodiscard]] int get(const T &x) const { return lower_bound(comp.begin(),\
    \ comp.end(), x) - begin(comp); }\n\n    const T &operator[](const int k) const\
    \ { return comp[k]; }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/Compress.cpp
  requiredBy: []
  timestamp: '2021-01-24 12:21:38+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/Compress.cpp
layout: document
redirect_from:
- /library/src/Compress.cpp
- /library/src/Compress.cpp.html
title: src/Compress.cpp
---
