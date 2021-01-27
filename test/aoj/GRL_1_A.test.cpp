
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A"

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;
using lint = long long;
constexpr lint LINF = 1LL << 60;

#include "../../src/Dijkstra.hpp"

struct init {
    init() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
    }
} init_;

int main() {

    int N, M, s;
    cin >> N >> M >> s;

    vector<vector<Edge<lint>>> edges(N);
    for (int i = 0; i < M; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        edges[u].emplace_back(v, c);
    }

    for (const auto &cost : Dijkstra(edges, s)) {
        cout << (cost < LINF ? to_string(cost) : "INF") << '\n';
    }

    return 0;
}
