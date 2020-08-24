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


# :warning: library/RollingHash.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#d521f765a49c72507257a2620612ee96">library</a>
* <a href="{{ site.github.repository_url }}/blob/master/library/RollingHash.cpp">View this file on GitHub</a>
    - Last commit date: 2020-08-13 05:43:48+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <vector>
#include <string>

using namespace std;
using lint = long long; 

template<int Modulo = MOD>
struct Mint {

	lint val;
	constexpr Mint(lint v = 0) noexcept : val(v % Modulo) { if (val < 0) val += Modulo; }

	constexpr Mint& operator += (const Mint &r) noexcept {
		val += r.val;
		if (val >= Modulo) val -= Modulo;
		return *this;
	}
	constexpr Mint& operator -= (const Mint &r) noexcept {
		val -= r.val;
		if (val < 0) val += Modulo;
		return *this;
	}
	constexpr Mint& operator *= (const Mint &r) noexcept {
		val = val * r.val % Modulo;
		return *this;
	}
	constexpr Mint& operator /= (const Mint &r) noexcept {
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

	constexpr Mint operator + (const Mint &r) const noexcept { return Mint(*this) += r; }
	constexpr Mint operator - (const Mint &r) const noexcept { return Mint(*this) -= r; }
	constexpr Mint operator * (const Mint &r) const noexcept { return Mint(*this) *= r; }
	constexpr Mint operator / (const Mint &r) const noexcept { return Mint(*this) /= r; }

	constexpr int getmod() { return Modulo; }
	constexpr Mint operator - () const noexcept { return val ? Modulo - val : 0; }

	constexpr bool operator == (const Mint &r) const noexcept { return val == r.val; }
	constexpr bool operator != (const Mint &r) const noexcept { return val != r.val; }

	friend ostream &operator << (ostream &os, const Mint<Modulo> &x) noexcept { return os << x.val; }
	friend istream &operator >> (istream &is, Mint<Modulo> &x) noexcept {
		lint tmp; is >> tmp;
		x = Mint(tmp);
		return is;
	}

	constexpr Mint pow(lint n) noexcept {
		Mint res{ 1 }, tmp{ val };
		while (n > 0) {
			if (n & 1) res *= tmp;
			tmp *= tmp;
			n >>= 1;
		}
		return res;
	}
};

using mint = Mint<>;

//// mod, base from https://gist.github.com/privet-kitty/295ac9202b7abb3039b493f8238bf40f
class RollingHash {

private:
	using Mod = Mint<2147483647>;

	vector<Mod> hash1, pow1;
	vector<Mod> hash2, pow2;
	const int base1 = 2147483634;
	const int base2 = 2147483627;
	int sz;

public:
	RollingHash(const string &s) :sz(s.size()) {

		hash1.assign(sz + 1, 0); pow1.assign(sz + 1, 1);
		hash2.assign(sz + 1, 0); pow2.assign(sz + 1, 1);

		for (int i = 0; i < sz; i++) {
			hash1[i + 1] = hash1[i] * base1 + s[i];
			pow1[i + 1] = pow1[i] * base1;
			hash2[i + 1] = hash2[i] * base2 + s[i];
			pow2[i + 1] = pow2[i] * base2;
		}
	}

	pair<int, int> get(int l, int r) {
		int res1 = (hash1[r] - hash1[l] * pow1[r - l]).val;
		int res2 = (hash2[r] - hash2[l] * pow2[r - l]).val;
		return { res1, res2 };
	}
};

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "library/RollingHash.cpp"
#include <vector>
#include <string>

using namespace std;
using lint = long long; 

template<int Modulo = MOD>
struct Mint {

	lint val;
	constexpr Mint(lint v = 0) noexcept : val(v % Modulo) { if (val < 0) val += Modulo; }

	constexpr Mint& operator += (const Mint &r) noexcept {
		val += r.val;
		if (val >= Modulo) val -= Modulo;
		return *this;
	}
	constexpr Mint& operator -= (const Mint &r) noexcept {
		val -= r.val;
		if (val < 0) val += Modulo;
		return *this;
	}
	constexpr Mint& operator *= (const Mint &r) noexcept {
		val = val * r.val % Modulo;
		return *this;
	}
	constexpr Mint& operator /= (const Mint &r) noexcept {
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

	constexpr Mint operator + (const Mint &r) const noexcept { return Mint(*this) += r; }
	constexpr Mint operator - (const Mint &r) const noexcept { return Mint(*this) -= r; }
	constexpr Mint operator * (const Mint &r) const noexcept { return Mint(*this) *= r; }
	constexpr Mint operator / (const Mint &r) const noexcept { return Mint(*this) /= r; }

	constexpr int getmod() { return Modulo; }
	constexpr Mint operator - () const noexcept { return val ? Modulo - val : 0; }

	constexpr bool operator == (const Mint &r) const noexcept { return val == r.val; }
	constexpr bool operator != (const Mint &r) const noexcept { return val != r.val; }

	friend ostream &operator << (ostream &os, const Mint<Modulo> &x) noexcept { return os << x.val; }
	friend istream &operator >> (istream &is, Mint<Modulo> &x) noexcept {
		lint tmp; is >> tmp;
		x = Mint(tmp);
		return is;
	}

	constexpr Mint pow(lint n) noexcept {
		Mint res{ 1 }, tmp{ val };
		while (n > 0) {
			if (n & 1) res *= tmp;
			tmp *= tmp;
			n >>= 1;
		}
		return res;
	}
};

using mint = Mint<>;

//// mod, base from https://gist.github.com/privet-kitty/295ac9202b7abb3039b493f8238bf40f
class RollingHash {

private:
	using Mod = Mint<2147483647>;

	vector<Mod> hash1, pow1;
	vector<Mod> hash2, pow2;
	const int base1 = 2147483634;
	const int base2 = 2147483627;
	int sz;

public:
	RollingHash(const string &s) :sz(s.size()) {

		hash1.assign(sz + 1, 0); pow1.assign(sz + 1, 1);
		hash2.assign(sz + 1, 0); pow2.assign(sz + 1, 1);

		for (int i = 0; i < sz; i++) {
			hash1[i + 1] = hash1[i] * base1 + s[i];
			pow1[i + 1] = pow1[i] * base1;
			hash2[i + 1] = hash2[i] * base2 + s[i];
			pow2[i + 1] = pow2[i] * base2;
		}
	}

	pair<int, int> get(int l, int r) {
		int res1 = (hash1[r] - hash1[l] * pow1[r - l]).val;
		int res2 = (hash2[r] - hash2[l] * pow2[r - l]).val;
		return { res1, res2 };
	}
};

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

