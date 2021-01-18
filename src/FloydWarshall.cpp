#include <cassert>
#include <vector>

using namespace std;

#include "chmin.cpp"

template<class T>
vector<vector<T>> FloydWarshall(const vector<vector<T>> &in, const T diag = T{}) {

    const int N = in.size();
    assert(N == (int)in[0].size());
    const T inf = in[0][0];

    auto d = in;
    for (int i = 0; i < N; i++) d[i][i] = diag;
    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (d[i][k] < inf && d[k][j] < inf) chmin(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
    return d;
}
