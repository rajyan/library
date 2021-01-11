#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class TopologicalSort {
private:
    int V;
    vector<vector<int>> edges;
    vector<int> used;

public:
    TopologicalSort(int n) : V(n), edges(n), used(n) {}
    TopologicalSort(vector<vector<int>> &edges) : V(edges.size()), used(edges.size()) { this->edges = edges; }

    void add_edge(int from, int to) { edges[from].emplace_back(to); }

    vector<int> build() {

        vector<int> res, in(V);
        for (int i = 0; i < V; i++) for (const auto &e : edges[i]) in[e]++;

        res.reserve(V);
        queue<int> que;
        for (int i = 0; i < V; i++) {
            if (in[i] == 0 && !used[i]) {
                used[i] = 1;
                que.emplace(i);
            }
        }
        while (!que.empty()) {
            int now = que.front();
            DMP(now, in);
            que.pop();
            res.emplace_back(now);
            for (const auto &e : edges[now]) {
                in[e]--;
                if (in[e] == 0) {
                    if (used[e]) return vector<int>(); // unable to sort
                    used[e] = used[now] + 1;
                    que.emplace(e);
                }
            }
        }

        return res;
    }

    int longest_path() {
        if (none_of(used.begin(), used.end(), [](int u) { return u > 0; })) build();
        return *max_element(used.begin(), used.end()) - 1;
    }

};
