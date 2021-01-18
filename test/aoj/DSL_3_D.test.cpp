
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_3_D"

#include <iostream>
#include <iomanip>

using namespace std;

#include "../../src/slide_minmax.cpp"

struct init {
    init() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
    }
} init_;

int main() {

    int N, K;
    cin >> N >> K;
    vector<int> v(N);
    for (int i = 0; i < N; i++) cin >> v[i];

    cout << slide_minmax(v, K).first << '\n';

    return 0;
}

