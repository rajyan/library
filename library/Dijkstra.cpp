#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
using lint = long long;

template<class T = lint>
struct Edge {
	int to;
	T cost;
	Edge() {}
	Edge(int to, T cost) : to(to), cost(cost) {}
	bool operator>(const Edge &r) const { return this->cost > r.cost; }
};

template<class T>
vector<T> Dijkstra(vector<vector<Edge<T>>> &edges, int st) {

	int V = (int)edges.size();
	const T INF = numeric_limits<T>::max();
	vector<T> cost(V, INF);
	cost[st] = 0;

	priority_queue<Edge<T>, vector<Edge<T>>, greater<Edge<T>>> p_que;
	p_que.emplace(st, cost[st]);

	while (!p_que.empty()) {

		Edge<T> now(p_que.top().to, p_que.top().cost);
		p_que.pop();

		if (cost[now.to] < now.cost) continue;
		for (const Edge<T> &e : edges[now.to]) {
			T tmp_cost = now.cost + e.cost;
			if (cost[e.to] > tmp_cost) {
				cost[e.to] = tmp_cost;
				p_que.emplace(e.to, cost[e.to]);
			}
		}
	}

	return cost; // min cost to vertex idx from st
}

// example input (undirected graph)
//int u, v, len;
//vector<vector<Edge<int>>> edges(N);
//for (int i = 0; i < M; i++) {
//	cin >> u >> v >> len;
//	edges[u - 1].emplace_back(v - 1, len);
//	edges[v - 1].emplace_back(u - 1, len);
//