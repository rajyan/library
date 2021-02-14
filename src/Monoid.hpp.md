---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/SegmentTree.hpp
    title: src/SegmentTree.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yosupo/point_add_range_sum_2.test.cpp
    title: test/yosupo/point_add_range_sum_2.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/Monoid.hpp\"\n\n#include <variant>\n#include <algorithm>\n\
    \nusing namespace std;\n\ntemplate<class T, T (*F)(T a, T b)>\nclass Monoid {\n\
    \    class Identity {};\n    using vt = variant<Identity, T>;\npublic:\n    [[nodiscard]]\
    \ constexpr vt op(const vt &a, const vt &b) const {\n        if (a.index() ==\
    \ 1 && b.index() == 1) return F(get<T>(a), get<T>(b));\n        else if (a.index()\
    \ == 0) return b;\n        else return a;\n    };\n    [[nodiscard]] constexpr\
    \ vt identity() const { return Identity{}; }\n    [[nodiscard]] constexpr T type()\
    \ const { return T{}; }\n};\n\nconstexpr auto op_add = [](auto l, auto r) { return\
    \ l + r; };\nconstexpr auto op_mul = [](auto l, auto r) { return l * r; };\nconstexpr\
    \ auto op_max = [](auto l, auto r) { return max(l, r); };\nconstexpr auto op_min\
    \ = [](auto l, auto r) { return min(l, r); };\n\ntemplate<class T>\nusing monoid_add\
    \ = Monoid<T, op_add>;\ntemplate<class T>\nusing monoid_mul = Monoid<T, op_mul>;\n\
    template<class T>\nusing monoid_max = Monoid<T, op_max>;\ntemplate<class T>\n\
    using monoid_min = Monoid<T, op_min>;\n"
  code: "#pragma once\n\n#include <variant>\n#include <algorithm>\n\nusing namespace\
    \ std;\n\ntemplate<class T, T (*F)(T a, T b)>\nclass Monoid {\n    class Identity\
    \ {};\n    using vt = variant<Identity, T>;\npublic:\n    [[nodiscard]] constexpr\
    \ vt op(const vt &a, const vt &b) const {\n        if (a.index() == 1 && b.index()\
    \ == 1) return F(get<T>(a), get<T>(b));\n        else if (a.index() == 0) return\
    \ b;\n        else return a;\n    };\n    [[nodiscard]] constexpr vt identity()\
    \ const { return Identity{}; }\n    [[nodiscard]] constexpr T type() const { return\
    \ T{}; }\n};\n\nconstexpr auto op_add = [](auto l, auto r) { return l + r; };\n\
    constexpr auto op_mul = [](auto l, auto r) { return l * r; };\nconstexpr auto\
    \ op_max = [](auto l, auto r) { return max(l, r); };\nconstexpr auto op_min =\
    \ [](auto l, auto r) { return min(l, r); };\n\ntemplate<class T>\nusing monoid_add\
    \ = Monoid<T, op_add>;\ntemplate<class T>\nusing monoid_mul = Monoid<T, op_mul>;\n\
    template<class T>\nusing monoid_max = Monoid<T, op_max>;\ntemplate<class T>\n\
    using monoid_min = Monoid<T, op_min>;"
  dependsOn: []
  isVerificationFile: false
  path: src/Monoid.hpp
  requiredBy:
  - src/SegmentTree.hpp
  timestamp: '2021-02-14 12:11:43+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/point_add_range_sum_2.test.cpp
documentation_of: src/Monoid.hpp
layout: document
redirect_from:
- /library/src/Monoid.hpp
- /library/src/Monoid.hpp.html
title: src/Monoid.hpp
---
