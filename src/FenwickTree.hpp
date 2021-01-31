#pragma once

#include <vector>

using namespace std;

template<class T>
class FenwickTree {
private:
    int n;
    vector<T> bit;
public:
    explicit FenwickTree(int sz, T &&x = T{}) : n(sz), bit(n + 1) {
        for (int i = 0; i < n; i++) add(i, x);
    }

    [[nodiscard]] T sum(int k) const {
        T res = 0;
        for (k--; k >= 0; k = (k & (k + 1)) - 1) res += bit[k];
        return res;
    }
    [[nodiscard]] T sum(int l, int r) const { return sum(r) - sum(l); }

    void add(int k, const T &x) {
        for (; k < n; k |= k + 1) bit[k] += x;
    }
    void set(int k, const T &x) { add(k, x - sum(k, k + 1)); }
};
