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
    \nusing namespace std;\nusing lint = long long; \n\ntemplate<int Modulo = MOD>\n\
    struct Mint {\n\n\tlint val;\n\tconstexpr Mint(lint v = 0) noexcept : val(v %\
    \ Modulo) { if (val < 0) val += Modulo; }\n\n\tconstexpr Mint& operator += (const\
    \ Mint &r) noexcept {\n\t\tval += r.val;\n\t\tif (val >= Modulo) val -= Modulo;\n\
    \t\treturn *this;\n\t}\n\tconstexpr Mint& operator -= (const Mint &r) noexcept\
    \ {\n\t\tval -= r.val;\n\t\tif (val < 0) val += Modulo;\n\t\treturn *this;\n\t\
    }\n\tconstexpr Mint& operator *= (const Mint &r) noexcept {\n\t\tval = val * r.val\
    \ % Modulo;\n\t\treturn *this;\n\t}\n\tconstexpr Mint& operator /= (const Mint\
    \ &r) noexcept {\n\t\tlint a = r.val, b = Modulo, u = 1, v = 0;\n\t\twhile (b)\
    \ {\n\t\t\tlint t = a / b;\n\t\t\ta -= t * b; swap(a, b);\n\t\t\tu -= t * v; swap(u,\
    \ v);\n\t\t}\n\t\tval = val * u % Modulo;\n\t\tif (val < 0) val += Modulo;\n\t\
    \treturn *this;\n\t}\n\n\tconstexpr Mint operator + (const Mint &r) const noexcept\
    \ { return Mint(*this) += r; }\n\tconstexpr Mint operator - (const Mint &r) const\
    \ noexcept { return Mint(*this) -= r; }\n\tconstexpr Mint operator * (const Mint\
    \ &r) const noexcept { return Mint(*this) *= r; }\n\tconstexpr Mint operator /\
    \ (const Mint &r) const noexcept { return Mint(*this) /= r; }\n\n\tconstexpr int\
    \ getmod() { return Modulo; }\n\tconstexpr Mint operator - () const noexcept {\
    \ return val ? Modulo - val : 0; }\n\n\tconstexpr bool operator == (const Mint\
    \ &r) const noexcept { return val == r.val; }\n\tconstexpr bool operator != (const\
    \ Mint &r) const noexcept { return val != r.val; }\n\n\tfriend ostream &operator\
    \ << (ostream &os, const Mint<Modulo> &x) noexcept { return os << x.val; }\n\t\
    friend istream &operator >> (istream &is, Mint<Modulo> &x) noexcept {\n\t\tlint\
    \ tmp; is >> tmp;\n\t\tx = Mint(tmp);\n\t\treturn is;\n\t}\n\n\tconstexpr Mint\
    \ pow(lint n) noexcept {\n\t\tMint res{ 1 }, tmp{ val };\n\t\twhile (n > 0) {\n\
    \t\t\tif (n & 1) res *= tmp;\n\t\t\ttmp *= tmp;\n\t\t\tn >>= 1;\n\t\t}\n\t\treturn\
    \ res;\n\t}\n};\n\nusing mint = Mint<>;\n\n//// mod, base from https://gist.github.com/privet-kitty/295ac9202b7abb3039b493f8238bf40f\n\
    class RollingHash {\n\nprivate:\n\tusing Mod = Mint<2147483647>;\n\n\tvector<Mod>\
    \ hash1, pow1;\n\tvector<Mod> hash2, pow2;\n\tconst int base1 = 2147483634;\n\t\
    const int base2 = 2147483627;\n\tint sz;\n\npublic:\n\tRollingHash(const string\
    \ &s) :sz(s.size()) {\n\n\t\thash1.assign(sz + 1, 0); pow1.assign(sz + 1, 1);\n\
    \t\thash2.assign(sz + 1, 0); pow2.assign(sz + 1, 1);\n\n\t\tfor (int i = 0; i\
    \ < sz; i++) {\n\t\t\thash1[i + 1] = hash1[i] * base1 + s[i];\n\t\t\tpow1[i +\
    \ 1] = pow1[i] * base1;\n\t\t\thash2[i + 1] = hash2[i] * base2 + s[i];\n\t\t\t\
    pow2[i + 1] = pow2[i] * base2;\n\t\t}\n\t}\n\n\tpair<int, int> get(int l, int\
    \ r) {\n\t\tint res1 = (hash1[r] - hash1[l] * pow1[r - l]).val;\n\t\tint res2\
    \ = (hash2[r] - hash2[l] * pow2[r - l]).val;\n\t\treturn { res1, res2 };\n\t}\n\
    };\n"
  code: "#include <vector>\n#include <string>\n\nusing namespace std;\nusing lint\
    \ = long long; \n\ntemplate<int Modulo = MOD>\nstruct Mint {\n\n\tlint val;\n\t\
    constexpr Mint(lint v = 0) noexcept : val(v % Modulo) { if (val < 0) val += Modulo;\
    \ }\n\n\tconstexpr Mint& operator += (const Mint &r) noexcept {\n\t\tval += r.val;\n\
    \t\tif (val >= Modulo) val -= Modulo;\n\t\treturn *this;\n\t}\n\tconstexpr Mint&\
    \ operator -= (const Mint &r) noexcept {\n\t\tval -= r.val;\n\t\tif (val < 0)\
    \ val += Modulo;\n\t\treturn *this;\n\t}\n\tconstexpr Mint& operator *= (const\
    \ Mint &r) noexcept {\n\t\tval = val * r.val % Modulo;\n\t\treturn *this;\n\t\
    }\n\tconstexpr Mint& operator /= (const Mint &r) noexcept {\n\t\tlint a = r.val,\
    \ b = Modulo, u = 1, v = 0;\n\t\twhile (b) {\n\t\t\tlint t = a / b;\n\t\t\ta -=\
    \ t * b; swap(a, b);\n\t\t\tu -= t * v; swap(u, v);\n\t\t}\n\t\tval = val * u\
    \ % Modulo;\n\t\tif (val < 0) val += Modulo;\n\t\treturn *this;\n\t}\n\n\tconstexpr\
    \ Mint operator + (const Mint &r) const noexcept { return Mint(*this) += r; }\n\
    \tconstexpr Mint operator - (const Mint &r) const noexcept { return Mint(*this)\
    \ -= r; }\n\tconstexpr Mint operator * (const Mint &r) const noexcept { return\
    \ Mint(*this) *= r; }\n\tconstexpr Mint operator / (const Mint &r) const noexcept\
    \ { return Mint(*this) /= r; }\n\n\tconstexpr int getmod() { return Modulo; }\n\
    \tconstexpr Mint operator - () const noexcept { return val ? Modulo - val : 0;\
    \ }\n\n\tconstexpr bool operator == (const Mint &r) const noexcept { return val\
    \ == r.val; }\n\tconstexpr bool operator != (const Mint &r) const noexcept { return\
    \ val != r.val; }\n\n\tfriend ostream &operator << (ostream &os, const Mint<Modulo>\
    \ &x) noexcept { return os << x.val; }\n\tfriend istream &operator >> (istream\
    \ &is, Mint<Modulo> &x) noexcept {\n\t\tlint tmp; is >> tmp;\n\t\tx = Mint(tmp);\n\
    \t\treturn is;\n\t}\n\n\tconstexpr Mint pow(lint n) noexcept {\n\t\tMint res{\
    \ 1 }, tmp{ val };\n\t\twhile (n > 0) {\n\t\t\tif (n & 1) res *= tmp;\n\t\t\t\
    tmp *= tmp;\n\t\t\tn >>= 1;\n\t\t}\n\t\treturn res;\n\t}\n};\n\nusing mint = Mint<>;\n\
    \n//// mod, base from https://gist.github.com/privet-kitty/295ac9202b7abb3039b493f8238bf40f\n\
    class RollingHash {\n\nprivate:\n\tusing Mod = Mint<2147483647>;\n\n\tvector<Mod>\
    \ hash1, pow1;\n\tvector<Mod> hash2, pow2;\n\tconst int base1 = 2147483634;\n\t\
    const int base2 = 2147483627;\n\tint sz;\n\npublic:\n\tRollingHash(const string\
    \ &s) :sz(s.size()) {\n\n\t\thash1.assign(sz + 1, 0); pow1.assign(sz + 1, 1);\n\
    \t\thash2.assign(sz + 1, 0); pow2.assign(sz + 1, 1);\n\n\t\tfor (int i = 0; i\
    \ < sz; i++) {\n\t\t\thash1[i + 1] = hash1[i] * base1 + s[i];\n\t\t\tpow1[i +\
    \ 1] = pow1[i] * base1;\n\t\t\thash2[i + 1] = hash2[i] * base2 + s[i];\n\t\t\t\
    pow2[i + 1] = pow2[i] * base2;\n\t\t}\n\t}\n\n\tpair<int, int> get(int l, int\
    \ r) {\n\t\tint res1 = (hash1[r] - hash1[l] * pow1[r - l]).val;\n\t\tint res2\
    \ = (hash2[r] - hash2[l] * pow2[r - l]).val;\n\t\treturn { res1, res2 };\n\t}\n\
    };\n"
  dependsOn: []
  isVerificationFile: false
  path: src/RollingHash.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:28:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/RollingHash.cpp
layout: document
redirect_from:
- /library/src/RollingHash.cpp
- /library/src/RollingHash.cpp.html
title: src/RollingHash.cpp
---
