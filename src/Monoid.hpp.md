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
    #include <iostream>\n\nusing namespace std;\n\ntemplate<class T, T (*F)(T, T),\
    \ const T(*e) = nullptr>\nclass Monoid {\n    class Identity {};\n    constexpr\
    \ static auto has_identity = !is_null_pointer_v<decltype(e)>;\npublic:\n    using\
    \ type = T;\n    using vt = conditional_t<has_identity, T, variant<Identity, T>>;\n\
    \n    [[nodiscard]] constexpr vt op(const vt &a, const vt &b) const {\n      \
    \  if constexpr (has_identity) return F(a, b);\n        else if (a.index() ==\
    \ 1 && b.index() == 1) return F(get<T>(a), get<T>(b));\n        else if (a.index()\
    \ == 0) return b;\n        else return a;\n    };\n    [[nodiscard]] constexpr\
    \ vt identity() const {\n        if constexpr (has_identity) return *e;\n    \
    \    else return Identity{};\n    }\n};\n\nnamespace monoid {\n    constexpr auto\
    \ op_add = [](auto l, auto r) { return l + r; };\n    constexpr auto op_mul =\
    \ [](auto l, auto r) { return l * r; };\n    constexpr auto op_max = [](auto l,\
    \ auto r) { return max(l, r); };\n    constexpr auto op_min = [](auto l, auto\
    \ r) { return min(l, r); };\n    template<class T> T e_add = T{};\n    template<class\
    \ T> T e_mul = T{1};\n    template<class T> T e_max = numeric_limits<T>::max();\n\
    \    template<class T> T e_min = numeric_limits<T>::min();\n    template<class\
    \ T> using add = Monoid<T, monoid::op_add, &monoid::e_add<T>>;\n    template<class\
    \ T> using mul = Monoid<T, monoid::op_mul, &monoid::e_mul<T>>;\n    template<class\
    \ T> using max = Monoid<T, monoid::op_max, &monoid::e_max<T>>;\n    template<class\
    \ T> using min = Monoid<T, monoid::op_min, &monoid::e_min<T>>;\n}\n"
  code: "#pragma once\n\n#include <variant>\n#include <algorithm>\n#include <iostream>\n\
    \nusing namespace std;\n\ntemplate<class T, T (*F)(T, T), const T(*e) = nullptr>\n\
    class Monoid {\n    class Identity {};\n    constexpr static auto has_identity\
    \ = !is_null_pointer_v<decltype(e)>;\npublic:\n    using type = T;\n    using\
    \ vt = conditional_t<has_identity, T, variant<Identity, T>>;\n\n    [[nodiscard]]\
    \ constexpr vt op(const vt &a, const vt &b) const {\n        if constexpr (has_identity)\
    \ return F(a, b);\n        else if (a.index() == 1 && b.index() == 1) return F(get<T>(a),\
    \ get<T>(b));\n        else if (a.index() == 0) return b;\n        else return\
    \ a;\n    };\n    [[nodiscard]] constexpr vt identity() const {\n        if constexpr\
    \ (has_identity) return *e;\n        else return Identity{};\n    }\n};\n\nnamespace\
    \ monoid {\n    constexpr auto op_add = [](auto l, auto r) { return l + r; };\n\
    \    constexpr auto op_mul = [](auto l, auto r) { return l * r; };\n    constexpr\
    \ auto op_max = [](auto l, auto r) { return max(l, r); };\n    constexpr auto\
    \ op_min = [](auto l, auto r) { return min(l, r); };\n    template<class T> T\
    \ e_add = T{};\n    template<class T> T e_mul = T{1};\n    template<class T> T\
    \ e_max = numeric_limits<T>::max();\n    template<class T> T e_min = numeric_limits<T>::min();\n\
    \    template<class T> using add = Monoid<T, monoid::op_add, &monoid::e_add<T>>;\n\
    \    template<class T> using mul = Monoid<T, monoid::op_mul, &monoid::e_mul<T>>;\n\
    \    template<class T> using max = Monoid<T, monoid::op_max, &monoid::e_max<T>>;\n\
    \    template<class T> using min = Monoid<T, monoid::op_min, &monoid::e_min<T>>;\n\
    }"
  dependsOn: []
  isVerificationFile: false
  path: src/Monoid.hpp
  requiredBy:
  - src/SegmentTree.hpp
  timestamp: '2021-02-15 23:19:47+09:00'
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
