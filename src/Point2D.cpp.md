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
    \ T>\nstruct Point2D {\n\tT x, y;\n\tconstexpr Point2D(T x = 0, T y = 0) noexcept\
    \ : x(x), y(y) {};\n\tconstexpr Point2D(pair<T, T> &p) noexcept : x(p.first),\
    \ y(p.second) {};\n\tconstexpr bool operator==(const Point2D &rhs) const noexcept\
    \ { return x == rhs.x && y == rhs.y; }\n\tconstexpr bool operator!=(const Point2D\
    \ &rhs) const noexcept { return !((*this) == rhs); }\n\tconstexpr bool operator<\
    \ (const Point2D &rhs) const noexcept { return x < rhs.x || (x == rhs.x && y <\
    \ rhs.y); }\n\tconstexpr bool operator> (const Point2D &rhs) const noexcept {\
    \ return rhs < (*this); }\n\tconstexpr bool operator<=(const Point2D &rhs) const\
    \ noexcept { return !((*this) > rhs); }\n\tconstexpr bool operator>=(const Point2D\
    \ &rhs) const noexcept { return !((*this) < rhs); }\n\tconstexpr Point2D  operator+\
    \ (const Point2D &rhs) const noexcept { return { x + rhs.x, y + rhs.y }; }\n\t\
    constexpr Point2D  operator- (const Point2D &rhs) const noexcept { return { x\
    \ - rhs.x, y - rhs.y }; }\n\tconstexpr Point2D  operator* (const T &k) const noexcept\
    \ { return { k * x, k * y }; }\n\tconstexpr Point2D  operator/ (const T &k) const\
    \ noexcept { return { x / k, y / k }; }\n\tconstexpr Point2D& operator+=(const\
    \ Point2D &rhs) noexcept { return ((*this) = (*this) + rhs); }\n\tconstexpr Point2D&\
    \ operator-=(const Point2D &rhs) noexcept { return ((*this) = (*this) - rhs);\
    \ }\n\tconstexpr Point2D& operator*=(const T &k) noexcept { return ((*this) =\
    \ (*this) * k); }\n\tconstexpr Point2D& operator/=(const T &k) noexcept { return\
    \ ((*this) = (*this) / k); }\n    constexpr Point2D& operator--(int) noexcept\
    \ { return ((*this) -= Point2D(1, 1)); };\n    constexpr Point2D& operator++(int)\
    \ noexcept { return ((*this) += Point2D(1, 1)); };\n\tconstexpr Point2D  operator-\
    \ () const noexcept { return { -x, -y }; }\n\tconstexpr T operator* (const Point2D\
    \ &rhs) const noexcept { return x * rhs.x + y * rhs.y; }\n\tconstexpr Point2D\
    \ nor() const noexcept { return { y, -x }; }\n\tconstexpr long double hypot()\
    \ const noexcept { return ::hypotl(x, y); }\n\tfriend istream& operator>>(istream&\
    \ is, Point2D &p) { return is >> p.x >> p.y; }\n\tfriend ostream& operator<<(ostream&\
    \ os, const Point2D &p) { return os << p.x << \" \" << p.y; }\n\ttemplate<class\
    \ U> U& operator[](vector<vector<U>> &v) { return v[x][y]; }\n};\n\nusing pnt\
    \ = Point2D<lint>;\n"
  code: "#include <cmath>\n#include <iostream>\n#include <vector>\n\nusing namespace\
    \ std;\nusing lint = long long;\n\ntemplate<class T>\nstruct Point2D {\n\tT x,\
    \ y;\n\tconstexpr Point2D(T x = 0, T y = 0) noexcept : x(x), y(y) {};\n\tconstexpr\
    \ Point2D(pair<T, T> &p) noexcept : x(p.first), y(p.second) {};\n\tconstexpr bool\
    \ operator==(const Point2D &rhs) const noexcept { return x == rhs.x && y == rhs.y;\
    \ }\n\tconstexpr bool operator!=(const Point2D &rhs) const noexcept { return !((*this)\
    \ == rhs); }\n\tconstexpr bool operator< (const Point2D &rhs) const noexcept {\
    \ return x < rhs.x || (x == rhs.x && y < rhs.y); }\n\tconstexpr bool operator>\
    \ (const Point2D &rhs) const noexcept { return rhs < (*this); }\n\tconstexpr bool\
    \ operator<=(const Point2D &rhs) const noexcept { return !((*this) > rhs); }\n\
    \tconstexpr bool operator>=(const Point2D &rhs) const noexcept { return !((*this)\
    \ < rhs); }\n\tconstexpr Point2D  operator+ (const Point2D &rhs) const noexcept\
    \ { return { x + rhs.x, y + rhs.y }; }\n\tconstexpr Point2D  operator- (const\
    \ Point2D &rhs) const noexcept { return { x - rhs.x, y - rhs.y }; }\n\tconstexpr\
    \ Point2D  operator* (const T &k) const noexcept { return { k * x, k * y }; }\n\
    \tconstexpr Point2D  operator/ (const T &k) const noexcept { return { x / k, y\
    \ / k }; }\n\tconstexpr Point2D& operator+=(const Point2D &rhs) noexcept { return\
    \ ((*this) = (*this) + rhs); }\n\tconstexpr Point2D& operator-=(const Point2D\
    \ &rhs) noexcept { return ((*this) = (*this) - rhs); }\n\tconstexpr Point2D& operator*=(const\
    \ T &k) noexcept { return ((*this) = (*this) * k); }\n\tconstexpr Point2D& operator/=(const\
    \ T &k) noexcept { return ((*this) = (*this) / k); }\n    constexpr Point2D& operator--(int)\
    \ noexcept { return ((*this) -= Point2D(1, 1)); };\n    constexpr Point2D& operator++(int)\
    \ noexcept { return ((*this) += Point2D(1, 1)); };\n\tconstexpr Point2D  operator-\
    \ () const noexcept { return { -x, -y }; }\n\tconstexpr T operator* (const Point2D\
    \ &rhs) const noexcept { return x * rhs.x + y * rhs.y; }\n\tconstexpr Point2D\
    \ nor() const noexcept { return { y, -x }; }\n\tconstexpr long double hypot()\
    \ const noexcept { return ::hypotl(x, y); }\n\tfriend istream& operator>>(istream&\
    \ is, Point2D &p) { return is >> p.x >> p.y; }\n\tfriend ostream& operator<<(ostream&\
    \ os, const Point2D &p) { return os << p.x << \" \" << p.y; }\n\ttemplate<class\
    \ U> U& operator[](vector<vector<U>> &v) { return v[x][y]; }\n};\n\nusing pnt\
    \ = Point2D<lint>;\n"
  dependsOn: []
  isVerificationFile: false
  path: src/Point2D.cpp
  requiredBy: []
  timestamp: '2020-12-31 17:28:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/Point2D.cpp
layout: document
redirect_from:
- /library/src/Point2D.cpp
- /library/src/Point2D.cpp.html
title: src/Point2D.cpp
---
