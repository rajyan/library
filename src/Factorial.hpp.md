---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/Modint.hpp
    title: src/Modint.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/184.test.cpp
    title: test/yukicoder/184.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/Factorial.hpp\"\n\n#include <vector>\n\n#line 2 \"src/Modint.hpp\"\
    \n\n#include <cassert>\n#include <iostream>\n#include <numeric>\n\nusing namespace\
    \ std;\nusing lint = long long;\n\ntemplate<const int &Modulo>\nstruct Mint {\n\
    \n    lint val;\n    constexpr Mint(lint v = 0) noexcept: val(v % Modulo) { if\
    \ (val < 0) val += Modulo; }\n\n    constexpr Mint &operator+=(const Mint &r)\
    \ noexcept {\n        val += r.val;\n        if (val >= Modulo) val -= Modulo;\n\
    \        return *this;\n    }\n    constexpr Mint &operator-=(const Mint &r) noexcept\
    \ {\n        val -= r.val;\n        if (val < 0) val += Modulo;\n        return\
    \ *this;\n    }\n    constexpr Mint &operator*=(const Mint &r) noexcept {\n  \
    \      val = val * r.val % Modulo;\n        return *this;\n    }\n    constexpr\
    \ Mint &operator/=(const Mint &r) noexcept {\n        lint a{r.val}, b{Modulo},\
    \ u{1}, v{0};\n        while (b) {\n            lint t = a / b;\n            a\
    \ -= t * b;\n            a ^= b, b ^= a, a ^= b;\n            u -= t * v;\n  \
    \          u ^= v, v ^= u, u ^= v;\n        }\n        assert(a == 1);\n     \
    \   val = val * u % Modulo;\n        if (val < 0) val += Modulo;\n        return\
    \ *this;\n    }\n\n    constexpr Mint operator+(const Mint &r) const noexcept\
    \ { return Mint(*this) += r; }\n    constexpr Mint operator-(const Mint &r) const\
    \ noexcept { return Mint(*this) -= r; }\n    constexpr Mint operator*(const Mint\
    \ &r) const noexcept { return Mint(*this) *= r; }\n    constexpr Mint operator/(const\
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
    \ mint = Mint<MOD>;\n\nint RMOD;\nusing rmint = Mint<RMOD>;\n#line 6 \"src/Factorial.hpp\"\
    \n\nusing namespace std;\nusing lint = long long;\n\nclass Factorial {\npublic:\n\
    \    explicit Factorial(int N = 110000) : fac(N + 1), inv(N + 1), finv(N + 1)\
    \ { build(N + 1); }\n\n    [[nodiscard]] mint Cmod(int n, int k) {\n        if\
    \ (n < k || k < 0) return 0LL;\n        return fac[n] * (finv[k] * finv[n - k]);\n\
    \    }\n\n    [[nodiscard]] mint Pmod(int n, int k) {\n        if (n < k || k\
    \ < 0) return 0LL;\n        return fac[n] * finv[n - k];\n    }\n\n    [[nodiscard]]\
    \ mint Hmod(int n, int k) {\n        if (n < 0 || k < 0) return 0LL;\n       \
    \ return k == 0 ? 1 : Cmod(n + k - 1, k);\n    }\n\nprivate:\n    void build(int\
    \ N) {\n        fac[0] = fac[1] = 1;\n        inv[1] = 1;\n        finv[0] = finv[1]\
    \ = 1;\n\n        for (int i = 2; i < N; i++) {\n            fac[i] = fac[i -\
    \ 1] * i;\n            inv[i] = -inv[MOD % i] * (MOD / i);\n            finv[i]\
    \ = finv[i - 1] * inv[i];\n        }\n    }\n\n    vector<mint> fac, inv, finv;\n\
    };\n"
  code: "#pragma once\n\n#include <vector>\n\n#include \"Modint.hpp\"\n\nusing namespace\
    \ std;\nusing lint = long long;\n\nclass Factorial {\npublic:\n    explicit Factorial(int\
    \ N = 110000) : fac(N + 1), inv(N + 1), finv(N + 1) { build(N + 1); }\n\n    [[nodiscard]]\
    \ mint Cmod(int n, int k) {\n        if (n < k || k < 0) return 0LL;\n       \
    \ return fac[n] * (finv[k] * finv[n - k]);\n    }\n\n    [[nodiscard]] mint Pmod(int\
    \ n, int k) {\n        if (n < k || k < 0) return 0LL;\n        return fac[n]\
    \ * finv[n - k];\n    }\n\n    [[nodiscard]] mint Hmod(int n, int k) {\n     \
    \   if (n < 0 || k < 0) return 0LL;\n        return k == 0 ? 1 : Cmod(n + k -\
    \ 1, k);\n    }\n\nprivate:\n    void build(int N) {\n        fac[0] = fac[1]\
    \ = 1;\n        inv[1] = 1;\n        finv[0] = finv[1] = 1;\n\n        for (int\
    \ i = 2; i < N; i++) {\n            fac[i] = fac[i - 1] * i;\n            inv[i]\
    \ = -inv[MOD % i] * (MOD / i);\n            finv[i] = finv[i - 1] * inv[i];\n\
    \        }\n    }\n\n    vector<mint> fac, inv, finv;\n};\n"
  dependsOn:
  - src/Modint.hpp
  isVerificationFile: false
  path: src/Factorial.hpp
  requiredBy: []
  timestamp: '2021-02-04 23:16:22+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yukicoder/184.test.cpp
documentation_of: src/Factorial.hpp
layout: document
redirect_from:
- /library/src/Factorial.hpp
- /library/src/Factorial.hpp.html
title: src/Factorial.hpp
---
