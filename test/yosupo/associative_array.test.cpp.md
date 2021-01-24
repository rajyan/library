---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/fnv1a.cpp
    title: src/fnv1a.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/associative_array
    links:
    - https://judge.yosupo.jp/problem/associative_array
  bundledCode: "#line 1 \"test/yosupo/associative_array.test.cpp\"\n\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/associative_array\"\n\n#line 1 \"src/fnv1a.cpp\"\
    \n#include <iostream>\n\nusing namespace std;\n\ninline uint64_t fnv1a_64(const\
    \ string& data) {\n\n    uint64_t hash = 0xcbf29ce484222325;\n    constexpr uint64_t\
    \ prime = 0x100000001b3;\n\n    for (char i : data) {\n        hash = hash ^ i;\n\
    \        hash *= prime;\n    }\n\n    return hash;\n}\n#line 5 \"test/yosupo/associative_array.test.cpp\"\
    \n\n#line 7 \"test/yosupo/associative_array.test.cpp\"\n#include <iomanip>\n#include\
    \ <unordered_map>\n\nusing namespace std;\nusing lint = long long;\n\nstruct init\
    \ {\n\tinit() {\n\t\tcin.tie(nullptr); ios::sync_with_stdio(false);\n\t\tcout\
    \ << fixed << setprecision(10);\n\t}\n} init_;\n\nstruct test {\n\tlint i;\n\t\
    bool operator==(const test& r) const { return i == r.i; }\n\ttest(lint i) : i(i)\
    \ {}\n};\n\nnamespace std {\n\ttemplate<>\n\tstruct hash<test> {\n\t\tuint64_t\
    \ operator() (const test& t) const {\n\t\t\treturn fnv1a_64(to_string(t.i));\n\
    \t\t}\n\t};\n}\n\nint main() {\n\n\tint q;\n\tcin >> q;\n\n\tunordered_map<test,\
    \ lint> mp;\n\tfor (int i = 0; i < q; i++) {\n\t\tint t;\n\t\tcin >> t;\n\t\t\
    if (t) {\n\t\t\tlint k;\n\t\t\tcin >> k;\n\t\t\tcout << mp[test(k)] << \"\\n\"\
    ;\n\t\t}\n\t\telse {\n\t\t\tlint k, v;\n\t\t\tcin >> k >> v;\n\t\t\tmp[test(k)]\
    \ = v;\n\t\t}\n\t}\n\n\treturn 0;\n}\n"
  code: "\n#define PROBLEM \"https://judge.yosupo.jp/problem/associative_array\"\n\
    \n#include \"../../src/fnv1a.cpp\"\n\n#include <iostream>\n#include <iomanip>\n\
    #include <unordered_map>\n\nusing namespace std;\nusing lint = long long;\n\n\
    struct init {\n\tinit() {\n\t\tcin.tie(nullptr); ios::sync_with_stdio(false);\n\
    \t\tcout << fixed << setprecision(10);\n\t}\n} init_;\n\nstruct test {\n\tlint\
    \ i;\n\tbool operator==(const test& r) const { return i == r.i; }\n\ttest(lint\
    \ i) : i(i) {}\n};\n\nnamespace std {\n\ttemplate<>\n\tstruct hash<test> {\n\t\
    \tuint64_t operator() (const test& t) const {\n\t\t\treturn fnv1a_64(to_string(t.i));\n\
    \t\t}\n\t};\n}\n\nint main() {\n\n\tint q;\n\tcin >> q;\n\n\tunordered_map<test,\
    \ lint> mp;\n\tfor (int i = 0; i < q; i++) {\n\t\tint t;\n\t\tcin >> t;\n\t\t\
    if (t) {\n\t\t\tlint k;\n\t\t\tcin >> k;\n\t\t\tcout << mp[test(k)] << \"\\n\"\
    ;\n\t\t}\n\t\telse {\n\t\t\tlint k, v;\n\t\t\tcin >> k >> v;\n\t\t\tmp[test(k)]\
    \ = v;\n\t\t}\n\t}\n\n\treturn 0;\n}\n"
  dependsOn:
  - src/fnv1a.cpp
  isVerificationFile: true
  path: test/yosupo/associative_array.test.cpp
  requiredBy: []
  timestamp: '2021-01-18 09:28:02+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo/associative_array.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo/associative_array.test.cpp
- /verify/test/yosupo/associative_array.test.cpp.html
title: test/yosupo/associative_array.test.cpp
---
