---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/Monoid.hpp
    title: src/Monoid.hpp
  - icon: ':heavy_check_mark:'
    path: src/clz.hpp
    title: src/clz.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yosupo/point_add_range_sum_2.test.cpp
    title: test/yosupo/point_add_range_sum_2.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/SegmentTree.hpp\"\n\n#include <cassert>\n#include <vector>\n\
    \n#line 2 \"src/Monoid.hpp\"\n\n#include <variant>\n#include <algorithm>\n\nusing\
    \ namespace std;\n\ntemplate<class T, T (*F)(T a, T b)>\nclass Monoid {\n    class\
    \ Identity {};\n    using vt = variant<Identity, T>;\npublic:\n    [[nodiscard]]\
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
    using monoid_min = Monoid<T, op_min>;\n#line 2 \"src/clz.hpp\"\n\nusing lint =\
    \ long long;\n\ninline int clz(lint x) {\n    union {\n        unsigned long long\
    \ as_uint64;\n        double as_double;\n    } data{};\n    data.as_double = (double)x\
    \ + 0.5;\n    int n = 1054 - (int)(data.as_uint64 >> 52);\n    return 32 + n;\n\
    }\n#line 8 \"src/SegmentTree.hpp\"\n\nusing namespace std;\n\ntemplate<class M>\n\
    class SegmentTree {\n    M m;\n    using T = decltype(m.type());\n    using vt\
    \ = decltype(m.op(T{}, T{}));\n\npublic:\n    explicit SegmentTree(const int &n_)\n\
    \            : n(n_), lg(64 - clz(n)), sz(1 << lg),\n              d(2 * sz, m.identity())\
    \ {\n    }\n    explicit SegmentTree(const vector<T> &v)\n            : n((int)v.size()),\
    \ lg(64 - clz(n)), sz(1 << lg),\n              d(2 * sz, m.identity()) {\n   \
    \     for (int i = 0; i < n; i++) d[sz + i] = v[i];\n        for (int i = sz -\
    \ 1; i >= 0; i--) update(i);\n    }\n\n    void update(const int &k) { d[k] =\
    \ m.op(d[2 * k], d[2 * k + 1]); }\n\n    void set(int k, const T &x) {\n     \
    \   assert(0 <= k && k < n);\n        k += sz, d[k] = x;\n        for (int i =\
    \ 1; i <= lg; i++) update(k >> i);\n    }\n\n    void add(const int &k, const\
    \ T &x) { set(k, get<T>(m.op(d[k + sz], x))); }\n\n    [[nodiscard]] T sum(int\
    \ l, int r) const {\n        assert(l <= r);\n        vt sml = m.identity(), smr\
    \ = m.identity();\n        l += sz, r += sz;\n\n        while (l < r) {\n    \
    \        if (l & 1) sml = m.op(sml, d[l++]);\n            if (r & 1) smr = m.op(d[--r],\
    \ smr);\n            l >>= 1;\n            r >>= 1;\n        }\n        return\
    \ get<T>(m.op(sml, smr));\n    }\n\n    [[nodiscard]] T operator[](const int &k)\
    \ const {\n        assert(0 <= k && k < n);\n        return get<T>(d[k + sz]);\n\
    \    }\n\nprivate:\n    int n, lg, sz;\n    vector<vt> d;\n};\n"
  code: "#pragma once\n\n#include <cassert>\n#include <vector>\n\n#include \"Monoid.hpp\"\
    \n#include \"clz.hpp\"\n\nusing namespace std;\n\ntemplate<class M>\nclass SegmentTree\
    \ {\n    M m;\n    using T = decltype(m.type());\n    using vt = decltype(m.op(T{},\
    \ T{}));\n\npublic:\n    explicit SegmentTree(const int &n_)\n            : n(n_),\
    \ lg(64 - clz(n)), sz(1 << lg),\n              d(2 * sz, m.identity()) {\n   \
    \ }\n    explicit SegmentTree(const vector<T> &v)\n            : n((int)v.size()),\
    \ lg(64 - clz(n)), sz(1 << lg),\n              d(2 * sz, m.identity()) {\n   \
    \     for (int i = 0; i < n; i++) d[sz + i] = v[i];\n        for (int i = sz -\
    \ 1; i >= 0; i--) update(i);\n    }\n\n    void update(const int &k) { d[k] =\
    \ m.op(d[2 * k], d[2 * k + 1]); }\n\n    void set(int k, const T &x) {\n     \
    \   assert(0 <= k && k < n);\n        k += sz, d[k] = x;\n        for (int i =\
    \ 1; i <= lg; i++) update(k >> i);\n    }\n\n    void add(const int &k, const\
    \ T &x) { set(k, get<T>(m.op(d[k + sz], x))); }\n\n    [[nodiscard]] T sum(int\
    \ l, int r) const {\n        assert(l <= r);\n        vt sml = m.identity(), smr\
    \ = m.identity();\n        l += sz, r += sz;\n\n        while (l < r) {\n    \
    \        if (l & 1) sml = m.op(sml, d[l++]);\n            if (r & 1) smr = m.op(d[--r],\
    \ smr);\n            l >>= 1;\n            r >>= 1;\n        }\n        return\
    \ get<T>(m.op(sml, smr));\n    }\n\n    [[nodiscard]] T operator[](const int &k)\
    \ const {\n        assert(0 <= k && k < n);\n        return get<T>(d[k + sz]);\n\
    \    }\n\nprivate:\n    int n, lg, sz;\n    vector<vt> d;\n};"
  dependsOn:
  - src/Monoid.hpp
  - src/clz.hpp
  isVerificationFile: false
  path: src/SegmentTree.hpp
  requiredBy: []
  timestamp: '2021-02-14 12:11:43+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/point_add_range_sum_2.test.cpp
documentation_of: src/SegmentTree.hpp
layout: document
redirect_from:
- /library/src/SegmentTree.hpp
- /library/src/SegmentTree.hpp.html
title: src/SegmentTree.hpp
---
