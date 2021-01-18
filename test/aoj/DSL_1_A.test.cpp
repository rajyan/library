
#define PROBLEM 'http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A'

#include "../../src/UnionFind.cpp"

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

struct init {
	init() {
		cin.tie(nullptr); ios::sync_with_stdio(false);
		cout << fixed << setprecision(10);
	}
} init_;

int main() {

	int n, q;
	cin >> n >> q;

	UnionFind uf(n);
	for (int i = 0; i < q; i++) {
		int c, x, y;
		cin >> c >> x >> y;

		if (c) {
			cout << uf.is_same(x, y) << "\n";
		}
		else {
			uf.unify(x, y);
		}
	}

	return 0;
}
