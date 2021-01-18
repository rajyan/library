
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B"

#include <iostream>
#include <iomanip>

using namespace std;

#include "../../src/modpow.cpp"

struct init {
    init() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
    }
} init_;

int main() {

    int m, n;
    cin >> m >> n;

    cout << modpow(m, n) << '\n';

    return 0;
}

