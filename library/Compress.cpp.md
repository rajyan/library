---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"library/Compress.cpp\"\n\ntemplate<class T>\nclass Compress\
    \ {\nprivate:\n\tvector<T> comp;\n\npublic:\n\tCompress() {}\n\tCompress(const\
    \ vector<T> &vec) : comp(vec) { build(); }\n\n\tvoid add(const T &x) { comp.emplace_back(x);\
    \ }\n\n\tvoid build() {\n\t\tsort(begin(comp), end(comp));\n\t\tcomp.erase(unique(begin(comp),\
    \ end(comp)), end(comp));\n\t}\n\n\tvector<int> get(const vector<T> &vec) const\
    \ {\n\t\tvector<int> ret(vec.size());\n\t\ttransform(begin(vec), end(vec), ret.begin(),\
    \ [&](const T &x) {\n\t\t\treturn (int)(lower_bound(begin(comp), end(comp), x)\
    \ - begin(comp));\n\t\t});\n\t\treturn ret;\n\t}\n\tint get(const T &x) const\
    \ { return lower_bound(begin(comp), end(comp), x) - begin(comp); }\n\n\tconst\
    \ T &operator[](const int k) const { return comp[k]; }\n};\n"
  code: "\ntemplate<class T>\nclass Compress {\nprivate:\n\tvector<T> comp;\n\npublic:\n\
    \tCompress() {}\n\tCompress(const vector<T> &vec) : comp(vec) { build(); }\n\n\
    \tvoid add(const T &x) { comp.emplace_back(x); }\n\n\tvoid build() {\n\t\tsort(begin(comp),\
    \ end(comp));\n\t\tcomp.erase(unique(begin(comp), end(comp)), end(comp));\n\t\
    }\n\n\tvector<int> get(const vector<T> &vec) const {\n\t\tvector<int> ret(vec.size());\n\
    \t\ttransform(begin(vec), end(vec), ret.begin(), [&](const T &x) {\n\t\t\treturn\
    \ (int)(lower_bound(begin(comp), end(comp), x) - begin(comp));\n\t\t});\n\t\t\
    return ret;\n\t}\n\tint get(const T &x) const { return lower_bound(begin(comp),\
    \ end(comp), x) - begin(comp); }\n\n\tconst T &operator[](const int k) const {\
    \ return comp[k]; }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: library/Compress.cpp
  requiredBy: []
  timestamp: '2020-05-06 15:17:57+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: library/Compress.cpp
layout: document
redirect_from:
- /library/library/Compress.cpp
- /library/library/Compress.cpp.html
title: library/Compress.cpp
---
