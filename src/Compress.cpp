
template<class T>
class Compress {
private:
	vector<T> comp;

public:
	Compress() {}
	Compress(const vector<T> &vec) : comp(vec) { build(); }

	void add(const T &x) { comp.emplace_back(x); }

	void build() {
		sort(begin(comp), end(comp));
		comp.erase(unique(begin(comp), end(comp)), end(comp));
	}

	vector<int> get(const vector<T> &vec) const {
		vector<int> ret(vec.size());
		transform(begin(vec), end(vec), ret.begin(), [&](const T &x) {
			return (int)(lower_bound(begin(comp), end(comp), x) - begin(comp));
		});
		return ret;
	}
	int get(const T &x) const { return lower_bound(begin(comp), end(comp), x) - begin(comp); }

	const T &operator[](const int k) const { return comp[k]; }
};
