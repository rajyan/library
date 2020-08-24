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


# :warning: library/CumulativeSum.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#d521f765a49c72507257a2620612ee96">library</a>
* <a href="{{ site.github.repository_url }}/blob/master/library/CumulativeSum.cpp">View this file on GitHub</a>
    - Last commit date: 1970-01-01 00:00:00+00:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <vector>

using namespace std;

template <class T>
class CuSum {
private:
	vector<T> cusum;

public:
	CuSum(vector<T> const &vec) : cusum(vec.size() + 1) {
		for (int i = 0; i < (int)vec.size(); i++) cusum[i + 1] = cusum[i] + vec[i];
	}
	CuSum(const int N) : cusum(N + 1) {}
	void add(const int i, const T &x) { cusum[i + 1] += x; }
	void build() { for (int i = 0; i < (int)cusum.size() - 1; i++) cusum[i + 1] += cusum[i]; }

	// partial sum of 0-indexed [l, r)
	T operator()(int l, int r) {
		if (r < l || r < 0) {
			assert(0);
			return T(0);
		}
		else return cusum[r] - cusum[l];
	}
	// 0-indexed
	const T &operator[](int i) { return cusum[i + 1]; }
	T back() { return cusum.back(); }
};


```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "library/CumulativeSum.cpp"
#include <vector>

using namespace std;

template <class T>
class CuSum {
private:
	vector<T> cusum;

public:
	CuSum(vector<T> const &vec) : cusum(vec.size() + 1) {
		for (int i = 0; i < (int)vec.size(); i++) cusum[i + 1] = cusum[i] + vec[i];
	}
	CuSum(const int N) : cusum(N + 1) {}
	void add(const int i, const T &x) { cusum[i + 1] += x; }
	void build() { for (int i = 0; i < (int)cusum.size() - 1; i++) cusum[i + 1] += cusum[i]; }

	// partial sum of 0-indexed [l, r)
	T operator()(int l, int r) {
		if (r < l || r < 0) {
			assert(0);
			return T(0);
		}
		else return cusum[r] - cusum[l];
	}
	// 0-indexed
	const T &operator[](int i) { return cusum[i + 1]; }
	T back() { return cusum.back(); }
};


```
{% endraw %}

<a href="../../index.html">Back to top page</a>

