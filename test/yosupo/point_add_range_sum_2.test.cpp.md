---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: src/Monoid.hpp
    title: src/Monoid.hpp
  - icon: ':x:'
    path: src/SegmentTree.hpp
    title: src/SegmentTree.hpp
  - icon: ':question:'
    path: src/clz.hpp
    title: src/clz.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/point_add_range_sum
    links:
    - https://judge.yosupo.jp/problem/point_add_range_sum
  bundledCode: "#line 1 \"test/yosupo/point_add_range_sum_2.test.cpp\"\n\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n\n#line 2 \"\
    src/SegmentTree.hpp\"\n\n#include <cassert>\n#include <vector>\n\n#line 2 \"src/Monoid.hpp\"\
    \n\n#include <variant>\n#include <algorithm>\n\nusing namespace std;\n\ntemplate<class\
    \ T, T (*F)(T, T), T (*e) = nullptr>\nclass Monoid {\n    class Identity {};\n\
    \npublic:\n    using type = T;\n    using vt = conditional_t<is_null_pointer_v<decltype(e)>,\
    \ variant<Identity, T>, T>;\n\n    [[nodiscard]] constexpr vt op(const vt &a,\
    \ const vt &b) const {\n        if constexpr (e) return F(a, b);\n        else\
    \ if (a.index() == 1 && b.index() == 1) return F(get<T>(a), get<T>(b));\n    \
    \    else if (a.index() == 0) return b;\n        else return a;\n    };\n    [[nodiscard]]\
    \ constexpr vt identity() const {\n        if constexpr (e) return *e;\n     \
    \   else return Identity{};\n    }\n};\n\nnamespace monoid {\n    constexpr auto\
    \ op_add = [](auto l, auto r) { return l + r; };\n    constexpr auto op_mul =\
    \ [](auto l, auto r) { return l * r; };\n    constexpr auto op_max = [](auto l,\
    \ auto r) { return max(l, r); };\n    constexpr auto op_min = [](auto l, auto\
    \ r) { return min(l, r); };\n    template<class T> T e_add = T{};\n    template<class\
    \ T> T e_mul = T{1};\n    template<class T> T e_max = numeric_limits<T>::max();\n\
    \    template<class T> T e_min = numeric_limits<T>::min();\n    template<class\
    \ T> using add = Monoid<T, monoid::op_add, &monoid::e_add<T>>;\n    template<class\
    \ T> using mul = Monoid<T, monoid::op_mul, &monoid::e_mul<T>>;\n    template<class\
    \ T> using max = Monoid<T, monoid::op_max, &monoid::e_max<T>>;\n    template<class\
    \ T> using min = Monoid<T, monoid::op_min, &monoid::e_min<T>>;\n}\n#line 2 \"\
    src/clz.hpp\"\n\nusing lint = long long;\n\ninline int clz(lint x) {\n    union\
    \ {\n        unsigned long long as_uint64;\n        double as_double;\n    } data{};\n\
    \    data.as_double = (double)x + 0.5;\n    int n = 1054 - (int)(data.as_uint64\
    \ >> 52);\n    return 32 + n;\n}\n#line 8 \"src/SegmentTree.hpp\"\n\nusing namespace\
    \ std;\n\ntemplate<class M>\nclass SegmentTree {\n    using T = typename M::type;\n\
    \    using vt = typename M::vt;\npublic:\n    explicit SegmentTree(const int &n_)\n\
    \            : n(n_), lg(64 - clz(n)), sz(1 << lg),\n              d(2 * sz, m.identity())\
    \ {\n    }\n    explicit SegmentTree(const vector<T> &v)\n            : n((int)v.size()),\
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
    \ { d[k] = m.op(d[2 * k], d[2 * k + 1]); }\n};\n#line 5 \"test/yosupo/point_add_range_sum_2.test.cpp\"\
    \n\n#include <iostream>\n#include <iomanip>\n\nusing namespace std;\nusing lint\
    \ = long long;\n\nstruct init {\n    init() {\n        cin.tie(nullptr);\n   \
    \     ios::sync_with_stdio(false);\n        cout << fixed << setprecision(10);\n\
    \    }\n} init_;\n\nint main() {\n\n    int N, Q;\n    cin >> N >> Q;\n\n    SegmentTree<monoid::add<lint>>\
    \ sg(N);\n    for (int i = 0; i < N; i++) {\n        lint a;\n        cin >> a;\n\
    \        sg.set(i, a);\n    }\n\n    for (int i = 0; i < Q; i++) {\n        int\
    \ q, l, r;\n        cin >> q >> l >> r;\n        if (q) {\n            cout <<\
    \ sg.sum(l, r) << '\\n';\n        }\n        else {\n            sg.add(l, r);\n\
    \        }\n    }\n\n    return 0;\n}\n"
  code: "\n#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\
    \n\n#include \"../../src/SegmentTree.hpp\"\n\n#include <iostream>\n#include <iomanip>\n\
    \nusing namespace std;\nusing lint = long long;\n\nstruct init {\n    init() {\n\
    \        cin.tie(nullptr);\n        ios::sync_with_stdio(false);\n        cout\
    \ << fixed << setprecision(10);\n    }\n} init_;\n\nint main() {\n\n    int N,\
    \ Q;\n    cin >> N >> Q;\n\n    SegmentTree<monoid::add<lint>> sg(N);\n    for\
    \ (int i = 0; i < N; i++) {\n        lint a;\n        cin >> a;\n        sg.set(i,\
    \ a);\n    }\n\n    for (int i = 0; i < Q; i++) {\n        int q, l, r;\n    \
    \    cin >> q >> l >> r;\n        if (q) {\n            cout << sg.sum(l, r) <<\
    \ '\\n';\n        }\n        else {\n            sg.add(l, r);\n        }\n  \
    \  }\n\n    return 0;\n}\n"
  dependsOn:
  - src/SegmentTree.hpp
  - src/Monoid.hpp
  - src/clz.hpp
  isVerificationFile: true
  path: test/yosupo/point_add_range_sum_2.test.cpp
  requiredBy: []
  timestamp: '2021-02-15 14:05:20+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/yosupo/point_add_range_sum_2.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo/point_add_range_sum_2.test.cpp
- /verify/test/yosupo/point_add_range_sum_2.test.cpp.html
title: test/yosupo/point_add_range_sum_2.test.cpp
---
