
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A"

#include "../../src/Random.hpp"
#include "../../src/popcount.hpp"

#include <cassert>
#include <iostream>
#include <iomanip>

using namespace std;
using lint = long long;

struct init {
    init() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
    }
} init_;

inline int test(lint x) {
    long long count = 0;
    __asm__ volatile("POPCNT %1, %0;"
    :"=r"(count)
    :"r"(x)
    :
    );
    return count;
}

int main() {

    // meaning of magic numbers
//    cout << hex;
//    cout << 0b0101010101010101010101010101010101010101010101010101010101010101 << '\n';
//    cout << 0b0011001100110011001100110011001100110011001100110011001100110011 << '\n';
//    cout << 0b0000111100001111000011110000111100001111000011110000111100001111 << '\n';
//    cout << 0b0000000011111111000000001111111100000000111111110000000011111111 << '\n';
//    cout << 0b0000000000000000111111111111111100000000000000001111111111111111 << '\n';
//    cout << 0b0000000000000000000000000000000011111111111111111111111111111111 << '\n';

    // random test
    Random ran;
    for (int i = 0; i < 100000000; i++) {
        lint n = ran(0, numeric_limits<lint>::max());
        assert(test(n) == popcount(n));
    }

    cout << "Hello World\n";

    return 0;
}
