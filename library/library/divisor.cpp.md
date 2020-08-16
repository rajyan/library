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


# :warning: library/divisor.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#d521f765a49c72507257a2620612ee96">library</a>
* <a href="{{ site.github.repository_url }}/blob/master/library/divisor.cpp">View this file on GitHub</a>
    - Last commit date: 2020-05-06 15:17:57+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <vector>
#include <algorithm>

using namespace std;

template<class T>
vector<T> divisor(const T n) {
	vector<T> res;
	for (T i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			res.emplace_back(i);
			if (i * i != n) res.emplace_back(n / i);
		}
	}
	sort(res.begin(), res.end());
	return res;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "library/divisor.cpp"
#include <vector>
#include <algorithm>

using namespace std;

template<class T>
vector<T> divisor(const T n) {
	vector<T> res;
	for (T i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			res.emplace_back(i);
			if (i * i != n) res.emplace_back(n / i);
		}
	}
	sort(res.begin(), res.end());
	return res;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

