#include <vector>
#include <iostream>

#include "Modint.hpp"

template<class T = mint>
class Combination {
private:
    vector<T> fac, inv, finv;

    void build(int N) {
        fac[0] = fac[1] = 1;
        inv[1] = 1;
        finv[0] = finv[1] = 1;

        for (int i = 2; i < N; i++) {
            fac[i] = fac[i - 1] * i;
            inv[i] = -inv[MOD % i] * (MOD / i);
            finv[i] = finv[i - 1] * inv[i];
        }
    }

public:
    explicit Combination(int N = 110000) : fac(N + 1), inv(N + 1), finv(N + 1) { build(N + 1); }

    T operator()(int n, int k) {
        if (n < k || k < 0) return 0LL;
        return fac[n] * (finv[k] * finv[n - k]);
    }

};
