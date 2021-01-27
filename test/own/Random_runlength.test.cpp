
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A"

#include "../../src/Random.hpp"
#include "../../src/runLength.hpp"

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

int main() {

    // random test
    Random ran;
    for (int i = 0; i < 100000; i++) {
        string s = ran.random_string(100);
        auto rl_s = runLength(s);
        string test;
        for (const auto &[c, n] : rl_s) {
            test += string(n, c);
        }
        assert(s == test);
    }

    cout << "Hello World\n";

    return 0;
}
