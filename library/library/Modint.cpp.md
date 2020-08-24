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


# :warning: library/Modint.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#d521f765a49c72507257a2620612ee96">library</a>
* <a href="{{ site.github.repository_url }}/blob/master/library/Modint.cpp">View this file on GitHub</a>
    - Last commit date: 1970-01-01 00:00:00+00:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <iostream>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007;

template<int Modulo = MOD>
struct Mint {

	lint val;
	constexpr Mint(lint v = 0) noexcept : val(v % Modulo) { if (val < 0) val += Modulo; }

	constexpr Mint& operator+=(const Mint &r) noexcept {
		val += r.val;
		if (val >= Modulo) val -= Modulo;
		return *this;
	}
	constexpr Mint& operator-=(const Mint &r) noexcept {
		val -= r.val;
		if (val < 0) val += Modulo;
		return *this;
	}
	constexpr Mint& operator*=(const Mint &r) noexcept {
		val = val * r.val % Modulo;
		return *this;
	}
	constexpr Mint& operator/=(const Mint &r) noexcept {
		lint a = r.val, b = Modulo, u = 1, v = 0;
		while (b) {
			lint t = a / b;
			a -= t * b; swap(a, b);
			u -= t * v; swap(u, v);
		}
		val = val * u % Modulo;
		if (val < 0) val += Modulo;
		return *this;
	}

	constexpr Mint operator+(const Mint &r) const noexcept { return Mint(*this) += r; }
	constexpr Mint operator-(const Mint &r) const noexcept { return Mint(*this) -= r; }
	constexpr Mint operator*(const Mint &r) const noexcept { return Mint(*this) *= r; }
	constexpr Mint operator/(const Mint &r) const noexcept { return Mint(*this) /= r; }

	constexpr Mint operator-() const noexcept { return val ? Modulo - val : 0; }

	constexpr bool operator==(const Mint &r) const noexcept { return val == r.val; }
	constexpr bool operator!=(const Mint &r) const noexcept { return !((*this) == r); }
	constexpr bool operator< (const Mint &r) const noexcept { return val < r.val; }

	friend ostream &operator << (ostream &os, const Mint<Modulo> &x) noexcept { return os << x.val; }
	friend istream &operator >> (istream &is, Mint<Modulo> &x) noexcept {
		lint tmp; is >> tmp;
		x = Mint(tmp);
		return is;
	}

	constexpr Mint pow(lint n) const noexcept {
		Mint res = 1, tmp = val;
		while (n > 0) {
			if (n & 1) res *= tmp;
			tmp *= tmp;
			n >>= 1;
		}
		return res;
	}
};

using mint = Mint<>;

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "library/Modint.cpp"
#include <iostream>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007;

template<int Modulo = MOD>
struct Mint {

	lint val;
	constexpr Mint(lint v = 0) noexcept : val(v % Modulo) { if (val < 0) val += Modulo; }

	constexpr Mint& operator+=(const Mint &r) noexcept {
		val += r.val;
		if (val >= Modulo) val -= Modulo;
		return *this;
	}
	constexpr Mint& operator-=(const Mint &r) noexcept {
		val -= r.val;
		if (val < 0) val += Modulo;
		return *this;
	}
	constexpr Mint& operator*=(const Mint &r) noexcept {
		val = val * r.val % Modulo;
		return *this;
	}
	constexpr Mint& operator/=(const Mint &r) noexcept {
		lint a = r.val, b = Modulo, u = 1, v = 0;
		while (b) {
			lint t = a / b;
			a -= t * b; swap(a, b);
			u -= t * v; swap(u, v);
		}
		val = val * u % Modulo;
		if (val < 0) val += Modulo;
		return *this;
	}

	constexpr Mint operator+(const Mint &r) const noexcept { return Mint(*this) += r; }
	constexpr Mint operator-(const Mint &r) const noexcept { return Mint(*this) -= r; }
	constexpr Mint operator*(const Mint &r) const noexcept { return Mint(*this) *= r; }
	constexpr Mint operator/(const Mint &r) const noexcept { return Mint(*this) /= r; }

	constexpr Mint operator-() const noexcept { return val ? Modulo - val : 0; }

	constexpr bool operator==(const Mint &r) const noexcept { return val == r.val; }
	constexpr bool operator!=(const Mint &r) const noexcept { return !((*this) == r); }
	constexpr bool operator< (const Mint &r) const noexcept { return val < r.val; }

	friend ostream &operator << (ostream &os, const Mint<Modulo> &x) noexcept { return os << x.val; }
	friend istream &operator >> (istream &is, Mint<Modulo> &x) noexcept {
		lint tmp; is >> tmp;
		x = Mint(tmp);
		return is;
	}

	constexpr Mint pow(lint n) const noexcept {
		Mint res = 1, tmp = val;
		while (n > 0) {
			if (n & 1) res *= tmp;
			tmp *= tmp;
			n >>= 1;
		}
		return res;
	}
};

using mint = Mint<>;

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

