---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/Modint.cpp\"\n#include <iostream>\n\nusing namespace\
    \ std;\nusing lint = long long;\nconstexpr int MOD = 1000000007;\n\ntemplate<int\
    \ Modulo = MOD>\nstruct Mint {\n\n    lint val;\n    constexpr Mint(lint v = 0)\
    \ noexcept: val(v % Modulo) { if (val < 0) val += Modulo; }\n\n    constexpr Mint\
    \ &operator+=(const Mint &r) noexcept {\n        val += r.val;\n        if (val\
    \ >= Modulo) val -= Modulo;\n        return *this;\n    }\n    constexpr Mint\
    \ &operator-=(const Mint &r) noexcept {\n        val -= r.val;\n        if (val\
    \ < 0) val += Modulo;\n        return *this;\n    }\n    constexpr Mint &operator*=(const\
    \ Mint &r) noexcept {\n        val = val * r.val % Modulo;\n        return *this;\n\
    \    }\n    constexpr Mint &operator/=(const Mint &r) noexcept {\n        lint\
    \ a = r.val, b = Modulo, u = 1, v = 0;\n        while (b) {\n            lint\
    \ t = a / b;\n            a -= t * b;\n            swap(a, b);\n            u\
    \ -= t * v;\n            swap(u, v);\n        }\n        val = val * u % Modulo;\n\
    \        if (val < 0) val += Modulo;\n        return *this;\n    }\n\n    constexpr\
    \ Mint operator+(const Mint &r) const noexcept { return Mint(*this) += r; }\n\
    \    constexpr Mint operator-(const Mint &r) const noexcept { return Mint(*this)\
    \ -= r; }\n    constexpr Mint operator*(const Mint &r) const noexcept { return\
    \ Mint(*this) *= r; }\n    constexpr Mint operator/(const Mint &r) const noexcept\
    \ { return Mint(*this) /= r; }\n\n    constexpr Mint operator-() const noexcept\
    \ { return val ? Modulo - val : 0; }\n\n    constexpr bool operator==(const Mint\
    \ &r) const noexcept { return val == r.val; }\n    constexpr bool operator!=(const\
    \ Mint &r) const noexcept { return !((*this) == r); }\n    constexpr bool operator<(const\
    \ Mint &r) const noexcept { return val < r.val; }\n\n    friend ostream &operator<<(ostream\
    \ &os, const Mint<Modulo> &x) noexcept { return os << x.val; }\n    friend istream\
    \ &operator>>(istream &is, Mint<Modulo> &x) noexcept {\n        lint tmp;\n  \
    \      is >> tmp;\n        x = Mint(tmp);\n        return is;\n    }\n\n    constexpr\
    \ Mint pow(lint n) const noexcept {\n        Mint res = 1, tmp = val;\n      \
    \  while (n > 0) {\n            if (n & 1) res *= tmp;\n            tmp *= tmp;\n\
    \            n >>= 1;\n        }\n        return res;\n    }\n};\n\nusing mint\
    \ = Mint<>;\n"
  code: "#include <iostream>\n\nusing namespace std;\nusing lint = long long;\nconstexpr\
    \ int MOD = 1000000007;\n\ntemplate<int Modulo = MOD>\nstruct Mint {\n\n    lint\
    \ val;\n    constexpr Mint(lint v = 0) noexcept: val(v % Modulo) { if (val < 0)\
    \ val += Modulo; }\n\n    constexpr Mint &operator+=(const Mint &r) noexcept {\n\
    \        val += r.val;\n        if (val >= Modulo) val -= Modulo;\n        return\
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
    \      is >> tmp;\n        x = Mint(tmp);\n        return is;\n    }\n\n    constexpr\
    \ Mint pow(lint n) const noexcept {\n        Mint res = 1, tmp = val;\n      \
    \  while (n > 0) {\n            if (n & 1) res *= tmp;\n            tmp *= tmp;\n\
    \            n >>= 1;\n        }\n        return res;\n    }\n};\n\nusing mint\
    \ = Mint<>;\n"
  dependsOn: []
  isVerificationFile: false
  path: src/Modint.cpp
  requiredBy: []
  timestamp: '2021-01-01 20:28:23+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/Modint.cpp
layout: document
redirect_from:
- /library/src/Modint.cpp
- /library/src/Modint.cpp.html
title: src/Modint.cpp
---
