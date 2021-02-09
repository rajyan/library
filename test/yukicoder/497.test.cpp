
#define PROBLEM "https://yukicoder.me/problems/no/497"

#include "../../src/TopologicalSort.hpp"

#include <iostream>
#include <iomanip>
#include <array>

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

    int N;
    cin >> N;

    vector<array<int, 3>> xyz(N);
    for (int i = 0; i < N; i++) cin >> xyz[i][0] >> xyz[i][1] >> xyz[i][2];
    for (int i = 0; i < N; i++) sort(xyz[i].begin(), xyz[i].end());

    vector<vector<int>> edges(N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ((xyz[i][0] < xyz[j][0]) &&
                (xyz[i][1] < xyz[j][1]) &&
                (xyz[i][2] < xyz[j][2]))
                edges[i].emplace_back(j);
        }
    }

    TopologicalSort ts(edges);
    ts.build();
    cout << ts.longest_path() + 1;

    return 0;
}
