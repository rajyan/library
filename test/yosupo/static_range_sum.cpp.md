---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/CumulativeSum.cpp
    title: src/CumulativeSum.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://judge.yosupo.jp/problem/static_range_sum
  bundledCode: "#line 1 \"test/yosupo/static_range_sum.cpp\"\n\n#define PROBLEM \"\
    https://judge.yosupo.jp/problem/static_range_sum\"\n\n#include <iostream>\n#include\
    \ <iomanip>\n#include <vector>\n\nusing namespace std;\nusing lint = long long;\n\
    \n#line 1 \"src/CumulativeSum.cpp\"\n#include <cassert>\n#line 3 \"src/CumulativeSum.cpp\"\
    \n\nusing namespace std;\n\ntemplate<class T>\nclass CuSum {\nprivate:\n    vector<T>\
    \ cusum;\n\npublic:\n    explicit CuSum(vector<T> const &vec) : cusum(vec.size()\
    \ + 1) {\n        for (int i = 0; i < (int)vec.size(); i++) cusum[i + 1] = cusum[i]\
    \ + vec[i];\n    }\n    explicit CuSum(const int N) : cusum(N + 1) {}\n    void\
    \ add(const int i, const T &x) { cusum[i + 1] += x; }\n    void build() { for\
    \ (int i = 0; i < (int)cusum.size() - 1; i++) cusum[i + 1] += cusum[i]; }\n\n\
    \    // partial sum of 0-indexed [l, r)\n    T operator()(int l, int r) {\n  \
    \      if (r < l || r < 0) {\n            assert(0);\n            return T{};\n\
    \        }\n        else return cusum[r] - cusum[l];\n    }\n    // 0-indexed\n\
    \    const T &operator[](int i) { return cusum[i + 1]; }\n    T back() { return\
    \ cusum.back(); }\n};\n\n#line 12 \"test/yosupo/static_range_sum.cpp\"\n\nstruct\
    \ init {\n    init() {\n        cin.tie(nullptr);\n        ios::sync_with_stdio(false);\n\
    \        cout << fixed << setprecision(10);\n    }\n} init_;\n\nint main() {\n\
    \n    int N, Q;\n    cin >> N >> Q;\n\n    vector<lint> a(N);\n    for (int i\
    \ = 0; i < N; i++) cin >> a[i];\n    CuSum<lint> cuA(a);\n\n    for (int i = 0;\
    \ i < Q; i++) {\n        int l, r;\n        cin >> l >> r;\n        cout << cuA(l,\
    \ r) << '\\n';\n    }\n\n    return 0;\n}\n"
  code: "\n#define PROBLEM \"https://judge.yosupo.jp/problem/static_range_sum\"\n\n\
    #include <iostream>\n#include <iomanip>\n#include <vector>\n\nusing namespace\
    \ std;\nusing lint = long long;\n\n#include \"../../src/CumulativeSum.cpp\"\n\n\
    struct init {\n    init() {\n        cin.tie(nullptr);\n        ios::sync_with_stdio(false);\n\
    \        cout << fixed << setprecision(10);\n    }\n} init_;\n\nint main() {\n\
    \n    int N, Q;\n    cin >> N >> Q;\n\n    vector<lint> a(N);\n    for (int i\
    \ = 0; i < N; i++) cin >> a[i];\n    CuSum<lint> cuA(a);\n\n    for (int i = 0;\
    \ i < Q; i++) {\n        int l, r;\n        cin >> l >> r;\n        cout << cuA(l,\
    \ r) << '\\n';\n    }\n\n    return 0;\n}\n"
  dependsOn:
  - src/CumulativeSum.cpp
  isVerificationFile: false
  path: test/yosupo/static_range_sum.cpp
  requiredBy: []
  timestamp: '2021-01-18 21:54:26+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: test/yosupo/static_range_sum.cpp
layout: document
redirect_from:
- /library/test/yosupo/static_range_sum.cpp
- /library/test/yosupo/static_range_sum.cpp.html
title: test/yosupo/static_range_sum.cpp
---
