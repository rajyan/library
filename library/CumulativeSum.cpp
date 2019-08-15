#include<vector>

template <class T>
class CuSum {
private:
	vector<T> cusum;
public:
	// Constructors 
	CuSum(vector<T> const &vec) : cusum(vec.size() + 1) {
		for (int i = 0; i < (int)vec.size(); i++) cusum[i + 1] = cusum[i] + vec[i];
	}
	CuSum(int N) : cusum(N + 1) {}
	void add(int i, T x) { cusum[i + 1] += x; }
	void init() { for (int i = 0; i < (int)cusum.size() - 1; i++) cusum[i + 1] += cusum[i]; }

	// partial sum of 0-indexed [l, r)
	T operator()(int l, int r) {
		if (r < l || r < 0) {
			assert(0);
			return T(0);
		}
		else return cusum[r] - cusum[l];
	}
	// 0-indexed
	T operator[](int i) { return cusum[i + 1]; }
	T back() { return cusum.back(); }
};

// 2d Cumulative Sum
template< class T >
class RecSum {
private:
	vector<vector<T>> data;
	int H = 0, W = 0;
public:
	RecSum(vector<vector<T>> const &vec) : H(vec.size()), W(vec[0].size()) {
		data.resize(H + 1, vector<T>(W + 1, 0));
		for (int row = 0; row <= H; row++) {
			for (int col = 0; col <= W; col++) {
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