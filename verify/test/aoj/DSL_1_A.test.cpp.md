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


# :x: test/aoj/DSL_1_A.test.cpp

<a href="../../../index.html">Back to top page</a>

* category: <a href="../../../index.html#0d0c91c0cca30af9c1c9faef0cf04aa9">test/aoj</a>
* <a href="{{ site.github.repository_url }}/blob/master/test/aoj/DSL_1_A.test.cpp">View this file on GitHub</a>
    - Last commit date: 1970-01-01 00:00:00+00:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp

#define PROBLEM 'http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A'

#include "../../library/UnionFind.cpp"

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

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "test/aoj/DSL_1_A.test.cpp"

#define PROBLEM 'http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A'

#line 1 "library/UnionFind.cpp"
#include <vector>
using namespace std;

class UnionFind {
private:
	vector<int> data;
public:
	UnionFind(int size) : data(size, -1) { }
	int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
	bool is_same(int x, int y) { return root(x) == root(y); }
	int size(int x) { return -data[root(x)]; }

	bool unify(int x, int y) {
		x = root(x); y = root(y);
		if (x != y) {
			if (data[y] < data[x]) swap(x, y);
			data[x] += data[y]; data[y] = x;
			return true;
		}
		return false;
	}
};
#line 5 "test/aoj/DSL_1_A.test.cpp"

#include <iostream>
#include <iomanip>
#line 9 "test/aoj/DSL_1_A.test.cpp"

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

```
{% endraw %}

<a href="../../../index.html">Back to top page</a>

