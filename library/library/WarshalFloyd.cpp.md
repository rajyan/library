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


# :warning: library/WarshalFloyd.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#d521f765a49c72507257a2620612ee96">library</a>
* <a href="{{ site.github.repository_url }}/blob/master/library/WarshalFloyd.cpp">View this file on GitHub</a>
    - Last commit date: 1970-01-01 00:00:00+00:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int INF = 1010101010;

template<class T>
inline bool chmin(T &a, T b) { return a > b && (a = b, true); }

int main() {

	int N, M;
	cin >> N >> M;

	vector<vector<int>> d(N, vector<int>(N, INF));
	for (int i = 0; i < N; i++) d[i][i] = 0;
	
	for (int i = 0; i < M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		a--, b--;
		d[a][b] = c;
		d[b][a] = c;
	}

	for (int k = 0; k < N; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				chmin(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}

}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "library/WarshalFloyd.cpp"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int INF = 1010101010;

template<class T>
inline bool chmin(T &a, T b) { return a > b && (a = b, true); }

int main() {

	int N, M;
	cin >> N >> M;

	vector<vector<int>> d(N, vector<int>(N, INF));
	for (int i = 0; i < N; i++) d[i][i] = 0;
	
	for (int i = 0; i < M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		a--, b--;
		d[a][b] = c;
		d[b][a] = c;
	}

	for (int k = 0; k < N; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				chmin(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}

}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

