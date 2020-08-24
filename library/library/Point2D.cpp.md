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


# :warning: library/Point2D.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#d521f765a49c72507257a2620612ee96">library</a>
* <a href="{{ site.github.repository_url }}/blob/master/library/Point2D.cpp">View this file on GitHub</a>
    - Last commit date: 2020-08-13 07:36:05+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
using lint = long long;

template<class T>
struct Point2D {
	T x, y;
	constexpr Point2D(T x = 0, T y = 0) noexcept : x(x), y(y) {};
	constexpr Point2D(pair<T, T> &p) noexcept : x(p.first), y(p.second) {};
	constexpr bool operator==(const Point2D &rhs) const noexcept { return x == rhs.x && y == rhs.y; }
	constexpr bool operator!=(const Point2D &rhs) const noexcept { return !((*this) == rhs); }
	constexpr bool operator< (const Point2D &rhs) const noexcept { return x < rhs.x || (x == rhs.x && y < rhs.y); }
	constexpr bool operator> (const Point2D &rhs) const noexcept { return rhs < (*this); }
	constexpr bool operator<=(const Point2D &rhs) const noexcept { return !((*this) > rhs); }
	constexpr bool operator>=(const Point2D &rhs) const noexcept { return !((*this) < rhs); }
	constexpr Point2D  operator+ (const Point2D &rhs) const noexcept { return { x + rhs.x, y + rhs.y }; }
	constexpr Point2D  operator- (const Point2D &rhs) const noexcept { return { x - rhs.x, y - rhs.y }; }
	constexpr Point2D  operator* (const T &k) const noexcept { return { k * x, k * y }; }
	constexpr Point2D  operator/ (const T &k) const noexcept { return { x / k, y / k }; }
	constexpr Point2D& operator+=(const Point2D &rhs) noexcept { return ((*this) = (*this) + rhs); }
	constexpr Point2D& operator-=(const Point2D &rhs) noexcept { return ((*this) = (*this) - rhs); }
	constexpr Point2D& operator*=(const T &k) noexcept { return ((*this) = (*this) * k); }
	constexpr Point2D& operator/=(const T &k) noexcept { return ((*this) = (*this) / k); }
	constexpr Point2D  operator- () const noexcept { return { -x, -y }; }
	constexpr T operator* (const Point2D &rhs) const noexcept { return x * rhs.x + y * rhs.y; }
	constexpr Point2D nor() const noexcept { return { y, -x }; }
	constexpr long double hypot() const noexcept { return ::hypotl(x, y); }
	friend istream& operator>>(istream& is, Point2D &p) { return is >> p.x >> p.y; }
	friend ostream& operator<<(ostream& os, const Point2D &p) { return os << p.x << " " << p.y; }
	template<class U> U& operator[](vector<vector<U>> &v) { return v[x][y]; }
};

using pnt = Point2D<lint>;

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "library/Point2D.cpp"
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
using lint = long long;

template<class T>
struct Point2D {
	T x, y;
	constexpr Point2D(T x = 0, T y = 0) noexcept : x(x), y(y) {};
	constexpr Point2D(pair<T, T> &p) noexcept : x(p.first), y(p.second) {};
	constexpr bool operator==(const Point2D &rhs) const noexcept { return x == rhs.x && y == rhs.y; }
	constexpr bool operator!=(const Point2D &rhs) const noexcept { return !((*this) == rhs); }
	constexpr bool operator< (const Point2D &rhs) const noexcept { return x < rhs.x || (x == rhs.x && y < rhs.y); }
	constexpr bool operator> (const Point2D &rhs) const noexcept { return rhs < (*this); }
	constexpr bool operator<=(const Point2D &rhs) const noexcept { return !((*this) > rhs); }
	constexpr bool operator>=(const Point2D &rhs) const noexcept { return !((*this) < rhs); }
	constexpr Point2D  operator+ (const Point2D &rhs) const noexcept { return { x + rhs.x, y + rhs.y }; }
	constexpr Point2D  operator- (const Point2D &rhs) const noexcept { return { x - rhs.x, y - rhs.y }; }
	constexpr Point2D  operator* (const T &k) const noexcept { return { k * x, k * y }; }
	constexpr Point2D  operator/ (const T &k) const noexcept { return { x / k, y / k }; }
	constexpr Point2D& operator+=(const Point2D &rhs) noexcept { return ((*this) = (*this) + rhs); }
	constexpr Point2D& operator-=(const Point2D &rhs) noexcept { return ((*this) = (*this) - rhs); }
	constexpr Point2D& operator*=(const T &k) noexcept { return ((*this) = (*this) * k); }
	constexpr Point2D& operator/=(const T &k) noexcept { return ((*this) = (*this) / k); }
	constexpr Point2D  operator- () const noexcept { return { -x, -y }; }
	constexpr T operator* (const Point2D &rhs) const noexcept { return x * rhs.x + y * rhs.y; }
	constexpr Point2D nor() const noexcept { return { y, -x }; }
	constexpr long double hypot() const noexcept { return ::hypotl(x, y); }
	friend istream& operator>>(istream& is, Point2D &p) { return is >> p.x >> p.y; }
	friend ostream& operator<<(ostream& os, const Point2D &p) { return os << p.x << " " << p.y; }
	template<class U> U& operator[](vector<vector<U>> &v) { return v[x][y]; }
};

using pnt = Point2D<lint>;

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

