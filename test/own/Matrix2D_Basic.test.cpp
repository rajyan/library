
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITM1_1_A"

#include "../../src/makevec.cpp"
#include "../../src/Matrix2D.cpp"

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

    cout << "Hello World\n";

    return 0;
}
