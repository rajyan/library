#include <vector>

using namespace std;

class LCA {
private:

	int N, lg_N;
	vector<int> depth;
	vector<vector<int>> par;

	void build(const vector<vector<int>> &tree, int root) {

		auto dfs = [&](auto &&f, int now) -> void {
			for (const auto &next : tree[now]) {
				if (par[0][next] == -1) {
					par[0][next] = now;
					depth[next] = depth[now] + 1;
					f(f, next);
				}
			}
		};

		par[0][root] = root;
		dfs(dfs, root);

		for (int bit = 0; bit < lg_N; bit++) {
			for (int i = 0; i < N; i++) {
				par[bit + 1][i] = par[bit][par[bit][i]];
			}
		}
	}

	int ancestor(int now, int n) {
		if (n <= 0) return now;
		for (int i = 0, lg_n = 32 - nlz(n); i < lg_n; i++) {
			if (n & (1LL << i)) now = par[i][now];
		}
		return now;
	}

	int nlz(unsigned int x) {
		union {
			unsigned int as_uint32;
			float        as_float;
		} data;
		data.as_float = (float)x + 0.5;
		int n = 158 - (data.as_uint32 >> 23);
		return n;
	}

public:
	LCA(const vector<vector<int>> &tree, int root = 0) : N(tree.size()), lg_N(32 - nlz(N)), depth(N), par(lg_N + 1, vector<int>(N, -1)) { build(tree, root); }

	int get_lca(int u, int v) {

		if (depth[u] < depth[v]) swap(u, v);
		u = ancestor(u, depth[u] - depth[v]);
		if (u == v) return u;

		for (int i = 32 - nlz(depth[u]); i >= 0; i--) {
			if (par[i][u] != par[i][v]) {
				u = par[i][u];
				v = par[i][v];
			}
		}
		return par[0][u];
	}

	int dist(int u, int v) {
		return depth[u] + depth[v] - 2 * depth[get_lca(u, v)];
	}
};
