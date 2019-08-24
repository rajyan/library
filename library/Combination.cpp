#include <vector>

using namespace std;
using lint = long long;
const int MOD = 1000000007;

class Factorial {
private:
	vector<lint> fac, inv, finv;

	void init(int N) {
		fac[0] = fac[1] = 1; inv[1] = 1; finv[0] = finv[1] = 1;

		for (int i = 2; i < N; i++) {
			fac[i] = fac[i - 1] * i % MOD;
			inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
			finv[i] = finv[i - 1] * inv[i] % MOD;
		}
	}

public:
	Factorial(int N = 110000) : fac(N + 1), inv(N + 1), finv(N + 1) { init(N + 1); }

	lint operator() (int n, int k) {
		if (n < k || k < 0) return 0LL;
		return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
	}

	lint Pmod(int n, int k) {
		if (n < k || k < 0) return 0LL;
		return fac[n] * finv[n - k] % MOD;
	}
};