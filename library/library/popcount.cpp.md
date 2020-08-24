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


# :warning: library/popcount.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#d521f765a49c72507257a2620612ee96">library</a>
* <a href="{{ site.github.repository_url }}/blob/master/library/popcount.cpp">View this file on GitHub</a>
    - Last commit date: 2020-05-06 17:51:16+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp

using lint = long long;

inline int popcount(lint n) {
	n = (n & 0x5555555555555555) + (n >> 1 & 0x5555555555555555);
	n = (n & 0x3333333333333333) + (n >> 2 & 0x3333333333333333);
	n = (n & 0x0f0f0f0f0f0f0f0f) + (n >> 4 & 0x0f0f0f0f0f0f0f0f);
	n = (n & 0x00ff00ff00ff00ff) + (n >> 8 & 0x00ff00ff00ff00ff);
	n = (n & 0x0000ffff0000ffff) + (n >> 16 & 0x0000ffff0000ffff);
	n = (n & 0x00000000ffffffff) + (n >> 32 & 0x00000000ffffffff);
	return n;
}
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "library/popcount.cpp"

using lint = long long;

inline int popcount(lint n) {
	n = (n & 0x5555555555555555) + (n >> 1 & 0x5555555555555555);
	n = (n & 0x3333333333333333) + (n >> 2 & 0x3333333333333333);
	n = (n & 0x0f0f0f0f0f0f0f0f) + (n >> 4 & 0x0f0f0f0f0f0f0f0f);
	n = (n & 0x00ff00ff00ff00ff) + (n >> 8 & 0x00ff00ff00ff00ff);
	n = (n & 0x0000ffff0000ffff) + (n >> 16 & 0x0000ffff0000ffff);
	n = (n & 0x00000000ffffffff) + (n >> 32 & 0x00000000ffffffff);
	return n;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

