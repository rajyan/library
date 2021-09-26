---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/Timer.hpp
    title: src/Timer.hpp
  - icon: ':heavy_check_mark:'
    path: src/template.hpp
    title: src/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/many_aplusb
    links:
    - https://judge.yosupo.jp/problem/many_aplusb
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.7/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.7/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.7/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.7/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 400, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ src/template.hpp: line 2: unable to process #include in #if / #ifdef / #ifndef\
    \ other than include guards\n"
  code: "\n#define PROBLEM \"https://judge.yosupo.jp/problem/many_aplusb\"\n\n#define\
    \ main temp\n#include \"../../src/template.hpp\"\n#undef main\n#include \"../../src/Timer.hpp\"\
    \n\nint main() {\n\n    Timer timer;\n\n    int T;\n    cin >> T;\n    for (int\
    \ i = 0; i < T; i++) {\n        lint a, b;\n        cin >> a >> b;\n        cout\
    \ << a + b << \"\\n\";\n    }\n\n    assert(timer.elapsed() / 1000.0 / 1000.0\
    \ < 2.0);\n\n    return 0;\n}\n"
  dependsOn:
  - src/template.hpp
  - src/Timer.hpp
  isVerificationFile: true
  path: test/yosupo/many_aplusb.test.cpp
  requiredBy: []
  timestamp: '2021-02-14 21:56:58+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo/many_aplusb.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo/many_aplusb.test.cpp
- /verify/test/yosupo/many_aplusb.test.cpp.html
title: test/yosupo/many_aplusb.test.cpp
---
