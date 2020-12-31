
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B"

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
	vector<int> ans;
	for (int i = 0; i < q; i++) {
		int c, x, y;
		cin >> c >> x >> y;
		x--;
		if (c) {
			ans.emplace_back(ft.sum(x, y));
		}
		else {
			ft.add(x, y);
		}
	}

	for (const auto& e : ans) cout << e << "\n";
	
	return 0;
}
