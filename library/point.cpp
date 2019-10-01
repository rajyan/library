#include <iostream>
#include <vector>

using namespace std;

struct pnt {
	int r, c;
	pnt(int r = 0, int c = 0) :r(r), c(c) {};
	bool operator==(const pnt &rhs) const { return r == rhs.r && c == rhs.c; }
	bool operator<(const pnt & rhs) const { return r < rhs.r || r == rhs.r && c < rhs.c; }
	const pnt operator+(const pnt &rhs) { return pnt(r + rhs.r, c + rhs.c); }
	friend istream& operator>>(istream& is, pnt &p) { is >> p.c >> p.r; p.r--, p.c--; return is; }
	template<class T> T& operator[](vector<vector<T>> &v) { return v[r][c]; }
};