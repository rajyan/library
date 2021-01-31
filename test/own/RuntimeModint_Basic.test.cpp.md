---
data:
  _extendedDependsOn:
  - icon: ':question:'
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
  bundledCode: "#line 1 \"test/own/RuntimeModint_Basic.test.cpp\"\n\n#define PROBLEM\
    \ \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\n\n#line\
    \ 2 \"src/Modint.hpp\"\n\n#include <cassert>\n#include <iostream>\n#include <numeric>\n\
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
    \ mint = Mint<MOD>;\n\nint RMOD;\nusing rmint = Mint<RMOD>;\n#line 5 \"test/own/RuntimeModint_Basic.test.cpp\"\
    \n\n#line 8 \"test/own/RuntimeModint_Basic.test.cpp\"\n#include <iomanip>\n#include\
    \ <vector>\n#include <algorithm>\n#include <sstream>\n\nusing namespace std;\n\
    using lint = long long;\n\nstruct init {\n    init() {\n        cin.tie(nullptr);\n\
    \        ios::sync_with_stdio(false);\n        cout << fixed << setprecision(10);\n\
    \    }\n} init_;\n\nint main() {\n\n    RMOD = 55;\n\n    // default constructor\n\
    \    rmint m1{};\n    assert(m1.val == 0);\n    // constructor\n    rmint m2{RMOD\
    \ + 2};\n    assert(m2.val == 2);\n    // copy constructor, == operator\n    rmint\
    \ m3 = m2;\n    assert(m3.val == 2);\n    assert(m2 == m3);\n    // construct\
    \ with negative value\n    rmint m4(-1);\n    assert(m4.val == RMOD - 1);\n  \
    \  // vector, implicit conversion\n    vector<rmint> v(10, 1);\n    assert(all_of(v.begin(),\
    \ v.end(), [](const rmint &m) { return m == 1; }));\n    // +=, + operator\n \
    \   rmint m5(1), m6(1);\n    assert(m5 + m6 == 2);\n    m5 += m6;\n    assert(m5\
    \ == 2);\n    // -=, - operator\n    rmint m7(0), m8(1);\n    assert(m7 - m8 ==\
    \ RMOD - 1);\n    m7 -= m8;\n    assert(m7 == RMOD - 1);\n    // *=, * operator\n\
    \    rmint m9(1), m10(2);\n    assert(m9 * m10 == 2);\n    m9 *= m10;\n    assert(m9\
    \ == 2);\n    // pow\n    rmint m11(2);\n    assert(m11.pow(10) == 1024);\n  \
    \  assert(m11.pow(40) == (1LL << 40) % RMOD);\n    // /=, / operator\n    rmint\
    \ m12(4), m13(2), m14(3);\n    assert(m12 / m13 == 2);\n    assert(m12 / m13 *\
    \ m13 == m12);\n    assert(m13 / m14 * m14 == m13);\n    // - operator\n    rmint\
    \ m15(0), m16(1);\n    assert(-m15 == 0);\n    assert(-m16 == -1);\n    // !=,\
    \ < operator\n    assert(m15 != m16);\n    assert(m15 < m16);\n    // <<, >> operator\n\
    \    stringstream ss;\n    assert(ss << m15);\n    assert(ss.str() == to_string(m15.val));\n\
    \    assert(ss >> m16);\n    assert(m15 == m16);\n\n    cout << \"Hello World\\\
    n\";\n\n    return 0;\n}\n"
  code: "\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
    \n\n#include \"../../src/Modint.hpp\"\n\n#include <cassert>\n#include <iostream>\n\
    #include <iomanip>\n#include <vector>\n#include <algorithm>\n#include <sstream>\n\
    \nusing namespace std;\nusing lint = long long;\n\nstruct init {\n    init() {\n\
    \        cin.tie(nullptr);\n        ios::sync_with_stdio(false);\n        cout\
    \ << fixed << setprecision(10);\n    }\n} init_;\n\nint main() {\n\n    RMOD =\
    \ 55;\n\n    // default constructor\n    rmint m1{};\n    assert(m1.val == 0);\n\
    \    // constructor\n    rmint m2{RMOD + 2};\n    assert(m2.val == 2);\n    //\
    \ copy constructor, == operator\n    rmint m3 = m2;\n    assert(m3.val == 2);\n\
    \    assert(m2 == m3);\n    // construct with negative value\n    rmint m4(-1);\n\
    \    assert(m4.val == RMOD - 1);\n    // vector, implicit conversion\n    vector<rmint>\
    \ v(10, 1);\n    assert(all_of(v.begin(), v.end(), [](const rmint &m) { return\
    \ m == 1; }));\n    // +=, + operator\n    rmint m5(1), m6(1);\n    assert(m5\
    \ + m6 == 2);\n    m5 += m6;\n    assert(m5 == 2);\n    // -=, - operator\n  \
    \  rmint m7(0), m8(1);\n    assert(m7 - m8 == RMOD - 1);\n    m7 -= m8;\n    assert(m7\
    \ == RMOD - 1);\n    // *=, * operator\n    rmint m9(1), m10(2);\n    assert(m9\
    \ * m10 == 2);\n    m9 *= m10;\n    assert(m9 == 2);\n    // pow\n    rmint m11(2);\n\
    \    assert(m11.pow(10) == 1024);\n    assert(m11.pow(40) == (1LL << 40) % RMOD);\n\
    \    // /=, / operator\n    rmint m12(4), m13(2), m14(3);\n    assert(m12 / m13\
    \ == 2);\n    assert(m12 / m13 * m13 == m12);\n    assert(m13 / m14 * m14 == m13);\n\
    \    // - operator\n    rmint m15(0), m16(1);\n    assert(-m15 == 0);\n    assert(-m16\
    \ == -1);\n    // !=, < operator\n    assert(m15 != m16);\n    assert(m15 < m16);\n\
    \    // <<, >> operator\n    stringstream ss;\n    assert(ss << m15);\n    assert(ss.str()\
    \ == to_string(m15.val));\n    assert(ss >> m16);\n    assert(m15 == m16);\n\n\
    \    cout << \"Hello World\\n\";\n\n    return 0;\n}\n"
  dependsOn:
  - src/Modint.hpp
  isVerificationFile: true
  path: test/own/RuntimeModint_Basic.test.cpp
  requiredBy: []
  timestamp: '2021-01-31 22:05:14+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/own/RuntimeModint_Basic.test.cpp
layout: document
redirect_from:
- /verify/test/own/RuntimeModint_Basic.test.cpp
- /verify/test/own/RuntimeModint_Basic.test.cpp.html
title: test/own/RuntimeModint_Basic.test.cpp
---
