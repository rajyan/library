
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B"

#include "../../library/FenwickTree.cpp"

#include <iostream>
#include <vector>

using namespace std;
using lint = long long;

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
