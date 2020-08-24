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


# :warning: library/RectangleSum.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#d521f765a49c72507257a2620612ee96">library</a>
* <a href="{{ site.github.repository_url }}/blob/master/library/RectangleSum.cpp">View this file on GitHub</a>
    - Last commit date: 1970-01-01 00:00:00+00:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <vector>

using namespace std;

// 2d Cumulative Sum
template< class T >
class RecSum {
private:
	int H, W;
	vector<vector<T>> data;

public:
	RecSum(vector<vector<T>> const& vec) : H(vec.size()), W(vec[0].size()), data(H + 1, vector<T>(W + 1, 0)) {
		for (int row = 0; row < H; row++) {
			for (int col = 0; col < W; col++) {
				data[row + 1][col + 1] += data[row + 1][col] + data[row][col + 1] - data[row][col] + vec[row][col];
			}
		}
	}

	RecSum(int H, int W) : H(H), W(W), data(H + 1, vector<T>(W + 1, 0)) {}
	void add(int x, int y, T z) { data[x + 1][y + 1] += z; }
	void init() {
		for (int row = 0; row < H; row++) {
			for (int col = 0; col < W; col++) {
				data[row + 1][col + 1] += data[row + 1][col] + data[row][col + 1] - data[row][col];
			}
		}
	}

	// [sx, gx) x [sy, gy)
	T operator()(int sx, int sy, int gx, int gy) {
		return data[gx][gy] - data[sx][gy] - data[gx][sy] + data[sx][sy];
	}
};
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "library/RectangleSum.cpp"
#include <vector>

using namespace std;

// 2d Cumulative Sum
template< class T >
class RecSum {
private:
	int H, W;
	vector<vector<T>> data;

public:
	RecSum(vector<vector<T>> const& vec) : H(vec.size()), W(vec[0].size()), data(H + 1, vector<T>(W + 1, 0)) {
		for (int row = 0; row < H; row++) {
			for (int col = 0; col < W; col++) {
				data[row + 1][col + 1] += data[row + 1][col] + data[row][col + 1] - data[row][col] + vec[row][col];
			}
		}
	}

	RecSum(int H, int W) : H(H), W(W), data(H + 1, vector<T>(W + 1, 0)) {}
	void add(int x, int y, T z) { data[x + 1][y + 1] += z; }
	void init() {
		for (int row = 0; row < H; row++) {
			for (int col = 0; col < W; col++) {
				data[row + 1][col + 1] += data[row + 1][col] + data[row][col + 1] - data[row][col];
			}
		}
	}

	// [sx, gx) x [sy, gy)
	T operator()(int sx, int sy, int gx, int gy) {
		return data[gx][gy] - data[sx][gy] - data[gx][sy] + data[sx][sy];
	}
};

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

