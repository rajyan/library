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


# :heavy_check_mark: test/yosupo/point_add_range_sum.test.cpp

<a href="../../../index.html">Back to top page</a>

* category: <a href="../../../index.html#0b58406058f6619a0f31a172defc0230">test/yosupo</a>
* <a href="{{ site.github.repository_url }}/blob/master/test/yosupo/point_add_range_sum.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-08-23 21:27:08+09:00


* see: <a href="https://judge.yosupo.jp/problem/point_add_range_sum">https://judge.yosupo.jp/problem/point_add_range_sum</a>


## Depends on

* :heavy_check_mark: <a href="../../../library/library/FenwickTree.cpp.html">library/FenwickTree.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"

#include "../../library/FenwickTree.cpp"

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

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "test/yosupo/point_add_range_sum.test.cpp"
#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"

#line 1 "library/FenwickTree.cpp"
#include <vector>

using namespace std;

template<class T>
class FenwickTree {
private:
	int n;
	vector<T> bit;
public:
	FenwickTree(int sz, T&& x = T(0)) : n(sz), bit(n + 1) {
		for (int i = 0; i < n; i++) add(i, x);
	}

	T sum(int k) const {
		T res = 0;
		for (k--; k >= 0; k = (k & (k + 1)) - 1) res += bit[k];
		return res;
	}
	T sum(int l, int r) const { return sum(r) - sum(l); }

	void add(int k, const T& x) {
		for (; k < n; k |= k + 1) bit[k] += x;
	}
	void set(int k, const T& x) { add(k, x - sum(k, k + 1)); }
};
#line 4 "test/yosupo/point_add_range_sum.test.cpp"

#include <iostream>
#include <iomanip>
#line 8 "test/yosupo/point_add_range_sum.test.cpp"

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

```
{% endraw %}

<a href="../../../index.html">Back to top page</a>

