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


# :warning: library/slide_minmax.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#d521f765a49c72507257a2620612ee96">library</a>
* <a href="{{ site.github.repository_url }}/blob/master/library/slide_minmax.cpp">View this file on GitHub</a>
    - Last commit date: 2020-05-06 15:17:57+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <vector>
#include <deque>

using namespace std;

template<class T>
pair<vector<T>, vector<T>> slide_minmax(const vector<T> &v, int k) {

	deque<int> deq_min, deq_max;
	vector<T> ret_min, ret_max;
	for (int i = 0; i < v.size(); i++) {

		while (!deq_min.empty() && v[deq_min.back()] >= v[i]) deq_min.pop_back();
		while (!deq_max.empty() && v[deq_max.back()] <= v[i]) deq_max.pop_back();

		deq_min.push_back(i);
		deq_max.push_back(i);

		if (i - k + 1 >= 0) {
			ret_min.emplace_back(v[deq_min.front()]);
			ret_max.emplace_back(v[deq_max.front()]);
			if (deq_min.front() == i - k + 1) deq_min.pop_front();
			if (deq_max.front() == i - k + 1) deq_max.pop_front();
		}

	}
	return { ret_min, ret_max };
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "library/slide_minmax.cpp"
#include <vector>
#include <deque>

using namespace std;

template<class T>
pair<vector<T>, vector<T>> slide_minmax(const vector<T> &v, int k) {

	deque<int> deq_min, deq_max;
	vector<T> ret_min, ret_max;
	for (int i = 0; i < v.size(); i++) {

		while (!deq_min.empty() && v[deq_min.back()] >= v[i]) deq_min.pop_back();
		while (!deq_max.empty() && v[deq_max.back()] <= v[i]) deq_max.pop_back();

		deq_min.push_back(i);
		deq_max.push_back(i);

		if (i - k + 1 >= 0) {
			ret_min.emplace_back(v[deq_min.front()]);
			ret_max.emplace_back(v[deq_max.front()]);
			if (deq_min.front() == i - k + 1) deq_min.pop_front();
			if (deq_max.front() == i - k + 1) deq_max.pop_front();
		}

	}
	return { ret_min, ret_max };
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

