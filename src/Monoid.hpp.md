---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':x:'
    path: src/SegmentTree.hpp
    title: src/SegmentTree.hpp
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/yosupo/point_add_range_sum_2.test.cpp
    title: test/yosupo/point_add_range_sum_2.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/Monoid.hpp\"\n\n#include <variant>\n#include <algorithm>\n\
    #include <iostream>\n\nusing namespace std;\n\ntemplate<class T, T (*base_op)(T,\
    \ T), const T(*e) = nullptr>\nclass Monoid {\n    class Identity {};\n    constexpr\
    \ static bool has_identity = (e != nullptr);\npublic:\n    using type = T;\n \
    \   using vt = conditional_t<has_identity, T, variant<Identity, T>>;\n\n    [[nodiscard]]\
    \ constexpr vt op(const vt &a, const vt &b) const {\n        if constexpr (has_identity)\
    \ return base_op(a, b);\n        else if (a.index() == 1 && b.index() == 1) return\
    \ base_op(get<T>(a), get<T>(b));\n        else if (a.index() == 0) return b;\n\
    \        else return a;\n    };\n    [[nodiscard]] constexpr vt identity() const\
    \ {\n        if constexpr (has_identity) return *e;\n        else return Identity{};\n\
    \    }\n};\n\nnamespace monoid {\n    constexpr auto op_add = [](auto l, auto\
    \ r) { return l + r; };\n    constexpr auto op_mul = [](auto l, auto r) { return\
    \ l * r; };\n    constexpr auto op_max = [](auto l, auto r) { return max(l, r);\
    \ };\n    constexpr auto op_min = [](auto l, auto r) { return min(l, r); };\n\
    \    template<class T> T e_add = T{};\n    template<class T> T e_mul = T{1};\n\
    \    template<class T> T e_max = numeric_limits<T>::min();\n    template<class\
    \ T> T e_min = numeric_limits<T>::max();\n    template<class T> using Add = Monoid<T,\
    \ monoid::op_add, &monoid::e_add<T>>;\n    template<class T> using Mul = Monoid<T,\
    \ monoid::op_mul, &monoid::e_mul<T>>;\n    template<class T> using Max = Monoid<T,\
    \ monoid::op_max, &monoid::e_max<T>>;\n    template<class T> using Min = Monoid<T,\
    \ monoid::op_min, &monoid::e_min<T>>;\n}\n"
  code: "#pragma once\n\n#include <variant>\n#include <algorithm>\n#include <iostream>\n\
    \nusing namespace std;\n\ntemplate<class T, T (*base_op)(T, T), const T(*e) =\
    \ nullptr>\nclass Monoid {\n    class Identity {};\n    constexpr static bool\
    \ has_identity = (e != nullptr);\npublic:\n    using type = T;\n    using vt =\
    \ conditional_t<has_identity, T, variant<Identity, T>>;\n\n    [[nodiscard]] constexpr\
    \ vt op(const vt &a, const vt &b) const {\n        if constexpr (has_identity)\
    \ return base_op(a, b);\n        else if (a.index() == 1 && b.index() == 1) return\
    \ base_op(get<T>(a), get<T>(b));\n        else if (a.index() == 0) return b;\n\
    \        else return a;\n    };\n    [[nodiscard]] constexpr vt identity() const\
    \ {\n        if constexpr (has_identity) return *e;\n        else return Identity{};\n\
    \    }\n};\n\nnamespace monoid {\n    constexpr auto op_add = [](auto l, auto\
    \ r) { return l + r; };\n    constexpr auto op_mul = [](auto l, auto r) { return\
    \ l * r; };\n    constexpr auto op_max = [](auto l, auto r) { return max(l, r);\
    \ };\n    constexpr auto op_min = [](auto l, auto r) { return min(l, r); };\n\
    \    template<class T> T e_add = T{};\n    template<class T> T e_mul = T{1};\n\
    \    template<class T> T e_max = numeric_limits<T>::min();\n    template<class\
    \ T> T e_min = numeric_limits<T>::max();\n    template<class T> using Add = Monoid<T,\
    \ monoid::op_add, &monoid::e_add<T>>;\n    template<class T> using Mul = Monoid<T,\
    \ monoid::op_mul, &monoid::e_mul<T>>;\n    template<class T> using Max = Monoid<T,\
    \ monoid::op_max, &monoid::e_max<T>>;\n    template<class T> using Min = Monoid<T,\
    \ monoid::op_min, &monoid::e_min<T>>;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/Monoid.hpp
  requiredBy:
  - src/SegmentTree.hpp
  timestamp: '2021-02-17 10:37:25+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/yosupo/point_add_range_sum_2.test.cpp
documentation_of: src/Monoid.hpp
layout: document
redirect_from:
- /library/src/Monoid.hpp
- /library/src/Monoid.hpp.html
title: src/Monoid.hpp
---
