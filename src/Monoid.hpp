#pragma once

#include <variant>
#include <algorithm>

using namespace std;

template<class T, T (*F)(T a, T b)>
class Monoid {
    class Identity {};
public:
    using type = T;
    using vt = variant<Identity, T>;

    [[nodiscard]] constexpr vt op(const vt &a, const vt &b) const {
        if (a.index() == 1 && b.index() == 1) return F(get<T>(a), get<T>(b));
        else if (a.index() == 0) return b;
        else return a;
    };
    [[nodiscard]] constexpr vt identity() const { return Identity{}; }
};

constexpr auto op_add = [](auto l, auto r) { return l + r; };
constexpr auto op_mul = [](auto l, auto r) { return l * r; };
constexpr auto op_max = [](auto l, auto r) { return max(l, r); };
constexpr auto op_min = [](auto l, auto r) { return min(l, r); };

template<class T>
using monoid_add = Monoid<T, op_add>;
template<class T>
using monoid_mul = Monoid<T, op_mul>;
template<class T>
using monoid_max = Monoid<T, op_max>;
template<class T>
using monoid_min = Monoid<T, op_min>;