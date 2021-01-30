---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/own/Random_clz.test.cpp
    title: test/own/Random_clz.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/own/Random_ctz.test.cpp
    title: test/own/Random_ctz.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/own/Random_popcount.test.cpp
    title: test/own/Random_popcount.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/own/Random_runlength.test.cpp
    title: test/own/Random_runlength.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/Random.hpp\"\n#include <cassert>\n#include <algorithm>\n\
    #include <random>\n#include <chrono>\n#include <vector>\n#include <unordered_map>\n\
    \nusing namespace std;\nusing lint = long long;\n\nstruct Random {\n\n    mt19937\
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
    \ - 1)]; });\n        return res;\n    }\n\n};\n"
  code: "#include <cassert>\n#include <algorithm>\n#include <random>\n#include <chrono>\n\
    #include <vector>\n#include <unordered_map>\n\nusing namespace std;\nusing lint\
    \ = long long;\n\nstruct Random {\n\n    mt19937 mt;\n    Random() : mt(chrono::steady_clock::now().time_since_epoch().count())\
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
    \ - 1)]; });\n        return res;\n    }\n\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/Random.hpp
  requiredBy: []
  timestamp: '2021-01-27 22:37:38+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/own/Random_popcount.test.cpp
  - test/own/Random_ctz.test.cpp
  - test/own/Random_runlength.test.cpp
  - test/own/Random_clz.test.cpp
documentation_of: src/Random.hpp
layout: document
redirect_from:
- /library/src/Random.hpp
- /library/src/Random.hpp.html
title: src/Random.hpp
---
