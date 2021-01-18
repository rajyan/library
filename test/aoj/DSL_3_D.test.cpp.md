---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: src/slide_minmax.cpp
    title: src/slide_minmax.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_3_D
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_3_D
  bundledCode: "#line 1 \"test/aoj/DSL_3_D.test.cpp\"\n\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_3_D\"\
    \n\n#include <iostream>\n#include <iomanip>\n\nusing namespace std;\n\n#line 1\
    \ \"src/slide_minmax.cpp\"\n#include <vector>\n#include <deque>\n\nusing namespace\
    \ std;\n\ntemplate<class T>\npair <vector<T>, vector<T>> slide_minmax(const vector<T>\
    \ &v, int k) {\n\n    deque<int> deq_min, deq_max;\n    vector<T> ret_min, ret_max;\n\
    \    for (int i = 0; i < v.size(); i++) {\n\n        while (!deq_min.empty() &&\
    \ v[deq_min.back()] >= v[i]) deq_min.pop_back();\n        while (!deq_max.empty()\
    \ && v[deq_max.back()] <= v[i]) deq_max.pop_back();\n\n        deq_min.push_back(i);\n\
    \        deq_max.push_back(i);\n\n        if (i - k + 1 >= 0) {\n            ret_min.emplace_back(v[deq_min.front()]);\n\
    \            ret_max.emplace_back(v[deq_max.front()]);\n            if (deq_min.front()\
    \ == i - k + 1) deq_min.pop_front();\n            if (deq_max.front() == i - k\
    \ + 1) deq_max.pop_front();\n        }\n\n    }\n    return {ret_min, ret_max};\n\
    }\n#line 10 \"test/aoj/DSL_3_D.test.cpp\"\n\nstruct init {\n    init() {\n   \
    \     cin.tie(nullptr);\n        ios::sync_with_stdio(false);\n        cout <<\
    \ fixed << setprecision(10);\n    }\n} init_;\n\nint main() {\n\n    int N, K;\n\
    \    cin >> N >> K;\n    vector<int> v(N);\n    for (int i = 0; i < N; i++) cin\
    \ >> v[i];\n\n    cout << slide_minmax(v, K).first << '\\n';\n\n    return 0;\n\
    }\n\n"
  code: "\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_3_D\"\
    \n\n#include <iostream>\n#include <iomanip>\n\nusing namespace std;\n\n#include\
    \ \"../../src/slide_minmax.cpp\"\n\nstruct init {\n    init() {\n        cin.tie(nullptr);\n\
    \        ios::sync_with_stdio(false);\n        cout << fixed << setprecision(10);\n\
    \    }\n} init_;\n\nint main() {\n\n    int N, K;\n    cin >> N >> K;\n    vector<int>\
    \ v(N);\n    for (int i = 0; i < N; i++) cin >> v[i];\n\n    cout << slide_minmax(v,\
    \ K).first << '\\n';\n\n    return 0;\n}\n\n"
  dependsOn:
  - src/slide_minmax.cpp
  isVerificationFile: true
  path: test/aoj/DSL_3_D.test.cpp
  requiredBy: []
  timestamp: '2021-01-18 21:54:26+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/aoj/DSL_3_D.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/DSL_3_D.test.cpp
- /verify/test/aoj/DSL_3_D.test.cpp.html
title: test/aoj/DSL_3_D.test.cpp
---
