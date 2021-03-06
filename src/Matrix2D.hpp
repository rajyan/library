#pragma once

#include "Point2D.hpp"

template<class T>
struct Matrix2D {
    Point2D<T> r0{}, r1{};

    constexpr Matrix2D() = default;
    constexpr Matrix2D(const Point2D<T> &r0_, const Point2D<T> &r1_) noexcept: r0(r0_), r1(r1_) {};
    constexpr explicit Matrix2D(const T &diag) noexcept: r0{diag, 0}, r1{0, diag} {}

    constexpr bool operator==(const Matrix2D &rhs) const noexcept { return r0 == rhs.r0 && r1 == rhs.r1; }
    constexpr bool operator!=(const Matrix2D &rhs) const noexcept { return !(*this == rhs); }

    constexpr Matrix2D operator+(const Matrix2D &rhs) const noexcept { return {r0 + rhs.r0, r1 + rhs.r1}; }
    constexpr Matrix2D operator-(const Matrix2D &rhs) const noexcept { return {r0 - rhs.r0, r1 - rhs.r1}; }
    constexpr Matrix2D operator*(const Matrix2D &rhs) const noexcept {
        const Matrix2D rhs_T = rhs.trans();
        return {{r0 * rhs_T.r0, r0 * rhs_T.r1},
                {r1 * rhs_T.r0, r1 * rhs_T.r1}};
    }
    constexpr Matrix2D &operator+=(const Matrix2D &rhs) noexcept { return *this = *this + rhs; }
    constexpr Matrix2D &operator-=(const Matrix2D &rhs) noexcept { return *this = *this - rhs; }
    constexpr Matrix2D &operator*=(const Matrix2D &rhs) noexcept { return *this = *this * rhs; }
    constexpr Matrix2D operator-() const noexcept { return {-r0, -r1}; }

    constexpr Point2D<T> operator*(const Point2D<T> &b_T) const noexcept { return {r0 * b_T, r1 * b_T}; }

    [[nodiscard]] constexpr Matrix2D trans() const noexcept {
        return {{r0.x, r1.x},
                {r0.y, r1.y}};
    }
    [[nodiscard]] constexpr Matrix2D identity() const noexcept { return Matrix2D{T{1}}; }
    [[nodiscard]] constexpr Matrix2D pow(lint n) const noexcept {
        Matrix2D res{Matrix2D{}.identity()}, tmp{*this};
        while (n > 0) {
            if (n & 1) res *= tmp;
            tmp *= tmp;
            n >>= 1;
        }
        return res;
    }
    [[nodiscard]] constexpr T det() const noexcept { return r0 * r1.nor(); }
};

using mat = Matrix2D<lint>;