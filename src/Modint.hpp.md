---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/Combination.hpp
    title: src/Combination.hpp
  - icon: ':heavy_check_mark:'
    path: src/Prime.hpp
    title: src/Prime.hpp
  - icon: ':heavy_check_mark:'
    path: src/RollingHash.hpp
    title: src/RollingHash.hpp
  - icon: ':warning:'
    path: src/empty.cpp
    title: src/empty.cpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/NTL_1_B_2.test.cpp
    title: test/aoj/NTL_1_B_2.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/own/Modint_Basic.test.cpp
    title: test/own/Modint_Basic.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/own/RuntimeModint_Basic.test.cpp
    title: test/own/RuntimeModint_Basic.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yosupo/enumerate_primes.test.cpp
    title: test/yosupo/enumerate_primes.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/1081.test.cpp
    title: test/yukicoder/1081.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/430.test.cpp
    title: test/yukicoder/430.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/599.test.cpp
    title: test/yukicoder/599.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/891.test.cpp
    title: test/yukicoder/891.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/Modint.hpp\"\n\n#include <cassert>\n#include <iostream>\n\
    #include <numeric>\n\nusing namespace std;\nusing lint = long long;\n\ntemplate<const\
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
    \ mint = Mint<MOD>;\n\nint RMOD;\nusing rmint = Mint<RMOD>;\n"
  code: "#pragma once\n\n#include <cassert>\n#include <iostream>\n#include <numeric>\n\
    \nusing namespace std;\nusing lint = long long;\n\ntemplate<const int &Modulo>\n\
    struct Mint {\n\n    lint val;\n    constexpr Mint(lint v = 0) noexcept: val(v\
    \ % Modulo) { if (val < 0) val += Modulo; }\n\n    constexpr Mint &operator+=(const\
    \ Mint &r) noexcept {\n        val += r.val;\n        if (val >= Modulo) val -=\
    \ Modulo;\n        return *this;\n    }\n    constexpr Mint &operator-=(const\
    \ Mint &r) noexcept {\n        val -= r.val;\n        if (val < 0) val += Modulo;\n\
    \        return *this;\n    }\n    constexpr Mint &operator*=(const Mint &r) noexcept\
    \ {\n        val = val * r.val % Modulo;\n        return *this;\n    }\n    constexpr\
    \ Mint &operator/=(const Mint &r) noexcept {\n        lint a{r.val}, b{Modulo},\
    \ u{1}, v{0};\n        assert(gcd(a, b) == 1 && \"a and b must be co-prime\");\n\
    \        while (b) {\n            lint t = a / b;\n            a -= t * b;\n \
    \           a ^= b, b ^= a, a ^= b;\n            u -= t * v;\n            u ^=\
    \ v, v ^= u, u ^= v;\n        }\n        val = val * u % Modulo;\n        if (val\
    \ < 0) val += Modulo;\n        return *this;\n    }\n\n    constexpr Mint operator+(const\
    \ Mint &r) const noexcept { return Mint(*this) += r; }\n    constexpr Mint operator-(const\
    \ Mint &r) const noexcept { return Mint(*this) -= r; }\n    constexpr Mint operator*(const\
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
    \ mint = Mint<MOD>;\n\nint RMOD;\nusing rmint = Mint<RMOD>;\n"
  dependsOn: []
  isVerificationFile: false
  path: src/Modint.hpp
  requiredBy:
  - src/Prime.hpp
  - src/RollingHash.hpp
  - src/empty.cpp
  - src/Combination.hpp
  timestamp: '2021-01-31 22:05:14+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/enumerate_primes.test.cpp
  - test/yukicoder/1081.test.cpp
  - test/yukicoder/891.test.cpp
  - test/yukicoder/430.test.cpp
  - test/yukicoder/599.test.cpp
  - test/own/RuntimeModint_Basic.test.cpp
  - test/own/Modint_Basic.test.cpp
  - test/aoj/NTL_1_B_2.test.cpp
documentation_of: src/Modint.hpp
layout: document
redirect_from:
- /library/src/Modint.hpp
- /library/src/Modint.hpp.html
title: src/Modint.hpp
---
