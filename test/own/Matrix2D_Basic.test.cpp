
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A"

#include "../../src/makevec.hpp"
#include "../../src/Matrix2D.hpp"

#include <cassert>
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

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
    mat M1;
    assert(M1.r0 == pnt{} && M1.r1 == pnt{});
    // constructor
    mat M2(pnt(1, 2), pnt(3, 4));
    assert(M2.r0 == pnt(1, 2) && M2.r1 == pnt(3, 4));
    // initializer_list construct, == operator
    mat M3{{1, 2},
           {3, 4}};
    assert(M3 == M2);
    // copy constructor, == operator
    mat M4 = M3;
    assert(M4 == M3);
    // vector, implicit conversion
    vector<mat> v(10);
    assert(all_of(v.begin(), v.end(), [](const mat &m) { return m == mat{}; }));
    // +=, + operator
    mat M5{{1, 2},
           {3, 4}};
    mat M6{{1, 2},
           {3, 4}};
    assert(M5 + M6 == mat({2, 4}, {6, 8}));
    M5 += M6;
    assert(M5 == mat({2, 4}, {6, 8}));
    // -=, -, - pnt operator
    mat M7{};
    mat M8{{-1, 0},
           {-4, 3}};
    assert(M7 - M8 == -M8);
    M7 -= M8;
    assert(M7 == -M8);
    // *=, * operator
    mat M9{{1, 2},
           {3, 4}};
    mat M10{{0, 1},
            {2, 3}};
    assert(M9 * M10 == mat({4, 7}, {8, 15}));
    M9 *= M10;
    assert(M9 == mat({4, 7}, {8, 15}));
    // mat * pnt operator
    mat M11{{1, 2},
            {3, 4}};
    pnt p{1, 2};
    assert(M11 * p == pnt(5, 11));
    // transpose
    mat M12{{0, 2},
            {3, 5}};
    assert(M12.trans() == mat({0, 3}, {2, 5}));
    // identity
    mat M13{{5, 1},
            {4, 2}};
    assert(mat().identity() == mat({1, 0}, {0, 1}));
    assert(M13 * mat().identity() == M13);
    // power
    mat M14{{1, 2},
            {3, 4}};
    assert(M14.pow(2) == M14 * M14);
    assert(M14.pow(5) == M14 * M14 * M14 * M14 * M14);
    // determinant
    assert(M14.det() == -2);

    //// test constexpr

    // default constructor
    constexpr mat CM1;
    static_assert(CM1.r0 == pnt{} && CM1.r1 == pnt{});
    // constructor
    constexpr mat CM2(pnt(1, 2), pnt(3, 4));
    static_assert(CM2.r0 == pnt(1, 2) && CM2.r1 == pnt(3, 4));
    // initializer_list construct, == operator
    constexpr mat CM3{{1, 2},
                      {3, 4}};
    static_assert(CM3 == CM2);
    // copy constructor, == operator
    constexpr mat CM4 = CM3;
    static_assert(CM4 == CM3);
    // array, implicit conversion
    constexpr mat cv[5];
    static_assert(cv[0] == mat{});
    static_assert(cv[1] == mat{});
    static_assert(cv[2] == mat{});
    static_assert(cv[3] == mat{});
    static_assert(cv[4] == mat{});
    // +=, + operator
    constexpr mat CM5{{1, 2},
                      {3, 4}};
    constexpr mat CM6{{3, 5},
                      {2, 1}};
    static_assert(CM5 + CM6 == mat({4, 7}, {5, 5}));
    constexpr auto additionAssign = [=]() {
        mat res = CM5;
        res += CM6;
        return res;
    };
    static_assert(additionAssign() == mat({4, 7}, {5, 5}));
    // -=, -, - pnt operator
    constexpr mat CM7{};
    constexpr mat CM8{{-1, 0},
                      {-4, 3}};
    static_assert(CM7 - CM8 == -CM8);
    constexpr auto subtractionAssign = [=]() {
        mat res = CM7;
        res -= CM8;
        return res;
    };
    static_assert(subtractionAssign() == -CM8);
    // *=, * operator
    constexpr mat CM9{{1, 2},
                      {3, 4}};
    constexpr mat CM10{{0, 1},
                       {2, 3}};
    static_assert(CM9 * CM10 == mat({4, 7}, {8, 15}));
    constexpr auto multiplicationAssign = [=]() {
        mat res = CM9;
        res *= CM10;
        return res;
    };
    static_assert(multiplicationAssign() == mat({4, 7}, {8, 15}));
    // mat * pnt operator
    constexpr mat CM11{{1, 2},
                       {3, 4}};
    constexpr pnt cp{1, 2};
    static_assert(CM11 * cp == pnt(5, 11));
    // transpose
    constexpr mat CM12{{0, 2},
                       {3, 5}};
    static_assert(CM12.trans() == mat({0, 3}, {2, 5}));
    // identity
    constexpr mat CM13{{5, 1},
                       {4, 2}};
    static_assert(mat().identity() == mat({1, 0}, {0, 1}));
    static_assert(CM13 * mat().identity() == CM13);
    // power
    constexpr mat CM14{{1, 2},
                       {3, 4}};
    static_assert(CM14.pow(2) == CM14 * CM14);
    static_assert(CM14.pow(5) == CM14 * CM14 * CM14 * CM14 * CM14);
    // determinant
    static_assert(CM14.det() == -2);

    cout << "Hello World\n";

    return 0;
}
