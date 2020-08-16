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


# :warning: library/Compress.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#d521f765a49c72507257a2620612ee96">library</a>
* <a href="{{ site.github.repository_url }}/blob/master/library/Compress.cpp">View this file on GitHub</a>
    - Last commit date: 2020-05-06 15:17:57+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp

template<class T>
class Compress {
private:
	vector<T> comp;

public:
	Compress() {}
	Compress(const vector<T> &vec) : comp(vec) { build(); }

	void add(const T &x) { comp.emplace_back(x); }

	void build() {
		sort(begin(comp), end(comp));
		comp.erase(unique(begin(comp), end(comp)), end(comp));
	}

	vector<int> get(const vector<T> &vec) const {
		vector<int> ret(vec.size());
		transform(begin(vec), end(vec), ret.begin(), [&](const T &x) {
			return (int)(lower_bound(begin(comp), end(comp), x) - begin(comp));
		});
		return ret;
	}
	int get(const T &x) const { return lower_bound(begin(comp), end(comp), x) - begin(comp); }

	const T &operator[](const int k) const { return comp[k]; }
};

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "library/Compress.cpp"

template<class T>
class Compress {
private:
	vector<T> comp;

public:
	Compress() {}
	Compress(const vector<T> &vec) : comp(vec) { build(); }

	void add(const T &x) { comp.emplace_back(x); }

	void build() {
		sort(begin(comp), end(comp));
		comp.erase(unique(begin(comp), end(comp)), end(comp));
	}

	vector<int> get(const vector<T> &vec) const {
		vector<int> ret(vec.size());
		transform(begin(vec), end(vec), ret.begin(), [&](const T &x) {
			return (int)(lower_bound(begin(comp), end(comp), x) - begin(comp));
		});
		return ret;
	}
	int get(const T &x) const { return lower_bound(begin(comp), end(comp), x) - begin(comp); }

	const T &operator[](const int k) const { return comp[k]; }
};

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

