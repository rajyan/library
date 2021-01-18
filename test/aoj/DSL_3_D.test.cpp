
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
    vector<int> V(N);
    for (int i = 0; i < N; i++) cin >> V[i];

    auto m = slide_minmax(V, K).first;
    for (const auto &i : m) {
        cout << i << (&i == &m.back() ? '\n' : ' ');
    }

    return 0;
}

