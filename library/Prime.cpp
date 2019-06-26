#include <vector>

using namespace std;
using lint = long long;

class Prime {
private:
	vector<int> Ptb;

	void Eratos(lint N) {
		for (lint i = 2; i * i < N; i++) {
			if (Ptb[i]) for (int j = 0; i * (j + 2) < N; j++) Ptb[i *(j + 2)] = 0;
		}
	}

public:
	Prime(lint N) : Ptb(N + 1, 1) { Eratos(N + 1); }

	vector<pair<lint, int>> Pfact(lint num) {
		vector<pair<lint, int>> res;
		for (lint i = 2; i * i <= num; i++) {
			int cnt = 0;
			while (num % i == 0) {
				cnt++;
				num /= i;
			}
			if (cnt) res.emplace_back(i, cnt);
		}
		if (num != 1) res.emplace_back(make_pair(num, 1));
		return res;
	}

	bool isPrime(lint num) {
		if (num < 2) return false;
		else if (num < (int)(Ptb.size())) return (bool)(Ptb[num]);
		else if (num == 2 || num == 3) return true;
		else if (num % 2 == 0 || num % 3 == 0) return false;
		else if (num % 6 != 1 && num % 6 != 5) return false;
		for (lint i = 5; i * i <= num; i += 6) {
			if (num % i == 0) return false;
			if (num % (i + 2) == 0) return false;
		}
		return true;
	}
};