
#define PROBLEM "https://yukicoder.me/problems/184"

#include "../../src/debug_template.hpp"
#include "../../src/Factorial.hpp"

#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

struct init {
	init() {
		cin.tie(nullptr); ios::sync_with_stdio(false);
		cout << fixed << setprecision(10);
	}
} init_;

int main() {

	Factorial F(3000000);

	int T;
	scanf("%d\n", &T);

	for (int i = 0; i < T; i++) {
		char type;
		int n, k;
		scanf("%c(%d,%d)\n", &type, &n, &k);

		if (type == 'C') {
			printf("%lld\n", F.Cmod(n, k).val);
		}
		else if (type == 'P') {
			printf("%lld\n", F.Pmod(n, k).val);
		}
		else {
			printf("%lld\n", F.Hmod(n, k).val);
		}
	}

	return 0;
}

