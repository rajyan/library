---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/Point2D.cpp
    title: src/Point2D.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/own/Matrix2D_Basic.test.cpp
    title: test/own/Matrix2D_Basic.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/891.test.cpp
    title: test/yukicoder/891.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/Matrix2D.cpp\"\n\n#line 1 \"src/Point2D.cpp\"\n#include\
    \ <cmath>\n#include <iostream>\n#include <vector>\n\nusing namespace std;\nusing\
    \ lint = long long;\n\ntemplate<class T>\nstruct Point2D {\n    T x{}, y{};\n\n\
    \    constexpr Point2D() = default;\n    constexpr Point2D(const T &x, const T\
    \ &y) noexcept: x(x), y(y) {};\n    constexpr explicit Point2D(const pair<T, T>\
    \ &p) noexcept: x(p.first), y(p.second) {};\n\n    constexpr bool operator==(const\
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
    \ = *this * rhs; }\n    constexpr Matrix2D operator-() noexcept { return {-r0,\
    \ -r1}; }\n\n    constexpr Point2D<T> operator*(const Point2D<T> &b_T) const noexcept\
    \ { return {r0 * b_T, r1 * b_T}; }\n\n    [[nodiscard]] constexpr Matrix2D trans()\
    \ const noexcept {\n        return {{r0.x, r1.x},\n                {r0.y, r1.y}};\n\
    \    }\n    [[nodiscard]] constexpr Matrix2D identity() const noexcept {\n   \
    \     return {{1, 0},\n                {0, 1}};\n    }\n    [[nodiscard]] constexpr\
    \ Matrix2D pow(lint n) const noexcept {\n        Matrix2D res{Matrix2D().identity()},\
    \ tmp{*this};\n        while (n > 0) {\n            if (n & 1) res *= tmp;\n \
    \           tmp *= tmp;\n            n >>= 1;\n        }\n        return res;\n\
    \    }\n    [[nodiscard]] constexpr T det() const noexcept { return r0 * r1.nor();\
    \ }\n};\n\nusing mat = Matrix2D<lint>;\n"
  code: "\n#include \"Point2D.cpp\"\n\ntemplate<class T>\nstruct Matrix2D {\n    Point2D<T>\
    \ r0{}, r1{};\n\n    constexpr Matrix2D() = default;\n    constexpr Matrix2D(const\
    \ Point2D<T> &r0, const Point2D<T> &r1) noexcept: r0(r0), r1(r1) {};\n\n    constexpr\
    \ bool operator==(const Matrix2D &rhs) const noexcept { return r0 == rhs.r0 &&\
    \ r1 == rhs.r1; }\n    constexpr bool operator!=(const Matrix2D &rhs) const noexcept\
    \ { return !(*this == rhs); }\n\n    constexpr Matrix2D operator+(const Matrix2D\
    \ &rhs) const noexcept { return {r0 + rhs.r0, r1 + rhs.r1}; }\n    constexpr Matrix2D\
    \ operator-(const Matrix2D &rhs) const noexcept { return {r0 - rhs.r0, r1 - rhs.r1};\
    \ }\n    constexpr Matrix2D operator*(const Matrix2D &rhs) const noexcept {\n\
    \        const Matrix2D rhs_T = rhs.trans();\n        return {{r0 * rhs_T.r0,\
    \ r0 * rhs_T.r1},\n                {r1 * rhs_T.r0, r1 * rhs_T.r1}};\n    }\n \
    \   constexpr Matrix2D &operator+=(const Matrix2D &rhs) noexcept { return *this\
    \ = *this + rhs; }\n    constexpr Matrix2D &operator-=(const Matrix2D &rhs) noexcept\
    \ { return *this = *this - rhs; }\n    constexpr Matrix2D &operator*=(const Matrix2D\
    \ &rhs) noexcept { return *this = *this * rhs; }\n    constexpr Matrix2D operator-()\
    \ noexcept { return {-r0, -r1}; }\n\n    constexpr Point2D<T> operator*(const\
    \ Point2D<T> &b_T) const noexcept { return {r0 * b_T, r1 * b_T}; }\n\n    [[nodiscard]]\
    \ constexpr Matrix2D trans() const noexcept {\n        return {{r0.x, r1.x},\n\
    \                {r0.y, r1.y}};\n    }\n    [[nodiscard]] constexpr Matrix2D identity()\
    \ const noexcept {\n        return {{1, 0},\n                {0, 1}};\n    }\n\
    \    [[nodiscard]] constexpr Matrix2D pow(lint n) const noexcept {\n        Matrix2D\
    \ res{Matrix2D().identity()}, tmp{*this};\n        while (n > 0) {\n         \
    \   if (n & 1) res *= tmp;\n            tmp *= tmp;\n            n >>= 1;\n  \
    \      }\n        return res;\n    }\n    [[nodiscard]] constexpr T det() const\
    \ noexcept { return r0 * r1.nor(); }\n};\n\nusing mat = Matrix2D<lint>;"
  dependsOn:
  - src/Point2D.cpp
  isVerificationFile: false
  path: src/Matrix2D.cpp
  requiredBy: []
  timestamp: '2021-01-24 15:36:22+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yukicoder/891.test.cpp
  - test/own/Matrix2D_Basic.test.cpp
documentation_of: src/Matrix2D.cpp
layout: document
redirect_from:
- /library/src/Matrix2D.cpp
- /library/src/Matrix2D.cpp.html
title: src/Matrix2D.cpp
---
