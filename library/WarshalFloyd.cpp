#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int INF = 1010101010;

template<class T>
inline bool chmin(T &a, T b) { return a > b && (a = b, true); }

int main() {

	int N, M;
	cin >> N >> M;

	vector<vector<int>> d(N, vector<int>(N, INF));
	for (int i = 0; i < N; i++) d[i][i] = 0;
	
	for (int i = 0; i < M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		a--, b--;
		d[a][b] = c;
		d[b][a] = c;
	}

	for (int k = 0; k < N; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				chmin(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}

}
