
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_B"

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
using lint = long long;
constexpr lint LINF = 1LL << 60;

#include "../../src/BellmanFord.hpp"

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

    vector<Edge<lint>> edges;
    for (int i = 0; i < M; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        edges.emplace_back(u, v, c);
    }

    auto costs = BellmanFord(edges, N, s);
    if (any_of(costs.begin(), costs.end(), [&](auto &c) { return c < -LINF; })) {
        cout << "NEGATIVE CYCLE\n";
        return 0;
    }
    for (const auto &cost : costs) {
        cout << (cost < LINF ? to_string(cost) : "INF") << '\n';
    }

    return 0;
}
