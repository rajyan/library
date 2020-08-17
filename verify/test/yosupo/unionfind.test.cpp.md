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


# :heavy_check_mark: test/yosupo/unionfind.test.cpp

<a href="../../../index.html">Back to top page</a>

* category: <a href="../../../index.html#0b58406058f6619a0f31a172defc0230">test/yosupo</a>
* <a href="{{ site.github.repository_url }}/blob/master/test/yosupo/unionfind.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-08-17 10:59:31+09:00


* see: <a href="https://judge.yosupo.jp/problem/unionfind">https://judge.yosupo.jp/problem/unionfind</a>


## Depends on

* :heavy_check_mark: <a href="../../../library/library/UnionFind.cpp.html">library/UnionFind.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp

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

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "test/yosupo/unionfind.test.cpp"

#define PROBLEM "https://judge.yosupo.jp/problem/unionfind"

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
#line 5 "test/yosupo/unionfind.test.cpp"

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

```
{% endraw %}

<a href="../../../index.html">Back to top page</a>

