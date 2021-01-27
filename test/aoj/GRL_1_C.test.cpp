
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C"

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;
using lint = long long;
constexpr lint LINF = 1LL << 60;

#include "../../src/FloydWarshall.hpp"

struct init {
    init() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
    }
} init_;

int main() {

    int N, M;
    cin >> N >> M;

    vector<vector<lint>> edges(N, vector<lint>(N, LINF));
    for (int i = 0; i < M; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        edges[u][v] = c;
    }

    auto cost = FloydWarshall(edges);

    for (int i = 0; i < N; i++) {
        if (cost[i][i] < 0) {
            cout << "NEGATIVE CYCLE\n";
            return 0;
        }
    }

    for (const auto &row : cost) {
        for (const auto &e : row) {
            cout << (e != LINF ? to_string(e) : "INF");
            if (&e != &row.back()) cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}
