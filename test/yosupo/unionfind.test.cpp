
#define PROBLEM "https://judge.yosupo.jp/problem/unionfind"

#include "../../library/UnionFind.cpp"

#include <iostream>

using namespace std;

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
