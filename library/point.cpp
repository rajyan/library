#include <iostream>
#include <vector>

using namespace std;

struct pnt {
	int x, y;
	constexpr pnt(int x = 0, int y = 0) noexcept : x(x), y(y) {};
	constexpr bool operator==(const pnt &rhs) const noexcept { return x == rhs.x && y == rhs.y; }
	constexpr bool operator<(const pnt & rhs) const noexcept { return x < rhs.x || x == rhs.x && y < rhs.y; }
	constexpr pnt operator+(const pnt &rhs) const noexcept { return pnt(x + rhs.x, y + rhs.y); }
	constexpr pnt operator-(const pnt &rhs) const noexcept { return pnt(x - rhs.x, y - rhs.y); }
	constexpr pnt operator-() const noexcept { return pnt(-x, -y); }
	constexpr int operator*(const pnt &rhs) const noexcept { return x * rhs.x + y * rhs.y; }
	friend istream& operator>>(istream& is, pnt &p) { return is >> p.x >> p.y; }
	friend ostream& operator<<(ostream& os, const pnt &p) { return os << p.x << " " << p.y << "\n"; }
	constexpr pnt nor(const pnt &rhs) const noexcept { return pnt(rhs.y, -rhs.x); }
	template<class T> T& operator[](vector<vector<T>> &v) { return v[x][y]; }
};
