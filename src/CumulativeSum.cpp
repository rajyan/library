#include <vector>

using namespace std;

template<class T>
class CuSum {
private:
    vector<T> cusum;

public:
    CuSum(vector<T> const &vec) : cusum(vec.size() + 1) {
        for (int i = 0; i < (int)vec.size(); i++) cusum[i + 1] = cusum[i] + vec[i];
    }
    CuSum(const int N) : cusum(N + 1) {}
    void add(const int i, const T &x) { cusum[i + 1] += x; }
    void build() { for (int i = 0; i < (int)cusum.size() - 1; i++) cusum[i + 1] += cusum[i]; }

    // partial sum of 0-indexed [l, r)
    T operator()(int l, int r) {
        if (r < l || r < 0) {
            assert(0);
            return T(0);
        }
        else return cusum[r] - cusum[l];
    }
    // 0-indexed
    const T &operator[](int i) { return cusum[i + 1]; }
    T back() { return cusum.back(); }
};

