---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/RandNum.cpp
    title: src/RandNum.cpp
  - icon: ':heavy_check_mark:'
    path: src/clz.cpp
    title: src/clz.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
  bundledCode: "#line 1 \"test/own/RandNum_clz.test.cpp\"\n\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
    \n\n#line 1 \"src/RandNum.cpp\"\n#include <random>\n#include <chrono>\n#include\
    \ <vector>\n#include <unordered_map>\n\nusing namespace std;\nusing lint = long\
    \ long;\n\nstruct RandNum {\n\n    mt19937 mt;\n    RandNum() : mt(chrono::steady_clock::now().time_since_epoch().count())\
    \ {}\n\n    lint operator()(const lint &rand_min, const lint &rand_max) {\n  \
    \      uniform_int_distribution <lint> dist(rand_min, rand_max);\n        return\
    \ dist(mt);\n    }\n    lint operator()(const lint &rand_max) { return (*this)(0LL,\
    \ rand_max); }\n\n    [[nodiscard]] vector<lint> uniq_vec(const int &sz, const\
    \ lint &rand_min, lint rand_max) {\n\n        vector<lint> res(sz);\n        unordered_map\
    \ <lint, lint> memo;\n        for (int i = 0; i < sz; i++, rand_max--) {\n\n \
    \           lint rand_val = (*this)(rand_min, rand_max);\n\n            // If\
    \ rand_max hasn't been replaced yet, fill it with rand_max\n            if (memo.find(rand_max)\
    \ == memo.end()) memo[rand_max] = rand_max;\n\n            auto val_itr = memo.find(rand_val);\n\
    \            if (val_itr == memo.end()) { // replace rand_val with rand_max\n\
    \                memo[rand_val] = memo[rand_max];\n            }\n           \
    \ else { // If rand_val has already been replaced\n                rand_val =\
    \ val_itr->second;\n                val_itr->second = memo[rand_max];\n      \
    \      }\n\n            res[i] = rand_val;\n        }\n        return res;\n \
    \   }\n\n    template<class Ite>\n    void shuf(Ite first, Ite last) { shuffle(first,\
    \ last, mt); }\n\n};\n#line 1 \"src/clz.cpp\"\n\nusing lint = long long;\n\ninline\
    \ int clz(lint x) {\n    union {\n        unsigned long long as_uint64;\n    \
    \    double as_double;\n    } data{};\n    data.as_double = (double)x + 0.5;\n\
    \    int n = 1054 - (int)(data.as_uint64 >> 52);\n    return 32 + n;\n}\n#line\
    \ 6 \"test/own/RandNum_clz.test.cpp\"\n\n#include <cassert>\n#include <bitset>\n\
    #include <iostream>\n#include <iomanip>\n\nusing namespace std;\nusing lint =\
    \ long long;\n\nstruct init {\n    init() {\n        cin.tie(nullptr);\n     \
    \   ios::sync_with_stdio(false);\n        cout << fixed << setprecision(10);\n\
    \    }\n} init_;\n\ninline int test(lint x) {\n    long long count = 0;\n    __asm__\
    \ volatile(\"LZCNT %1, %0;\"\n    :\"=r\"(count)\n    :\"r\"(x)\n    :\n    );\n\
    \    return count;\n}\n\nint main() {\n\n    // random test\n    RandNum ran;\n\
    \    for (int i = 0; i < 100000000; i++) {\n        lint n = ran(0, numeric_limits<lint>::max());\n\
    \        assert(test(n) == clz(n));\n    }\n\n    std::cout << \"Hello World\\\
    n\";\n\n    return 0;\n}\n"
  code: "\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
    \n\n#include \"../../src/RandNum.cpp\"\n#include \"../../src/clz.cpp\"\n\n#include\
    \ <cassert>\n#include <bitset>\n#include <iostream>\n#include <iomanip>\n\nusing\
    \ namespace std;\nusing lint = long long;\n\nstruct init {\n    init() {\n   \
    \     cin.tie(nullptr);\n        ios::sync_with_stdio(false);\n        cout <<\
    \ fixed << setprecision(10);\n    }\n} init_;\n\ninline int test(lint x) {\n \
    \   long long count = 0;\n    __asm__ volatile(\"LZCNT %1, %0;\"\n    :\"=r\"\
    (count)\n    :\"r\"(x)\n    :\n    );\n    return count;\n}\n\nint main() {\n\n\
    \    // random test\n    RandNum ran;\n    for (int i = 0; i < 100000000; i++)\
    \ {\n        lint n = ran(0, numeric_limits<lint>::max());\n        assert(test(n)\
    \ == clz(n));\n    }\n\n    std::cout << \"Hello World\\n\";\n\n    return 0;\n\
    }\n"
  dependsOn:
  - src/RandNum.cpp
  - src/clz.cpp
  isVerificationFile: true
  path: test/own/RandNum_clz.test.cpp
  requiredBy: []
  timestamp: '2021-01-18 09:28:02+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/own/RandNum_clz.test.cpp
layout: document
redirect_from:
- /verify/test/own/RandNum_clz.test.cpp
- /verify/test/own/RandNum_clz.test.cpp.html
title: test/own/RandNum_clz.test.cpp
---
