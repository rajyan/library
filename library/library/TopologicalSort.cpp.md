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


# :warning: library/TopologicalSort.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#d521f765a49c72507257a2620612ee96">library</a>
* <a href="{{ site.github.repository_url }}/blob/master/library/TopologicalSort.cpp">View this file on GitHub</a>
    - Last commit date: 2020-08-13 05:43:48+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Topological_sort {
private:
	int V;
	vector<vector<int>> edges;
	vector<int> used;

public:
	Topological_sort(int n) :V(n), edges(n), used(n) {}
	Topological_sort(vector<vector<int>> &edges) :V(edges.size()), used(edges.size()) { this->edges = edges; }

	void add_edge(int from, int to) { edges[from].emplace_back(to); }

	vector<int> build() {

		vector<int> res, in(V);
		for (int i = 0; i < V; i++) for (const auto &e : edges[i]) in[e]++;

		res.reserve(V);
		queue<int> que;
		for (int i = 0; i < V; i++) {
			if (in[i] == 0 && !used[i]) {
				used[i] = 1;
				que.emplace(i);
			}
		}
		while (!que.empty()) {
			int now = que.front();
			DMP(now, in);
			que.pop();
			res.emplace_back(now);
			for (const auto &e : edges[now]) {
				in[e]--;
				if (in[e] == 0) {
					if (used[e]) return vector<int>(); // unable to sort
					used[e] = used[now] + 1;
					que.emplace(e);
				}
			}
		}

		return res;
	}

	int longest_path() {
		if (none_of(used.begin(), used.end(), [](int u) { return u > 0; })) build();
		return *max_element(used.begin(), used.end()) - 1;
	}

};

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "library/TopologicalSort.cpp"
#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Topological_sort {
private:
	int V;
	vector<vector<int>> edges;
	vector<int> used;

public:
	Topological_sort(int n) :V(n), edges(n), used(n) {}
	Topological_sort(vector<vector<int>> &edges) :V(edges.size()), used(edges.size()) { this->edges = edges; }

	void add_edge(int from, int to) { edges[from].emplace_back(to); }

	vector<int> build() {

		vector<int> res, in(V);
		for (int i = 0; i < V; i++) for (const auto &e : edges[i]) in[e]++;

		res.reserve(V);
		queue<int> que;
		for (int i = 0; i < V; i++) {
			if (in[i] == 0 && !used[i]) {
				used[i] = 1;
				que.emplace(i);
			}
		}
		while (!que.empty()) {
			int now = que.front();
			DMP(now, in);
			que.pop();
			res.emplace_back(now);
			for (const auto &e : edges[now]) {
				in[e]--;
				if (in[e] == 0) {
					if (used[e]) return vector<int>(); // unable to sort
					used[e] = used[now] + 1;
					que.emplace(e);
				}
			}
		}

		return res;
	}

	int longest_path() {
		if (none_of(used.begin(), used.end(), [](int u) { return u > 0; })) build();
		return *max_element(used.begin(), used.end()) - 1;
	}

};

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

