
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A"

#include "../../src/RandNum.cpp"
#include "../../src/popcount.cpp"

#include <cassert>
#include <iostream>
#include <iomanip>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1010101010;
constexpr lint LINF = 1LL << 60;

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
//    std::cout << std::hex;
//    std::cout << 0b0101010101010101010101010101010101010101010101010101010101010101 << '\n';
//    std::cout << 0b0011001100110011001100110011001100110011001100110011001100110011 << '\n';
//    std::cout << 0b0000111100001111000011110000111100001111000011110000111100001111 << '\n';
//    std::cout << 0b0000000011111111000000001111111100000000111111110000000011111111 << '\n';
//    std::cout << 0b0000000000000000111111111111111100000000000000001111111111111111 << '\n';
//    std::cout << 0b0000000000000000000000000000000011111111111111111111111111111111 << '\n';

    // random test
    RandNum ran;
    for (int i = 0; i < 100000000; i++) {
        lint n = ran(0, numeric_limits<lint>::max());
        assert(test(n) == popcount(n));
    }

    std::cout << "Hello World\n";

    return 0;
}
