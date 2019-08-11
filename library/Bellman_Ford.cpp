#include <vector>
#include <algorithm>

using namespace std;
using lint = long long;

template<class T = lint>
struct Edge {
	int from, to;
	T cost;
	Edge() {}
	Edge(int from, int to, T cost) : from(from), to(to), cost(cost) {}
};

template<class T>
vector<T> Bellman_Ford(vector<Edge<T>> &edges, int V, int st) {

	const T inf = numeric_limits<T>::max(); // different from INF!!!
	vector<T> dist(V, inf);
	dist[st] = 0;
	for (int i = 0; i < V - 1; i++) {
		for (const auto &e : edges) {
			if (dist[e.from] == inf) continue;
			dist[e.to] = min(dist[e.to], dist[e.from] + e.cost);
		}
	}

	for (int i = 0; i < V - 1; i++) {
		for (const auto &e : edges) { // finding negative loop
			if (dist[e.from] == inf) continue;
			if (dist[e.from] == -inf) dist[e.to] = -inf; // src is nloop -> dst is nloop
			else if (dist[e.to] > dist[e.from] + e.cost) dist[e.to] = -inf; // chmin is possible -> nloop
		}
	}

	return dist;
}