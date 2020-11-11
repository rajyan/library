---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"library/Modint.cpp\"\n#include <iostream>\n\nusing namespace\
    \ std;\nusing lint = long long;\nconstexpr int MOD = 1000000007;\n\ntemplate<int\
    \ Modulo = MOD>\nstruct Mint {\n\n\tlint val;\n\tconstexpr Mint(lint v = 0) noexcept\
    \ : val(v % Modulo) { if (val < 0) val += Modulo; }\n\n\tconstexpr Mint& operator+=(const\
    \ Mint &r) noexcept {\n\t\tval += r.val;\n\t\tif (val >= Modulo) val -= Modulo;\n\
    \t\treturn *this;\n\t}\n\tconstexpr Mint& operator-=(const Mint &r) noexcept {\n\
    \t\tval -= r.val;\n\t\tif (val < 0) val += Modulo;\n\t\treturn *this;\n\t}\n\t\
    constexpr Mint& operator*=(const Mint &r) noexcept {\n\t\tval = val * r.val %\
    \ Modulo;\n\t\treturn *this;\n\t}\n\tconstexpr Mint& operator/=(const Mint &r)\
    \ noexcept {\n\t\tlint a = r.val, b = Modulo, u = 1, v = 0;\n\t\twhile (b) {\n\
    \t\t\tlint t = a / b;\n\t\t\ta -= t * b; swap(a, b);\n\t\t\tu -= t * v; swap(u,\
    \ v);\n\t\t}\n\t\tval = val * u % Modulo;\n\t\tif (val < 0) val += Modulo;\n\t\
    \treturn *this;\n\t}\n\n\tconstexpr Mint operator+(const Mint &r) const noexcept\
    \ { return Mint(*this) += r; }\n\tconstexpr Mint operator-(const Mint &r) const\
    \ noexcept { return Mint(*this) -= r; }\n\tconstexpr Mint operator*(const Mint\
    \ &r) const noexcept { return Mint(*this) *= r; }\n\tconstexpr Mint operator/(const\
    \ Mint &r) const noexcept { return Mint(*this) /= r; }\n\n\tconstexpr Mint operator-()\
    \ const noexcept { return val ? Modulo - val : 0; }\n\n\tconstexpr bool operator==(const\
    \ Mint &r) const noexcept { return val == r.val; }\n\tconstexpr bool operator!=(const\
    \ Mint &r) const noexcept { return !((*this) == r); }\n\tconstexpr bool operator<\
    \ (const Mint &r) const noexcept { return val < r.val; }\n\n\tfriend ostream &operator\
    \ << (ostream &os, const Mint<Modulo> &x) noexcept { return os << x.val; }\n\t\
    friend istream &operator >> (istream &is, Mint<Modulo> &x) noexcept {\n\t\tlint\
    \ tmp; is >> tmp;\n\t\tx = Mint(tmp);\n\t\treturn is;\n\t}\n\n\tconstexpr Mint\
    \ pow(lint n) const noexcept {\n\t\tMint res = 1, tmp = val;\n\t\twhile (n > 0)\
    \ {\n\t\t\tif (n & 1) res *= tmp;\n\t\t\ttmp *= tmp;\n\t\t\tn >>= 1;\n\t\t}\n\t\
    \treturn res;\n\t}\n};\n\nusing mint = Mint<>;\n"
  code: "#include <iostream>\n\nusing namespace std;\nusing lint = long long;\nconstexpr\
    \ int MOD = 1000000007;\n\ntemplate<int Modulo = MOD>\nstruct Mint {\n\n\tlint\
    \ val;\n\tconstexpr Mint(lint v = 0) noexcept : val(v % Modulo) { if (val < 0)\
    \ val += Modulo; }\n\n\tconstexpr Mint& operator+=(const Mint &r) noexcept {\n\
    \t\tval += r.val;\n\t\tif (val >= Modulo) val -= Modulo;\n\t\treturn *this;\n\t\
    }\n\tconstexpr Mint& operator-=(const Mint &r) noexcept {\n\t\tval -= r.val;\n\
    \t\tif (val < 0) val += Modulo;\n\t\treturn *this;\n\t}\n\tconstexpr Mint& operator*=(const\
    \ Mint &r) noexcept {\n\t\tval = val * r.val % Modulo;\n\t\treturn *this;\n\t\
    }\n\tconstexpr Mint& operator/=(const Mint &r) noexcept {\n\t\tlint a = r.val,\
    \ b = Modulo, u = 1, v = 0;\n\t\twhile (b) {\n\t\t\tlint t = a / b;\n\t\t\ta -=\
    \ t * b; swap(a, b);\n\t\t\tu -= t * v; swap(u, v);\n\t\t}\n\t\tval = val * u\
    \ % Modulo;\n\t\tif (val < 0) val += Modulo;\n\t\treturn *this;\n\t}\n\n\tconstexpr\
    \ Mint operator+(const Mint &r) const noexcept { return Mint(*this) += r; }\n\t\
    constexpr Mint operator-(const Mint &r) const noexcept { return Mint(*this) -=\
    \ r; }\n\tconstexpr Mint operator*(const Mint &r) const noexcept { return Mint(*this)\
    \ *= r; }\n\tconstexpr Mint operator/(const Mint &r) const noexcept { return Mint(*this)\
    \ /= r; }\n\n\tconstexpr Mint operator-() const noexcept { return val ? Modulo\
    \ - val : 0; }\n\n\tconstexpr bool operator==(const Mint &r) const noexcept {\
    \ return val == r.val; }\n\tconstexpr bool operator!=(const Mint &r) const noexcept\
    \ { return !((*this) == r); }\n\tconstexpr bool operator< (const Mint &r) const\
    \ noexcept { return val < r.val; }\n\n\tfriend ostream &operator << (ostream &os,\
    \ const Mint<Modulo> &x) noexcept { return os << x.val; }\n\tfriend istream &operator\
    \ >> (istream &is, Mint<Modulo> &x) noexcept {\n\t\tlint tmp; is >> tmp;\n\t\t\
    x = Mint(tmp);\n\t\treturn is;\n\t}\n\n\tconstexpr Mint pow(lint n) const noexcept\
    \ {\n\t\tMint res = 1, tmp = val;\n\t\twhile (n > 0) {\n\t\t\tif (n & 1) res *=\
    \ tmp;\n\t\t\ttmp *= tmp;\n\t\t\tn >>= 1;\n\t\t}\n\t\treturn res;\n\t}\n};\n\n\
    using mint = Mint<>;\n"
  dependsOn: []
  isVerificationFile: false
  path: library/Modint.cpp
  requiredBy: []
  timestamp: '2020-05-21 21:13:40+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: library/Modint.cpp
layout: document
redirect_from:
- /library/library/Modint.cpp
- /library/library/Modint.cpp.html
title: library/Modint.cpp
---
