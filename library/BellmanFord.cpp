#include <vector>
#include <algorithm>

using namespace std;

template<class T>
struct Edge {
	int from, to;
	T cost;
	Edge() {}
	Edge(int from, int to, T cost) : from(from), to(to), cost(cost) {}
};

template<class T>
vector<T> BellmanFord(const vector<Edge<T>> &edges, const int V, const int st) {

	const T inf = numeric_limits<T>::max() / 2;
	vector<T> cost(V, inf);
	cost[st] = 0;
	for (int i = 0; i < V - 1; i++) {
		for (const auto &e : edges) {
			if (cost[e.from] == inf) continue;
			cost[e.to] = min(cost[e.to], cost[e.from] + e.cost);
		}
	}

	for (int i = 0; i < V; i++) {
		for (const auto &e : edges) { // finding negative loop
			if (cost[e.from] == inf) continue;
			if (cost[e.from] == -inf) cost[e.to] = -inf; // src is nloop -> dst is nloop
			else if (cost[e.to] > cost[e.from] + e.cost) cost[e.to] = -inf; // chmin is possible -> nloop
		}
	}

	return cost;
}
