---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/Modint.hpp
    title: src/Modint.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
  bundledCode: "#line 1 \"test/own/Modint_Basic.test.cpp\"\n\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
    \n\n#line 2 \"src/Modint.hpp\"\n\n#include <cassert>\n#include <iostream>\n#include\
    \ <numeric>\n\nusing namespace std;\nusing lint = long long;\n\ntemplate<const\
    \ int &Modulo>\nstruct Mint {\n\n    lint val;\n    constexpr Mint(lint v = 0)\
    \ noexcept: val(v % Modulo) { if (val < 0) val += Modulo; }\n\n    constexpr Mint\
    \ &operator+=(const Mint &r) noexcept {\n        val += r.val;\n        if (val\
    \ >= Modulo) val -= Modulo;\n        return *this;\n    }\n    constexpr Mint\
    \ &operator-=(const Mint &r) noexcept {\n        val -= r.val;\n        if (val\
    \ < 0) val += Modulo;\n        return *this;\n    }\n    constexpr Mint &operator*=(const\
    \ Mint &r) noexcept {\n        val = val * r.val % Modulo;\n        return *this;\n\
    \    }\n    constexpr Mint &operator/=(const Mint &r) noexcept {\n        lint\
    \ a{r.val}, b{Modulo}, u{1}, v{0};\n        while (b) {\n            lint t =\
    \ a / b;\n            a -= t * b;\n            a ^= b, b ^= a, a ^= b;\n     \
    \       u -= t * v;\n            u ^= v, v ^= u, u ^= v;\n        }\n        assert(a\
    \ == 1);\n        val = val * u % Modulo;\n        if (val < 0) val += Modulo;\n\
    \        return *this;\n    }\n\n    constexpr Mint operator+(const Mint &r) const\
    \ noexcept { return Mint(*this) += r; }\n    constexpr Mint operator-(const Mint\
    \ &r) const noexcept { return Mint(*this) -= r; }\n    constexpr Mint operator*(const\
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
    \ mint = Mint<MOD>;\n\nint RMOD;\nusing rmint = Mint<RMOD>;\n#line 5 \"test/own/Modint_Basic.test.cpp\"\
    \n\n#line 8 \"test/own/Modint_Basic.test.cpp\"\n#include <iomanip>\n#include <vector>\n\
    #include <algorithm>\n#include <sstream>\n\nusing namespace std;\nusing lint =\
    \ long long;\n\nstruct init {\n    init() {\n        cin.tie(nullptr);\n     \
    \   ios::sync_with_stdio(false);\n        cout << fixed << setprecision(10);\n\
    \    }\n} init_;\n\nint main() {\n\n    // default constructor\n    mint m1{};\n\
    \    assert(m1.val == 0);\n    // constructor\n    mint m2{MOD + 2};\n    assert(m2.val\
    \ == 2);\n    // copy constructor, == operator\n    mint m3 = m2;\n    assert(m3.val\
    \ == 2);\n    assert(m2 == m3);\n    // construct with negative value\n    mint\
    \ m4(-1);\n    assert(m4.val == MOD - 1);\n    // vector, implicit conversion\n\
    \    vector<mint> v(10, 1);\n    assert(all_of(v.begin(), v.end(), [](const mint\
    \ &m) { return m == 1; }));\n    // +=, + operator\n    mint m5(1), m6(1);\n \
    \   assert(m5 + m6 == 2);\n    m5 += m6;\n    assert(m5 == 2);\n    // -=, - operator\n\
    \    mint m7(0), m8(1);\n    assert(m7 - m8 == MOD - 1);\n    m7 -= m8;\n    assert(m7\
    \ == MOD - 1);\n    // *=, * operator\n    mint m9(1), m10(2);\n    assert(m9\
    \ * m10 == 2);\n    m9 *= m10;\n    assert(m9 == 2);\n    // pow\n    mint m11(2);\n\
    \    assert(m11.pow(10) == 1024);\n    assert(m11.pow(40) == (1LL << 40) % MOD);\n\
    \    // /=, / operator\n    mint m12(4), m13(2), m14(3);\n    assert(m12 / m13\
    \ == 2);\n    assert(m12 / m13 * m13 == m12);\n    assert(m13 / m14 * m14 == m13);\n\
    \    // confirm by Fermat's little theorem when MOD is prime\n    assert(mint(1)\
    \ / m14 == m14.pow(MOD - 2));\n    assert(m13 / m14 == m13 * m14.pow(MOD - 2));\n\
    \    // - operator\n    mint m15(0), m16(1);\n    assert(-m15 == 0);\n    assert(-m16\
    \ == -1);\n    // !=, < operator\n    assert(m15 != m16);\n    assert(m15 < m16);\n\
    \    // <<, >> operator\n    stringstream ss;\n    assert(ss << m15);\n    assert(ss.str()\
    \ == to_string(m15.val));\n    assert(ss >> m16);\n    assert(m15 == m16);\n\n\
    \    // default constructor\n    constexpr mint cm1{};\n    static_assert(cm1.val\
    \ == 0);\n    // constructor\n    constexpr mint cm2{MOD + 2};\n    static_assert(cm2.val\
    \ == 2);\n    // copy constructor, == operator\n    constexpr mint cm3 = cm2;\n\
    \    static_assert(cm3.val == 2);\n    static_assert(cm2 == cm3);\n    // construct\
    \ with negative value\n    constexpr mint cm4(-1);\n    static_assert(cm4.val\
    \ == MOD - 1);\n    // +=, + operator\n    constexpr mint cm5(1), cm6(1);\n  \
    \  static_assert(cm5 + cm6 == 2);\n    constexpr auto additionAssign = [=]() {\n\
    \        mint res = cm5;\n        res += cm6;\n        return res;\n    };\n \
    \   static_assert(additionAssign() == 2);\n    // -=, - operator\n    constexpr\
    \ mint cm7(0), cm8(1);\n    static_assert(cm7 - cm8 == MOD - 1);\n    constexpr\
    \ auto subtractionAssign = [=]() {\n        mint res = cm7;\n        res -= cm8;\n\
    \        return res;\n    };\n    static_assert(subtractionAssign() == MOD - 1);\n\
    \    // *=, * operator\n    constexpr mint cm9(1), cm10(2);\n    static_assert(cm9\
    \ * cm10 == 2);\n    constexpr auto multiplicationAssign = [=]() {\n        mint\
    \ res = cm9;\n        res *= cm10;\n        return res;\n    };\n    static_assert(multiplicationAssign()\
    \ == 2);\n    // pow\n    constexpr mint cm11(2);\n    static_assert(cm11.pow(10)\
    \ == 1024);\n    static_assert(cm11.pow(40) == (1LL << 40) % MOD);\n    // /=,\
    \ / operator\n    constexpr mint cm12(4), cm13(2), cm14(3);\n    static_assert(cm12\
    \ / cm13 == 2);\n    static_assert(cm12 / cm13 * cm13 == cm12);\n    static_assert(cm13\
    \ / cm14 * cm14 == cm13);\n    // confirm by Fermat's little theorem when MOD\
    \ is prime\n    static_assert(mint(1) / cm14 == cm14.pow(MOD - 2));\n    static_assert(cm13\
    \ / cm14 == cm13 * cm14.pow(MOD - 2));\n    // - operator\n    constexpr mint\
    \ cm15(0), cm16(1);\n    static_assert(-cm15 == 0);\n    static_assert(-cm16 ==\
    \ -1);\n    // !=, < operator\n    static_assert(cm15 != cm16);\n    static_assert(cm15\
    \ < cm16);\n\n    cout << \"Hello World\\n\";\n\n    return 0;\n}\n"
  code: "\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
    \n\n#include \"../../src/Modint.hpp\"\n\n#include <cassert>\n#include <iostream>\n\
    #include <iomanip>\n#include <vector>\n#include <algorithm>\n#include <sstream>\n\
    \nusing namespace std;\nusing lint = long long;\n\nstruct init {\n    init() {\n\
    \        cin.tie(nullptr);\n        ios::sync_with_stdio(false);\n        cout\
    \ << fixed << setprecision(10);\n    }\n} init_;\n\nint main() {\n\n    // default\
    \ constructor\n    mint m1{};\n    assert(m1.val == 0);\n    // constructor\n\
    \    mint m2{MOD + 2};\n    assert(m2.val == 2);\n    // copy constructor, ==\
    \ operator\n    mint m3 = m2;\n    assert(m3.val == 2);\n    assert(m2 == m3);\n\
    \    // construct with negative value\n    mint m4(-1);\n    assert(m4.val ==\
    \ MOD - 1);\n    // vector, implicit conversion\n    vector<mint> v(10, 1);\n\
    \    assert(all_of(v.begin(), v.end(), [](const mint &m) { return m == 1; }));\n\
    \    // +=, + operator\n    mint m5(1), m6(1);\n    assert(m5 + m6 == 2);\n  \
    \  m5 += m6;\n    assert(m5 == 2);\n    // -=, - operator\n    mint m7(0), m8(1);\n\
    \    assert(m7 - m8 == MOD - 1);\n    m7 -= m8;\n    assert(m7 == MOD - 1);\n\
    \    // *=, * operator\n    mint m9(1), m10(2);\n    assert(m9 * m10 == 2);\n\
    \    m9 *= m10;\n    assert(m9 == 2);\n    // pow\n    mint m11(2);\n    assert(m11.pow(10)\
    \ == 1024);\n    assert(m11.pow(40) == (1LL << 40) % MOD);\n    // /=, / operator\n\
    \    mint m12(4), m13(2), m14(3);\n    assert(m12 / m13 == 2);\n    assert(m12\
    \ / m13 * m13 == m12);\n    assert(m13 / m14 * m14 == m13);\n    // confirm by\
    \ Fermat's little theorem when MOD is prime\n    assert(mint(1) / m14 == m14.pow(MOD\
    \ - 2));\n    assert(m13 / m14 == m13 * m14.pow(MOD - 2));\n    // - operator\n\
    \    mint m15(0), m16(1);\n    assert(-m15 == 0);\n    assert(-m16 == -1);\n \
    \   // !=, < operator\n    assert(m15 != m16);\n    assert(m15 < m16);\n    //\
    \ <<, >> operator\n    stringstream ss;\n    assert(ss << m15);\n    assert(ss.str()\
    \ == to_string(m15.val));\n    assert(ss >> m16);\n    assert(m15 == m16);\n\n\
    \    // default constructor\n    constexpr mint cm1{};\n    static_assert(cm1.val\
    \ == 0);\n    // constructor\n    constexpr mint cm2{MOD + 2};\n    static_assert(cm2.val\
    \ == 2);\n    // copy constructor, == operator\n    constexpr mint cm3 = cm2;\n\
    \    static_assert(cm3.val == 2);\n    static_assert(cm2 == cm3);\n    // construct\
    \ with negative value\n    constexpr mint cm4(-1);\n    static_assert(cm4.val\
    \ == MOD - 1);\n    // +=, + operator\n    constexpr mint cm5(1), cm6(1);\n  \
    \  static_assert(cm5 + cm6 == 2);\n    constexpr auto additionAssign = [=]() {\n\
    \        mint res = cm5;\n        res += cm6;\n        return res;\n    };\n \
    \   static_assert(additionAssign() == 2);\n    // -=, - operator\n    constexpr\
    \ mint cm7(0), cm8(1);\n    static_assert(cm7 - cm8 == MOD - 1);\n    constexpr\
    \ auto subtractionAssign = [=]() {\n        mint res = cm7;\n        res -= cm8;\n\
    \        return res;\n    };\n    static_assert(subtractionAssign() == MOD - 1);\n\
    \    // *=, * operator\n    constexpr mint cm9(1), cm10(2);\n    static_assert(cm9\
    \ * cm10 == 2);\n    constexpr auto multiplicationAssign = [=]() {\n        mint\
    \ res = cm9;\n        res *= cm10;\n        return res;\n    };\n    static_assert(multiplicationAssign()\
    \ == 2);\n    // pow\n    constexpr mint cm11(2);\n    static_assert(cm11.pow(10)\
    \ == 1024);\n    static_assert(cm11.pow(40) == (1LL << 40) % MOD);\n    // /=,\
    \ / operator\n    constexpr mint cm12(4), cm13(2), cm14(3);\n    static_assert(cm12\
    \ / cm13 == 2);\n    static_assert(cm12 / cm13 * cm13 == cm12);\n    static_assert(cm13\
    \ / cm14 * cm14 == cm13);\n    // confirm by Fermat's little theorem when MOD\
    \ is prime\n    static_assert(mint(1) / cm14 == cm14.pow(MOD - 2));\n    static_assert(cm13\
    \ / cm14 == cm13 * cm14.pow(MOD - 2));\n    // - operator\n    constexpr mint\
    \ cm15(0), cm16(1);\n    static_assert(-cm15 == 0);\n    static_assert(-cm16 ==\
    \ -1);\n    // !=, < operator\n    static_assert(cm15 != cm16);\n    static_assert(cm15\
    \ < cm16);\n\n    cout << \"Hello World\\n\";\n\n    return 0;\n}\n"
  dependsOn:
  - src/Modint.hpp
  isVerificationFile: true
  path: test/own/Modint_Basic.test.cpp
  requiredBy: []
  timestamp: '2021-02-04 23:16:22+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/own/Modint_Basic.test.cpp
layout: document
redirect_from:
- /verify/test/own/Modint_Basic.test.cpp
- /verify/test/own/Modint_Basic.test.cpp.html
title: test/own/Modint_Basic.test.cpp
---