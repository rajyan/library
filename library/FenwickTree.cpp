#include <vector>

using namespace std;

template<typename T = lint>
class FenwickTree {
private:
	vector<T> data;

public:
	FenwickTree(int sz) : data(sz + 1) {}

	T sum(int k) {
		T res = 0;
		for (++k; k > 0; k -= k & -k) res += data[k];
		return res;
	}

	void add(int k, T x) {
		for (++k; k < data.size(); k += k & -k) data[k] += x;
	}
};