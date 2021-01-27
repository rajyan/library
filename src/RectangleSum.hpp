#include <vector>

using namespace std;

// 2d Cumulative Sum
template<class T>
class RecSum {
private:
    int H, W;
    vector<vector<T>> data;

public:
    explicit RecSum(vector<vector<T>> const &vec) : H(vec.size()), W(vec[0].size()), data(H + 1, vector<T>(W + 1, 0)) {
        for (int row = 0; row < H; row++) {
            for (int col = 0; col < W; col++) {
                data[row + 1][col + 1] += data[row + 1][col] + data[row][col + 1] - data[row][col] + vec[row][col];
            }
        }
    }

    RecSum(int H, int W) : H(H), W(W), data(H + 1, vector<T>(W + 1, 0)) {}
    void add(int x, int y, T z) { data[x + 1][y + 1] += z; }
    void init() {
        for (int row = 0; row < H; row++) {
            for (int col = 0; col < W; col++) {
                data[row + 1][col + 1] += data[row + 1][col] + data[row][col + 1] - data[row][col];
            }
        }
    }

    // [sx, gx) x [sy, gy)
    T operator()(int sx, int sy, int gx, int gy) {
        return data[gx][gy] - data[sx][gy] - data[gx][sy] + data[sx][sy];
    }
};