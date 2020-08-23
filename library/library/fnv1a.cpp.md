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


# :heavy_check_mark: library/fnv1a.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#d521f765a49c72507257a2620612ee96">library</a>
* <a href="{{ site.github.repository_url }}/blob/master/library/fnv1a.cpp">View this file on GitHub</a>
    - Last commit date: 2020-08-23 11:44:21+09:00




## Verified with

* :heavy_check_mark: <a href="../../verify/test/yosupo/associative_array.test.cpp.html">test/yosupo/associative_array.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <iostream>

using namespace std;

inline uint64_t fnv1a_64(string data) {

	uint64_t hash = 0xcbf29ce484222325;
	constexpr uint64_t prime = 0x100000001b3;

	for (int i = 0; i < (int)data.size(); ++i) {
		hash = hash ^ data[i];
		hash *= prime;
	}

	return hash;
}
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "library/fnv1a.cpp"
#include <iostream>

using namespace std;

inline uint64_t fnv1a_64(string data) {

	uint64_t hash = 0xcbf29ce484222325;
	constexpr uint64_t prime = 0x100000001b3;

	for (int i = 0; i < (int)data.size(); ++i) {
		hash = hash ^ data[i];
		hash *= prime;
	}

	return hash;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

