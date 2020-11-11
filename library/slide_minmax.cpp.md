---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"library/slide_minmax.cpp\"\n#include <vector>\n#include\
    \ <deque>\n\nusing namespace std;\n\ntemplate<class T>\npair<vector<T>, vector<T>>\
    \ slide_minmax(const vector<T> &v, int k) {\n\n\tdeque<int> deq_min, deq_max;\n\
    \tvector<T> ret_min, ret_max;\n\tfor (int i = 0; i < v.size(); i++) {\n\n\t\t\
    while (!deq_min.empty() && v[deq_min.back()] >= v[i]) deq_min.pop_back();\n\t\t\
    while (!deq_max.empty() && v[deq_max.back()] <= v[i]) deq_max.pop_back();\n\n\t\
    \tdeq_min.push_back(i);\n\t\tdeq_max.push_back(i);\n\n\t\tif (i - k + 1 >= 0)\
    \ {\n\t\t\tret_min.emplace_back(v[deq_min.front()]);\n\t\t\tret_max.emplace_back(v[deq_max.front()]);\n\
    \t\t\tif (deq_min.front() == i - k + 1) deq_min.pop_front();\n\t\t\tif (deq_max.front()\
    \ == i - k + 1) deq_max.pop_front();\n\t\t}\n\n\t}\n\treturn { ret_min, ret_max\
    \ };\n}\n"
  code: "#include <vector>\n#include <deque>\n\nusing namespace std;\n\ntemplate<class\
    \ T>\npair<vector<T>, vector<T>> slide_minmax(const vector<T> &v, int k) {\n\n\
    \tdeque<int> deq_min, deq_max;\n\tvector<T> ret_min, ret_max;\n\tfor (int i =\
    \ 0; i < v.size(); i++) {\n\n\t\twhile (!deq_min.empty() && v[deq_min.back()]\
    \ >= v[i]) deq_min.pop_back();\n\t\twhile (!deq_max.empty() && v[deq_max.back()]\
    \ <= v[i]) deq_max.pop_back();\n\n\t\tdeq_min.push_back(i);\n\t\tdeq_max.push_back(i);\n\
    \n\t\tif (i - k + 1 >= 0) {\n\t\t\tret_min.emplace_back(v[deq_min.front()]);\n\
    \t\t\tret_max.emplace_back(v[deq_max.front()]);\n\t\t\tif (deq_min.front() ==\
    \ i - k + 1) deq_min.pop_front();\n\t\t\tif (deq_max.front() == i - k + 1) deq_max.pop_front();\n\
    \t\t}\n\n\t}\n\treturn { ret_min, ret_max };\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: library/slide_minmax.cpp
  requiredBy: []
  timestamp: '2020-05-06 15:17:57+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: library/slide_minmax.cpp
layout: document
redirect_from:
- /library/library/slide_minmax.cpp
- /library/library/slide_minmax.cpp.html
title: library/slide_minmax.cpp
---
