---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: '#line 1 "src/chmax.hpp"

    template<class T>

    inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }

    '
  code: 'template<class T>

    inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }

    '
  dependsOn: []
  isVerificationFile: false
  path: src/chmax.hpp
  requiredBy: []
  timestamp: '2021-01-27 22:37:38+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/chmax.hpp
layout: document
redirect_from:
- /library/src/chmax.hpp
- /library/src/chmax.hpp.html
title: src/chmax.hpp
---
