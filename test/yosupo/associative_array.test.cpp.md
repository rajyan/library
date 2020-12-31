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
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../../library/fnv1a.cpp:\
    \ line -1: no such header\n"
  code: "\n#define PROBLEM \"https://judge.yosupo.jp/problem/associative_array\"\n\
    \n#include \"../../library/fnv1a.cpp\"\n\n#include <iostream>\n#include <iomanip>\n\
    #include <string>\n#include <unordered_map>\n\nusing namespace std;\nusing lint\
    \ = long long;\nconstexpr int MOD = 1000000007, INF = 1010101010;\nconstexpr lint\
    \ LINF = 1LL << 60;\n\nstruct init {\n\tinit() {\n\t\tcin.tie(nullptr); ios::sync_with_stdio(false);\n\
    \t\tcout << fixed << setprecision(10);\n\t}\n} init_;\n\nstruct test {\n\tlint\
    \ i;\n\tbool operator==(const test& r) const { return i == r.i; }\n\ttest(lint\
    \ i) : i(i) {}\n};\n\nnamespace std {\n\ttemplate<>\n\tstruct hash<test> {\n\t\
    \tuint64_t operator() (const test& t) const {\n\t\t\treturn fnv1a_64(to_string(t.i));\n\
    \t\t}\n\t};\n}\n\nint main() {\n\n\tint q;\n\tcin >> q;\n\n\tunordered_map<test,\
    \ lint> mp;\n\tfor (int i = 0; i < q; i++) {\n\t\tint t;\n\t\tcin >> t;\n\t\t\
    if (t) {\n\t\t\tlint k;\n\t\t\tcin >> k;\n\t\t\tcout << mp[test(k)] << \"\\n\"\
    ;\n\t\t}\n\t\telse {\n\t\t\tlint k, v;\n\t\t\tcin >> k >> v;\n\t\t\tmp[test(k)]\
    \ = v;\n\t\t}\n\t}\n\n\treturn 0;\n}\n"
  dependsOn: []
  isVerificationFile: true
  path: test/yosupo/associative_array.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/yosupo/associative_array.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo/associative_array.test.cpp
- /verify/test/yosupo/associative_array.test.cpp.html
title: test/yosupo/associative_array.test.cpp
---
