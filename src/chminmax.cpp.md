---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: '#line 1 "src/chminmax.cpp"


    template<class T>

    inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }


    template<class T>

    inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }

    '
  code: '

    template<class T>

    inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }


    template<class T>

    inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }

    '
  dependsOn: []
  isVerificationFile: false
  path: src/chminmax.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:28:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/chminmax.cpp
layout: document
redirect_from:
- /library/src/chminmax.cpp
- /library/src/chminmax.cpp.html
title: src/chminmax.cpp
---
