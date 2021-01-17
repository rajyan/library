
#define PROBLEM "https://yukicoder.me/problems/no/430"

#include "../../src/RollingHash.cpp"

#include <iostream>
#include <iomanip>
#include <map>

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
    RollingHash rh(S);
    map<pair<int,int>, int> memo;
    for (int d = 1; d <= 10; d++) {
        for (int i = 0; i <= (int)S.size() - d; i++) {
            memo[rh.get(i, i + d)]++;
        }
    }

    int N;
    cin >> N;
    int ans = 0;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        RollingHash tmprh(s);
        if (memo.find(tmprh.get(0, s.size())) != memo.end()) ans += memo[tmprh.get(0,s.size())];
    }

    cout << ans << "\n";

    return 0;
}

