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


# :warning: library/BellmanFord.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#d521f765a49c72507257a2620612ee96">library</a>
* <a href="{{ site.github.repository_url }}/blob/master/library/BellmanFord.cpp">View this file on GitHub</a>
    - Last commit date: 1970-01-01 00:00:00+00:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <vector>
#include <algorithm>

using namespace std;

template<class T>
struct Edge {
	int from, to;
	T cost;
	Edge() {}
	Edge(int from, int to, T cost) : from(from), to(to), cost(cost) {}
};

template<class T>
vector<T> BellmanFord(const vector<Edge<T>> &edges, const int V, const int st) {

	const T inf = numeric_limits<T>::max() / 2;
	vector<T> cost(V, inf);
	cost[st] = 0;
	for (int i = 0; i < V - 1; i++) {
		for (const auto &e : edges) {
			if (cost[e.from] == inf) continue;
			cost[e.to] = min(cost[e.to], cost[e.from] + e.cost);
		}
	}

	for (int i = 0; i < V; i++) {
		for (const auto &e : edges) { // finding negative loop
			if (cost[e.from] == inf) continue;
			if (cost[e.from] == -inf) cost[e.to] = -inf; // src is nloop -> dst is nloop
			else if (cost[e.to] > cost[e.from] + e.cost) cost[e.to] = -inf; // chmin is possible -> nloop
		}
	}

	return cost;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "library/BellmanFord.cpp"
#include <vector>
#include <algorithm>

using namespace std;

template<class T>
struct Edge {
	int from, to;
	T cost;
	Edge() {}
	Edge(int from, int to, T cost) : from(from), to(to), cost(cost) {}
};

template<class T>
vector<T> BellmanFord(const vector<Edge<T>> &edges, const int V, const int st) {

	const T inf = numeric_limits<T>::max() / 2;
	vector<T> cost(V, inf);
	cost[st] = 0;
	for (int i = 0; i < V - 1; i++) {
		for (const auto &e : edges) {
			if (cost[e.from] == inf) continue;
			cost[e.to] = min(cost[e.to], cost[e.from] + e.cost);
		}
	}

	for (int i = 0; i < V; i++) {
		for (const auto &e : edges) { // finding negative loop
			if (cost[e.from] == inf) continue;
			if (cost[e.from] == -inf) cost[e.to] = -inf; // src is nloop -> dst is nloop
			else if (cost[e.to] > cost[e.from] + e.cost) cost[e.to] = -inf; // chmin is possible -> nloop
		}
	}

	return cost;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

