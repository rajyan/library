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
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../../library/makevec.cpp:\
    \ line -1: no such header\n"
  code: "\n#define PROBLEM \"https://judge.yosupo.jp/problem/lca\"\n\n#include \"\
    ../../library/makevec.cpp\"\n#include \"../../library/nlz.cpp\"\n#include \"../../library/LowestCommonAncestor.cpp\"\
    \n\n#include <iostream>\n#include <iomanip>\n#include <vector>\n\nusing namespace\
    \ std;\nusing lint = long long;\nconstexpr int MOD = 1000000007, INF = 1010101010;\n\
    constexpr lint LINF = 1LL << 60;\n\nstruct init {\n\tinit() {\n\t\tcin.tie(nullptr);\
    \ ios::sync_with_stdio(false);\n\t\tcout << fixed << setprecision(10);\n\t}\n\
    } init_;\n\nint main() {\n\n\tint N, Q;\n\tcin >> N >> Q;\n\n\tauto edges = make_vec(N,\
    \ 0, 0);\n\tfor (int i = 0; i < N - 1; i++) {\n\t\tint p;\n\t\tcin >> p;\n\t\t\
    edges[p].emplace_back(i + 1);\n\t\tedges[i + 1].emplace_back(p);\n\t}\n\n\tLCA\
    \ lca(edges);\n\tfor (int i = 0; i < Q; i++) {\n\t\tint u, v;\n\t\tcin >> u >>\
    \ v;\n\t\tcout << lca.get_lca(u, v) << \"\\n\";\n\t}\n\n\treturn 0;\n}\n"
  dependsOn: []
  isVerificationFile: true
  path: test/yosupo/lca.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/yosupo/lca.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo/lca.test.cpp
- /verify/test/yosupo/lca.test.cpp.html
title: test/yosupo/lca.test.cpp
---
