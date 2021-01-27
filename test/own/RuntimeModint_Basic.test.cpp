
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A"

#define RUNTIME_MODINT
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

    RMOD = 55;

    // default constructor
    rmint m1{};
    assert(m1.val == 0);
    // constructor
    rmint m2{RMOD + 2};
    assert(m2.val == 2);
    // copy constructor, == operator
    rmint m3 = m2;
    assert(m3.val == 2);
    assert(m2 == m3);
    // construct with negative value
    rmint m4(-1);
    assert(m4.val == RMOD - 1);
    // vector, implicit conversion
    vector<rmint> v(10, 1);
    assert(all_of(v.begin(), v.end(), [](const rmint &m) { return m == 1; }));
    // +=, + operator
    rmint m5(1), m6(1);
    assert(m5 + m6 == 2);
    m5 += m6;
    assert(m5 == 2);
    // -=, - operator
    rmint m7(0), m8(1);
    assert(m7 - m8 == RMOD - 1);
    m7 -= m8;
    assert(m7 == RMOD - 1);
    // *=, * operator
    rmint m9(1), m10(2);
    assert(m9 * m10 == 2);
    m9 *= m10;
    assert(m9 == 2);
    // pow
    rmint m11(2);
    assert(m11.pow(10) == 1024);
    assert(m11.pow(40) == (1LL << 40) % RMOD);
    // /=, / operator
    rmint m12(4), m13(2), m14(3);
    assert(m12 / m13 == 2);
    assert(m12 / m13 * m13 == m12);
    assert(m13 / m14 * m14 == m13);
    // - operator
    rmint m15(0), m16(1);
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

    cout << "Hello World\n";

    return 0;
}
