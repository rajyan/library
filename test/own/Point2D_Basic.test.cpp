
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A"

#include "../../src/makevec.hpp"
#include "../../src/Point2D.hpp"

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
    pnt p1{};
    assert(p1.x == 0 && p1.y == 0);
    // constructor
    pnt p2(1, 2);
    assert(p2.x == 1 && p2.y == 2);
    // initializer_list construct
    pnt p3{3, 4};
    assert(p3.x == 3 && p3.y == 4);
    // copy constructor, ==, < operator
    pnt p4 = p3;
    assert(p4.x == 3 && p4.y == 4);
    assert(p3 == p4);
    assert(p2 < p4);
    // construct with std::pair
    pnt p5(pair<lint, lint>{});
    assert(p1 == p5);
    pair p = pair<lint, lint>{1, 2};
    pnt p6(p);
    assert(p2 == p6);
    // vector, implicit conversion
    vector<pnt> v(10, {1, 2});
    assert(all_of(v.begin(), v.end(), [](const pnt &m) { return m == pnt(1, 2); }));
    // +=, + operator
    pnt p7{}, p8(1, 1);
    assert(p7 + p8 == pnt(1, 1));
    p7 += p8;
    assert(p7 == p8);
    // -=, -, - pnt operator
    pnt p9{}, p10{2, 2};
    assert(p9 - p10 == -p10);
    p9 -= p10;
    assert(p9 == -p10);
    // *=, * operator
    pnt p11(2, 3);
    assert(p11 * 2 == pnt(4, 6));
    p11 *= 2;
    assert(p11 == pnt(4, 6));
    // /=, / operator
    pnt p12(2, 5);
    assert(p12 / 2 == pnt(1, 2));
    p12 /= 2;
    assert(p12 == pnt(1, 2));
    // ++ -- operator
    pnt p13{};
    p13++;
    assert(p13 == pnt(1, 1));
    p13--;
    assert(p13 == pnt{});
    // pnt * pnt operator
    pnt p14{1, 2}, p15{3, 4};
    assert(p14 * p15 == 11);
    // nor
    pnt p16{1, 2};
    assert(p16.nor() == pnt(2, -1));
    assert(p16 * p16.nor() == 0);
    // hypot
    pnt p17{3, 4};
    assert(p17.hypot() == 5.0);
    // inGrid, [] vector operator
    const int h = 3, w = 4;
    auto vv = make_vec(h, w, 0.0);
    assert(pnt(1, 2).inGrid(h, w));
    assert(!pnt(3, 2).inGrid(h, w));
    assert(!pnt(4, 5).inGrid(h, w));
    vv[0][1] = 3.0;
    assert(pnt(0, 1)[vv] == 3.0);
    pnt(1, 2)[vv] = 2.0;
    assert(pnt(1, 2)[vv] == 2.0);
    // <<, >> operator
    stringstream ss;
    assert(ss << p17);
    assert(ss.str() == to_string(p17.x) + ' ' + to_string(p17.y));
    assert(ss >> p16);
    assert(p17 == p16);

    //// test constexpr

    // default constructor
    constexpr pnt cp1{};
    static_assert(cp1.x == 0 && cp1.y == 0);
    // constructor
    constexpr pnt cp2(1, 2);
    static_assert(cp2.x == 1 && cp2.y == 2);
    // initializer_list construct
    constexpr pnt cp3{3, 4};
    static_assert(cp3.x == 3 && cp3.y == 4);
    // copy constructor, ==, < operator
    constexpr pnt cp4 = cp3;
    static_assert(cp4.x == 3 && cp4.y == 4);
    static_assert(cp3 == cp4);
    static_assert(cp2 < cp4);
    // construct with std::pair
    constexpr pnt cp5(pair<lint, lint>{});
    static_assert(cp1 == cp5);
    constexpr pair cp = pair<lint, lint>{1, 2};
    constexpr pnt cp6(cp);
    static_assert(cp2 == cp6);
    // array
    constexpr pnt cv[5];
    static_assert(cv[0] == pnt{});
    static_assert(cv[1] == pnt{});
    static_assert(cv[2] == pnt{});
    static_assert(cv[3] == pnt{});
    static_assert(cv[4] == pnt{});
    // +=, + operator
    constexpr pnt cp7{}, cp8(1, 1);
    static_assert(cp7 + cp8 == pnt(1, 1));
    constexpr auto additionAssign = [=]() {
        pnt res = cp7;
        res += cp8;
        return res;
    };
    static_assert(additionAssign() == cp8);
    // -=, -, - pnt operator
    constexpr pnt cp9{}, cp10{2, 2};
    static_assert(cp9 - cp10 == -cp10);
    constexpr auto subtractionAssign = [=]() {
        pnt res = cp9;
        res -= cp10;
        return res;
    };
    static_assert(subtractionAssign() == -cp10);
    // *=, * operator
    constexpr pnt cp11(2, 3);
    static_assert(cp11 * 2 == pnt(4, 6));
    constexpr auto multiplicationAssign = [=]() {
        pnt res = cp11;
        res *= 2;
        return res;
    };
    static_assert(multiplicationAssign() == pnt(4, 6));
    // /=, / operator
    constexpr pnt cp12(2, 5);
    static_assert(cp12 / 2 == pnt(1, 2));
    constexpr auto divisionAssign = [=]() {
        pnt res = cp12;
        res /= 2;
        return res;
    };
    static_assert(divisionAssign() == pnt(1, 2));
    // ++ -- operator
    constexpr pnt cp13{};
    constexpr auto increment = [=]() {
        pnt res = cp13;
        res++;
        return res;
    };
    static_assert(increment() == pnt(1, 1));
    constexpr auto decrement = [=]() {
        pnt res = increment();
        res--;
        return res;
    };
    static_assert(decrement() == pnt{});
    // pnt * pnt operator
    constexpr pnt cp14{1, 2}, cp15{3, 4};
    static_assert(cp14 * cp15 == 11);
    // nor
    constexpr pnt cp16{1, 2};
    static_assert(cp16.nor() == pnt(2, -1));
    static_assert(cp16 * cp16.nor() == 0);
    // inGrid
    constexpr double cvv[h][w]{};
    static_assert(pnt(1, 2).inGrid(h, w));
    static_assert(!pnt(3, 2).inGrid(h, w));
    static_assert(!pnt(4, 5).inGrid(h, w));
    constexpr pnt cp17(1, 0);

    cout << "Hello World\n";

    return 0;
}
