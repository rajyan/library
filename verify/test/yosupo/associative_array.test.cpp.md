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
<script type="text/javascript" src="../../../assets/js/copy-button.js"></script>
<link rel="stylesheet" href="../../../assets/css/copy-button.css" />


# :x: test/yosupo/associative_array.test.cpp

<a href="../../../index.html">Back to top page</a>

* category: <a href="../../../index.html#0b58406058f6619a0f31a172defc0230">test/yosupo</a>
* <a href="{{ site.github.repository_url }}/blob/master/test/yosupo/associative_array.test.cpp">View this file on GitHub</a>
    - Last commit date: 1970-01-01 00:00:00+00:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp

#define PROBLEM "https://judge.yosupo.jp/problem/associative_array"

#include "../../library/fnv1a.cpp"

#include <iostream>
#include <iomanip>
#include <string>
#include <unordered_map>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1010101010;
constexpr lint LINF = 1LL << 60;

struct init {
	init() {
		cin.tie(nullptr); ios::sync_with_stdio(false);
		cout << fixed << setprecision(10);
	}
} init_;

struct test {
	lint i;
	bool operator==(const test& r) const { return i == r.i; }
	test(lint i) : i(i) {}
};

namespace std {
	template<>
	struct hash<test> {
		uint64_t operator() (const test& t) const {
			return fnv1a_64(to_string(t.i));
		}
	};
}

int main() {

	int q;
	cin >> q;

	unordered_map<test, lint> mp;
	for (int i = 0; i < q; i++) {
		int t;
		cin >> t;
		if (t) {
			lint k;
			cin >> k;
			cout << mp[test(k)] << "\n";
		}
		else {
			lint k, v;
			cin >> k >> v;
			mp[test(k)] = v;
		}
	}

	return 0;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "test/yosupo/associative_array.test.cpp"

#define PROBLEM "https://judge.yosupo.jp/problem/associative_array"

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
#line 5 "test/yosupo/associative_array.test.cpp"

#line 7 "test/yosupo/associative_array.test.cpp"
#include <iomanip>
#include <string>
#include <unordered_map>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1010101010;
constexpr lint LINF = 1LL << 60;

struct init {
	init() {
		cin.tie(nullptr); ios::sync_with_stdio(false);
		cout << fixed << setprecision(10);
	}
} init_;

struct test {
	lint i;
	bool operator==(const test& r) const { return i == r.i; }
	test(lint i) : i(i) {}
};

namespace std {
	template<>
	struct hash<test> {
		uint64_t operator() (const test& t) const {
			return fnv1a_64(to_string(t.i));
		}
	};
}

int main() {

	int q;
	cin >> q;

	unordered_map<test, lint> mp;
	for (int i = 0; i < q; i++) {
		int t;
		cin >> t;
		if (t) {
			lint k;
			cin >> k;
			cout << mp[test(k)] << "\n";
		}
		else {
			lint k, v;
			cin >> k >> v;
			mp[test(k)] = v;
		}
	}

	return 0;
}

```
{% endraw %}

<a href="../../../index.html">Back to top page</a>

