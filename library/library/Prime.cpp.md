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


# :warning: library/Prime.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#d521f765a49c72507257a2620612ee96">library</a>
* <a href="{{ site.github.repository_url }}/blob/master/library/Prime.cpp">View this file on GitHub</a>
    - Last commit date: 2020-06-30 00:42:52+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <vector>

using namespace std;
using lint = long long;

class Prime {
private:
	vector<int> min_pf; // min_pf[i] = minimum prime factor of i
	vector<int> prime;

	// linear sieve https://cp-algorithms.com/algebra/prime-sieve-linear.html
	void sieve(int N) {
		min_pf[0] = min_pf[1] = -1;
		for (int i = 2; i < N; i++) {
			if (min_pf[i] == 0) {
				prime.emplace_back(i);
				min_pf[i] = i;
			}
			for (int j = 0; j < (int)(prime.size()); ++j) {
				if (prime[j] > min_pf[i] || i * prime[j] >= N) break;
				min_pf[i * prime[j]] = prime[j];
			}
		}
	}

public:
	Prime(int N = 1100000) : min_pf(N + 1) { sieve(N + 1); }

	vector<pair<lint, int>> factorize(lint n) {
		vector<pair<lint, int>> res;
		lint sz = (lint)min_pf.size();

		if (n >= sz) {
			for (lint i = 2; i * i <= n; i++) {
				int cnt = 0;
				while (n % i == 0) {
					cnt++;
					n /= i;
				}
				if (cnt) res.emplace_back(i, cnt);
			}
			res.emplace_back(n, 1);
		}
		else {
			int prev = min_pf[n], cnt = -1;
			while (n > 0) {
				int now = min_pf[n];
				n /= now;
				cnt++;
				if (prev != now) {
					res.emplace_back(prev, cnt);
					prev = now;
					cnt = 0;
				}
			}
		}

		return res;
	}

	// verified using boost miller_rabin_test https://wandbox.org/permlink/6YepW3J9SQNFwWxu
	bool isPrime(lint n) {
		if (n < (int)(min_pf.size())) return min_pf[n] == n;
		else if (n == 2 || n == 3) return true;
		else if (n % 2 == 0 || n % 3 == 0) return false;
		else if (n % 6 != 1 && n % 6 != 5) return false;
		for (lint i = 5; i * i <= n; i += 6) {
			if (n % i == 0) return false;
			if (n % (i + 2) == 0) return false;
		}
		return true;
	}
};

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "library/Prime.cpp"
#include <vector>

using namespace std;
using lint = long long;

class Prime {
private:
	vector<int> min_pf; // min_pf[i] = minimum prime factor of i
	vector<int> prime;

	// linear sieve https://cp-algorithms.com/algebra/prime-sieve-linear.html
	void sieve(int N) {
		min_pf[0] = min_pf[1] = -1;
		for (int i = 2; i < N; i++) {
			if (min_pf[i] == 0) {
				prime.emplace_back(i);
				min_pf[i] = i;
			}
			for (int j = 0; j < (int)(prime.size()); ++j) {
				if (prime[j] > min_pf[i] || i * prime[j] >= N) break;
				min_pf[i * prime[j]] = prime[j];
			}
		}
	}

public:
	Prime(int N = 1100000) : min_pf(N + 1) { sieve(N + 1); }

	vector<pair<lint, int>> factorize(lint n) {
		vector<pair<lint, int>> res;
		lint sz = (lint)min_pf.size();

		if (n >= sz) {
			for (lint i = 2; i * i <= n; i++) {
				int cnt = 0;
				while (n % i == 0) {
					cnt++;
					n /= i;
				}
				if (cnt) res.emplace_back(i, cnt);
			}
			res.emplace_back(n, 1);
		}
		else {
			int prev = min_pf[n], cnt = -1;
			while (n > 0) {
				int now = min_pf[n];
				n /= now;
				cnt++;
				if (prev != now) {
					res.emplace_back(prev, cnt);
					prev = now;
					cnt = 0;
				}
			}
		}

		return res;
	}

	// verified using boost miller_rabin_test https://wandbox.org/permlink/6YepW3J9SQNFwWxu
	bool isPrime(lint n) {
		if (n < (int)(min_pf.size())) return min_pf[n] == n;
		else if (n == 2 || n == 3) return true;
		else if (n % 2 == 0 || n % 3 == 0) return false;
		else if (n % 6 != 1 && n % 6 != 5) return false;
		for (lint i = 5; i * i <= n; i += 6) {
			if (n % i == 0) return false;
			if (n % (i + 2) == 0) return false;
		}
		return true;
	}
};

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

