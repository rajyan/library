---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/Modint.cpp
    title: src/Modint.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/430.test.cpp
    title: test/yukicoder/430.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/599.test.cpp
    title: test/yukicoder/599.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links:
    - https://gist.github.com/privet-kitty/295ac9202b7abb3039b493f8238bf40f
  bundledCode: "#line 1 \"src/RollingHash.cpp\"\n#include <vector>\n#include <string>\n\
    \nusing namespace std;\n\n#line 1 \"src/Modint.cpp\"\n#include <cassert>\n#include\
    \ <iostream>\n#include <numeric>\n\nusing namespace std;\nusing lint = long long;\n\
    constexpr int MOD = 1000000007;\n\n#ifdef RUNTIME_MODINT\ntemplate<int &Modulo>\n\
    #else\ntemplate<int Modulo>\n#endif\nstruct Mint {\n\n    lint val;\n    constexpr\
    \ Mint(lint v = 0) noexcept: val(v % Modulo) { if (val < 0) val += Modulo; }\n\
    \n    constexpr Mint &operator+=(const Mint &r) noexcept {\n        val += r.val;\n\
    \        if (val >= Modulo) val -= Modulo;\n        return *this;\n    }\n   \
    \ constexpr Mint &operator-=(const Mint &r) noexcept {\n        val -= r.val;\n\
    \        if (val < 0) val += Modulo;\n        return *this;\n    }\n    constexpr\
    \ Mint &operator*=(const Mint &r) noexcept {\n        val = val * r.val % Modulo;\n\
    \        return *this;\n    }\n    constexpr Mint &operator/=(const Mint &r) noexcept\
    \ {\n        lint a{r.val}, b{Modulo}, u{1}, v{0};\n        assert(gcd(a, b) ==\
    \ 1 && \"a and b must be coprime\");\n        while (b) {\n            lint t\
    \ = a / b;\n            a -= t * b;\n            swap(a, b);\n            u -=\
    \ t * v;\n            swap(u, v);\n        }\n        val = val * u % Modulo;\n\
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
    \      is >> tmp;\n        x = Mint(tmp);\n        return is;\n    }\n\n    [[nodiscard]]\
    \ constexpr Mint pow(lint n) const noexcept {\n        Mint res{1}, tmp{*this};\n\
    \        while (n > 0) {\n            if (n & 1) res *= tmp;\n            tmp\
    \ *= tmp;\n            n >>= 1;\n        }\n        return res;\n    }\n};\n\n\
    #ifdef RUNTIME_MODINT\nint RMOD;\nusing rmint = Mint<RMOD>;\n#else\nusing mint\
    \ = Mint<MOD>;\n#endif\n\n#line 7 \"src/RollingHash.cpp\"\n\n//// mod, base from\
    \ https://gist.github.com/privet-kitty/295ac9202b7abb3039b493f8238bf40f\nclass\
    \ RollingHash {\n\nprivate:\n    using Mod = Mint<2147483647>;\n\n    vector<Mod>\
    \ hash1, pow1;\n    vector<Mod> hash2, pow2;\n    const int base1 = 2147483634;\n\
    \    const int base2 = 2147483627;\n    int sz;\n\npublic:\n    explicit RollingHash(const\
    \ string &s) : sz(s.size()) {\n\n        hash1.assign(sz + 1, 0);\n        pow1.assign(sz\
    \ + 1, 1);\n        hash2.assign(sz + 1, 0);\n        pow2.assign(sz + 1, 1);\n\
    \n        for (int i = 0; i < sz; i++) {\n            hash1[i + 1] = hash1[i]\
    \ * base1 + s[i];\n            pow1[i + 1] = pow1[i] * base1;\n            hash2[i\
    \ + 1] = hash2[i] * base2 + s[i];\n            pow2[i + 1] = pow2[i] * base2;\n\
    \        }\n    }\n\n    [[nodiscard]] pair<int, int> get(int l, int r) {\n  \
    \      int res1 = (hash1[r] - hash1[l] * pow1[r - l]).val;\n        int res2 =\
    \ (hash2[r] - hash2[l] * pow2[r - l]).val;\n        return {res1, res2};\n   \
    \ }\n};\n"
  code: "#include <vector>\n#include <string>\n\nusing namespace std;\n\n#include\
    \ \"Modint.cpp\"\n\n//// mod, base from https://gist.github.com/privet-kitty/295ac9202b7abb3039b493f8238bf40f\n\
    class RollingHash {\n\nprivate:\n    using Mod = Mint<2147483647>;\n\n    vector<Mod>\
    \ hash1, pow1;\n    vector<Mod> hash2, pow2;\n    const int base1 = 2147483634;\n\
    \    const int base2 = 2147483627;\n    int sz;\n\npublic:\n    explicit RollingHash(const\
    \ string &s) : sz(s.size()) {\n\n        hash1.assign(sz + 1, 0);\n        pow1.assign(sz\
    \ + 1, 1);\n        hash2.assign(sz + 1, 0);\n        pow2.assign(sz + 1, 1);\n\
    \n        for (int i = 0; i < sz; i++) {\n            hash1[i + 1] = hash1[i]\
    \ * base1 + s[i];\n            pow1[i + 1] = pow1[i] * base1;\n            hash2[i\
    \ + 1] = hash2[i] * base2 + s[i];\n            pow2[i + 1] = pow2[i] * base2;\n\
    \        }\n    }\n\n    [[nodiscard]] pair<int, int> get(int l, int r) {\n  \
    \      int res1 = (hash1[r] - hash1[l] * pow1[r - l]).val;\n        int res2 =\
    \ (hash2[r] - hash2[l] * pow2[r - l]).val;\n        return {res1, res2};\n   \
    \ }\n};\n"
  dependsOn:
  - src/Modint.cpp
  isVerificationFile: false
  path: src/RollingHash.cpp
  requiredBy: []
  timestamp: '2021-01-24 14:04:47+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yukicoder/599.test.cpp
  - test/yukicoder/430.test.cpp
documentation_of: src/RollingHash.cpp
layout: document
redirect_from:
- /library/src/RollingHash.cpp
- /library/src/RollingHash.cpp.html
title: src/RollingHash.cpp
---
