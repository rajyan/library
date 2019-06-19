#include<vector>

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
	const T INF = numeric_limits<T>::max();
	vector<T> dist(V, INF);
	dist[st] = 0;
	for (int i = 0; i < V - 1; i++) {
		for (const auto &ele : edges) {
			if (dist[ele.from] == INF) continue;
			dist[ele.to] = min(dist[ele.to], dist[ele.from] + ele.cost);
		}
	}
	for (const auto &ele : edges) { // finding negative loop
		if (dist[ele.from] == INF) continue;
		if (dist[ele.from] == INF - 1) dist[ele.to] = INF - 1; // src is nloop -> dst is nloop
		if (dist[ele.to] > dist[ele.from] + ele.cost) dist[ele.to] = INF - 1; // chmin is possible -> nloop
	}
	return dist;
}