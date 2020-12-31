
using lint = long long;
constexpr int MOD = 1000000007;

lint modpow(lint a, lint n, lint mod = MOD) {
	lint res = 1;
	while (n > 0) {
		if (n & 1) res = res * a % mod;
		a = a * a % mod;
		n >>= 1;
	}
	return res;
}
