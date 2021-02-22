#pragma once

#include <vector>

using namespace std;

template<class T>
class Compress {
public:
    Compress() = default;
    explicit Compress(vector<T> vec) : comp(move(vec)) { build(); }

    void add(const T &x) { comp.emplace_back(x); }

    void build() {
        sort(comp.begin(), comp.end());
        comp.erase(unique(comp.begin(), comp.end(), comp.end()));
    }

    [[nodiscard]] vector<int> get(const vector<T> &vec) const {
        vector<int> ret(vec.size());
        transform(vec.begin(), vec.end(), ret.begin(), [&](const T &x) { return get(x); });
        return ret;
    }
    [[nodiscard]] int get(const T &x) const { return lower_bound(comp.begin(), comp.end(), x) - begin(comp); }

    const T &operator[](const int k) const { return comp[k]; }

private:
    vector<T> comp{};
};
