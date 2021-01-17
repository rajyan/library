
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A"

#include "../../src/RandNum.cpp"
#include "../../src/clz.cpp"

#include <cassert>
#include <bitset>
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
    __asm__ volatile("LZCNT %1, %0;"
    :"=r"(count)
    :"r"(x)
    :
    );
    return count;
}

int main() {

    // random test
    RandNum ran;
    for (int i = 0; i < 100000000; i++) {
        lint n = ran(0, numeric_limits<lint>::max());
        assert(test(n) == clz(n));
    }

    std::cout << "Hello World\n";

    return 0;
}
