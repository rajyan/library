---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/Combination.cpp\"\n#include <vector>\n#include <iostream>\n\
    \nusing namespace std;\nusing lint = long long;\nconstexpr int MOD = 1000000007;\n\
    \ntemplate<int Modulo = MOD>\nstruct Mint {\n\n\tlint val;\n\tconstexpr Mint(lint\
    \ v = 0) noexcept : val(v % Modulo) { if (val < 0) val += Modulo; }\n\n\tconstexpr\
    \ Mint& operator += (const Mint &r) noexcept {\n\t\tval += r.val;\n\t\tif (val\
    \ >= Modulo) val -= Modulo;\n\t\treturn *this;\n\t}\n\tconstexpr Mint& operator\
    \ -= (const Mint &r) noexcept {\n\t\tval -= r.val;\n\t\tif (val < 0) val += Modulo;\n\
    \t\treturn *this;\n\t}\n\tconstexpr Mint& operator *= (const Mint &r) noexcept\
    \ {\n\t\tval = val * r.val % Modulo;\n\t\treturn *this;\n\t}\n\tconstexpr Mint&\
    \ operator /= (const Mint &r) noexcept {\n\t\tlint a = r.val, b = Modulo, u =\
    \ 1, v = 0;\n\t\twhile (b) {\n\t\t\tlint t = a / b;\n\t\t\ta -= t * b; swap(a,\
    \ b);\n\t\t\tu -= t * v; swap(u, v);\n\t\t}\n\t\tval = val * u % Modulo;\n\t\t\
    if (val < 0) val += Modulo;\n\t\treturn *this;\n\t}\n\n\tconstexpr Mint operator\
    \ + (const Mint &r) const noexcept { return Mint(*this) += r; }\n\tconstexpr Mint\
    \ operator - (const Mint &r) const noexcept { return Mint(*this) -= r; }\n\tconstexpr\
    \ Mint operator * (const Mint &r) const noexcept { return Mint(*this) *= r; }\n\
    \tconstexpr Mint operator / (const Mint &r) const noexcept { return Mint(*this)\
    \ /= r; }\n\n\tconstexpr int getmod() { return Modulo; }\n\tconstexpr Mint operator\
    \ - () const noexcept { return val ? Modulo - val : 0; }\n\n\tconstexpr bool operator\
    \ == (const Mint &r) const noexcept { return val == r.val; }\n\tconstexpr bool\
    \ operator != (const Mint &r) const noexcept { return val != r.val; }\n\n\tfriend\
    \ ostream &operator << (ostream &os, const Mint<Modulo> &x) noexcept { return\
    \ os << x.val; }\n\tfriend istream &operator >> (istream &is, Mint<Modulo> &x)\
    \ noexcept {\n\t\tlint tmp; is >> tmp;\n\t\tx = Mint(tmp);\n\t\treturn is;\n\t\
    }\n\n\tconstexpr Mint pow(lint n) noexcept {\n\t\tMint res{ 1 }, tmp{ val };\n\
    \t\twhile (n > 0) {\n\t\t\tif (n & 1) res *= tmp;\n\t\t\ttmp *= tmp;\n\t\t\tn\
    \ >>= 1;\n\t\t}\n\t\treturn res;\n\t}\n};\n\nusing mint = Mint<>;\n\ntemplate<class\
    \ T = mint>\nclass Combination {\nprivate:\n\tvector<T> fac, inv, finv;\n\n\t\
    void build(int N) {\n\t\tfac[0] = fac[1] = 1; inv[1] = 1; finv[0] = finv[1] =\
    \ 1;\n\n\t\tfor (int i = 2; i < N; i++) {\n\t\t\tfac[i] = fac[i - 1] * i;\n\t\t\
    \tinv[i] = -inv[MOD % i] * (MOD / i);\n\t\t\tfinv[i] = finv[i - 1] * inv[i];\n\
    \t\t}\n\t}\n\npublic:\n\tCombination(int N = 110000) : fac(N + 1), inv(N + 1),\
    \ finv(N + 1) { build(N + 1); }\n\n\tT operator()(int n, int k) {\n\t\tif (n <\
    \ k || k < 0) return 0LL;\n\t\treturn fac[n] * (finv[k] * finv[n - k]);\n\t}\n\
    \n};\n"
  code: "#include <vector>\n#include <iostream>\n\nusing namespace std;\nusing lint\
    \ = long long;\nconstexpr int MOD = 1000000007;\n\ntemplate<int Modulo = MOD>\n\
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
    \ res;\n\t}\n};\n\nusing mint = Mint<>;\n\ntemplate<class T = mint>\nclass Combination\
    \ {\nprivate:\n\tvector<T> fac, inv, finv;\n\n\tvoid build(int N) {\n\t\tfac[0]\
    \ = fac[1] = 1; inv[1] = 1; finv[0] = finv[1] = 1;\n\n\t\tfor (int i = 2; i <\
    \ N; i++) {\n\t\t\tfac[i] = fac[i - 1] * i;\n\t\t\tinv[i] = -inv[MOD % i] * (MOD\
    \ / i);\n\t\t\tfinv[i] = finv[i - 1] * inv[i];\n\t\t}\n\t}\n\npublic:\n\tCombination(int\
    \ N = 110000) : fac(N + 1), inv(N + 1), finv(N + 1) { build(N + 1); }\n\n\tT operator()(int\
    \ n, int k) {\n\t\tif (n < k || k < 0) return 0LL;\n\t\treturn fac[n] * (finv[k]\
    \ * finv[n - k]);\n\t}\n\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/Combination.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:28:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/Combination.cpp
layout: document
redirect_from:
- /library/src/Combination.cpp
- /library/src/Combination.cpp.html
title: src/Combination.cpp
---
