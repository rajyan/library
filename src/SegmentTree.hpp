#pragma once

#include <cassert>
#include <vector>

#include "Monoid.hpp"
#include "clz.hpp"

using namespace std;

template<class M>
class SegmentTree {
    using T = typename M::type;
    using vt = typename M::vt;
public:
    explicit SegmentTree(const int &n_)
            : n(n_), lg(64 - clz(n)), sz(1 << lg),
              d(2 * sz, m.identity()) {
    }
    explicit SegmentTree(const vector<T> &v)
            : n((int)v.size()), lg(64 - clz(n)), sz(1 << lg),
              d(2 * sz, m.identity()) {
        for (int i = 0; i < n; i++) d[sz + i] = v[i];
        for (int i = sz - 1; i >= 0; i--) update(i);
    }

    void set(int k, const vt &x) {
        assert(0 <= k && k < n);
        k += sz, d[k] = x;
        for (int i = 1; i <= lg; i++) update(k >> i);
    }
    void add(const int &k, const vt &x) { set(k, m.op(d[k + sz], x)); }

    [[nodiscard]] vt sum(int l, int r) const {
        assert(l <= r);
        vt sml = m.identity(), smr = m.identity();
        l += sz, r += sz;

        while (l < r) {
            if (l & 1) sml = m.op(sml, d[l++]);
            if (r & 1) smr = m.op(d[--r], smr);
            l >>= 1;
            r >>= 1;
        }
        return m.op(sml, smr);
    }
    [[nodiscard]] vt operator[](const int &k) const {
        assert(0 <= k && k < n);
        return d[k + sz];
    }

private:
    M m;
    int n, lg, sz;
    vector<vt> d;
    void update(const int &k) { d[k] = m.op(d[2 * k], d[2 * k + 1]); }
};