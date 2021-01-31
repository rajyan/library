#pragma once

using lint = long long;

lint modpow(lint a, lint n, lint mod = 1000000007) {
    lint res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}
