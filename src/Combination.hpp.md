---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: src/Modint.hpp
    title: src/Modint.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/1081.test.cpp
    title: test/yukicoder/1081.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/Combination.hpp\"\n\n#include <vector>\n#include <iostream>\n\
    \n#line 2 \"src/Modint.hpp\"\n\n#include <cassert>\n#line 5 \"src/Modint.hpp\"\
    \n#include <numeric>\n\nusing namespace std;\nusing lint = long long;\n\ntemplate<const\
    \ int &Modulo>\nstruct Mint {\n\n    lint val;\n    constexpr Mint(lint v = 0)\
    \ noexcept: val(v % Modulo) { if (val < 0) val += Modulo; }\n\n    constexpr Mint\
    \ &operator+=(const Mint &r) noexcept {\n        val += r.val;\n        if (val\
    \ >= Modulo) val -= Modulo;\n        return *this;\n    }\n    constexpr Mint\
    \ &operator-=(const Mint &r) noexcept {\n        val -= r.val;\n        if (val\
    \ < 0) val += Modulo;\n        return *this;\n    }\n    constexpr Mint &operator*=(const\
    \ Mint &r) noexcept {\n        val = val * r.val % Modulo;\n        return *this;\n\
    \    }\n    constexpr Mint &operator/=(const Mint &r) noexcept {\n        lint\
    \ a{r.val}, b{Modulo}, u{1}, v{0};\n        assert(gcd(a, b) == 1 && \"a and b\
    \ must be co-prime\");\n        while (b) {\n            lint t = a / b;\n   \
    \         a -= t * b;\n            a ^= b, b ^= a, a ^= b;\n            u -= t\
    \ * v;\n            u ^= v, v ^= u, u ^= v;\n        }\n        val = val * u\
    \ % Modulo;\n        if (val < 0) val += Modulo;\n        return *this;\n    }\n\
    \n    constexpr Mint operator+(const Mint &r) const noexcept { return Mint(*this)\
    \ += r; }\n    constexpr Mint operator-(const Mint &r) const noexcept { return\
    \ Mint(*this) -= r; }\n    constexpr Mint operator*(const Mint &r) const noexcept\
    \ { return Mint(*this) *= r; }\n    constexpr Mint operator/(const Mint &r) const\
    \ noexcept { return Mint(*this) /= r; }\n\n    constexpr Mint operator-() const\
    \ noexcept { return Mint(-val); }\n\n    constexpr bool operator==(const Mint\
    \ &r) const noexcept { return val == r.val; }\n    constexpr bool operator!=(const\
    \ Mint &r) const noexcept { return !((*this) == r); }\n    constexpr bool operator<(const\
    \ Mint &r) const noexcept { return val < r.val; }\n\n    constexpr friend ostream\
    \ &operator<<(ostream &os, const Mint<Modulo> &x) noexcept { return os << x.val;\
    \ }\n    constexpr friend istream &operator>>(istream &is, Mint<Modulo> &x) noexcept\
    \ {\n        lint tmp{};\n        is >> tmp;\n        x = Mint(tmp);\n       \
    \ return is;\n    }\n\n    [[nodiscard]] constexpr Mint pow(lint n) const noexcept\
    \ {\n        Mint res{1}, tmp{*this};\n        while (n > 0) {\n            if\
    \ (n & 1) res *= tmp;\n            tmp *= tmp;\n            n >>= 1;\n       \
    \ }\n        return res;\n    }\n};\n\nconstexpr int MOD = 1000000007;\nusing\
    \ mint = Mint<MOD>;\n\nint RMOD;\nusing rmint = Mint<RMOD>;\n#line 7 \"src/Combination.hpp\"\
    \n\ntemplate<class T = mint>\nclass Combination {\nprivate:\n    vector<T> fac,\
    \ inv, finv;\n\n    void build(int N) {\n        fac[0] = fac[1] = 1;\n      \
    \  inv[1] = 1;\n        finv[0] = finv[1] = 1;\n\n        for (int i = 2; i <\
    \ N; i++) {\n            fac[i] = fac[i - 1] * i;\n            inv[i] = -inv[MOD\
    \ % i] * (MOD / i);\n            finv[i] = finv[i - 1] * inv[i];\n        }\n\
    \    }\n\npublic:\n    explicit Combination(int N = 110000) : fac(N + 1), inv(N\
    \ + 1), finv(N + 1) { build(N + 1); }\n\n    T operator()(int n, int k) {\n  \
    \      if (n < k || k < 0) return 0LL;\n        return fac[n] * (finv[k] * finv[n\
    \ - k]);\n    }\n\n};\n"
  code: "#pragma once\n\n#include <vector>\n#include <iostream>\n\n#include \"Modint.hpp\"\
    \n\ntemplate<class T = mint>\nclass Combination {\nprivate:\n    vector<T> fac,\
    \ inv, finv;\n\n    void build(int N) {\n        fac[0] = fac[1] = 1;\n      \
    \  inv[1] = 1;\n        finv[0] = finv[1] = 1;\n\n        for (int i = 2; i <\
    \ N; i++) {\n            fac[i] = fac[i - 1] * i;\n            inv[i] = -inv[MOD\
    \ % i] * (MOD / i);\n            finv[i] = finv[i - 1] * inv[i];\n        }\n\
    \    }\n\npublic:\n    explicit Combination(int N = 110000) : fac(N + 1), inv(N\
    \ + 1), finv(N + 1) { build(N + 1); }\n\n    T operator()(int n, int k) {\n  \
    \      if (n < k || k < 0) return 0LL;\n        return fac[n] * (finv[k] * finv[n\
    \ - k]);\n    }\n\n};\n"
  dependsOn:
  - src/Modint.hpp
  isVerificationFile: false
  path: src/Combination.hpp
  requiredBy: []
  timestamp: '2021-01-31 22:05:14+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yukicoder/1081.test.cpp
documentation_of: src/Combination.hpp
layout: document
redirect_from:
- /library/src/Combination.hpp
- /library/src/Combination.hpp.html
title: src/Combination.hpp
---
