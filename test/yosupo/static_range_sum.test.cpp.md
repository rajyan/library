---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/CumulativeSum.hpp
    title: src/CumulativeSum.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/static_range_sum
    links:
    - https://judge.yosupo.jp/problem/static_range_sum
  bundledCode: "#line 1 \"test/yosupo/static_range_sum.test.cpp\"\n\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/static_range_sum\"\n\n#include <iostream>\n\
    #include <iomanip>\n#include <vector>\n\nusing namespace std;\nusing lint = long\
    \ long;\n\n#line 2 \"src/CumulativeSum.hpp\"\n\n#include <cassert>\n#line 5 \"\
    src/CumulativeSum.hpp\"\n\nusing namespace std;\n\ntemplate<class T>\nclass CuSum\
    \ {\nprivate:\n    vector<T> cusum;\n\npublic:\n    explicit CuSum(vector<T> const\
    \ &vec) : cusum(vec.size() + 1) {\n        for (int i = 0; i < (int)vec.size();\
    \ i++) cusum[i + 1] = cusum[i] + vec[i];\n    }\n    explicit CuSum(const int\
    \ N) : cusum(N + 1) {}\n    void add(const int i, const T &x) { cusum[i + 1] +=\
    \ x; }\n    void build() { for (int i = 0; i < (int)cusum.size() - 1; i++) cusum[i\
    \ + 1] += cusum[i]; }\n\n    // partial sum of 0-indexed [l, r)\n    T operator()(int\
    \ l, int r) {\n        if (r < l || r < 0) {\n            assert(0);\n       \
    \     return T{};\n        }\n        else return cusum[r] - cusum[l];\n    }\n\
    \    // 0-indexed\n    const T &operator[](int i) { return cusum[i + 1]; }\n \
    \   T back() { return cusum.back(); }\n};\n\n#line 12 \"test/yosupo/static_range_sum.test.cpp\"\
    \n\nstruct init {\n    init() {\n        cin.tie(nullptr);\n        ios::sync_with_stdio(false);\n\
    \        cout << fixed << setprecision(10);\n    }\n} init_;\n\nint main() {\n\
    \n    int N, Q;\n    cin >> N >> Q;\n\n    vector<lint> a(N);\n    for (int i\
    \ = 0; i < N; i++) cin >> a[i];\n    CuSum<lint> cuA(a);\n\n    for (int i = 0;\
    \ i < Q; i++) {\n        int l, r;\n        cin >> l >> r;\n        cout << cuA(l,\
    \ r) << '\\n';\n    }\n\n    return 0;\n}\n"
  code: "\n#define PROBLEM \"https://judge.yosupo.jp/problem/static_range_sum\"\n\n\
    #include <iostream>\n#include <iomanip>\n#include <vector>\n\nusing namespace\
    \ std;\nusing lint = long long;\n\n#include \"../../src/CumulativeSum.hpp\"\n\n\
    struct init {\n    init() {\n        cin.tie(nullptr);\n        ios::sync_with_stdio(false);\n\
    \        cout << fixed << setprecision(10);\n    }\n} init_;\n\nint main() {\n\
    \n    int N, Q;\n    cin >> N >> Q;\n\n    vector<lint> a(N);\n    for (int i\
    \ = 0; i < N; i++) cin >> a[i];\n    CuSum<lint> cuA(a);\n\n    for (int i = 0;\
    \ i < Q; i++) {\n        int l, r;\n        cin >> l >> r;\n        cout << cuA(l,\
    \ r) << '\\n';\n    }\n\n    return 0;\n}\n"
  dependsOn:
  - src/CumulativeSum.hpp
  isVerificationFile: true
  path: test/yosupo/static_range_sum.test.cpp
  requiredBy: []
  timestamp: '2021-01-31 19:19:57+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo/static_range_sum.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo/static_range_sum.test.cpp
- /verify/test/yosupo/static_range_sum.test.cpp.html
title: test/yosupo/static_range_sum.test.cpp
---
