
#define PROBLEM "https://yukicoder.me/problems/no/599"

#include "../../src/RollingHash.cpp"

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

    string S;
    cin >> S;
    int sz = S.size();
    RollingHash rh(S);

    vector<mint> dp(sz / 2 + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= sz / 2; i++) {
        for (int j = 1; j <= i; j++) {
            if (rh.get(i - j, i) == rh.get(sz - i, sz - (i - j))) {
                dp[i] += dp[i - j];
            }
        }
    }

    mint ans = 0;
    for (int i = 0; i < sz / 2 + 1; i++)  ans += dp[i];
    cout << ans;

    return 0;
}

