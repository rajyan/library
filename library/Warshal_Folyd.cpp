#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int INF = 1111111111;

template<class T>
vector<T> Warshal_Floyd(int N, vector<T> &d) {

	for (int k = 0; k < N; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {

				if (d[i][k] != INF && d[k][j] != INF) {
					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
				}
			}
		}
	}
	return d;
}

////example Input
//vector<vector<int>> d(N, vector<int>(N, INF));
//for (int i = 0; i < N; i++) d[i][i] = 0;
//
//for (int i = 0; i < M; i++) {
//	int a, b, c;
//	cin >> a >> b >> c;
//	a--, b--;
//	d[a][b] = c;
//	d[b][a] = c;
//}