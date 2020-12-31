#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"

#include "../../src/FenwickTree.cpp"

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1010101010;
constexpr lint LINF = 1LL << 60;

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
