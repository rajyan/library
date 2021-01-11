---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://gist.github.com/privet-kitty/295ac9202b7abb3039b493f8238bf40f
  bundledCode: "#line 1 \"src/RollingHash.cpp\"\n#include <vector>\n#include <string>\n\
    \nusing namespace std;\nusing lint = long long;\nconstexpr int MOD = 1000000007;\n\
    \ntemplate<int Modulo = MOD>\nstruct Mint {\n\n    lint val;\n    constexpr Mint(lint\
    \ v = 0) noexcept: val(v % Modulo) { if (val < 0) val += Modulo; }\n\n    constexpr\
    \ Mint &operator+=(const Mint &r) noexcept {\n        val += r.val;\n        if\
    \ (val >= Modulo) val -= Modulo;\n        return *this;\n    }\n    constexpr\
    \ Mint &operator-=(const Mint &r) noexcept {\n        val -= r.val;\n        if\
    \ (val < 0) val += Modulo;\n        return *this;\n    }\n    constexpr Mint &operator*=(const\
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
    \ { return Mint(*this) /= r; }\n\n    constexpr int getmod() { return Modulo;\
    \ }\n    constexpr Mint operator-() const noexcept { return val ? Modulo - val\
    \ : 0; }\n\n    constexpr bool operator==(const Mint &r) const noexcept { return\
    \ val == r.val; }\n    constexpr bool operator!=(const Mint &r) const noexcept\
    \ { return val != r.val; }\n\n    friend ostream &operator<<(ostream &os, const\
    \ Mint<Modulo> &x) noexcept { return os << x.val; }\n    friend istream &operator>>(istream\
    \ &is, Mint<Modulo> &x) noexcept {\n        lint tmp;\n        is >> tmp;\n  \
    \      x = Mint(tmp);\n        return is;\n    }\n\n    constexpr Mint pow(lint\
    \ n) noexcept {\n        Mint res{1}, tmp{val};\n        while (n > 0) {\n   \
    \         if (n & 1) res *= tmp;\n            tmp *= tmp;\n            n >>= 1;\n\
    \        }\n        return res;\n    }\n};\n\nusing mint = Mint<>;\n\n//// mod,\
    \ base from https://gist.github.com/privet-kitty/295ac9202b7abb3039b493f8238bf40f\n\
    class RollingHash {\n\nprivate:\n    using Mod = Mint<2147483647>;\n\n    vector<Mod>\
    \ hash1, pow1;\n    vector<Mod> hash2, pow2;\n    const int base1 = 2147483634;\n\
    \    const int base2 = 2147483627;\n    int sz;\n\npublic:\n    RollingHash(const\
    \ string &s) : sz(s.size()) {\n\n        hash1.assign(sz + 1, 0);\n        pow1.assign(sz\
    \ + 1, 1);\n        hash2.assign(sz + 1, 0);\n        pow2.assign(sz + 1, 1);\n\
    \n        for (int i = 0; i < sz; i++) {\n            hash1[i + 1] = hash1[i]\
    \ * base1 + s[i];\n            pow1[i + 1] = pow1[i] * base1;\n            hash2[i\
    \ + 1] = hash2[i] * base2 + s[i];\n            pow2[i + 1] = pow2[i] * base2;\n\
    \        }\n    }\n\n    pair<int, int> get(int l, int r) {\n        int res1\
    \ = (hash1[r] - hash1[l] * pow1[r - l]).val;\n        int res2 = (hash2[r] - hash2[l]\
    \ * pow2[r - l]).val;\n        return {res1, res2};\n    }\n};\n"
  code: "#include <vector>\n#include <string>\n\nusing namespace std;\nusing lint\
    \ = long long;\nconstexpr int MOD = 1000000007;\n\ntemplate<int Modulo = MOD>\n\
    struct Mint {\n\n    lint val;\n    constexpr Mint(lint v = 0) noexcept: val(v\
    \ % Modulo) { if (val < 0) val += Modulo; }\n\n    constexpr Mint &operator+=(const\
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
    \ Mint &r) const noexcept { return Mint(*this) /= r; }\n\n    constexpr int getmod()\
    \ { return Modulo; }\n    constexpr Mint operator-() const noexcept { return val\
    \ ? Modulo - val : 0; }\n\n    constexpr bool operator==(const Mint &r) const\
    \ noexcept { return val == r.val; }\n    constexpr bool operator!=(const Mint\
    \ &r) const noexcept { return val != r.val; }\n\n    friend ostream &operator<<(ostream\
    \ &os, const Mint<Modulo> &x) noexcept { return os << x.val; }\n    friend istream\
    \ &operator>>(istream &is, Mint<Modulo> &x) noexcept {\n        lint tmp;\n  \
    \      is >> tmp;\n        x = Mint(tmp);\n        return is;\n    }\n\n    constexpr\
    \ Mint pow(lint n) noexcept {\n        Mint res{1}, tmp{val};\n        while (n\
    \ > 0) {\n            if (n & 1) res *= tmp;\n            tmp *= tmp;\n      \
    \      n >>= 1;\n        }\n        return res;\n    }\n};\n\nusing mint = Mint<>;\n\
    \n//// mod, base from https://gist.github.com/privet-kitty/295ac9202b7abb3039b493f8238bf40f\n\
    class RollingHash {\n\nprivate:\n    using Mod = Mint<2147483647>;\n\n    vector<Mod>\
    \ hash1, pow1;\n    vector<Mod> hash2, pow2;\n    const int base1 = 2147483634;\n\
    \    const int base2 = 2147483627;\n    int sz;\n\npublic:\n    RollingHash(const\
    \ string &s) : sz(s.size()) {\n\n        hash1.assign(sz + 1, 0);\n        pow1.assign(sz\
    \ + 1, 1);\n        hash2.assign(sz + 1, 0);\n        pow2.assign(sz + 1, 1);\n\
    \n        for (int i = 0; i < sz; i++) {\n            hash1[i + 1] = hash1[i]\
    \ * base1 + s[i];\n            pow1[i + 1] = pow1[i] * base1;\n            hash2[i\
    \ + 1] = hash2[i] * base2 + s[i];\n            pow2[i + 1] = pow2[i] * base2;\n\
    \        }\n    }\n\n    pair<int, int> get(int l, int r) {\n        int res1\
    \ = (hash1[r] - hash1[l] * pow1[r - l]).val;\n        int res2 = (hash2[r] - hash2[l]\
    \ * pow2[r - l]).val;\n        return {res1, res2};\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/RollingHash.cpp
  requiredBy: []
  timestamp: '2021-01-11 13:15:38+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/RollingHash.cpp
layout: document
redirect_from:
- /library/src/RollingHash.cpp
- /library/src/RollingHash.cpp.html
title: src/RollingHash.cpp
---
