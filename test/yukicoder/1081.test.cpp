
#define PROBLEM "https://yukicoder.me/problems/no/1081"

#include "../../src/Combination.hpp"

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

struct init {
	init() {
		cin.tie(nullptr); ios::sync_with_stdio(false);
		cout << fixed << setprecision(10);
	}
} init_;

int main() {

	int N;
	cin >> N;

	vector<int> A(N);
	for (int i = 0; i < N; i++) cin >> A[i];

	Combination<mint> C(200);
	mint ans = 0;
	for (int i = 0; i < N; i++) {
		ans += C(N - 1, i) * A[i];
	}

	cout << ans << "\n";

	return 0;
}
