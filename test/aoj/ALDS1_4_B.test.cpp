
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_B&lang=ja"

#include "../../src/bisearch.cpp"

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
using lint = long long;

struct init {
    init() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
    }
} init_;

int main() {

    int n;
    cin >> n;
    vector<int> S(n);
    for (int i = 0; i < n; i++) cin >> S[i];

    int q;
    cin >> q;
    vector<int> T(n);
    for (int i = 0; i < q; i++) cin >> T[i];

    int ans = 0;
    for (int i = 0; i < q; i++) {
        auto f = [&](int index) { return index < n && S[index] <= T[i]; };
        int index = bisearch(0, n, f);
        ans += S[index] == T[i];
    }
    
    cout << ans << '\n';

    return 0;
}
