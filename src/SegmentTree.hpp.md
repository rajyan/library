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
    \n#line 2 \"src/Monoid.hpp\"\n\n#include <variant>\n#include <algorithm>\n#include\
    \ <iostream>\n\nusing namespace std;\n\ntemplate<class T, T (*base_op)(T, T),\
    \ const T(*e) = nullptr>\nclass Monoid {\n    class Identity {};\n    constexpr\
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
    \ monoid::op_min, &monoid::e_min<T>>;\n}\n#line 2 \"src/clz.hpp\"\n\nusing lint\
    \ = long long;\n\ninline int clz(lint x) {\n    union {\n        unsigned long\
    \ long as_uint64;\n        double as_double;\n    } data{};\n    data.as_double\
    \ = (double)x + 0.5;\n    int n = 1054 - (int)(data.as_uint64 >> 52);\n    return\
    \ 32 + n;\n}\n#line 8 \"src/SegmentTree.hpp\"\n\nusing namespace std;\n\ntemplate<class\
    \ M>\nclass SegmentTree {\n    using T = typename M::type;\n    using vt = typename\
    \ M::vt;\npublic:\n    explicit SegmentTree(const int &n_)\n            : n(n_),\
    \ lg(64 - clz(n)), sz(1 << lg),\n              d(2 * sz, m.identity()) {\n   \
    \ }\n    explicit SegmentTree(const vector<T> &v)\n            : n((int)v.size()),\
    \ lg(64 - clz(n)), sz(1 << lg),\n              d(2 * sz, m.identity()) {\n   \
    \     for (int i = 0; i < n; i++) d[sz + i] = v[i];\n        for (int i = sz -\
    \ 1; i >= 0; i--) update(i);\n    }\n\n    void set(int k, const vt &x) {\n  \
    \      assert(0 <= k && k < n);\n        k += sz, d[k] = x;\n        for (int\
    \ i = 1; i <= lg; i++) update(k >> i);\n    }\n    void add(const int &k, const\
    \ vt &x) { set(k, m.op(d[k + sz], x)); }\n\n    [[nodiscard]] vt sum(int l, int\
    \ r) const {\n        assert(l <= r);\n        vt sml = m.identity(), smr = m.identity();\n\
    \        l += sz, r += sz;\n\n        while (l < r) {\n            if (l & 1)\
    \ sml = m.op(sml, d[l++]);\n            if (r & 1) smr = m.op(d[--r], smr);\n\
    \            l >>= 1;\n            r >>= 1;\n        }\n        return m.op(sml,\
    \ smr);\n    }\n    [[nodiscard]] vt operator[](const int &k) const {\n      \
    \  assert(0 <= k && k < n);\n        return d[k + sz];\n    }\n\nprivate:\n  \
    \  M m;\n    int n, lg, sz;\n    vector<vt> d;\n    void update(const int &k)\
    \ { d[k] = m.op(d[2 * k], d[2 * k + 1]); }\n};\n"
  code: "#pragma once\n\n#include <cassert>\n#include <vector>\n\n#include \"Monoid.hpp\"\
    \n#include \"clz.hpp\"\n\nusing namespace std;\n\ntemplate<class M>\nclass SegmentTree\
    \ {\n    using T = typename M::type;\n    using vt = typename M::vt;\npublic:\n\
    \    explicit SegmentTree(const int &n_)\n            : n(n_), lg(64 - clz(n)),\
    \ sz(1 << lg),\n              d(2 * sz, m.identity()) {\n    }\n    explicit SegmentTree(const\
    \ vector<T> &v)\n            : n((int)v.size()), lg(64 - clz(n)), sz(1 << lg),\n\
    \              d(2 * sz, m.identity()) {\n        for (int i = 0; i < n; i++)\
    \ d[sz + i] = v[i];\n        for (int i = sz - 1; i >= 0; i--) update(i);\n  \
    \  }\n\n    void set(int k, const vt &x) {\n        assert(0 <= k && k < n);\n\
    \        k += sz, d[k] = x;\n        for (int i = 1; i <= lg; i++) update(k >>\
    \ i);\n    }\n    void add(const int &k, const vt &x) { set(k, m.op(d[k + sz],\
    \ x)); }\n\n    [[nodiscard]] vt sum(int l, int r) const {\n        assert(l <=\
    \ r);\n        vt sml = m.identity(), smr = m.identity();\n        l += sz, r\
    \ += sz;\n\n        while (l < r) {\n            if (l & 1) sml = m.op(sml, d[l++]);\n\
    \            if (r & 1) smr = m.op(d[--r], smr);\n            l >>= 1;\n     \
    \       r >>= 1;\n        }\n        return m.op(sml, smr);\n    }\n    [[nodiscard]]\
    \ vt operator[](const int &k) const {\n        assert(0 <= k && k < n);\n    \
    \    return d[k + sz];\n    }\n\nprivate:\n    M m;\n    int n, lg, sz;\n    vector<vt>\
    \ d;\n    void update(const int &k) { d[k] = m.op(d[2 * k], d[2 * k + 1]); }\n\
    };\n"
  dependsOn:
  - src/Monoid.hpp
  - src/clz.hpp
  isVerificationFile: false
  path: src/SegmentTree.hpp
  requiredBy: []
  timestamp: '2021-02-17 10:37:25+09:00'
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
