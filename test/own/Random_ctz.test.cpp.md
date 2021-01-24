---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/Random.cpp
    title: src/Random.cpp
  - icon: ':heavy_check_mark:'
    path: src/ctz.cpp
    title: src/ctz.cpp
  - icon: ':heavy_check_mark:'
    path: src/popcount.cpp
    title: src/popcount.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
  bundledCode: "#line 1 \"test/own/Random_ctz.test.cpp\"\n\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
    \n\n#line 1 \"src/Random.cpp\"\n#include <cassert>\n#include <algorithm>\n#include\
    \ <random>\n#include <chrono>\n#include <vector>\n#include <unordered_map>\n\n\
    using namespace std;\nusing lint = long long;\n\nstruct Random {\n\n    mt19937\
    \ mt;\n    Random() : mt(chrono::steady_clock::now().time_since_epoch().count())\
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
    \   }\n    template<class Ite>\n    void shuf(Ite first, Ite last) { shuffle(first,\
    \ last, mt); }\n\n    string random_string(const int &max_len, const string list\
    \ = \"abcdefghijklmnopqrstuvwxyz\") {\n        assert(!list.empty());\n      \
    \  int size = (int)(*this)(1, max_len);\n        string res(size, 0);\n      \
    \  generate(res.begin(), res.end(), [this, &list]() { return list[(*this)((int)list.size()\
    \ - 1)]; });\n        return res;\n    }\n\n};\n#line 1 \"src/ctz.cpp\"\n\n#line\
    \ 1 \"src/popcount.cpp\"\n\nusing lint = long long;\n\ninline int popcount(lint\
    \ n) {\n    n = (n & 0x5555555555555555) + (n >> 1 & 0x5555555555555555);\n  \
    \  n = (n & 0x3333333333333333) + (n >> 2 & 0x3333333333333333);\n    n = (n &\
    \ 0x0f0f0f0f0f0f0f0f) + (n >> 4 & 0x0f0f0f0f0f0f0f0f);\n    n = (n & 0x00ff00ff00ff00ff)\
    \ + (n >> 8 & 0x00ff00ff00ff00ff);\n    n = (n & 0x0000ffff0000ffff) + (n >> 16\
    \ & 0x0000ffff0000ffff);\n    n = (n & 0x00000000ffffffff) + (n >> 32 & 0x00000000ffffffff);\n\
    \    return n;\n}\n#line 3 \"src/ctz.cpp\"\n\nusing lint = long long;\n\ninline\
    \ int ctz(lint n) {\n    return popcount(~n & (n - 1));\n}\n#line 6 \"test/own/Random_ctz.test.cpp\"\
    \n\n#line 8 \"test/own/Random_ctz.test.cpp\"\n#include <bitset>\n#include <iostream>\n\
    #include <iomanip>\n\nusing namespace std;\nusing lint = long long;\n\nstruct\
    \ init {\n    init() {\n        cin.tie(nullptr);\n        ios::sync_with_stdio(false);\n\
    \        cout << fixed << setprecision(10);\n    }\n} init_;\n\ninline int test(lint\
    \ x) {\n    long long count = 0;\n    __asm__ volatile(\"TZCNT %1, %0;\"\n   \
    \ :\"=r\"(count)\n    :\"r\"(x)\n    :\n    );\n    return count;\n}\n\nint main()\
    \ {\n\n    // random test\n    Random ran;\n    for (int i = 0; i < 100000000;\
    \ i++) {\n        lint n = ran(0, numeric_limits<lint>::max());\n        assert(test(n)\
    \ == ctz(n));\n    }\n\n    cout << \"Hello World\\n\";\n\n    return 0;\n}\n"
  code: "\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
    \n\n#include \"../../src/Random.cpp\"\n#include \"../../src/ctz.cpp\"\n\n#include\
    \ <cassert>\n#include <bitset>\n#include <iostream>\n#include <iomanip>\n\nusing\
    \ namespace std;\nusing lint = long long;\n\nstruct init {\n    init() {\n   \
    \     cin.tie(nullptr);\n        ios::sync_with_stdio(false);\n        cout <<\
    \ fixed << setprecision(10);\n    }\n} init_;\n\ninline int test(lint x) {\n \
    \   long long count = 0;\n    __asm__ volatile(\"TZCNT %1, %0;\"\n    :\"=r\"\
    (count)\n    :\"r\"(x)\n    :\n    );\n    return count;\n}\n\nint main() {\n\n\
    \    // random test\n    Random ran;\n    for (int i = 0; i < 100000000; i++)\
    \ {\n        lint n = ran(0, numeric_limits<lint>::max());\n        assert(test(n)\
    \ == ctz(n));\n    }\n\n    cout << \"Hello World\\n\";\n\n    return 0;\n}"
  dependsOn:
  - src/Random.cpp
  - src/ctz.cpp
  - src/popcount.cpp
  isVerificationFile: true
  path: test/own/Random_ctz.test.cpp
  requiredBy: []
  timestamp: '2021-01-24 12:59:22+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/own/Random_ctz.test.cpp
layout: document
redirect_from:
- /verify/test/own/Random_ctz.test.cpp
- /verify/test/own/Random_ctz.test.cpp.html
title: test/own/Random_ctz.test.cpp
---
