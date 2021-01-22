
#define PROBLEM "https://judge.yosupo.jp/problem/enumerate_primes"

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

#include "../../src/Prime.cpp"

struct init {
    init() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
    }
} init_;

int main() {

    int N, A, B;
    cin >> N >> A >> B;

    Prime p(N);
    int cnt = 0;
    vector<int> ans;
    for (int i = 2; i <= N; i++) {
        if (p.pTable[i]) {
            if ((cnt++ - B) % A == 0) ans.emplace_back(i);
        }
    }

    cout << cnt << ' ' << ans.size() << '\n';
    for (const auto &item : ans) {
        cout << item << ' ';
    }

    return 0;
}
