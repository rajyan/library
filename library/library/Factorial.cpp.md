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


# :warning: library/Factorial.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#d521f765a49c72507257a2620612ee96">library</a>
* <a href="{{ site.github.repository_url }}/blob/master/library/Factorial.cpp">View this file on GitHub</a>
    - Last commit date: 1970-01-01 00:00:00+00:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <vector>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007;

class Factorial {
private:
	vector<lint> fac, inv, finv;

	void build(int N) {
		fac[0] = fac[1] = 1; inv[1] = 1; finv[0] = finv[1] = 1;

		for (int i = 2; i < N; i++) {
			fac[i] = fac[i - 1] * i % MOD;
			inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
			finv[i] = finv[i - 1] * inv[i] % MOD;
		}
	}

public:
	Factorial(int N = 110000) : fac(N + 1), inv(N + 1), finv(N + 1) { build(N + 1); }

	lint Cmod (int n, int k) {
		if (n < k || k < 0) return 0LL;
		return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
	}

	lint Pmod(int n, int k) {
		if (n < k || k < 0) return 0LL;
		return fac[n] * finv[n - k] % MOD;
	}
};

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "library/Factorial.cpp"
#include <vector>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007;

class Factorial {
private:
	vector<lint> fac, inv, finv;

	void build(int N) {
		fac[0] = fac[1] = 1; inv[1] = 1; finv[0] = finv[1] = 1;

		for (int i = 2; i < N; i++) {
			fac[i] = fac[i - 1] * i % MOD;
			inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
			finv[i] = finv[i - 1] * inv[i] % MOD;
		}
	}

public:
	Factorial(int N = 110000) : fac(N + 1), inv(N + 1), finv(N + 1) { build(N + 1); }

	lint Cmod (int n, int k) {
		if (n < k || k < 0) return 0LL;
		return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
	}

	lint Pmod(int n, int k) {
		if (n < k || k < 0) return 0LL;
		return fac[n] * finv[n - k] % MOD;
	}
};

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

