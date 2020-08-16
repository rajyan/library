#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"

#include "../../library/FenwickTree.cpp"

#include <iostream>
#include <vector>

using namespace std;
using lint = long long;

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
