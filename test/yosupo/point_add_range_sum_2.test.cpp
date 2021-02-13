
#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"

#include "../../src/SegmentTree.hpp"

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
using lint = long long;

struct init {
    init() {
//        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
    }
} init_;

int main() {

    int N, Q;
    cin >> N >> Q;

    static Monoid<lint> monoid_add([](lint l, lint r) { return l + r; });
    SegmentTree<lint, monoid_add> sg(N);
    for (int i = 0; i < N; i++) {
        lint a;
        cin >> a;
        sg.set(i, a);
    }

    for (int i = 0; i < Q; i++) {
        int q, l, r;
        cin >> q >> l >> r;
        if (q) {
            cout << sg.sum(l, r) << '\n';
        }
        else {
            sg.add(l, r);
        }
    }

    return 0;
}
