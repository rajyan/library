#pragma once

#include <vector>
#include <algorithm>
#include <queue>

#include "chmin.hpp"
#include "Edge.hpp"

using namespace std;

template<class T>
vector<T> Dijkstra(const vector<vector<Edge<T>>> &edges, const int st) {

    const int V = (int)edges.size();
    const T inf = numeric_limits<T>::max() / 2;
    vector<T> cost(V, inf);
    cost[st] = 0;

    priority_queue <Edge<T>, vector<Edge<T>>, greater<>> pq;
    pq.emplace(st, cost[st]);

    while (!pq.empty()) {

        Edge<T> now(pq.top().to, pq.top().cost);
        pq.pop();

        if (cost[now.to] < now.cost) continue;
        for (const Edge<T> &e : edges[now.to]) {
            T tmp_cost = now.cost + e.cost;
            if (chmin(cost[e.to], tmp_cost)) {
                pq.emplace(e.to, cost[e.to]);
            }
        }
    }

    return cost; // min cost to vertex idx from st
}
