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
  bundledCode: "#line 2 \"src/Monoid.hpp\"\n\n#include <variant>\n\nusing namespace\
    \ std;\n\ntemplate<class T>\nclass Monoid {\n    class Identity {};\n    using\
    \ op_t = T (*)(T a, T b);\npublic:\n    using vt = variant<Identity, T>;\n\n \
    \   constexpr explicit Monoid(op_t op_) : base_op(op_) {}\n\n    [[nodiscard]]\
    \ constexpr vt op(const vt &a, const vt &b) const {\n        if (a.index() ==\
    \ 1 && b.index() == 1) return base_op(get<T>(a), get<T>(b));\n        else if\
    \ (a.index() == 0) return b;\n        else return a;\n    };\n    [[nodiscard]]\
    \ constexpr Identity identity() const { return Identity{}; }\n\nprivate:\n   \
    \ op_t base_op;\n};\n"
  code: "#pragma once\n\n#include <variant>\n\nusing namespace std;\n\ntemplate<class\
    \ T>\nclass Monoid {\n    class Identity {};\n    using op_t = T (*)(T a, T b);\n\
    public:\n    using vt = variant<Identity, T>;\n\n    constexpr explicit Monoid(op_t\
    \ op_) : base_op(op_) {}\n\n    [[nodiscard]] constexpr vt op(const vt &a, const\
    \ vt &b) const {\n        if (a.index() == 1 && b.index() == 1) return base_op(get<T>(a),\
    \ get<T>(b));\n        else if (a.index() == 0) return b;\n        else return\
    \ a;\n    };\n    [[nodiscard]] constexpr Identity identity() const { return Identity{};\
    \ }\n\nprivate:\n    op_t base_op;\n};"
  dependsOn: []
  isVerificationFile: false
  path: src/Monoid.hpp
  requiredBy:
  - src/SegmentTree.hpp
  timestamp: '2021-02-13 17:28:06+09:00'
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
