#pragma once

#include <vector>

using namespace std;
using lint = long long;

#define RUNTIME_MODINT
#include "Modint.hpp"

#include "ctz.hpp"

class Prime {
public:
    vector<bool> pTable;
    explicit Prime(int N = 1100000) : pTable(N + 1, true) { Eratosthenes(N + 1); }

    [[nodiscard]] vector<pair<lint, int>> factorize(lint n) {
        vector<pair<lint, int>> res;
        for (lint i = 2; i * i <= n; i++) {
            int cnt = 0;
            while (n % i == 0) {
                cnt++;
                n /= i;
            }
            if (cnt) res.emplace_back(i, cnt);
        }
        if (n != 1) res.emplace_back(n, 1);

        return res;
    }

    // Miller-Rabin
    [[nodiscard]] bool isPrime(lint n) {
        if (n <= 1 || n % 2 == 0) return (n == 2);
        const int s = ctz(n - 1);
        const lint d = (n - 1) >> s;
        // set runtime mod
        RMOD = n;
        // http://miller-rabin.appspot.com/
        for (const lint base : {2, 325, 9375, 28178, 450775, 9780504, 1795265022}) {
            rmint a = rmint(base).pow(d);
            int i = s;
            while (a != 1 && a != -1 && a != 0 && i--) a *= a;
            if (a != -1 && i != s) return false;
        }
        return true;
    }
private:
    void Eratosthenes(lint N) {
        for (lint i = 2; i * i < N; i++) {
            if (pTable[i]) {
                for (int j = 0; i * (j + 2) < N; j++) pTable[i * (j + 2)] = false;
            }
        }
    }
};
