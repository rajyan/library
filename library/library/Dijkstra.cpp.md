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


# :warning: library/Dijkstra.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#d521f765a49c72507257a2620612ee96">library</a>
* <a href="{{ site.github.repository_url }}/blob/master/library/Dijkstra.cpp">View this file on GitHub</a>
    - Last commit date: 1970-01-01 00:00:00+00:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

template<class T>
struct Edge {
	int to;
	T cost;
	Edge() {}
	Edge(int to, T cost) : to(to), cost(cost) {}
	bool operator>(const Edge &r) const { return this->cost > r.cost; }
};

template<class T>
vector<T> Dijkstra(const vector<vector<Edge<T>>> &edges, const int st) {

	const int V = (int)edges.size();
	const T inf = numeric_limits<T>::max() / 2;
	vector<T> cost(V, inf);
	cost[st] = 0;

	priority_queue<Edge<T>, vector<Edge<T>>, greater<Edge<T>>> pq;
	pq.emplace(st, cost[st]);

	while (!pq.empty()) {

		Edge<T> now(pq.top().to, pq.top().cost);
		pq.pop();

		if (cost[now.to] < now.cost) continue;
		for (const Edge<T> &e : edges[now.to]) {
			T tmp_cost = now.cost + e.cost;
			if (cost[e.to] > tmp_cost) {
				cost[e.to] = tmp_cost;
				pq.emplace(e.to, cost[e.to]);
			}
		}
	}

	return cost; // min cost to vertex idx from st
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "library/Dijkstra.cpp"
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

template<class T>
struct Edge {
	int to;
	T cost;
	Edge() {}
	Edge(int to, T cost) : to(to), cost(cost) {}
	bool operator>(const Edge &r) const { return this->cost > r.cost; }
};

template<class T>
vector<T> Dijkstra(const vector<vector<Edge<T>>> &edges, const int st) {

	const int V = (int)edges.size();
	const T inf = numeric_limits<T>::max() / 2;
	vector<T> cost(V, inf);
	cost[st] = 0;

	priority_queue<Edge<T>, vector<Edge<T>>, greater<Edge<T>>> pq;
	pq.emplace(st, cost[st]);

	while (!pq.empty()) {

		Edge<T> now(pq.top().to, pq.top().cost);
		pq.pop();

		if (cost[now.to] < now.cost) continue;
		for (const Edge<T> &e : edges[now.to]) {
			T tmp_cost = now.cost + e.cost;
			if (cost[e.to] > tmp_cost) {
				cost[e.to] = tmp_cost;
				pq.emplace(e.to, cost[e.to]);
			}
		}
	}

	return cost; // min cost to vertex idx from st
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

