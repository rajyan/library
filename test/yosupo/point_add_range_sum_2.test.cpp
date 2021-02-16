
#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"

#include "../../src/SegmentTree.hpp"

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

    int N, Q;
    cin >> N >> Q;

    SegmentTree<monoid::add<lint>> sg_with_identity(N);
    constexpr static auto f = [](auto l, auto r) { return l + r; };
    SegmentTree<Monoid<lint, f>> sg(N);
    for (int i = 0; i < N; i++) {
        lint a;
        cin >> a;
        sg_with_identity.set(i, a);
        sg.set(i, a);
    }

    for (int i = 0; i < Q; i++) {
        int q, l, r;
        cin >> q >> l >> r;
        if (q) {
            assert(get<lint>(sg.sum(l, r)) == sg_with_identity.sum(l, r));
            cout << get<lint>(sg.sum(l, r)) << '\n';
        }
        else {
            sg_with_identity.add(l, r);
            sg.add(l, r);
        }
    }

    return 0;
}
