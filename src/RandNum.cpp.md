---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/own/RandNum_clz.test.cpp
    title: test/own/RandNum_clz.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/own/RandNum_ctz.test.cpp
    title: test/own/RandNum_ctz.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/own/RandNum_popcount.test.cpp
    title: test/own/RandNum_popcount.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/RandNum.cpp\"\n#include <random>\n#include <chrono>\n\
    #include <vector>\n#include <unordered_map>\n\nusing namespace std;\nusing lint\
    \ = long long;\n\nstruct RandNum {\n\n    mt19937 mt;\n    RandNum() : mt(chrono::steady_clock::now().time_since_epoch().count())\
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
    \ last, mt); }\n\n};\n"
  code: "#include <random>\n#include <chrono>\n#include <vector>\n#include <unordered_map>\n\
    \nusing namespace std;\nusing lint = long long;\n\nstruct RandNum {\n\n    mt19937\
    \ mt;\n    RandNum() : mt(chrono::steady_clock::now().time_since_epoch().count())\
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
    \ last, mt); }\n\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/RandNum.cpp
  requiredBy: []
  timestamp: '2021-01-16 00:14:14+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/own/RandNum_popcount.test.cpp
  - test/own/RandNum_ctz.test.cpp
  - test/own/RandNum_clz.test.cpp
documentation_of: src/RandNum.cpp
layout: document
redirect_from:
- /library/src/RandNum.cpp
- /library/src/RandNum.cpp.html
title: src/RandNum.cpp
---
