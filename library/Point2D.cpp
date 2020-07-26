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
	friend ostream& operator<<(ostream& os, const Point2D &p) { return os << p.x << " " << p.y << "\n"; }
	template<class U> U& operator[](vector<vector<U>> &v) { return v[x][y]; }
};

using pnt = Point2D<lint>;
