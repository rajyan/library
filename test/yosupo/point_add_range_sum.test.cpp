#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"

#include "../../src/FenwickTree.cpp"

#include <iostream>
#include <iomanip>

using namespace std;
using lint = long long;

struct init {
	init() {
		cin.tie(nullptr); ios::sync_with_stdio(false);
		cout << fixed << setprecision(10);
	}
} init_;

int main() {

	int n, q;
	cin >> n >> q;

	FenwickTree<lint> ft(n, 0);
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		ft.set(i, a);
	}

	for (int i = 0; i < q; i++) {
		int c, x, y;
		cin >> c >> x >> y;
		if (c) {
			cout << ft.sum(x, y) << "\n";
		}
		else {
			ft.add(x, y);
		}
	}

	return 0;
}
