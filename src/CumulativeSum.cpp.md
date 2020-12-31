---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/CumulativeSum.cpp\"\n#include <vector>\n\nusing namespace\
    \ std;\n\ntemplate <class T>\nclass CuSum {\nprivate:\n\tvector<T> cusum;\n\n\
    public:\n\tCuSum(vector<T> const &vec) : cusum(vec.size() + 1) {\n\t\tfor (int\
    \ i = 0; i < (int)vec.size(); i++) cusum[i + 1] = cusum[i] + vec[i];\n\t}\n\t\
    CuSum(const int N) : cusum(N + 1) {}\n\tvoid add(const int i, const T &x) { cusum[i\
    \ + 1] += x; }\n\tvoid build() { for (int i = 0; i < (int)cusum.size() - 1; i++)\
    \ cusum[i + 1] += cusum[i]; }\n\n\t// partial sum of 0-indexed [l, r)\n\tT operator()(int\
    \ l, int r) {\n\t\tif (r < l || r < 0) {\n\t\t\tassert(0);\n\t\t\treturn T(0);\n\
    \t\t}\n\t\telse return cusum[r] - cusum[l];\n\t}\n\t// 0-indexed\n\tconst T &operator[](int\
    \ i) { return cusum[i + 1]; }\n\tT back() { return cusum.back(); }\n};\n\n"
  code: "#include <vector>\n\nusing namespace std;\n\ntemplate <class T>\nclass CuSum\
    \ {\nprivate:\n\tvector<T> cusum;\n\npublic:\n\tCuSum(vector<T> const &vec) :\
    \ cusum(vec.size() + 1) {\n\t\tfor (int i = 0; i < (int)vec.size(); i++) cusum[i\
    \ + 1] = cusum[i] + vec[i];\n\t}\n\tCuSum(const int N) : cusum(N + 1) {}\n\tvoid\
    \ add(const int i, const T &x) { cusum[i + 1] += x; }\n\tvoid build() { for (int\
    \ i = 0; i < (int)cusum.size() - 1; i++) cusum[i + 1] += cusum[i]; }\n\n\t// partial\
    \ sum of 0-indexed [l, r)\n\tT operator()(int l, int r) {\n\t\tif (r < l || r\
    \ < 0) {\n\t\t\tassert(0);\n\t\t\treturn T(0);\n\t\t}\n\t\telse return cusum[r]\
    \ - cusum[l];\n\t}\n\t// 0-indexed\n\tconst T &operator[](int i) { return cusum[i\
    \ + 1]; }\n\tT back() { return cusum.back(); }\n};\n\n"
  dependsOn: []
  isVerificationFile: false
  path: src/CumulativeSum.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:28:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/CumulativeSum.cpp
layout: document
redirect_from:
- /library/src/CumulativeSum.cpp
- /library/src/CumulativeSum.cpp.html
title: src/CumulativeSum.cpp
---
