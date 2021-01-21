---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/Combination.cpp
    title: src/Combination.cpp
  - icon: ':x:'
    path: src/RollingHash.cpp
    title: src/RollingHash.cpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/NTL_1_B_2.test.cpp
    title: test/aoj/NTL_1_B_2.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/1081.test.cpp
    title: test/yukicoder/1081.test.cpp
  - icon: ':x:'
    path: test/yukicoder/430.test.cpp
    title: test/yukicoder/430.test.cpp
  - icon: ':x:'
    path: test/yukicoder/599.test.cpp
    title: test/yukicoder/599.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/Modint.cpp\"\n#include <iostream>\n\nusing namespace\
    \ std;\nusing lint = long long;\nconstexpr int MOD = 1000000007;\n\n// #define\
    \ RUNTIME_MODINT\n\n#ifdef RUNTIME_MODINT\ntemplate<int &Modulo>\n#else\ntemplate<int\
    \ Modulo>\n#endif\nclass Mint {\npublic:\n    constexpr Mint(lint v = 0) noexcept:\
    \ val(v % Modulo) { if (val < 0) val += Modulo; }\n\n    constexpr Mint &operator+=(const\
    \ Mint &r) noexcept {\n        val += r.val;\n        if (val >= Modulo) val -=\
    \ Modulo;\n        return *this;\n    }\n    constexpr Mint &operator-=(const\
    \ Mint &r) noexcept {\n        val -= r.val;\n        if (val < 0) val += Modulo;\n\
    \        return *this;\n    }\n    constexpr Mint &operator*=(const Mint &r) noexcept\
    \ {\n        val = val * r.val % Modulo;\n        return *this;\n    }\n    constexpr\
    \ Mint &operator/=(const Mint &r) noexcept {\n        lint a = r.val, b = Modulo,\
    \ u = 1, v = 0;\n        while (b) {\n            lint t = a / b;\n          \
    \  a -= t * b;\n            swap(a, b);\n            u -= t * v;\n           \
    \ swap(u, v);\n        }\n        val = val * u % Modulo;\n        if (val < 0)\
    \ val += Modulo;\n        return *this;\n    }\n\n    constexpr Mint operator+(const\
    \ Mint &r) const noexcept { return Mint(*this) += r; }\n    constexpr Mint operator-(const\
    \ Mint &r) const noexcept { return Mint(*this) -= r; }\n    constexpr Mint operator*(const\
    \ Mint &r) const noexcept { return Mint(*this) *= r; }\n    constexpr Mint operator/(const\
    \ Mint &r) const noexcept { return Mint(*this) /= r; }\n\n    constexpr Mint operator-()\
    \ const noexcept { return val ? Modulo - val : 0; }\n\n    constexpr bool operator==(const\
    \ Mint &r) const noexcept { return val == r.val; }\n    constexpr bool operator!=(const\
    \ Mint &r) const noexcept { return !((*this) == r); }\n    constexpr bool operator<(const\
    \ Mint &r) const noexcept { return val < r.val; }\n\n    friend ostream &operator<<(ostream\
    \ &os, const Mint<Modulo> &x) noexcept { return os << x.val; }\n    friend istream\
    \ &operator>>(istream &is, Mint<Modulo> &x) noexcept {\n        lint tmp;\n  \
    \      is >> tmp;\n        x = Mint(tmp);\n        return is;\n    }\n\n    [[nodiscard]]\
    \ constexpr Mint pow(lint n) const noexcept {\n        Mint res = 1, tmp = val;\n\
    \        while (n > 0) {\n            if (n & 1) res *= tmp;\n            tmp\
    \ *= tmp;\n            n >>= 1;\n        }\n        return res;\n    }\nprivate:\n\
    \    lint val;\n};\n\n#ifdef RUNTIME_MODINT\nint RMOD;\nusing rmint = Mint<RMOD>;\n\
    #else\nusing mint = Mint<MOD>;\n#endif\n\n"
  code: "#include <iostream>\n\nusing namespace std;\nusing lint = long long;\nconstexpr\
    \ int MOD = 1000000007;\n\n// #define RUNTIME_MODINT\n\n#ifdef RUNTIME_MODINT\n\
    template<int &Modulo>\n#else\ntemplate<int Modulo>\n#endif\nclass Mint {\npublic:\n\
    \    constexpr Mint(lint v = 0) noexcept: val(v % Modulo) { if (val < 0) val +=\
    \ Modulo; }\n\n    constexpr Mint &operator+=(const Mint &r) noexcept {\n    \
    \    val += r.val;\n        if (val >= Modulo) val -= Modulo;\n        return\
    \ *this;\n    }\n    constexpr Mint &operator-=(const Mint &r) noexcept {\n  \
    \      val -= r.val;\n        if (val < 0) val += Modulo;\n        return *this;\n\
    \    }\n    constexpr Mint &operator*=(const Mint &r) noexcept {\n        val\
    \ = val * r.val % Modulo;\n        return *this;\n    }\n    constexpr Mint &operator/=(const\
    \ Mint &r) noexcept {\n        lint a = r.val, b = Modulo, u = 1, v = 0;\n   \
    \     while (b) {\n            lint t = a / b;\n            a -= t * b;\n    \
    \        swap(a, b);\n            u -= t * v;\n            swap(u, v);\n     \
    \   }\n        val = val * u % Modulo;\n        if (val < 0) val += Modulo;\n\
    \        return *this;\n    }\n\n    constexpr Mint operator+(const Mint &r) const\
    \ noexcept { return Mint(*this) += r; }\n    constexpr Mint operator-(const Mint\
    \ &r) const noexcept { return Mint(*this) -= r; }\n    constexpr Mint operator*(const\
    \ Mint &r) const noexcept { return Mint(*this) *= r; }\n    constexpr Mint operator/(const\
    \ Mint &r) const noexcept { return Mint(*this) /= r; }\n\n    constexpr Mint operator-()\
    \ const noexcept { return val ? Modulo - val : 0; }\n\n    constexpr bool operator==(const\
    \ Mint &r) const noexcept { return val == r.val; }\n    constexpr bool operator!=(const\
    \ Mint &r) const noexcept { return !((*this) == r); }\n    constexpr bool operator<(const\
    \ Mint &r) const noexcept { return val < r.val; }\n\n    friend ostream &operator<<(ostream\
    \ &os, const Mint<Modulo> &x) noexcept { return os << x.val; }\n    friend istream\
    \ &operator>>(istream &is, Mint<Modulo> &x) noexcept {\n        lint tmp;\n  \
    \      is >> tmp;\n        x = Mint(tmp);\n        return is;\n    }\n\n    [[nodiscard]]\
    \ constexpr Mint pow(lint n) const noexcept {\n        Mint res = 1, tmp = val;\n\
    \        while (n > 0) {\n            if (n & 1) res *= tmp;\n            tmp\
    \ *= tmp;\n            n >>= 1;\n        }\n        return res;\n    }\nprivate:\n\
    \    lint val;\n};\n\n#ifdef RUNTIME_MODINT\nint RMOD;\nusing rmint = Mint<RMOD>;\n\
    #else\nusing mint = Mint<MOD>;\n#endif\n\n"
  dependsOn: []
  isVerificationFile: false
  path: src/Modint.cpp
  requiredBy:
  - src/RollingHash.cpp
  - src/Combination.cpp
  timestamp: '2021-01-21 23:07:44+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - test/aoj/NTL_1_B_2.test.cpp
  - test/yukicoder/599.test.cpp
  - test/yukicoder/430.test.cpp
  - test/yukicoder/1081.test.cpp
documentation_of: src/Modint.cpp
layout: document
redirect_from:
- /library/src/Modint.cpp
- /library/src/Modint.cpp.html
title: src/Modint.cpp
---
