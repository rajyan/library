#pragma once

#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
using lint = long long;

template<class T>
struct Point2D {
    T x{}, y{};

    constexpr Point2D() = default;
    constexpr Point2D(const T &x, const T &y) noexcept: x(x), y(y) {};
    constexpr explicit Point2D(const pair<T, T> &p) noexcept: x(p.first), y(p.second) {};

    constexpr bool operator==(const Point2D &rhs) const noexcept { return x == rhs.x && y == rhs.y; }
    constexpr bool operator!=(const Point2D &rhs) const noexcept { return !(*this == rhs); }
    constexpr bool operator<(const Point2D &rhs) const noexcept { return x < rhs.x || (x == rhs.x && y < rhs.y); }
    constexpr bool operator>(const Point2D &rhs) const noexcept { return rhs < *this; }
    constexpr bool operator<=(const Point2D &rhs) const noexcept { return !(*this > rhs); }
    constexpr bool operator>=(const Point2D &rhs) const noexcept { return !(*this < rhs); }

    constexpr Point2D operator+(const Point2D &rhs) const noexcept { return {x + rhs.x, y + rhs.y}; }
    constexpr Point2D operator-(const Point2D &rhs) const noexcept { return {x - rhs.x, y - rhs.y}; }
    constexpr Point2D operator*(const T &k) const noexcept { return {k * x, k * y}; }
    constexpr Point2D operator/(const T &k) const noexcept { return {x / k, y / k}; }
    constexpr Point2D &operator+=(const Point2D &rhs) noexcept { return *this = *this + rhs; }
    constexpr Point2D &operator-=(const Point2D &rhs) noexcept { return *this = *this - rhs; }
    constexpr Point2D &operator*=(const T &k) noexcept { return *this = *this * k; }
    constexpr Point2D &operator/=(const T &k) noexcept { return *this = *this / k; }
    constexpr Point2D &operator--() noexcept { return *this -= Point2D(1, 1); };
    constexpr Point2D &operator++() noexcept { return *this += Point2D(1, 1); };
    constexpr Point2D operator--(int) noexcept { Point2D res = *this; --*this; return res; };
    constexpr Point2D operator++(int) noexcept { Point2D res = *this; ++*this; return res; };
    constexpr Point2D operator-() const noexcept { return {-x, -y}; }

    constexpr T operator*(const Point2D &rhs) const noexcept { return x * rhs.x + y * rhs.y; }

    [[nodiscard]] constexpr Point2D nor() const noexcept { return {y, -x}; }
    [[nodiscard]] constexpr long double hypot() const noexcept { return ::hypotl(x, y); }
    [[nodiscard]] constexpr bool inGrid(const T &H, const T &W) const noexcept { return 0 <= x && x < H && 0 <= y && y < W; }
    template<class U>
    [[nodiscard]] constexpr U &operator[](vector<vector<U>> &v) const noexcept { return v[x][y]; }

    constexpr friend istream &operator>>(istream &is, Point2D &p) { return is >> p.x >> p.y; }
    constexpr friend ostream &operator<<(ostream &os, const Point2D &p) { return os << p.x << ' ' << p.y; }
};

using pnt = Point2D<lint>;
