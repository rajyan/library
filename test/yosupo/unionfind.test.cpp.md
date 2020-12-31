---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 193, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../../library/UnionFind.cpp:\
    \ line -1: no such header\n"
  code: "\n#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n\n#include\
    \ \"../../library/UnionFind.cpp\"\n\n#include <iostream>\n#include <iomanip>\n\
    \nusing namespace std;\nusing lint = long long;\nconstexpr int MOD = 1000000007,\
    \ INF = 1010101010;\nconstexpr lint LINF = 1LL << 60;\n\nstruct init {\n\tinit()\
    \ {\n\t\tcin.tie(nullptr); ios::sync_with_stdio(false);\n\t\tcout << fixed <<\
    \ setprecision(10);\n\t}\n} init_;\n\nint main() {\n\n\tint N, Q;\n\tcin >> N\
    \ >> Q;\n\n\tUnionFind uf(N);\n\tfor (int i = 0; i < Q; i++) {\n\t\tint t, u,\
    \ v;\n\t\tcin >> t >> u >> v;\n\t\tif (t == 0) uf.unify(u, v);\n\t\telse cout\
    \ << uf.is_same(u, v) << \"\\n\";\n\t}\n\n\treturn 0;\n}\n"
  dependsOn: []
  isVerificationFile: true
  path: test/yosupo/unionfind.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/yosupo/unionfind.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo/unionfind.test.cpp
- /verify/test/yosupo/unionfind.test.cpp.html
title: test/yosupo/unionfind.test.cpp
---
