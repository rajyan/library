---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/DSL_3_D.test.cpp
    title: test/aoj/DSL_3_D.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/slide_minmax.cpp\"\n#include <vector>\n#include <deque>\n\
    \nusing namespace std;\n\ntemplate<class T>\npair <vector<T>, vector<T>> slide_minmax(const\
    \ vector<T> &v, int k) {\n\n    deque<int> deq_min, deq_max;\n    vector<T> ret_min,\
    \ ret_max;\n    for (int i = 0; i < (int)v.size(); i++) {\n\n        while (!deq_min.empty()\
    \ && v[deq_min.back()] >= v[i]) deq_min.pop_back();\n        while (!deq_max.empty()\
    \ && v[deq_max.back()] <= v[i]) deq_max.pop_back();\n\n        deq_min.push_back(i);\n\
    \        deq_max.push_back(i);\n\n        if (i - k + 1 >= 0) {\n            ret_min.emplace_back(v[deq_min.front()]);\n\
    \            ret_max.emplace_back(v[deq_max.front()]);\n            if (deq_min.front()\
    \ == i - k + 1) deq_min.pop_front();\n            if (deq_max.front() == i - k\
    \ + 1) deq_max.pop_front();\n        }\n\n    }\n    return {ret_min, ret_max};\n\
    }\n"
  code: "#include <vector>\n#include <deque>\n\nusing namespace std;\n\ntemplate<class\
    \ T>\npair <vector<T>, vector<T>> slide_minmax(const vector<T> &v, int k) {\n\n\
    \    deque<int> deq_min, deq_max;\n    vector<T> ret_min, ret_max;\n    for (int\
    \ i = 0; i < (int)v.size(); i++) {\n\n        while (!deq_min.empty() && v[deq_min.back()]\
    \ >= v[i]) deq_min.pop_back();\n        while (!deq_max.empty() && v[deq_max.back()]\
    \ <= v[i]) deq_max.pop_back();\n\n        deq_min.push_back(i);\n        deq_max.push_back(i);\n\
    \n        if (i - k + 1 >= 0) {\n            ret_min.emplace_back(v[deq_min.front()]);\n\
    \            ret_max.emplace_back(v[deq_max.front()]);\n            if (deq_min.front()\
    \ == i - k + 1) deq_min.pop_front();\n            if (deq_max.front() == i - k\
    \ + 1) deq_max.pop_front();\n        }\n\n    }\n    return {ret_min, ret_max};\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: src/slide_minmax.cpp
  requiredBy: []
  timestamp: '2021-01-19 00:06:36+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/DSL_3_D.test.cpp
documentation_of: src/slide_minmax.cpp
layout: document
redirect_from:
- /library/src/slide_minmax.cpp
- /library/src/slide_minmax.cpp.html
title: src/slide_minmax.cpp
---
