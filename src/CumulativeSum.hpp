#pragma once

#include <cassert>
#include <vector>

using namespace std;

template<class T>
class CuSum {
public:
    explicit CuSum(vector<T> const &vec) : cusum(vec.size() + 1) {
        for (int i = 0; i < (int)vec.size(); i++) cusum[i + 1] = cusum[i] + vec[i];
    }

    // partial sum of 0-indexed [0, k)
    [[nodiscard]] T sum(int k) {
        assert(0 <= k && k < cusum.size());
        return cusum[k];
    }
    // partial sum of 0-indexed [l, r)
    [[nodiscard]] T sum(int l, int r) {
        assert(l <= r);
        return sum(r) - sum(l);
    }
    [[nodiscard]] T back() { return cusum.back(); }

private:
    vector<T> cusum;
};

