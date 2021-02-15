#pragma once

#include <variant>
#include <algorithm>

using namespace std;

template<class T, T (*F)(T, T), T (*e) = nullptr>
class Monoid {
    class Identity {};

public:
    using type = T;
    using vt = conditional_t<is_null_pointer_v<decltype(e)>, variant<Identity, T>, T>;

    [[nodiscard]] constexpr vt op(const vt &a, const vt &b) const {
        if constexpr (e) return F(a, b);
        else if (a.index() == 1 && b.index() == 1) return F(get<T>(a), get<T>(b));
        else if (a.index() == 0) return b;
        else return a;
    };
    [[nodiscard]] constexpr vt identity() const {
        if constexpr (e) return *e;
        else return Identity{};
    }
};

namespace monoid {
    constexpr auto op_add = [](auto l, auto r) { return l + r; };
    constexpr auto op_mul = [](auto l, auto r) { return l * r; };
    constexpr auto op_max = [](auto l, auto r) { return max(l, r); };
    constexpr auto op_min = [](auto l, auto r) { return min(l, r); };
    template<class T> T e_add = T{};
    template<class T> T e_mul = T{1};
    template<class T> T e_max = numeric_limits<T>::max();
    template<class T> T e_min = numeric_limits<T>::min();
    template<class T> using add = Monoid<T, monoid::op_add, &monoid::e_add<T>>;
    template<class T> using mul = Monoid<T, monoid::op_mul, &monoid::e_mul<T>>;
    template<class T> using max = Monoid<T, monoid::op_max, &monoid::e_max<T>>;
    template<class T> using min = Monoid<T, monoid::op_min, &monoid::e_min<T>>;
}