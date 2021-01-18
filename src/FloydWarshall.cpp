#include <vector>

using namespace std;

#include "chmin.cpp"

template<class T>
vector<vector<T>> FloydWarshall(const vector<vector<T>> &in, const T diag = T{}) {
    const int N = in.size();
    assert(N == in[0].size());

    auto d = in;
    for (int i = 0; i < N; i++) d[i][i] = diag;
    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                chmin(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
    return d;
}
