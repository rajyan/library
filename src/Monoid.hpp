#pragma once

#include <variant>

using namespace std;

template<class T>
class Monoid {
    class Identity {};
    using op_t = T (*)(T a, T b);
public:
    using vt = variant<Identity, T>;

    constexpr explicit Monoid(op_t op_) : base_op(op_) {}

    [[nodiscard]] constexpr vt op(const vt &a, const vt &b) const {
        if (a.index() == 1) {
            if (b.index() == 1) {
                return base_op(get<T>(a), get<T>(b));
            }
            else return a;
        }
        else return b;
    };
    [[nodiscard]] constexpr Identity identity() const { return Identity{}; }

private:
    op_t base_op;
};