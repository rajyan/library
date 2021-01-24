---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':x:'
    path: src/Matrix2D.cpp
    title: src/Matrix2D.cpp
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/own/Matrix2D_Basic.test.cpp
    title: test/own/Matrix2D_Basic.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/own/Point2D_Basic.test.cpp
    title: test/own/Point2D_Basic.test.cpp
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/Point2D.cpp\"\n#include <cmath>\n#include <iostream>\n\
    #include <vector>\n\nusing namespace std;\nusing lint = long long;\n\ntemplate<class\
    \ T>\nstruct Point2D {\n    T x{}, y{};\n\n    constexpr Point2D() = default;\n\
    \    constexpr Point2D(const T &x, const T &y) noexcept: x(x), y(y) {};\n    constexpr\
    \ explicit Point2D(const pair<T, T> &p) noexcept: x(p.first), y(p.second) {};\n\
    \n    constexpr bool operator==(const Point2D &rhs) const noexcept { return x\
    \ == rhs.x && y == rhs.y; }\n    constexpr bool operator!=(const Point2D &rhs)\
    \ const noexcept { return !(*this == rhs); }\n    constexpr bool operator<(const\
    \ Point2D &rhs) const noexcept { return x < rhs.x || (x == rhs.x && y < rhs.y);\
    \ }\n    constexpr bool operator>(const Point2D &rhs) const noexcept { return\
    \ rhs < *this; }\n    constexpr bool operator<=(const Point2D &rhs) const noexcept\
    \ { return !(*this > rhs); }\n    constexpr bool operator>=(const Point2D &rhs)\
    \ const noexcept { return !(*this < rhs); }\n\n    constexpr Point2D operator+(const\
    \ Point2D &rhs) const noexcept { return {x + rhs.x, y + rhs.y}; }\n    constexpr\
    \ Point2D operator-(const Point2D &rhs) const noexcept { return {x - rhs.x, y\
    \ - rhs.y}; }\n    constexpr Point2D operator*(const T &k) const noexcept { return\
    \ {k * x, k * y}; }\n    constexpr Point2D operator/(const T &k) const noexcept\
    \ { return {x / k, y / k}; }\n    constexpr Point2D &operator+=(const Point2D\
    \ &rhs) noexcept { return *this = *this + rhs; }\n    constexpr Point2D &operator-=(const\
    \ Point2D &rhs) noexcept { return *this = *this - rhs; }\n    constexpr Point2D\
    \ &operator*=(const T &k) noexcept { return *this = *this * k; }\n    constexpr\
    \ Point2D &operator/=(const T &k) noexcept { return *this = *this / k; }\n   \
    \ constexpr Point2D &operator--(int) noexcept { return *this -= Point2D(1, 1);\
    \ };\n    constexpr Point2D &operator++(int) noexcept { return *this += Point2D(1,\
    \ 1); };\n    constexpr Point2D operator-() const noexcept { return {-x, -y};\
    \ }\n\n    constexpr T operator*(const Point2D &rhs) const noexcept { return x\
    \ * rhs.x + y * rhs.y; }\n\n    [[nodiscard]] constexpr Point2D nor() const noexcept\
    \ { return {y, -x}; }\n    [[nodiscard]] constexpr long double hypot() const noexcept\
    \ { return ::hypotl(x, y); }\n    [[nodiscard]] constexpr bool inGrid(const T\
    \ &H, const T &W) const noexcept { return 0 <= x && x < H && 0 <= y && y < W;\
    \ }\n    template<class U>\n    [[nodiscard]] constexpr U &operator[](vector<vector<U>>\
    \ &v) { return v[x][y]; }\n\n    friend istream &operator>>(istream &is, Point2D\
    \ &p) { return is >> p.x >> p.y; }\n    friend ostream &operator<<(ostream &os,\
    \ const Point2D &p) { return os << p.x << ' ' << p.y; }\n};\n\nusing pnt = Point2D<lint>;\n"
  code: "#include <cmath>\n#include <iostream>\n#include <vector>\n\nusing namespace\
    \ std;\nusing lint = long long;\n\ntemplate<class T>\nstruct Point2D {\n    T\
    \ x{}, y{};\n\n    constexpr Point2D() = default;\n    constexpr Point2D(const\
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
    \ << p.y; }\n};\n\nusing pnt = Point2D<lint>;\n"
  dependsOn: []
  isVerificationFile: false
  path: src/Point2D.cpp
  requiredBy:
  - src/Matrix2D.cpp
  timestamp: '2021-01-24 15:05:12+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - test/own/Matrix2D_Basic.test.cpp
  - test/own/Point2D_Basic.test.cpp
documentation_of: src/Point2D.cpp
layout: document
redirect_from:
- /library/src/Point2D.cpp
- /library/src/Point2D.cpp.html
title: src/Point2D.cpp
---