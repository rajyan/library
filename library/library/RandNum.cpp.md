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


# :warning: library/RandNum.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#d521f765a49c72507257a2620612ee96">library</a>
* <a href="{{ site.github.repository_url }}/blob/master/library/RandNum.cpp">View this file on GitHub</a>
    - Last commit date: 2020-08-26 09:53:12+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <random>
#include <chrono>
#include <vector>
#include <unordered_map>

using namespace std;
using lint = long long;

struct RandNum {

	mt19937 mt;
	RandNum() : mt(chrono::steady_clock::now().time_since_epoch().count()) {}

	lint operator() (const lint& rand_min, const lint& rand_max) {
		uniform_int_distribution<lint> dist(rand_min, rand_max);
		return dist(mt);
	}
	lint operator() (lint rand_max) { return (*this)(0LL, rand_max); }

	vector<lint> uniq_vec(const int& sz, const lint& rand_min, lint rand_max) {

		vector<lint> res(sz);
		unordered_map<lint, lint> memo;
		for (int i = 0; i < sz; i++, rand_max--) {

			lint rand_val = (*this)(rand_min, rand_max);

			// If rand_max hasn't been replaced yet, fill it with rand_max
			if (memo.find(rand_max) == memo.end()) memo[rand_max] = rand_max;

			auto val_itr = memo.find(rand_val);
			if (val_itr == memo.end()) { // If rand_val has already been replaced
				memo[rand_val] = memo[rand_max];
			}
			else {
				rand_val = val_itr->second;
				val_itr->second = memo[rand_max];
			}

			res[i] = rand_val;
		}
		return res;
	}

	template<class Ite>
	void shuf(Ite first, Ite last) { shuffle(first, last, mt); }

};

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "library/RandNum.cpp"
#include <random>
#include <chrono>
#include <vector>
#include <unordered_map>

using namespace std;
using lint = long long;

struct RandNum {

	mt19937 mt;
	RandNum() : mt(chrono::steady_clock::now().time_since_epoch().count()) {}

	lint operator() (const lint& rand_min, const lint& rand_max) {
		uniform_int_distribution<lint> dist(rand_min, rand_max);
		return dist(mt);
	}
	lint operator() (lint rand_max) { return (*this)(0LL, rand_max); }

	vector<lint> uniq_vec(const int& sz, const lint& rand_min, lint rand_max) {

		vector<lint> res(sz);
		unordered_map<lint, lint> memo;
		for (int i = 0; i < sz; i++, rand_max--) {

			lint rand_val = (*this)(rand_min, rand_max);

			// If rand_max hasn't been replaced yet, fill it with rand_max
			if (memo.find(rand_max) == memo.end()) memo[rand_max] = rand_max;

			auto val_itr = memo.find(rand_val);
			if (val_itr == memo.end()) { // If rand_val has already been replaced
				memo[rand_val] = memo[rand_max];
			}
			else {
				rand_val = val_itr->second;
				val_itr->second = memo[rand_max];
			}

			res[i] = rand_val;
		}
		return res;
	}

	template<class Ite>
	void shuf(Ite first, Ite last) { shuffle(first, last, mt); }

};

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

