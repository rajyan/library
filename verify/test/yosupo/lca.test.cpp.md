---
layout: default
---

<!-- mathjax config similar to math.stackexchange -->
<script type="text/javascript" async
  src="https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.5/MathJax.js?config=TeX-MML-AM_CHTML">
</script>
<script type="text/x-mathjax-config">
  MathJax.Hub.Config({
    TeX: { equationNumbers: { autoNumber: "AMS" }},
    tex2jax: {
      inlineMath: [ ['$','$'] ],
      processEscapes: true
    },
    "HTML-CSS": { matchFontHeight: false },
    displayAlign: "left",
    displayIndent: "2em"
  });
</script>

<script type="text/javascript" src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
<script src="https://cdn.jsdelivr.net/npm/jquery-balloon-js@1.1.2/jquery.balloon.min.js" integrity="sha256-ZEYs9VrgAeNuPvs15E39OsyOJaIkXEEt10fzxJ20+2I=" crossorigin="anonymous"></script>
<script type="text/javascript" src="../../../assets/js/copy-button.js"></script>
<link rel="stylesheet" href="../../../assets/css/copy-button.css" />


# :heavy_check_mark: test/yosupo/lca.test.cpp

<a href="../../../index.html">Back to top page</a>

* category: <a href="../../../index.html#0b58406058f6619a0f31a172defc0230">test/yosupo</a>
* <a href="{{ site.github.repository_url }}/blob/master/test/yosupo/lca.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-08-23 21:22:52+09:00


* see: <a href="https://judge.yosupo.jp/problem/lca">https://judge.yosupo.jp/problem/lca</a>


## Depends on

* :heavy_check_mark: <a href="../../../library/library/LowestCommonAncestor.cpp.html">library/LowestCommonAncestor.cpp</a>
* :heavy_check_mark: <a href="../../../library/library/makevec.cpp.html">library/makevec.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp

#define PROBLEM "https://judge.yosupo.jp/problem/lca"

#include "../../library/makevec.cpp"
#include "../../library/LowestCommonAncestor.cpp"

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

	int N, Q;
	cin >> N >> Q;

	auto edges = make_vec(N, 0, 0);
	for (int i = 0; i < N - 1; i++) {
		int p;
		cin >> p;
		edges[p].emplace_back(i + 1);
		edges[i + 1].emplace_back(p);
	}

	LCA lca(edges);
	for (int i = 0; i < Q; i++) {
		int u, v;
		cin >> u >> v;
		cout << lca.get_lca(u, v) << "\n";
	}

	return 0;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "test/yosupo/lca.test.cpp"

#define PROBLEM "https://judge.yosupo.jp/problem/lca"

#line 1 "library/makevec.cpp"
#include <vector>

using namespace std;

template<class T>
vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
template<class... Size>
auto make_vec(size_t s, Size... tail) {
	return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
}
#line 2 "library/LowestCommonAncestor.cpp"

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
#line 6 "test/yosupo/lca.test.cpp"

#include <iostream>
#include <iomanip>
#line 10 "test/yosupo/lca.test.cpp"

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

	int N, Q;
	cin >> N >> Q;

	auto edges = make_vec(N, 0, 0);
	for (int i = 0; i < N - 1; i++) {
		int p;
		cin >> p;
		edges[p].emplace_back(i + 1);
		edges[i + 1].emplace_back(p);
	}

	LCA lca(edges);
	for (int i = 0; i < Q; i++) {
		int u, v;
		cin >> u >> v;
		cout << lca.get_lca(u, v) << "\n";
	}

	return 0;
}

```
{% endraw %}

<a href="../../../index.html">Back to top page</a>

