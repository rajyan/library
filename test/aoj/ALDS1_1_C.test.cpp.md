---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/Modint.hpp
    title: src/Modint.hpp
  - icon: ':heavy_check_mark:'
    path: src/Prime.hpp
    title: src/Prime.hpp
  - icon: ':heavy_check_mark:'
    path: src/ctz.hpp
    title: src/ctz.hpp
  - icon: ':heavy_check_mark:'
    path: src/popcount.hpp
    title: src/popcount.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C
  bundledCode: "#line 1 \"test/aoj/ALDS1_1_C.test.cpp\"\n\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C\"\
    \n\n#line 2 \"src/Prime.hpp\"\n\n#include <vector>\n\nusing namespace std;\nusing\
    \ lint = long long;\n\n#line 2 \"src/Modint.hpp\"\n\n#include <cassert>\n#include\
    \ <iostream>\n#include <numeric>\n\nusing namespace std;\nusing lint = long long;\n\
    \ntemplate<const int &Modulo>\nstruct Mint {\n\n    lint val;\n    constexpr Mint(lint\
    \ v = 0) noexcept: val(v % Modulo) { if (val < 0) val += Modulo; }\n\n    constexpr\
    \ Mint &operator+=(const Mint &r) noexcept {\n        val += r.val;\n        if\
    \ (val >= Modulo) val -= Modulo;\n        return *this;\n    }\n    constexpr\
    \ Mint &operator-=(const Mint &r) noexcept {\n        val -= r.val;\n        if\
    \ (val < 0) val += Modulo;\n        return *this;\n    }\n    constexpr Mint &operator*=(const\
    \ Mint &r) noexcept {\n        val = val * r.val % Modulo;\n        return *this;\n\
    \    }\n    constexpr Mint &operator/=(const Mint &r) noexcept {\n        lint\
    \ a{r.val}, b{Modulo}, u{1}, v{0};\n        while (b) {\n            lint t =\
    \ a / b;\n            a -= t * b;\n            a ^= b, b ^= a, a ^= b;\n     \
    \       u -= t * v;\n            u ^= v, v ^= u, u ^= v;\n        }\n        assert(a\
    \ == 1);\n        val = val * u % Modulo;\n        if (val < 0) val += Modulo;\n\
    \        return *this;\n    }\n\n    constexpr Mint operator+(const Mint &r) const\
    \ noexcept { return Mint(*this) += r; }\n    constexpr Mint operator-(const Mint\
    \ &r) const noexcept { return Mint(*this) -= r; }\n    constexpr Mint operator*(const\
    \ Mint &r) const noexcept { return Mint(*this) *= r; }\n    constexpr Mint operator/(const\
    \ Mint &r) const noexcept { return Mint(*this) /= r; }\n\n    constexpr Mint operator-()\
    \ const noexcept { return Mint(-val); }\n\n    constexpr bool operator==(const\
    \ Mint &r) const noexcept { return val == r.val; }\n    constexpr bool operator!=(const\
    \ Mint &r) const noexcept { return !((*this) == r); }\n    constexpr bool operator<(const\
    \ Mint &r) const noexcept { return val < r.val; }\n\n    constexpr friend ostream\
    \ &operator<<(ostream &os, const Mint<Modulo> &x) noexcept { return os << x.val;\
    \ }\n    constexpr friend istream &operator>>(istream &is, Mint<Modulo> &x) noexcept\
    \ {\n        lint tmp{};\n        is >> tmp;\n        x = Mint(tmp);\n       \
    \ return is;\n    }\n\n    [[nodiscard]] constexpr Mint pow(lint n) const noexcept\
    \ {\n        Mint res{1}, tmp{*this};\n        while (n > 0) {\n            if\
    \ (n & 1) res *= tmp;\n            tmp *= tmp;\n            n >>= 1;\n       \
    \ }\n        return res;\n    }\n};\n\nconstexpr int MOD = 1000000007;\nusing\
    \ mint = Mint<MOD>;\n\nint RMOD;\nusing rmint = Mint<RMOD>;\n#line 2 \"src/ctz.hpp\"\
    \n\n#line 2 \"src/popcount.hpp\"\n\nusing lint = long long;\n\ninline int popcount(lint\
    \ n) {\n    n = (n & 0x5555555555555555) + (n >> 1 & 0x5555555555555555);\n  \
    \  n = (n & 0x3333333333333333) + (n >> 2 & 0x3333333333333333);\n    n = (n &\
    \ 0x0f0f0f0f0f0f0f0f) + (n >> 4 & 0x0f0f0f0f0f0f0f0f);\n    n = (n & 0x00ff00ff00ff00ff)\
    \ + (n >> 8 & 0x00ff00ff00ff00ff);\n    n = (n & 0x0000ffff0000ffff) + (n >> 16\
    \ & 0x0000ffff0000ffff);\n    n = (n & 0x00000000ffffffff) + (n >> 32 & 0x00000000ffffffff);\n\
    \    return n;\n}\n#line 4 \"src/ctz.hpp\"\n\nusing lint = long long;\n\ninline\
    \ int ctz(lint n) {\n    return popcount(~n & (n - 1));\n}\n#line 10 \"src/Prime.hpp\"\
    \n\nclass Prime {\npublic:\n    explicit Prime(int N = 1100000) : pTable(N + 1,\
    \ true) { Eratosthenes(N + 1); }\n\n    [[nodiscard]] vector<pair<lint, int>>\
    \ factorize(lint n) {\n        vector<pair<lint, int>> res;\n        for (lint\
    \ i = 2; i * i <= n; i++) {\n            int cnt = 0;\n            while (n %\
    \ i == 0) {\n                cnt++;\n                n /= i;\n            }\n\
    \            if (cnt) res.emplace_back(i, cnt);\n        }\n        if (n != 1)\
    \ res.emplace_back(n, 1);\n\n        return res;\n    }\n\n    // Miller-Rabin\n\
    \    [[nodiscard]] bool isPrime(lint n) {\n        if (n <= 1 || n % 2 == 0) return\
    \ (n == 2);\n        if (n < (int)pTable.size()) return pTable[n];\n        const\
    \ int s = ctz(n - 1);\n        const lint d = (n - 1) >> s;\n        // set runtime\
    \ mod\n        RMOD = n;\n        // http://miller-rabin.appspot.com/\n      \
    \  for (const lint base : {2, 325, 9375, 28178, 450775, 9780504, 1795265022})\
    \ {\n            rmint a = rmint(base).pow(d);\n            int i = s;\n     \
    \       while (a != 1 && a != -1 && a != 0 && i--) a *= a;\n            if (a\
    \ != -1 && i != s) return false;\n        }\n        return true;\n    }\nprivate:\n\
    \    void Eratosthenes(lint N) {\n        for (lint i = 2; i * i < N; i++) {\n\
    \            if (pTable[i]) {\n                for (int j = 0; i * (j + 2) < N;\
    \ j++) pTable[i * (j + 2)] = false;\n            }\n        }\n    }\n\n    vector<bool>\
    \ pTable;\n};\n#line 5 \"test/aoj/ALDS1_1_C.test.cpp\"\n\n#line 7 \"test/aoj/ALDS1_1_C.test.cpp\"\
    \n#include <iomanip>\n#include <algorithm>\n\nusing namespace std;\nusing lint\
    \ = long long;\n\nstruct init {\n    init() {\n        cin.tie(nullptr);\n   \
    \     ios::sync_with_stdio(false);\n        cout << fixed << setprecision(10);\n\
    \    }\n} init_;\n\nint main() {\n\n    int n;\n    cin >> n;\n    vector<int>\
    \ a(n);\n    for (int i = 0; i < n; i++) cin >> a[i];\n\n    Prime p;\n    cout\
    \ << count_if(a.begin(), a.end(), [&p](auto &e) { return p.isPrime(e); }) << '\\\
    n';\n\n    return 0;\n}\n"
  code: "\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C\"\
    \n\n#include \"../../src/Prime.hpp\"\n\n#include <iostream>\n#include <iomanip>\n\
    #include <algorithm>\n\nusing namespace std;\nusing lint = long long;\n\nstruct\
    \ init {\n    init() {\n        cin.tie(nullptr);\n        ios::sync_with_stdio(false);\n\
    \        cout << fixed << setprecision(10);\n    }\n} init_;\n\nint main() {\n\
    \n    int n;\n    cin >> n;\n    vector<int> a(n);\n    for (int i = 0; i < n;\
    \ i++) cin >> a[i];\n\n    Prime p;\n    cout << count_if(a.begin(), a.end(),\
    \ [&p](auto &e) { return p.isPrime(e); }) << '\\n';\n\n    return 0;\n}\n"
  dependsOn:
  - src/Prime.hpp
  - src/Modint.hpp
  - src/ctz.hpp
  - src/popcount.hpp
  isVerificationFile: true
  path: test/aoj/ALDS1_1_C.test.cpp
  requiredBy: []
  timestamp: '2021-02-09 21:26:13+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/ALDS1_1_C.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/ALDS1_1_C.test.cpp
- /verify/test/aoj/ALDS1_1_C.test.cpp.html
title: test/aoj/ALDS1_1_C.test.cpp
---