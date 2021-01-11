---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/Point2D.cpp\"\n#include <cmath>\n#include <iostream>\n\
    #include <vector>\n\nusing namespace std;\nusing lint = long long;\n\ntemplate<class\
    \ T>\nstruct Point2D {\n    T x, y;\n    constexpr explicit Point2D(T x = 0, T\
    \ y = 0) noexcept: x(x), y(y) {};\n    constexpr explicit Point2D(pair <T, T>\
    \ &p) noexcept: x(p.first), y(p.second) {};\n    constexpr bool operator==(const\
    \ Point2D &rhs) const noexcept { return x == rhs.x && y == rhs.y; }\n    constexpr\
    \ bool operator!=(const Point2D &rhs) const noexcept { return !((*this) == rhs);\
    \ }\n    constexpr bool operator<(const Point2D &rhs) const noexcept { return\
    \ x < rhs.x || (x == rhs.x && y < rhs.y); }\n    constexpr bool operator>(const\
    \ Point2D &rhs) const noexcept { return rhs < (*this); }\n    constexpr bool operator<=(const\
    \ Point2D &rhs) const noexcept { return !((*this) > rhs); }\n    constexpr bool\
    \ operator>=(const Point2D &rhs) const noexcept { return !((*this) < rhs); }\n\
    \    constexpr Point2D operator+(const Point2D &rhs) const noexcept { return {x\
    \ + rhs.x, y + rhs.y}; }\n    constexpr Point2D operator-(const Point2D &rhs)\
    \ const noexcept { return {x - rhs.x, y - rhs.y}; }\n    constexpr Point2D operator*(const\
    \ T &k) const noexcept { return {k * x, k * y}; }\n    constexpr Point2D operator/(const\
    \ T &k) const noexcept { return {x / k, y / k}; }\n    constexpr Point2D &operator+=(const\
    \ Point2D &rhs) noexcept { return ((*this) = (*this) + rhs); }\n    constexpr\
    \ Point2D &operator-=(const Point2D &rhs) noexcept { return ((*this) = (*this)\
    \ - rhs); }\n    constexpr Point2D &operator*=(const T &k) noexcept { return ((*this)\
    \ = (*this) * k); }\n    constexpr Point2D &operator/=(const T &k) noexcept {\
    \ return ((*this) = (*this) / k); }\n    constexpr Point2D &operator--(int) noexcept\
    \ { return ((*this) -= Point2D(1, 1)); };\n    constexpr Point2D &operator++(int)\
    \ noexcept { return ((*this) += Point2D(1, 1)); };\n    constexpr Point2D operator-()\
    \ const noexcept { return {-x, -y}; }\n    constexpr T operator*(const Point2D\
    \ &rhs) const noexcept { return x * rhs.x + y * rhs.y; }\n    constexpr Point2D\
    \ nor() const noexcept { return {y, -x}; }\n    [[nodiscard]] constexpr long double\
    \ hypot() const noexcept { return ::hypotl(x, y); }\n    friend istream &operator>>(istream\
    \ &is, Point2D &p) { return is >> p.x >> p.y; }\n    friend ostream &operator<<(ostream\
    \ &os, const Point2D &p) { return os << p.x << \" \" << p.y; }\n    template<class\
    \ U>\n    U &operator[](vector<vector<U>> &v) { return v[x][y]; }\n};\n\nusing\
    \ pnt = Point2D<lint>;\n"
  code: "#include <cmath>\n#include <iostream>\n#include <vector>\n\nusing namespace\
    \ std;\nusing lint = long long;\n\ntemplate<class T>\nstruct Point2D {\n    T\
    \ x, y;\n    constexpr explicit Point2D(T x = 0, T y = 0) noexcept: x(x), y(y)\
    \ {};\n    constexpr explicit Point2D(pair <T, T> &p) noexcept: x(p.first), y(p.second)\
    \ {};\n    constexpr bool operator==(const Point2D &rhs) const noexcept { return\
    \ x == rhs.x && y == rhs.y; }\n    constexpr bool operator!=(const Point2D &rhs)\
    \ const noexcept { return !((*this) == rhs); }\n    constexpr bool operator<(const\
    \ Point2D &rhs) const noexcept { return x < rhs.x || (x == rhs.x && y < rhs.y);\
    \ }\n    constexpr bool operator>(const Point2D &rhs) const noexcept { return\
    \ rhs < (*this); }\n    constexpr bool operator<=(const Point2D &rhs) const noexcept\
    \ { return !((*this) > rhs); }\n    constexpr bool operator>=(const Point2D &rhs)\
    \ const noexcept { return !((*this) < rhs); }\n    constexpr Point2D operator+(const\
    \ Point2D &rhs) const noexcept { return {x + rhs.x, y + rhs.y}; }\n    constexpr\
    \ Point2D operator-(const Point2D &rhs) const noexcept { return {x - rhs.x, y\
    \ - rhs.y}; }\n    constexpr Point2D operator*(const T &k) const noexcept { return\
    \ {k * x, k * y}; }\n    constexpr Point2D operator/(const T &k) const noexcept\
    \ { return {x / k, y / k}; }\n    constexpr Point2D &operator+=(const Point2D\
    \ &rhs) noexcept { return ((*this) = (*this) + rhs); }\n    constexpr Point2D\
    \ &operator-=(const Point2D &rhs) noexcept { return ((*this) = (*this) - rhs);\
    \ }\n    constexpr Point2D &operator*=(const T &k) noexcept { return ((*this)\
    \ = (*this) * k); }\n    constexpr Point2D &operator/=(const T &k) noexcept {\
    \ return ((*this) = (*this) / k); }\n    constexpr Point2D &operator--(int) noexcept\
    \ { return ((*this) -= Point2D(1, 1)); };\n    constexpr Point2D &operator++(int)\
    \ noexcept { return ((*this) += Point2D(1, 1)); };\n    constexpr Point2D operator-()\
    \ const noexcept { return {-x, -y}; }\n    constexpr T operator*(const Point2D\
    \ &rhs) const noexcept { return x * rhs.x + y * rhs.y; }\n    constexpr Point2D\
    \ nor() const noexcept { return {y, -x}; }\n    [[nodiscard]] constexpr long double\
    \ hypot() const noexcept { return ::hypotl(x, y); }\n    friend istream &operator>>(istream\
    \ &is, Point2D &p) { return is >> p.x >> p.y; }\n    friend ostream &operator<<(ostream\
    \ &os, const Point2D &p) { return os << p.x << \" \" << p.y; }\n    template<class\
    \ U>\n    U &operator[](vector<vector<U>> &v) { return v[x][y]; }\n};\n\nusing\
    \ pnt = Point2D<lint>;\n"
  dependsOn: []
  isVerificationFile: false
  path: src/Point2D.cpp
  requiredBy: []
  timestamp: '2021-01-11 12:34:28+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/Point2D.cpp
layout: document
redirect_from:
- /library/src/Point2D.cpp
- /library/src/Point2D.cpp.html
title: src/Point2D.cpp
---
