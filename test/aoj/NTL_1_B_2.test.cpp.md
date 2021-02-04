---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/Modint.hpp
    title: src/Modint.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B
  bundledCode: "#line 1 \"test/aoj/NTL_1_B_2.test.cpp\"\n\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B\"\
    \n\n#include <iostream>\n#include <iomanip>\n\nusing namespace std;\n\n#line 2\
    \ \"src/Modint.hpp\"\n\n#include <cassert>\n#line 5 \"src/Modint.hpp\"\n#include\
    \ <numeric>\n\nusing namespace std;\nusing lint = long long;\n\ntemplate<const\
    \ int &Modulo>\nstruct Mint {\n\n    lint val;\n    constexpr Mint(lint v = 0)\
    \ noexcept: val(v % Modulo) { if (val < 0) val += Modulo; }\n\n    constexpr Mint\
    \ &operator+=(const Mint &r) noexcept {\n        val += r.val;\n        if (val\
    \ >= Modulo) val -= Modulo;\n        return *this;\n    }\n    constexpr Mint\
    \ &operator-=(const Mint &r) noexcept {\n        val -= r.val;\n        if (val\
    \ < 0) val += Modulo;\n        return *this;\n    }\n    constexpr Mint &operator*=(const\
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
    \ mint = Mint<MOD>;\n\nint RMOD;\nusing rmint = Mint<RMOD>;\n#line 10 \"test/aoj/NTL_1_B_2.test.cpp\"\
    \n\nstruct init {\n    init() {\n        cin.tie(nullptr);\n        ios::sync_with_stdio(false);\n\
    \        cout << fixed << setprecision(10);\n    }\n} init_;\n\nint main() {\n\
    \n    int m, n;\n    cin >> m >> n;\n\n    cout << mint(m).pow(n) << '\\n';\n\n\
    \    return 0;\n}\n\n"
  code: "\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B\"\
    \n\n#include <iostream>\n#include <iomanip>\n\nusing namespace std;\n\n#include\
    \ \"../../src/Modint.hpp\"\n\nstruct init {\n    init() {\n        cin.tie(nullptr);\n\
    \        ios::sync_with_stdio(false);\n        cout << fixed << setprecision(10);\n\
    \    }\n} init_;\n\nint main() {\n\n    int m, n;\n    cin >> m >> n;\n\n    cout\
    \ << mint(m).pow(n) << '\\n';\n\n    return 0;\n}\n\n"
  dependsOn:
  - src/Modint.hpp
  isVerificationFile: true
  path: test/aoj/NTL_1_B_2.test.cpp
  requiredBy: []
  timestamp: '2021-02-04 23:16:22+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/NTL_1_B_2.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/NTL_1_B_2.test.cpp
- /verify/test/aoj/NTL_1_B_2.test.cpp.html
title: test/aoj/NTL_1_B_2.test.cpp
---
