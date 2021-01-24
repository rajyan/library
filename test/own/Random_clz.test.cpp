
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A"

#include "../../src/Random.cpp"
#include "../../src/clz.cpp"

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
    __asm__ volatile("LZCNT %1, %0;"
    :"=r"(count)
    :"r"(x)
    :
    );
    return count;
}

int main() {

    // random test
    Random ran;
    for (int i = 0; i < 100000000; i++) {
        lint n = ran(0, numeric_limits<lint>::max());
        assert(test(n) == clz(n));
    }

    cout << "Hello World\n";

    return 0;
}
