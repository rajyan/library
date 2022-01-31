---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yosupo/many_aplusb.test.cpp
    title: test/yosupo/many_aplusb.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 400, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ src/template.hpp: line 2: unable to process #include in #if / #ifdef / #ifndef\
    \ other than include guards\n"
  code: "#ifdef _DEBUG\n#include \"../../../library/src/debug_template.hpp\"\n#define\
    \ DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)\n#else\n#define DMP(...) ((void)0)\n\
    #endif\n\n#include <cassert>\n#include <cstdio>\n#include <cmath>\n#include <iostream>\n\
    #include <iomanip>\n#include <string>\n#include <vector>\n#include <set>\n#include\
    \ <map>\n#include <unordered_map>\n#include <queue>\n#include <numeric>\n#include\
    \ <algorithm>\n#include <bitset>\n#include <variant>\n\nusing namespace std;\n\
    using lint = long long;\nconstexpr int INF = 1010101010;\nconstexpr lint LINF\
    \ = 1LL << 60;\n\nstruct init {\n    init() {\n        cin.tie(nullptr);\n   \
    \     ios::sync_with_stdio(false);\n        cout << fixed << setprecision(10);\n\
    \    }\n} init_;\n\nint main() {\n\n\n    return 0;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/template.hpp
  requiredBy: []
  timestamp: '2021-02-14 21:56:58+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/many_aplusb.test.cpp
documentation_of: src/template.hpp
layout: document
redirect_from:
- /library/src/template.hpp
- /library/src/template.hpp.html
title: src/template.hpp
---
