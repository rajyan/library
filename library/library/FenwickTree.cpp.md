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
<script type="text/javascript" src="../../assets/js/copy-button.js"></script>
<link rel="stylesheet" href="../../assets/css/copy-button.css" />


# :warning: library/FenwickTree.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#d521f765a49c72507257a2620612ee96">library</a>
* <a href="{{ site.github.repository_url }}/blob/master/library/FenwickTree.cpp">View this file on GitHub</a>
    - Last commit date: 1970-01-01 00:00:00+00:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
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

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
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

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

