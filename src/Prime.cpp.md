---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: src/Modint.cpp
    title: src/Modint.cpp
  - icon: ':heavy_check_mark:'
    path: src/ctz.cpp
    title: src/ctz.cpp
  - icon: ':heavy_check_mark:'
    path: src/popcount.cpp
    title: src/popcount.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yosupo/enumerate_primes.test.cpp
    title: test/yosupo/enumerate_primes.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links:
    - http://miller-rabin.appspot.com/
    - https://cp-algorithms.com/algebra/prime-sieve-linear.html
  bundledCode: "#line 1 \"src/Prime.cpp\"\n#include <vector>\n\nusing namespace std;\n\
    using lint = long long;\n\n#define RUNTIME_MODINT\n#line 1 \"src/Modint.cpp\"\n\
    #include <iostream>\n\nusing namespace std;\nusing lint = long long;\nconstexpr\
    \ int MOD = 1000000007;\n\n#ifdef RUNTIME_MODINT\ntemplate<int &Modulo>\n#else\n\
    template<int Modulo>\n#endif\nstruct Mint {\n\n    lint val;\n    constexpr Mint(lint\
    \ v = 0) noexcept: val(v % Modulo) { if (val < 0) val += Modulo; }\n\n    constexpr\
    \ Mint &operator+=(const Mint &r) noexcept {\n        val += r.val;\n        if\
    \ (val >= Modulo) val -= Modulo;\n        return *this;\n    }\n    constexpr\
    \ Mint &operator-=(const Mint &r) noexcept {\n        val -= r.val;\n        if\
    \ (val < 0) val += Modulo;\n        return *this;\n    }\n    constexpr Mint &operator*=(const\
    \ Mint &r) noexcept {\n        val = val * r.val % Modulo;\n        return *this;\n\
    \    }\n    constexpr Mint &operator/=(const Mint &r) noexcept {\n        lint\
    \ a{r.val}, b{Modulo}, u{1}, v{0};\n        while (b) {\n            lint t =\
    \ a / b;\n            a -= t * b;\n            swap(a, b);\n            u -= t\
    \ * v;\n            swap(u, v);\n        }\n        val = val * u % Modulo;\n\
    \        if (val < 0) val += Modulo;\n        return *this;\n    }\n\n    constexpr\
    \ Mint operator+(const Mint &r) const noexcept { return *this += r; }\n    constexpr\
    \ Mint operator-(const Mint &r) const noexcept { return *this -= r; }\n    constexpr\
    \ Mint operator*(const Mint &r) const noexcept { return *this *= r; }\n    constexpr\
    \ Mint operator/(const Mint &r) const noexcept { return *this /= r; }\n\n    constexpr\
    \ Mint operator-() const noexcept { return val ? Modulo - val : 0; }\n\n    constexpr\
    \ bool operator==(const Mint &r) const noexcept { return val == r.val; }\n   \
    \ constexpr bool operator!=(const Mint &r) const noexcept { return !((*this) ==\
    \ r); }\n    constexpr bool operator<(const Mint &r) const noexcept { return val\
    \ < r.val; }\n\n    friend ostream &operator<<(ostream &os, const Mint<Modulo>\
    \ &x) noexcept { return os << x.val; }\n    friend istream &operator>>(istream\
    \ &is, Mint<Modulo> &x) noexcept {\n        lint tmp;\n        is >> tmp;\n  \
    \      x = Mint(tmp);\n        return is;\n    }\n\n    [[nodiscard]] constexpr\
    \ Mint pow(lint n) const noexcept {\n        Mint res{1}, tmp{*this};\n      \
    \  while (n > 0) {\n            if (n & 1) res *= tmp;\n            tmp *= tmp;\n\
    \            n >>= 1;\n        }\n        return res;\n    }\n};\n\n#ifdef RUNTIME_MODINT\n\
    int RMOD;\nusing rmint = Mint<RMOD>;\n#else\nusing mint = Mint<MOD>;\n#endif\n\
    \n#line 8 \"src/Prime.cpp\"\n\n#line 1 \"src/ctz.cpp\"\n\n#line 1 \"src/popcount.cpp\"\
    \n\nusing lint = long long;\n\ninline int popcount(lint n) {\n    n = (n & 0x5555555555555555)\
    \ + (n >> 1 & 0x5555555555555555);\n    n = (n & 0x3333333333333333) + (n >> 2\
    \ & 0x3333333333333333);\n    n = (n & 0x0f0f0f0f0f0f0f0f) + (n >> 4 & 0x0f0f0f0f0f0f0f0f);\n\
    \    n = (n & 0x00ff00ff00ff00ff) + (n >> 8 & 0x00ff00ff00ff00ff);\n    n = (n\
    \ & 0x0000ffff0000ffff) + (n >> 16 & 0x0000ffff0000ffff);\n    n = (n & 0x00000000ffffffff)\
    \ + (n >> 32 & 0x00000000ffffffff);\n    return n;\n}\n#line 3 \"src/ctz.cpp\"\
    \n\nusing lint = long long;\n\ninline int ctz(lint n) {\n    return popcount(~n\
    \ & (n - 1));\n}\n#line 10 \"src/Prime.cpp\"\n\nclass Prime {\n    vector<int>\
    \ prime;\n    vector<int> min_pf; // min_pf[i] = minimum prime factor of i\n \
    \   // linear sieve https://cp-algorithms.com/algebra/prime-sieve-linear.html\n\
    \    void linearSieve(int N) {\n        min_pf[0] = min_pf[1] = -1;\n        for\
    \ (int i = 2; i < N; i++) {\n            if (min_pf[i] == 0) {\n             \
    \   prime.emplace_back(i);\n                min_pf[i] = i;\n            }\n  \
    \          for (int j : prime) {\n                if (j > min_pf[i] || i * j >=\
    \ N) break;\n                min_pf[i * j] = j;\n            }\n        }\n  \
    \  }\n\n    void Eratosthenes(lint N) {\n        for (lint i = 2; i * i < N; i++)\
    \ {\n            if (pTable[i]) {\n                for (int j = 0; i * (j + 2)\
    \ < N; j++) pTable[i * (j + 2)] = false;\n            }\n        }\n    }\n\n\
    public:\n    vector<bool> pTable;\n\n    explicit Prime(int N, bool useLinear)\
    \ : min_pf(N + 1) { linearSieve(N + 1); }\n    explicit Prime(int N = 1100000)\
    \ : pTable(N + 1, true) { Eratosthenes(N + 1); }\n\n    [[nodiscard]] vector<pair<lint,\
    \ int>> factorize(lint n) {\n        vector<pair<lint, int>> res;\n        for\
    \ (lint i = 2; i * i <= n; i++) {\n            int cnt = 0;\n            while\
    \ (n % i == 0) {\n                cnt++;\n                n /= i;\n          \
    \  }\n            if (cnt) res.emplace_back(i, cnt);\n        }\n        if (n\
    \ != 1) res.emplace_back(n, 1);\n\n        return res;\n    }\n\n    // Miller-Rabin\n\
    \    [[nodiscard]] bool isPrime(lint n) {\n        if (n <= 1 || n % 2 == 0) return\
    \ (n == 2);\n        const int s = ctz(n - 1);\n        const lint d = (n - 1)\
    \ >> s;\n        // set runtime mod\n        RMOD = n;\n        // http://miller-rabin.appspot.com/\n\
    \        for (const lint base : {2, 325, 9375, 28178, 450775, 9780504, 1795265022})\
    \ {\n            rmint a = rmint(base).pow(d);\n            int i = s;\n     \
    \       while (a != 1 && a != -1 && a != 0 && i--) a *= a;\n            if (a\
    \ != -1 && i != s) return false;\n        }\n        return true;\n    }\n};\n"
  code: "#include <vector>\n\nusing namespace std;\nusing lint = long long;\n\n#define\
    \ RUNTIME_MODINT\n#include \"Modint.cpp\"\n\n#include \"ctz.cpp\"\n\nclass Prime\
    \ {\n    vector<int> prime;\n    vector<int> min_pf; // min_pf[i] = minimum prime\
    \ factor of i\n    // linear sieve https://cp-algorithms.com/algebra/prime-sieve-linear.html\n\
    \    void linearSieve(int N) {\n        min_pf[0] = min_pf[1] = -1;\n        for\
    \ (int i = 2; i < N; i++) {\n            if (min_pf[i] == 0) {\n             \
    \   prime.emplace_back(i);\n                min_pf[i] = i;\n            }\n  \
    \          for (int j : prime) {\n                if (j > min_pf[i] || i * j >=\
    \ N) break;\n                min_pf[i * j] = j;\n            }\n        }\n  \
    \  }\n\n    void Eratosthenes(lint N) {\n        for (lint i = 2; i * i < N; i++)\
    \ {\n            if (pTable[i]) {\n                for (int j = 0; i * (j + 2)\
    \ < N; j++) pTable[i * (j + 2)] = false;\n            }\n        }\n    }\n\n\
    public:\n    vector<bool> pTable;\n\n    explicit Prime(int N, bool useLinear)\
    \ : min_pf(N + 1) { linearSieve(N + 1); }\n    explicit Prime(int N = 1100000)\
    \ : pTable(N + 1, true) { Eratosthenes(N + 1); }\n\n    [[nodiscard]] vector<pair<lint,\
    \ int>> factorize(lint n) {\n        vector<pair<lint, int>> res;\n        for\
    \ (lint i = 2; i * i <= n; i++) {\n            int cnt = 0;\n            while\
    \ (n % i == 0) {\n                cnt++;\n                n /= i;\n          \
    \  }\n            if (cnt) res.emplace_back(i, cnt);\n        }\n        if (n\
    \ != 1) res.emplace_back(n, 1);\n\n        return res;\n    }\n\n    // Miller-Rabin\n\
    \    [[nodiscard]] bool isPrime(lint n) {\n        if (n <= 1 || n % 2 == 0) return\
    \ (n == 2);\n        const int s = ctz(n - 1);\n        const lint d = (n - 1)\
    \ >> s;\n        // set runtime mod\n        RMOD = n;\n        // http://miller-rabin.appspot.com/\n\
    \        for (const lint base : {2, 325, 9375, 28178, 450775, 9780504, 1795265022})\
    \ {\n            rmint a = rmint(base).pow(d);\n            int i = s;\n     \
    \       while (a != 1 && a != -1 && a != 0 && i--) a *= a;\n            if (a\
    \ != -1 && i != s) return false;\n        }\n        return true;\n    }\n};\n"
  dependsOn:
  - src/Modint.cpp
  - src/ctz.cpp
  - src/popcount.cpp
  isVerificationFile: false
  path: src/Prime.cpp
  requiredBy: []
  timestamp: '2021-01-24 12:11:15+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/enumerate_primes.test.cpp
documentation_of: src/Prime.cpp
layout: document
redirect_from:
- /library/src/Prime.cpp
- /library/src/Prime.cpp.html
title: src/Prime.cpp
---
