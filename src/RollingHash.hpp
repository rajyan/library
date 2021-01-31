#pragma once

#include <vector>
#include <string>

#include "Modint.hpp"

using namespace std;

//// mod, base from https://gist.github.com/privet-kitty/295ac9202b7abb3039b493f8238bf40f
class RollingHash {

private:
    constexpr int prime = 2147483647;
    using Mod = Mint<prime>;

    vector<Mod> hash1, pow1;
    vector<Mod> hash2, pow2;
    constexpr int base1 = 2147483634;
    constexpr int base2 = 2147483627;
    int sz;

public:
    explicit RollingHash(const string &s) : sz(s.size()) {

        hash1.assign(sz + 1, 0);
        pow1.assign(sz + 1, 1);
        hash2.assign(sz + 1, 0);
        pow2.assign(sz + 1, 1);

        for (int i = 0; i < sz; i++) {
            hash1[i + 1] = hash1[i] * base1 + s[i];
            pow1[i + 1] = pow1[i] * base1;
            hash2[i + 1] = hash2[i] * base2 + s[i];
            pow2[i + 1] = pow2[i] * base2;
        }
    }

    [[nodiscard]] pair<int, int> get(int l, int r) {
        int res1 = (hash1[r] - hash1[l] * pow1[r - l]).val;
        int res2 = (hash2[r] - hash2[l] * pow2[r - l]).val;
        return {res1, res2};
    }
};
