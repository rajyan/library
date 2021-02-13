#pragma once

#include <cassert>
#include <vector>

#include "Monoid.hpp"
#include "clz.hpp"

using namespace std;

template<class T>
class SegmentTree {
public:
    SegmentTree(const Monoid<T> &m_, const int &n_)
            : m(m_),
              n(n_), lg(64 - clz(n)), sz(1 << lg),
              d(2 * sz, m.identity()) {
    }
    SegmentTree(const Monoid<T> &m_, const vector<T> &v)
            : m(m_),
              n((int)v.size()), lg(64 - clz(n)), sz(1 << lg),
              d(2 * sz, m.identity()) {
        for (int i = 0; i < n; i++) d[sz + i] = v[i];
        for (int i = sz - 1; i >= 0; i--) update(i);
    }

    void update(const int &k) { d[k] = m.op(d[2 * k], d[2 * k + 1]); }

    void set(int k, const T &x) {
        assert(0 <= k && k < n);
        k += sz, d[k] = x;
        for (int i = 1; i <= lg; i++) update(k >> i);
    }

    void add(const int &k, const T &x) { set(k, get<T>(m.op(d[k + sz], x))); }

    [[nodiscard]] T operator()(int l, int r) const {
        assert(l <= r);
        vt sml = m.identity(), smr = m.identity();
        l += sz, r += sz;

        while (l < r) {
            if (l & 1) sml = m.op(sml, d[l++]);
            if (r & 1) smr = m.op(d[--r], smr);
            l >>= 1;
            r >>= 1;
        }
        return get<T>(m.op(sml, smr));
    }

    [[nodiscard]] T operator[](const int &k) const {
        assert(0 <= k && k < n);
        return get<T>(d[k + sz]);
    }

private:
    Monoid<T> m;
    int n, lg, sz;;
    using vt = typename Monoid<T>::vt;
    vector<vt> d;
};