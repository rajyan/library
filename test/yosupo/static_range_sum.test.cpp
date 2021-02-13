
#define PROBLEM "https://judge.yosupo.jp/problem/static_range_sum"

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
using lint = long long;

#include "../../src/CumulativeSum.hpp"

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

    vector<lint> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];
    CuSum<lint> cuA(a);

    for (int i = 0; i < Q; i++) {
        int l, r;
        cin >> l >> r;
        cout << cuA.sum(l, r) << '\n';
    }

    return 0;
}
