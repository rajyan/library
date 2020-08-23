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


# :heavy_check_mark: library/UnionFind.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#d521f765a49c72507257a2620612ee96">library</a>
* <a href="{{ site.github.repository_url }}/blob/master/library/UnionFind.cpp">View this file on GitHub</a>
    - Last commit date: 2020-05-06 15:17:57+09:00




## Verified with

* :heavy_check_mark: <a href="../../verify/test/aoj/DSL_1_A.test.cpp.html">test/aoj/DSL_1_A.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/yosupo/unionfind.test.cpp.html">test/yosupo/unionfind.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
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

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
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

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

