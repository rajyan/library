
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A"

#include "../../src/Modint.hpp"

#include <cassert>
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;
using lint = long long;

struct init {
    init() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
    }
} init_;

int main() {

    // default constructor
    mint m1{};
    assert(m1.val == 0);
    // constructor
    mint m2{MOD + 2};
    assert(m2.val == 2);
    // copy constructor, == operator
    mint m3 = m2;
    assert(m3.val == 2);
    assert(m2 == m3);
    // construct with negative value
    mint m4(-1);
    assert(m4.val == MOD - 1);
    // vector, implicit conversion
    vector<mint> v(10, 1);
    assert(all_of(v.begin(), v.end(), [](const mint &m) { return m == 1; }));
    // +=, + operator
    mint m5(1), m6(1);
    assert(m5 + m6 == 2);
    m5 += m6;
    assert(m5 == 2);
    // -=, - operator
    mint m7(0), m8(1);
    assert(m7 - m8 == MOD - 1);
    m7 -= m8;
    assert(m7 == MOD - 1);
    // *=, * operator
    mint m9(1), m10(2);
    assert(m9 * m10 == 2);
    m9 *= m10;
    assert(m9 == 2);
    // pow
    mint m11(2);
    assert(m11.pow(10) == 1024);
    assert(m11.pow(40) == (1LL << 40) % MOD);
    // /=, / operator
    mint m12(4), m13(2), m14(3);
    assert(m12 / m13 == 2);
    assert(m12 / m13 * m13 == m12);
    assert(m13 / m14 * m14 == m13);
    // confirm by Fermat's little theorem when MOD is prime
    assert(mint(1) / m14 == m14.pow(MOD - 2));
    assert(m13 / m14 == m13 * m14.pow(MOD - 2));
    // - operator
    mint m15(0), m16(1);
    assert(-m15 == 0);
    assert(-m16 == -1);
    // !=, < operator
    assert(m15 != m16);
    assert(m15 < m16);
    // <<, >> operator
    stringstream ss;
    assert(ss << m15);
    assert(ss.str() == to_string(m15.val));
    assert(ss >> m16);
    assert(m15 == m16);

    // default constructor
    constexpr mint cm1{};
    static_assert(cm1.val == 0);
    // constructor
    constexpr mint cm2{MOD + 2};
    static_assert(cm2.val == 2);
    // copy constructor, == operator
    constexpr mint cm3 = cm2;
    static_assert(cm3.val == 2);
    static_assert(cm2 == cm3);
    // construct with negative value
    constexpr mint cm4(-1);
    static_assert(cm4.val == MOD - 1);
    // +=, + operator
    constexpr mint cm5(1), cm6(1);
    static_assert(cm5 + cm6 == 2);
    constexpr auto additionAssign = [=]() {
        mint res = cm5;
        res += cm6;
        return res;
    };
    static_assert(additionAssign() == 2);
    // -=, - operator
    constexpr mint cm7(0), cm8(1);
    static_assert(cm7 - cm8 == MOD - 1);
    constexpr auto subtractionAssign = [=]() {
        mint res = cm7;
        res -= cm8;
        return res;
    };
    static_assert(subtractionAssign() == MOD - 1);
    // *=, * operator
    constexpr mint cm9(1), cm10(2);
    static_assert(cm9 * cm10 == 2);
    constexpr auto multiplicationAssign = [=]() {
        mint res = cm9;
        res *= cm10;
        return res;
    };
    static_assert(multiplicationAssign() == 2);
    // pow
    constexpr mint cm11(2);
    static_assert(cm11.pow(10) == 1024);
    static_assert(cm11.pow(40) == (1LL << 40) % MOD);
    // /=, / operator
    constexpr mint cm12(4), cm13(2), cm14(3);
    static_assert(cm12 / cm13 == 2);
    static_assert(cm12 / cm13 * cm13 == cm12);
    static_assert(cm13 / cm14 * cm14 == cm13);
    // confirm by Fermat's little theorem when MOD is prime
    static_assert(mint(1) / cm14 == cm14.pow(MOD - 2));
    static_assert(cm13 / cm14 == cm13 * cm14.pow(MOD - 2));
    // - operator
    constexpr mint cm15(0), cm16(1);
    static_assert(-cm15 == 0);
    static_assert(-cm16 == -1);
    // !=, < operator
    static_assert(cm15 != cm16);
    static_assert(cm15 < cm16);

    cout << "Hello World\n";

    return 0;
}
