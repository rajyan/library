---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 193, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 400, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ library/template.cpp: line 3: unable to process #include in #if / #ifdef / #ifndef\
    \ other than include guards\n"
  code: "\n#ifdef _DEBUG\n#include \"../../library/library/debug_template.cpp\"\n\
    #define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)\n#else\n#define DMP(...) ((void)0)\n\
    #endif\n\n#include <cassert>\n#include <cstdio>\n#include <cmath>\n#include <iostream>\n\
    #include <iomanip>\n#include <string>\n#include <vector>\n#include <set>\n#include\
    \ <map>\n#include <unordered_map>\n#include <queue>\n#include <numeric>\n#include\
    \ <algorithm>\n#include <bitset>\n#include <functional>\n\nusing namespace std;\n\
    using lint = long long;\nconstexpr int MOD = 1000000007, INF = 1010101010;\nconstexpr\
    \ lint LINF = 1LL << 60;\n\nstruct init {\n\tinit() {\n\t\tcin.tie(nullptr); ios::sync_with_stdio(false);\n\
    \t\tcout << fixed << setprecision(10);\n\t}\n} init_;\n\nint main() {\n\n\n\n\t\
    return 0;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: library/template.cpp
  requiredBy: []
  timestamp: '2020-11-23 16:23:11+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: library/template.cpp
layout: document
redirect_from:
- /library/library/template.cpp
- /library/library/template.cpp.html
title: library/template.cpp
---