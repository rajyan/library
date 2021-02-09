
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C"

#include "../../src/Prime.hpp"

#include <iostream>
#include <iomanip>
#include <algorithm>

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
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    Prime p;
    cout << count_if(a.begin(), a.end(), [&p](auto &e) { return p.isPrime(e); }) << '\n';

    return 0;
}
