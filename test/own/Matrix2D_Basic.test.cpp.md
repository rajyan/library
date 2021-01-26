---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/Matrix2D.cpp
    title: src/Matrix2D.cpp
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
  bundledCode: "#line 1 \"test/own/Matrix2D_Basic.test.cpp\"\n\n#define PROBLEM \"\
    http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\n\n#line 1\
    \ \"src/makevec.cpp\"\n#include <vector>\n\nusing namespace std;\n\ntemplate<class\
    \ T>\nvector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }\ntemplate<class...\
    \ Size>\nauto make_vec(size_t s, Size... tail) {\n    return vector<decltype(make_vec(tail...))>(s,\
    \ make_vec(tail...));\n}\n#line 1 \"src/Matrix2D.cpp\"\n\n#line 1 \"src/Point2D.cpp\"\
    \n#include <cmath>\n#include <iostream>\n#line 4 \"src/Point2D.cpp\"\n\nusing\
    \ namespace std;\nusing lint = long long;\n\ntemplate<class T>\nstruct Point2D\
    \ {\n    T x{}, y{};\n\n    constexpr Point2D() = default;\n    constexpr Point2D(const\
    \ T &x, const T &y) noexcept: x(x), y(y) {};\n    constexpr explicit Point2D(const\
    \ pair<T, T> &p) noexcept: x(p.first), y(p.second) {};\n\n    constexpr bool operator==(const\
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
    \ &operator[](vector<vector<U>> &v) { return v[x][y]; }\n\n    friend istream\
    \ &operator>>(istream &is, Point2D &p) { return is >> p.x >> p.y; }\n    friend\
    \ ostream &operator<<(ostream &os, const Point2D &p) { return os << p.x << ' '\
    \ << p.y; }\n};\n\nusing pnt = Point2D<lint>;\n#line 3 \"src/Matrix2D.cpp\"\n\n\
    template<class T>\nstruct Matrix2D {\n    Point2D<T> r0{}, r1{};\n\n    constexpr\
    \ Matrix2D() = default;\n    constexpr Matrix2D(const Point2D<T> &r0, const Point2D<T>\
    \ &r1) noexcept: r0(r0), r1(r1) {};\n\n    constexpr bool operator==(const Matrix2D\
    \ &rhs) const noexcept { return r0 == rhs.r0 && r1 == rhs.r1; }\n    constexpr\
    \ bool operator!=(const Matrix2D &rhs) const noexcept { return !(*this == rhs);\
    \ }\n\n    constexpr Matrix2D operator+(const Matrix2D &rhs) const noexcept {\
    \ return {r0 + rhs.r0, r1 + rhs.r1}; }\n    constexpr Matrix2D operator-(const\
    \ Matrix2D &rhs) const noexcept { return {r0 - rhs.r0, r1 - rhs.r1}; }\n    constexpr\
    \ Matrix2D operator*(const Matrix2D &rhs) const noexcept {\n        const Matrix2D\
    \ rhs_T = rhs.trans();\n        return {{r0 * rhs_T.r0, r0 * rhs_T.r1},\n    \
    \            {r1 * rhs_T.r0, r1 * rhs_T.r1}};\n    }\n    constexpr Matrix2D &operator+=(const\
    \ Matrix2D &rhs) noexcept { return *this = *this + rhs; }\n    constexpr Matrix2D\
    \ &operator-=(const Matrix2D &rhs) noexcept { return *this = *this - rhs; }\n\
    \    constexpr Matrix2D &operator*=(const Matrix2D &rhs) noexcept { return *this\
    \ = *this * rhs; }\n    constexpr Matrix2D operator-() const noexcept { return\
    \ {-r0, -r1}; }\n\n    constexpr Point2D<T> operator*(const Point2D<T> &b_T) const\
    \ noexcept { return {r0 * b_T, r1 * b_T}; }\n\n    [[nodiscard]] constexpr Matrix2D\
    \ trans() const noexcept {\n        return {{r0.x, r1.x},\n                {r0.y,\
    \ r1.y}};\n    }\n    [[nodiscard]] constexpr Matrix2D identity() const noexcept\
    \ {\n        return {{1, 0},\n                {0, 1}};\n    }\n    [[nodiscard]]\
    \ constexpr Matrix2D pow(lint n) const noexcept {\n        Matrix2D res{Matrix2D().identity()},\
    \ tmp{*this};\n        while (n > 0) {\n            if (n & 1) res *= tmp;\n \
    \           tmp *= tmp;\n            n >>= 1;\n        }\n        return res;\n\
    \    }\n    [[nodiscard]] constexpr T det() const noexcept { return r0 * r1.nor();\
    \ }\n};\n\nusing mat = Matrix2D<lint>;\n#line 6 \"test/own/Matrix2D_Basic.test.cpp\"\
    \n\n#include <cassert>\n#include <type_traits>\n#line 10 \"test/own/Matrix2D_Basic.test.cpp\"\
    \n#include <iomanip>\n#line 12 \"test/own/Matrix2D_Basic.test.cpp\"\n#include\
    \ <algorithm>\n\nusing namespace std;\nusing lint = long long;\n\nstruct init\
    \ {\n    init() {\n        cin.tie(nullptr);\n        ios::sync_with_stdio(false);\n\
    \        cout << fixed << setprecision(10);\n    }\n} init_;\n\nint main() {\n\
    \n    // default constructor\n    mat M1;\n    assert(M1.r0 == pnt{} && M1.r1\
    \ == pnt{});\n    // constructor\n    mat M2(pnt(1, 2), pnt(3, 4));\n    assert(M2.r0\
    \ == pnt(1, 2) && M2.r1 == pnt(3, 4));\n    // initializer_list construct, ==\
    \ operator\n    mat M3{{1, 2},\n           {3, 4}};\n    assert(M3 == M2);\n \
    \   // copy constructor, == operator\n    mat M4 = M3;\n    assert(M4 == M3);\n\
    \    // vector, implicit conversion\n    vector<mat> v(10);\n    assert(all_of(v.begin(),\
    \ v.end(), [](const mat &m) { return m == mat{}; }));\n    // +=, + operator\n\
    \    mat M5{{1, 2},\n           {3, 4}};\n    mat M6{{1, 2},\n           {3, 4}};\n\
    \    assert(M5 + M6 == mat({2, 4}, {6, 8}));\n    M5 += M6;\n    assert(M5 ==\
    \ mat({2, 4}, {6, 8}));\n    // -=, -, - pnt operator\n    mat M7{};\n    mat\
    \ M8{{-1, 0},\n           {-4, 3}};\n    assert(M7 - M8 == -M8);\n    M7 -= M8;\n\
    \    assert(M7 == -M8);\n    // *=, * operator\n    mat M9{{1, 2},\n         \
    \  {3, 4}};\n    mat M10{{0, 1},\n            {2, 3}};\n    assert(M9 * M10 ==\
    \ mat({4, 7}, {8, 15}));\n    M9 *= M10;\n    assert(M9 == mat({4, 7}, {8, 15}));\n\
    \    // mat * pnt operator\n    mat M11{{1, 2},\n            {3, 4}};\n    pnt\
    \ p{1, 2};\n    assert(M11 * p == pnt(5, 11));\n    // transpose\n    mat M12{{0,\
    \ 2},\n            {3, 5}};\n    assert(M12.trans() == mat({0, 3}, {2, 5}));\n\
    \    // identity\n    mat M13{{5, 1},\n            {4, 2}};\n    assert(mat().identity()\
    \ == mat({1, 0}, {0, 1}));\n    assert(M13 * mat().identity() == M13);\n    //\
    \ power\n    mat M14{{1, 2},\n            {3, 4}};\n    assert(M14.pow(2) == M14\
    \ * M14);\n    assert(M14.pow(5) == M14 * M14 * M14 * M14 * M14);\n    // determinant\n\
    \    assert(M14.det() == -2);\n\n    //// test constexpr\n\n    // default constructor\n\
    \    constexpr mat CM1;\n    static_assert(CM1.r0 == pnt{} && CM1.r1 == pnt{});\n\
    \    // constructor\n    constexpr mat CM2(pnt(1, 2), pnt(3, 4));\n    static_assert(CM2.r0\
    \ == pnt(1, 2) && CM2.r1 == pnt(3, 4));\n    // initializer_list construct, ==\
    \ operator\n    constexpr mat CM3{{1, 2},\n                      {3, 4}};\n  \
    \  static_assert(CM3 == CM2);\n    // copy constructor, == operator\n    constexpr\
    \ mat CM4 = CM3;\n    static_assert(CM4 == CM3);\n    // array, implicit conversion\n\
    \    constexpr mat cv[5];\n    static_assert(cv[0] == mat{});\n    static_assert(cv[1]\
    \ == mat{});\n    static_assert(cv[2] == mat{});\n    static_assert(cv[3] == mat{});\n\
    \    static_assert(cv[4] == mat{});\n    // +=, + operator\n    constexpr mat\
    \ CM5{{1, 2},\n                      {3, 4}};\n    constexpr mat CM6{{3, 5},\n\
    \                      {2, 1}};\n    static_assert(CM5 + CM6 == mat({4, 7}, {5,\
    \ 5}));\n\n    constexpr auto additionAssign = [=]() {\n        mat res = CM5;\n\
    \        res += CM6;\n        return res;\n    };\n    static_assert(additionAssign()\
    \ == mat({4, 7}, {5, 5}));\n    // -=, -, - pnt operator\n    constexpr mat CM7{};\n\
    \    constexpr mat CM8{{-1, 0},\n                      {-4, 3}};\n    static_assert(CM7\
    \ - CM8 == -CM8);\n    constexpr auto subtractionAssign = [=]() {\n        mat\
    \ res = CM7;\n        res -= CM8;\n        return res;\n    };\n    static_assert(subtractionAssign()\
    \ == -CM8);\n    // *=, * operator\n    constexpr mat CM9{{1, 2},\n          \
    \            {3, 4}};\n    constexpr mat CM10{{0, 1},\n                      \
    \ {2, 3}};\n    static_assert(CM9 * CM10 == mat({4, 7}, {8, 15}));\n    constexpr\
    \ auto multiplicationAssign = [=]() {\n        mat res = CM9;\n        res *=\
    \ CM10;\n        return res;\n    };\n    static_assert(multiplicationAssign()\
    \ == mat({4, 7}, {8, 15}));\n    // mat * pnt operator\n    constexpr mat CM11{{1,\
    \ 2},\n                       {3, 4}};\n    constexpr pnt cp{1, 2};\n    static_assert(CM11\
    \ * cp == pnt(5, 11));\n    // transpose\n    constexpr mat CM12{{0, 2},\n   \
    \                    {3, 5}};\n    static_assert(CM12.trans() == mat({0, 3}, {2,\
    \ 5}));\n    // identity\n    constexpr mat CM13{{5, 1},\n                   \
    \    {4, 2}};\n    static_assert(mat().identity() == mat({1, 0}, {0, 1}));\n \
    \   static_assert(CM13 * mat().identity() == CM13);\n    // power\n    constexpr\
    \ mat CM14{{1, 2},\n                       {3, 4}};\n    static_assert(CM14.pow(2)\
    \ == CM14 * CM14);\n    static_assert(CM14.pow(5) == CM14 * CM14 * CM14 * CM14\
    \ * CM14);\n    // determinant\n    static_assert(CM14.det() == -2);\n\n    cout\
    \ << \"Hello World\\n\";\n\n    return 0;\n}\n"
  code: "\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
    \n\n#include \"../../src/makevec.cpp\"\n#include \"../../src/Matrix2D.cpp\"\n\n\
    #include <cassert>\n#include <type_traits>\n#include <iostream>\n#include <iomanip>\n\
    #include <vector>\n#include <algorithm>\n\nusing namespace std;\nusing lint =\
    \ long long;\n\nstruct init {\n    init() {\n        cin.tie(nullptr);\n     \
    \   ios::sync_with_stdio(false);\n        cout << fixed << setprecision(10);\n\
    \    }\n} init_;\n\nint main() {\n\n    // default constructor\n    mat M1;\n\
    \    assert(M1.r0 == pnt{} && M1.r1 == pnt{});\n    // constructor\n    mat M2(pnt(1,\
    \ 2), pnt(3, 4));\n    assert(M2.r0 == pnt(1, 2) && M2.r1 == pnt(3, 4));\n   \
    \ // initializer_list construct, == operator\n    mat M3{{1, 2},\n           {3,\
    \ 4}};\n    assert(M3 == M2);\n    // copy constructor, == operator\n    mat M4\
    \ = M3;\n    assert(M4 == M3);\n    // vector, implicit conversion\n    vector<mat>\
    \ v(10);\n    assert(all_of(v.begin(), v.end(), [](const mat &m) { return m ==\
    \ mat{}; }));\n    // +=, + operator\n    mat M5{{1, 2},\n           {3, 4}};\n\
    \    mat M6{{1, 2},\n           {3, 4}};\n    assert(M5 + M6 == mat({2, 4}, {6,\
    \ 8}));\n    M5 += M6;\n    assert(M5 == mat({2, 4}, {6, 8}));\n    // -=, -,\
    \ - pnt operator\n    mat M7{};\n    mat M8{{-1, 0},\n           {-4, 3}};\n \
    \   assert(M7 - M8 == -M8);\n    M7 -= M8;\n    assert(M7 == -M8);\n    // *=,\
    \ * operator\n    mat M9{{1, 2},\n           {3, 4}};\n    mat M10{{0, 1},\n \
    \           {2, 3}};\n    assert(M9 * M10 == mat({4, 7}, {8, 15}));\n    M9 *=\
    \ M10;\n    assert(M9 == mat({4, 7}, {8, 15}));\n    // mat * pnt operator\n \
    \   mat M11{{1, 2},\n            {3, 4}};\n    pnt p{1, 2};\n    assert(M11 *\
    \ p == pnt(5, 11));\n    // transpose\n    mat M12{{0, 2},\n            {3, 5}};\n\
    \    assert(M12.trans() == mat({0, 3}, {2, 5}));\n    // identity\n    mat M13{{5,\
    \ 1},\n            {4, 2}};\n    assert(mat().identity() == mat({1, 0}, {0, 1}));\n\
    \    assert(M13 * mat().identity() == M13);\n    // power\n    mat M14{{1, 2},\n\
    \            {3, 4}};\n    assert(M14.pow(2) == M14 * M14);\n    assert(M14.pow(5)\
    \ == M14 * M14 * M14 * M14 * M14);\n    // determinant\n    assert(M14.det() ==\
    \ -2);\n\n    //// test constexpr\n\n    // default constructor\n    constexpr\
    \ mat CM1;\n    static_assert(CM1.r0 == pnt{} && CM1.r1 == pnt{});\n    // constructor\n\
    \    constexpr mat CM2(pnt(1, 2), pnt(3, 4));\n    static_assert(CM2.r0 == pnt(1,\
    \ 2) && CM2.r1 == pnt(3, 4));\n    // initializer_list construct, == operator\n\
    \    constexpr mat CM3{{1, 2},\n                      {3, 4}};\n    static_assert(CM3\
    \ == CM2);\n    // copy constructor, == operator\n    constexpr mat CM4 = CM3;\n\
    \    static_assert(CM4 == CM3);\n    // array, implicit conversion\n    constexpr\
    \ mat cv[5];\n    static_assert(cv[0] == mat{});\n    static_assert(cv[1] == mat{});\n\
    \    static_assert(cv[2] == mat{});\n    static_assert(cv[3] == mat{});\n    static_assert(cv[4]\
    \ == mat{});\n    // +=, + operator\n    constexpr mat CM5{{1, 2},\n         \
    \             {3, 4}};\n    constexpr mat CM6{{3, 5},\n                      {2,\
    \ 1}};\n    static_assert(CM5 + CM6 == mat({4, 7}, {5, 5}));\n\n    constexpr\
    \ auto additionAssign = [=]() {\n        mat res = CM5;\n        res += CM6;\n\
    \        return res;\n    };\n    static_assert(additionAssign() == mat({4, 7},\
    \ {5, 5}));\n    // -=, -, - pnt operator\n    constexpr mat CM7{};\n    constexpr\
    \ mat CM8{{-1, 0},\n                      {-4, 3}};\n    static_assert(CM7 - CM8\
    \ == -CM8);\n    constexpr auto subtractionAssign = [=]() {\n        mat res =\
    \ CM7;\n        res -= CM8;\n        return res;\n    };\n    static_assert(subtractionAssign()\
    \ == -CM8);\n    // *=, * operator\n    constexpr mat CM9{{1, 2},\n          \
    \            {3, 4}};\n    constexpr mat CM10{{0, 1},\n                      \
    \ {2, 3}};\n    static_assert(CM9 * CM10 == mat({4, 7}, {8, 15}));\n    constexpr\
    \ auto multiplicationAssign = [=]() {\n        mat res = CM9;\n        res *=\
    \ CM10;\n        return res;\n    };\n    static_assert(multiplicationAssign()\
    \ == mat({4, 7}, {8, 15}));\n    // mat * pnt operator\n    constexpr mat CM11{{1,\
    \ 2},\n                       {3, 4}};\n    constexpr pnt cp{1, 2};\n    static_assert(CM11\
    \ * cp == pnt(5, 11));\n    // transpose\n    constexpr mat CM12{{0, 2},\n   \
    \                    {3, 5}};\n    static_assert(CM12.trans() == mat({0, 3}, {2,\
    \ 5}));\n    // identity\n    constexpr mat CM13{{5, 1},\n                   \
    \    {4, 2}};\n    static_assert(mat().identity() == mat({1, 0}, {0, 1}));\n \
    \   static_assert(CM13 * mat().identity() == CM13);\n    // power\n    constexpr\
    \ mat CM14{{1, 2},\n                       {3, 4}};\n    static_assert(CM14.pow(2)\
    \ == CM14 * CM14);\n    static_assert(CM14.pow(5) == CM14 * CM14 * CM14 * CM14\
    \ * CM14);\n    // determinant\n    static_assert(CM14.det() == -2);\n\n    cout\
    \ << \"Hello World\\n\";\n\n    return 0;\n}\n"
  dependsOn:
  - src/makevec.cpp
  - src/Matrix2D.cpp
  - src/Point2D.cpp
  isVerificationFile: true
  path: test/own/Matrix2D_Basic.test.cpp
  requiredBy: []
  timestamp: '2021-01-26 10:05:23+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/own/Matrix2D_Basic.test.cpp
layout: document
redirect_from:
- /verify/test/own/Matrix2D_Basic.test.cpp
- /verify/test/own/Matrix2D_Basic.test.cpp.html
title: test/own/Matrix2D_Basic.test.cpp
---
