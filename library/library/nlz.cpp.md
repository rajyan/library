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


# :heavy_check_mark: library/nlz.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#d521f765a49c72507257a2620612ee96">library</a>
* <a href="{{ site.github.repository_url }}/blob/master/library/nlz.cpp">View this file on GitHub</a>
    - Last commit date: 2020-05-13 00:59:04+09:00




## Verified with

* :heavy_check_mark: <a href="../../verify/test/yosupo/lca.test.cpp.html">test/yosupo/lca.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
int nlz(unsigned int x) {
	union {
		unsigned int as_uint32;
		float        as_float;
	} data;
	data.as_float = (float)x + 0.5;
	int n = 158 - (data.as_uint32 >> 23);
	return n;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "library/nlz.cpp"
int nlz(unsigned int x) {
	union {
		unsigned int as_uint32;
		float        as_float;
	} data;
	data.as_float = (float)x + 0.5;
	int n = 158 - (data.as_uint32 >> 23);
	return n;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

