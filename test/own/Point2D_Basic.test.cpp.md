---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/Point2D.cpp
    title: src/Point2D.cpp
  - icon: ':heavy_check_mark:'
    path: src/makevec.cpp
    title: src/makevec.cpp
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
  bundledCode: "#line 1 \"test/own/Point2D_Basic.test.cpp\"\n\n#define PROBLEM \"\
    http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\n\n#line 1\
    \ \"src/makevec.cpp\"\n#include <vector>\n\nusing namespace std;\n\ntemplate<class\
    \ T>\nvector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }\ntemplate<class...\
    \ Size>\nauto make_vec(size_t s, Size... tail) {\n    return vector<decltype(make_vec(tail...))>(s,\
    \ make_vec(tail...));\n}\n#line 1 \"src/Point2D.cpp\"\n#include <cmath>\n#include\
    \ <iostream>\n#line 4 \"src/Point2D.cpp\"\n\nusing namespace std;\nusing lint\
    \ = long long;\n\ntemplate<class T>\nstruct Point2D {\n    T x{}, y{};\n\n   \
    \ constexpr Point2D() = default;\n    constexpr Point2D(const T &x, const T &y)\
    \ noexcept: x(x), y(y) {};\n    constexpr explicit Point2D(const pair<T, T> &p)\
    \ noexcept: x(p.first), y(p.second) {};\n\n    constexpr bool operator==(const\
    \ Point2D &rhs) const noexcept { return x == rhs.x && y == rhs.y; }\n    constexpr\
    \ bool operator!=(const Point2D &rhs) const noexcept { return !(*this == rhs);\
    \ }\n    constexpr bool operator<(const Point2D &rhs) const noexcept { return\
    \ x < rhs.x || (x == rhs.x && y < rhs.y); }\n    constexpr bool operator>(const\
    \ Point2D &rhs) const noexcept { return rhs < *this; }\n    constexpr bool operator<=(const\
    \ Point2D &rhs) const noexcept { return !(*this > rhs); }\n    constexpr bool\
    \ operator>=(const Point2D &rhs) const noexcept { return !(*this < rhs); }\n\n\
    \    constexpr Point2D operator+(const Point2D &rhs) const noexcept { return {x\
    \ + rhs.x, y + rhs.y}; }\n    constexpr Point2D operator-(const Point2D &rhs)\
    \ const noexcept { return {x - rhs.x, y - rhs.y}; }\n    constexpr Point2D operator*(const\
    \ T &k) const noexcept { return {k * x, k * y}; }\n    constexpr Point2D operator/(const\
    \ T &k) const noexcept { return {x / k, y / k}; }\n    constexpr Point2D &operator+=(const\
    \ Point2D &rhs) noexcept { return *this = *this + rhs; }\n    constexpr Point2D\
    \ &operator-=(const Point2D &rhs) noexcept { return *this = *this - rhs; }\n \
    \   constexpr Point2D &operator*=(const T &k) noexcept { return *this = *this\
    \ * k; }\n    constexpr Point2D &operator/=(const T &k) noexcept { return *this\
    \ = *this / k; }\n    constexpr Point2D &operator--(int) noexcept { return *this\
    \ -= Point2D(1, 1); };\n    constexpr Point2D &operator++(int) noexcept { return\
    \ *this += Point2D(1, 1); };\n    constexpr Point2D operator-() const noexcept\
    \ { return {-x, -y}; }\n\n    constexpr T operator*(const Point2D &rhs) const\
    \ noexcept { return x * rhs.x + y * rhs.y; }\n\n    [[nodiscard]] constexpr Point2D\
    \ nor() const noexcept { return {y, -x}; }\n    [[nodiscard]] constexpr long double\
    \ hypot() const noexcept { return ::hypotl(x, y); }\n    [[nodiscard]] constexpr\
    \ bool inGrid(const T &H, const T &W) const noexcept { return 0 <= x && x < H\
    \ && 0 <= y && y < W; }\n    template<class U>\n    [[nodiscard]] constexpr U\
    \ &operator[](vector<vector<U>> &v) const noexcept { return v[x][y]; }\n\n   \
    \ constexpr friend istream &operator>>(istream &is, Point2D &p) { return is >>\
    \ p.x >> p.y; }\n    constexpr friend ostream &operator<<(ostream &os, const Point2D\
    \ &p) { return os << p.x << ' ' << p.y; }\n};\n\nusing pnt = Point2D<lint>;\n\
    #line 6 \"test/own/Point2D_Basic.test.cpp\"\n\n#include <cassert>\n#line 9 \"\
    test/own/Point2D_Basic.test.cpp\"\n#include <iomanip>\n#line 11 \"test/own/Point2D_Basic.test.cpp\"\
    \n#include <algorithm>\n#include <sstream>\n\nusing namespace std;\nusing lint\
    \ = long long;\n\nstruct init {\n    init() {\n        cin.tie(nullptr);\n   \
    \     ios::sync_with_stdio(false);\n        cout << fixed << setprecision(10);\n\
    \    }\n} init_;\n\nint main() {\n\n    // default constructor\n    pnt p1{};\n\
    \    assert(p1.x == 0 && p1.y == 0);\n    // constructor\n    pnt p2(1, 2);\n\
    \    assert(p2.x == 1 && p2.y == 2);\n    // initializer_list construct\n    pnt\
    \ p3{3, 4};\n    assert(p3.x == 3 && p3.y == 4);\n    // copy constructor, ==,\
    \ < operator\n    pnt p4 = p3;\n    assert(p4.x == 3 && p4.y == 4);\n    assert(p3\
    \ == p4);\n    assert(p2 < p4);\n    // construct with std::pair\n    pnt p5(pair<lint,\
    \ lint>{});\n    assert(p1 == p5);\n    pair p = pair<lint, lint>{1, 2};\n   \
    \ pnt p6(p);\n    assert(p2 == p6);\n    // vector, implicit conversion\n    vector<pnt>\
    \ v(10, {1, 2});\n    assert(all_of(v.begin(), v.end(), [](const pnt &m) { return\
    \ m == pnt(1, 2); }));\n    // +=, + operator\n    pnt p7{}, p8(1, 1);\n    assert(p7\
    \ + p8 == pnt(1, 1));\n    p7 += p8;\n    assert(p7 == p8);\n    // -=, -, - pnt\
    \ operator\n    pnt p9{}, p10{2, 2};\n    assert(p9 - p10 == -p10);\n    p9 -=\
    \ p10;\n    assert(p9 == -p10);\n    // *=, * operator\n    pnt p11(2, 3);\n \
    \   assert(p11 * 2 == pnt(4, 6));\n    p11 *= 2;\n    assert(p11 == pnt(4, 6));\n\
    \    // /=, / operator\n    pnt p12(2, 5);\n    assert(p12 / 2 == pnt(1, 2));\n\
    \    p12 /= 2;\n    assert(p12 == pnt(1, 2));\n    // ++ -- operator\n    pnt\
    \ p13{};\n    p13++;\n    assert(p13 == pnt(1, 1));\n    p13--;\n    assert(p13\
    \ == pnt{});\n    // pnt * pnt operator\n    pnt p14{1, 2}, p15{3, 4};\n    assert(p14\
    \ * p15 == 11);\n    // nor\n    pnt p16{1, 2};\n    assert(p16.nor() == pnt(2,\
    \ -1));\n    assert(p16 * p16.nor() == 0);\n    // hypot\n    pnt p17{3, 4};\n\
    \    assert(p17.hypot() == 5.0);\n    // inGrid, [] vector operator\n    const\
    \ int h = 3, w = 4;\n    auto vv = make_vec(h, w, 0.0);\n    assert(pnt(1, 2).inGrid(h,\
    \ w));\n    assert(!pnt(3, 2).inGrid(h, w));\n    assert(!pnt(4, 5).inGrid(h,\
    \ w));\n    vv[0][1] = 3.0;\n    assert(pnt(0, 1)[vv] == 3.0);\n    pnt(1, 2)[vv]\
    \ = 2.0;\n    assert(pnt(1, 2)[vv] == 2.0);\n    // <<, >> operator\n    stringstream\
    \ ss;\n    assert(ss << p17);\n    assert(ss.str() == to_string(p17.x) + ' ' +\
    \ to_string(p17.y));\n    assert(ss >> p16);\n    assert(p17 == p16);\n\n    ////\
    \ test constexpr\n\n    // default constructor\n    constexpr pnt cp1{};\n   \
    \ static_assert(cp1.x == 0 && cp1.y == 0);\n    // constructor\n    constexpr\
    \ pnt cp2(1, 2);\n    static_assert(cp2.x == 1 && cp2.y == 2);\n    // initializer_list\
    \ construct\n    constexpr pnt cp3{3, 4};\n    static_assert(cp3.x == 3 && cp3.y\
    \ == 4);\n    // copy constructor, ==, < operator\n    constexpr pnt cp4 = cp3;\n\
    \    static_assert(cp4.x == 3 && cp4.y == 4);\n    static_assert(cp3 == cp4);\n\
    \    static_assert(cp2 < cp4);\n    // construct with std::pair\n    constexpr\
    \ pnt cp5(pair<lint, lint>{});\n    static_assert(cp1 == cp5);\n    constexpr\
    \ pair cp = pair<lint, lint>{1, 2};\n    constexpr pnt cp6(cp);\n    static_assert(cp2\
    \ == cp6);\n    // array\n    constexpr pnt cv[5];\n    static_assert(cv[0] ==\
    \ pnt{});\n    static_assert(cv[1] == pnt{});\n    static_assert(cv[2] == pnt{});\n\
    \    static_assert(cv[3] == pnt{});\n    static_assert(cv[4] == pnt{});\n    //\
    \ +=, + operator\n    constexpr pnt cp7{}, cp8(1, 1);\n    static_assert(cp7 +\
    \ cp8 == pnt(1, 1));\n    constexpr auto additionAssign = [=]() {\n        pnt\
    \ res = cp7;\n        res += cp8;\n        return res;\n    };\n    static_assert(additionAssign()\
    \ == cp8);\n    // -=, -, - pnt operator\n    constexpr pnt cp9{}, cp10{2, 2};\n\
    \    static_assert(cp9 - cp10 == -cp10);\n    constexpr auto subtractionAssign\
    \ = [=]() {\n        pnt res = cp9;\n        res -= cp10;\n        return res;\n\
    \    };\n    static_assert(subtractionAssign() == -cp10);\n    // *=, * operator\n\
    \    constexpr pnt cp11(2, 3);\n    static_assert(cp11 * 2 == pnt(4, 6));\n  \
    \  constexpr auto multiplicationAssign = [=]() {\n        pnt res = cp11;\n  \
    \      res *= 2;\n        return res;\n    };\n    static_assert(multiplicationAssign()\
    \ == pnt(4, 6));\n    // /=, / operator\n    constexpr pnt cp12(2, 5);\n    static_assert(cp12\
    \ / 2 == pnt(1, 2));\n    constexpr auto divisionAssign = [=]() {\n        pnt\
    \ res = cp12;\n        res /= 2;\n        return res;\n    };\n    static_assert(divisionAssign()\
    \ == pnt(1, 2));\n    // ++ -- operator\n    constexpr pnt cp13{};\n    constexpr\
    \ auto increment = [=]() {\n        pnt res = cp13;\n        res++;\n        return\
    \ res;\n    };\n    static_assert(increment() == pnt(1, 1));\n    constexpr auto\
    \ decrement = [=]() {\n        pnt res = increment();\n        res--;\n      \
    \  return res;\n    };\n    static_assert(decrement() == pnt{});\n    // pnt *\
    \ pnt operator\n    constexpr pnt cp14{1, 2}, cp15{3, 4};\n    static_assert(cp14\
    \ * cp15 == 11);\n    // nor\n    constexpr pnt cp16{1, 2};\n    static_assert(cp16.nor()\
    \ == pnt(2, -1));\n    static_assert(cp16 * cp16.nor() == 0);\n    // inGrid\n\
    \    constexpr double cvv[h][w]{};\n    static_assert(pnt(1, 2).inGrid(h, w));\n\
    \    static_assert(!pnt(3, 2).inGrid(h, w));\n    static_assert(!pnt(4, 5).inGrid(h,\
    \ w));\n    constexpr pnt cp17(1, 0);\n\n    cout << \"Hello World\\n\";\n\n \
    \   return 0;\n}\n"
  code: "\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
    \n\n#include \"../../src/makevec.cpp\"\n#include \"../../src/Point2D.cpp\"\n\n\
    #include <cassert>\n#include <iostream>\n#include <iomanip>\n#include <vector>\n\
    #include <algorithm>\n#include <sstream>\n\nusing namespace std;\nusing lint =\
    \ long long;\n\nstruct init {\n    init() {\n        cin.tie(nullptr);\n     \
    \   ios::sync_with_stdio(false);\n        cout << fixed << setprecision(10);\n\
    \    }\n} init_;\n\nint main() {\n\n    // default constructor\n    pnt p1{};\n\
    \    assert(p1.x == 0 && p1.y == 0);\n    // constructor\n    pnt p2(1, 2);\n\
    \    assert(p2.x == 1 && p2.y == 2);\n    // initializer_list construct\n    pnt\
    \ p3{3, 4};\n    assert(p3.x == 3 && p3.y == 4);\n    // copy constructor, ==,\
    \ < operator\n    pnt p4 = p3;\n    assert(p4.x == 3 && p4.y == 4);\n    assert(p3\
    \ == p4);\n    assert(p2 < p4);\n    // construct with std::pair\n    pnt p5(pair<lint,\
    \ lint>{});\n    assert(p1 == p5);\n    pair p = pair<lint, lint>{1, 2};\n   \
    \ pnt p6(p);\n    assert(p2 == p6);\n    // vector, implicit conversion\n    vector<pnt>\
    \ v(10, {1, 2});\n    assert(all_of(v.begin(), v.end(), [](const pnt &m) { return\
    \ m == pnt(1, 2); }));\n    // +=, + operator\n    pnt p7{}, p8(1, 1);\n    assert(p7\
    \ + p8 == pnt(1, 1));\n    p7 += p8;\n    assert(p7 == p8);\n    // -=, -, - pnt\
    \ operator\n    pnt p9{}, p10{2, 2};\n    assert(p9 - p10 == -p10);\n    p9 -=\
    \ p10;\n    assert(p9 == -p10);\n    // *=, * operator\n    pnt p11(2, 3);\n \
    \   assert(p11 * 2 == pnt(4, 6));\n    p11 *= 2;\n    assert(p11 == pnt(4, 6));\n\
    \    // /=, / operator\n    pnt p12(2, 5);\n    assert(p12 / 2 == pnt(1, 2));\n\
    \    p12 /= 2;\n    assert(p12 == pnt(1, 2));\n    // ++ -- operator\n    pnt\
    \ p13{};\n    p13++;\n    assert(p13 == pnt(1, 1));\n    p13--;\n    assert(p13\
    \ == pnt{});\n    // pnt * pnt operator\n    pnt p14{1, 2}, p15{3, 4};\n    assert(p14\
    \ * p15 == 11);\n    // nor\n    pnt p16{1, 2};\n    assert(p16.nor() == pnt(2,\
    \ -1));\n    assert(p16 * p16.nor() == 0);\n    // hypot\n    pnt p17{3, 4};\n\
    \    assert(p17.hypot() == 5.0);\n    // inGrid, [] vector operator\n    const\
    \ int h = 3, w = 4;\n    auto vv = make_vec(h, w, 0.0);\n    assert(pnt(1, 2).inGrid(h,\
    \ w));\n    assert(!pnt(3, 2).inGrid(h, w));\n    assert(!pnt(4, 5).inGrid(h,\
    \ w));\n    vv[0][1] = 3.0;\n    assert(pnt(0, 1)[vv] == 3.0);\n    pnt(1, 2)[vv]\
    \ = 2.0;\n    assert(pnt(1, 2)[vv] == 2.0);\n    // <<, >> operator\n    stringstream\
    \ ss;\n    assert(ss << p17);\n    assert(ss.str() == to_string(p17.x) + ' ' +\
    \ to_string(p17.y));\n    assert(ss >> p16);\n    assert(p17 == p16);\n\n    ////\
    \ test constexpr\n\n    // default constructor\n    constexpr pnt cp1{};\n   \
    \ static_assert(cp1.x == 0 && cp1.y == 0);\n    // constructor\n    constexpr\
    \ pnt cp2(1, 2);\n    static_assert(cp2.x == 1 && cp2.y == 2);\n    // initializer_list\
    \ construct\n    constexpr pnt cp3{3, 4};\n    static_assert(cp3.x == 3 && cp3.y\
    \ == 4);\n    // copy constructor, ==, < operator\n    constexpr pnt cp4 = cp3;\n\
    \    static_assert(cp4.x == 3 && cp4.y == 4);\n    static_assert(cp3 == cp4);\n\
    \    static_assert(cp2 < cp4);\n    // construct with std::pair\n    constexpr\
    \ pnt cp5(pair<lint, lint>{});\n    static_assert(cp1 == cp5);\n    constexpr\
    \ pair cp = pair<lint, lint>{1, 2};\n    constexpr pnt cp6(cp);\n    static_assert(cp2\
    \ == cp6);\n    // array\n    constexpr pnt cv[5];\n    static_assert(cv[0] ==\
    \ pnt{});\n    static_assert(cv[1] == pnt{});\n    static_assert(cv[2] == pnt{});\n\
    \    static_assert(cv[3] == pnt{});\n    static_assert(cv[4] == pnt{});\n    //\
    \ +=, + operator\n    constexpr pnt cp7{}, cp8(1, 1);\n    static_assert(cp7 +\
    \ cp8 == pnt(1, 1));\n    constexpr auto additionAssign = [=]() {\n        pnt\
    \ res = cp7;\n        res += cp8;\n        return res;\n    };\n    static_assert(additionAssign()\
    \ == cp8);\n    // -=, -, - pnt operator\n    constexpr pnt cp9{}, cp10{2, 2};\n\
    \    static_assert(cp9 - cp10 == -cp10);\n    constexpr auto subtractionAssign\
    \ = [=]() {\n        pnt res = cp9;\n        res -= cp10;\n        return res;\n\
    \    };\n    static_assert(subtractionAssign() == -cp10);\n    // *=, * operator\n\
    \    constexpr pnt cp11(2, 3);\n    static_assert(cp11 * 2 == pnt(4, 6));\n  \
    \  constexpr auto multiplicationAssign = [=]() {\n        pnt res = cp11;\n  \
    \      res *= 2;\n        return res;\n    };\n    static_assert(multiplicationAssign()\
    \ == pnt(4, 6));\n    // /=, / operator\n    constexpr pnt cp12(2, 5);\n    static_assert(cp12\
    \ / 2 == pnt(1, 2));\n    constexpr auto divisionAssign = [=]() {\n        pnt\
    \ res = cp12;\n        res /= 2;\n        return res;\n    };\n    static_assert(divisionAssign()\
    \ == pnt(1, 2));\n    // ++ -- operator\n    constexpr pnt cp13{};\n    constexpr\
    \ auto increment = [=]() {\n        pnt res = cp13;\n        res++;\n        return\
    \ res;\n    };\n    static_assert(increment() == pnt(1, 1));\n    constexpr auto\
    \ decrement = [=]() {\n        pnt res = increment();\n        res--;\n      \
    \  return res;\n    };\n    static_assert(decrement() == pnt{});\n    // pnt *\
    \ pnt operator\n    constexpr pnt cp14{1, 2}, cp15{3, 4};\n    static_assert(cp14\
    \ * cp15 == 11);\n    // nor\n    constexpr pnt cp16{1, 2};\n    static_assert(cp16.nor()\
    \ == pnt(2, -1));\n    static_assert(cp16 * cp16.nor() == 0);\n    // inGrid\n\
    \    constexpr double cvv[h][w]{};\n    static_assert(pnt(1, 2).inGrid(h, w));\n\
    \    static_assert(!pnt(3, 2).inGrid(h, w));\n    static_assert(!pnt(4, 5).inGrid(h,\
    \ w));\n    constexpr pnt cp17(1, 0);\n\n    cout << \"Hello World\\n\";\n\n \
    \   return 0;\n}\n"
  dependsOn:
  - src/makevec.cpp
  - src/Point2D.cpp
  isVerificationFile: true
  path: test/own/Point2D_Basic.test.cpp
  requiredBy: []
  timestamp: '2021-01-26 21:16:08+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/own/Point2D_Basic.test.cpp
layout: document
redirect_from:
- /verify/test/own/Point2D_Basic.test.cpp
- /verify/test/own/Point2D_Basic.test.cpp.html
title: test/own/Point2D_Basic.test.cpp
---
