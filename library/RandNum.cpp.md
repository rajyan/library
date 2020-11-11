---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"library/RandNum.cpp\"\n#include <random>\n#include <chrono>\n\
    #include <vector>\n#include <unordered_map>\n\nusing namespace std;\nusing lint\
    \ = long long;\n\nstruct RandNum {\n\n\tmt19937 mt;\n\tRandNum() : mt(chrono::steady_clock::now().time_since_epoch().count())\
    \ {}\n\n\tlint operator() (const lint& rand_min, const lint& rand_max) {\n\t\t\
    uniform_int_distribution<lint> dist(rand_min, rand_max);\n\t\treturn dist(mt);\n\
    \t}\n\tlint operator() (const lint &rand_max) { return (*this)(0LL, rand_max);\
    \ }\n\n\tvector<lint> uniq_vec(const int& sz, const lint& rand_min, lint rand_max)\
    \ {\n\n\t\tvector<lint> res(sz);\n\t\tunordered_map<lint, lint> memo;\n\t\tfor\
    \ (int i = 0; i < sz; i++, rand_max--) {\n\n\t\t\tlint rand_val = (*this)(rand_min,\
    \ rand_max);\n\n\t\t\t// If rand_max hasn't been replaced yet, fill it with rand_max\n\
    \t\t\tif (memo.find(rand_max) == memo.end()) memo[rand_max] = rand_max;\n\n\t\t\
    \tauto val_itr = memo.find(rand_val);\n\t\t\tif (val_itr == memo.end()) { // replace\
    \ rand_val with rand_max\n\t\t\t\tmemo[rand_val] = memo[rand_max];\n\t\t\t}\n\t\
    \t\telse { // If rand_val has already been replaced\n\t\t\t\trand_val = val_itr->second;\n\
    \t\t\t\tval_itr->second = memo[rand_max];\n\t\t\t}\n\n\t\t\tres[i] = rand_val;\n\
    \t\t}\n\t\treturn res;\n\t}\n\n\ttemplate<class Ite>\n\tvoid shuf(Ite first, Ite\
    \ last) { shuffle(first, last, mt); }\n\n};\n"
  code: "#include <random>\n#include <chrono>\n#include <vector>\n#include <unordered_map>\n\
    \nusing namespace std;\nusing lint = long long;\n\nstruct RandNum {\n\n\tmt19937\
    \ mt;\n\tRandNum() : mt(chrono::steady_clock::now().time_since_epoch().count())\
    \ {}\n\n\tlint operator() (const lint& rand_min, const lint& rand_max) {\n\t\t\
    uniform_int_distribution<lint> dist(rand_min, rand_max);\n\t\treturn dist(mt);\n\
    \t}\n\tlint operator() (const lint &rand_max) { return (*this)(0LL, rand_max);\
    \ }\n\n\tvector<lint> uniq_vec(const int& sz, const lint& rand_min, lint rand_max)\
    \ {\n\n\t\tvector<lint> res(sz);\n\t\tunordered_map<lint, lint> memo;\n\t\tfor\
    \ (int i = 0; i < sz; i++, rand_max--) {\n\n\t\t\tlint rand_val = (*this)(rand_min,\
    \ rand_max);\n\n\t\t\t// If rand_max hasn't been replaced yet, fill it with rand_max\n\
    \t\t\tif (memo.find(rand_max) == memo.end()) memo[rand_max] = rand_max;\n\n\t\t\
    \tauto val_itr = memo.find(rand_val);\n\t\t\tif (val_itr == memo.end()) { // replace\
    \ rand_val with rand_max\n\t\t\t\tmemo[rand_val] = memo[rand_max];\n\t\t\t}\n\t\
    \t\telse { // If rand_val has already been replaced\n\t\t\t\trand_val = val_itr->second;\n\
    \t\t\t\tval_itr->second = memo[rand_max];\n\t\t\t}\n\n\t\t\tres[i] = rand_val;\n\
    \t\t}\n\t\treturn res;\n\t}\n\n\ttemplate<class Ite>\n\tvoid shuf(Ite first, Ite\
    \ last) { shuffle(first, last, mt); }\n\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: library/RandNum.cpp
  requiredBy: []
  timestamp: '2020-08-26 09:58:06+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: library/RandNum.cpp
layout: document
redirect_from:
- /library/library/RandNum.cpp
- /library/library/RandNum.cpp.html
title: library/RandNum.cpp
---
