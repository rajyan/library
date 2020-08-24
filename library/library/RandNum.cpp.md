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
    - Last commit date: 1970-01-01 00:00:00+00:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <random>
#include <chrono>

using namespace std;
using lint = long long;

struct RandNum {

	mt19937 mt;
	RandNum() : mt(chrono::steady_clock::now().time_since_epoch().count()) {}

	lint operator()(lint a, lint b) {
		uniform_int_distribution<lint> dist(a, b);
		return dist(mt);
	}
	lint operator() (lint b) { return (*this)(0LL, b); }

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

using namespace std;
using lint = long long;

struct RandNum {

	mt19937 mt;
	RandNum() : mt(chrono::steady_clock::now().time_since_epoch().count()) {}

	lint operator()(lint a, lint b) {
		uniform_int_distribution<lint> dist(a, b);
		return dist(mt);
	}
	lint operator() (lint b) { return (*this)(0LL, b); }

	template<class Ite>
	void shuf(Ite first, Ite last) { shuffle(first, last, mt); }

};

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

