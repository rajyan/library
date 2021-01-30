---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/Matrix2D.hpp
    title: src/Matrix2D.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/own/Matrix2D_Basic.test.cpp
    title: test/own/Matrix2D_Basic.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/own/Point2D_Basic.test.cpp
    title: test/own/Point2D_Basic.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/891.test.cpp
    title: test/yukicoder/891.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/Point2D.hpp\"\n#include <cmath>\n#include <iostream>\n\
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
    \ &v) const noexcept { return v[x][y]; }\n\n    constexpr friend istream &operator>>(istream\
    \ &is, Point2D &p) { return is >> p.x >> p.y; }\n    constexpr friend ostream\
    \ &operator<<(ostream &os, const Point2D &p) { return os << p.x << ' ' << p.y;\
    \ }\n};\n\nusing pnt = Point2D<lint>;\n"
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
    \ &operator[](vector<vector<U>> &v) const noexcept { return v[x][y]; }\n\n   \
    \ constexpr friend istream &operator>>(istream &is, Point2D &p) { return is >>\
    \ p.x >> p.y; }\n    constexpr friend ostream &operator<<(ostream &os, const Point2D\
    \ &p) { return os << p.x << ' ' << p.y; }\n};\n\nusing pnt = Point2D<lint>;\n"
  dependsOn: []
  isVerificationFile: false
  path: src/Point2D.hpp
  requiredBy:
  - src/Matrix2D.hpp
  timestamp: '2021-01-27 22:37:38+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yukicoder/891.test.cpp
  - test/own/Point2D_Basic.test.cpp
  - test/own/Matrix2D_Basic.test.cpp
documentation_of: src/Point2D.hpp
layout: document
redirect_from:
- /library/src/Point2D.hpp
- /library/src/Point2D.hpp.html
title: src/Point2D.hpp
---
