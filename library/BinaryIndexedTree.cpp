#include <vector>

using namespace std;

template< typename T >
class BinaryIndexedTree {
private:
	vector<T> data;

public:
	BinaryIndexedTree(int sz) : data(sz + 1) {}

	T sum(int k) {
		T res = 0;
		for (++k; k > 0; k -= k & -k) res += data[k];
		return res;
	}

	void add(int k, T x) {
		for (++k; k < data.size(); k += k & -k) data[k] += x;
	}
};