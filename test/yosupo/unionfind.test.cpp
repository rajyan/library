
#define PROBLEM "https://judge.yosupo.jp/problem/unionfind"

#include "../../src/UnionFind.hpp"

#include <iostream>
#include <iomanip>

using namespace std;

struct init {
	init() {
		cin.tie(nullptr); ios::sync_with_stdio(false);
		cout << fixed << setprecision(10);
	}
} init_;

int main() {

	int N, Q;
	cin >> N >> Q;

	UnionFind uf(N);
	for (int i = 0; i < Q; i++) {
		int t, u, v;
		cin >> t >> u >> v;
		if (t == 0) uf.unify(u, v);
		else cout << uf.is_same(u, v) << "\n";
	}

	return 0;
}
