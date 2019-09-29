#include <vector>
#include <cassert>

using namespace std;
using lint = long long;

class Prime {
private:
	vector<int> min_pf; // min_pf[i] = minimum prime factor of i
	vector<int> prime;

	// linear sieve https://cp-algorithms.com/algebra/prime-sieve-linear.html
	void sieve(int N) {
		min_pf[0] = min_pf[1] = -1;
		for (int i = 2; i < N; i++) {
			if (min_pf[i] == 0) {
				prime.push_back(i);
				min_pf[i] = i;
			}
			for (int j = 0; j < (int)(prime.size()); ++j) {
				if (prime[j] > min_pf[i] || i * prime[j] >= N) break;
				min_pf[i * prime[j]] = prime[j];
			}
		}
	}

public:
	Prime(int N = 110000000) : min_pf(N + 1) {
		assert(3 <= N);
		sieve(N + 1);
	}

	vector<pair<lint, int>> factorize(lint n) {

		vector<pair<lint, int>> res;
		for (lint i = 2; i * i <= n; i++) {
			if (n < (lint)min_pf.size()) break;
			int cnt = 0;
			while (n % i == 0) {
				cnt++;
				n /= i;
			}
			if (cnt) res.emplace_back(i, cnt);
		}

		if (n >= (lint)min_pf.size()) res.emplace_back(n, 1);
		else {
			int prev = min_pf[n], cnt = 0;
			while (n != 1) {
				int now = min_pf[n];
				n /= now;
				cnt++;
				if (prev != now) {
					res.emplace_back(prev, cnt);
					prev = now;
					cnt = 0;
				}
			}
		}
		return res;
	}

	// verified using boost miller_rabin_test https://wandbox.org/permlink/6YepW3J9SQNFwWxu
	bool isPrime(lint n) {
		if (n < (int)(min_pf.size())) return min_pf[n] == n;
		else if (n % 2 == 0 || n % 3 == 0) return false;
		else if (n % 6 != 1 && n % 6 != 5) return false;
		for (lint i = 5; i * i <= n; i += 6) {
			if (n % i == 0) return false;
			if (n % (i + 2) == 0) return false;
		}
		return true;
	}
};