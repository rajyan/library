#include <iostream>

using namespace std;
using lint = long long;
const int MOD = 1000000007;

template<int Modulo = MOD> struct Mint {

	lint val;
	constexpr Mint(lint v = 0) noexcept : val(v % Modulo) { if (val < 0) v += Modulo; }

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
		x = Mint<Modulo>(tmp);
		return is;
	}
	friend constexpr Mint<Modulo> modpow(const Mint<Modulo> &a, lint n) noexcept {
		Mint res(1), tmp = a;
		while (n > 0) {
			if (n & 1) res *= tmp;
			tmp *= tmp;
			n >>= 1;
		}
		return res;
	}
};

using mint = Mint<>;