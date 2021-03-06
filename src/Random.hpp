#pragma once

#include <cassert>
#include <algorithm>
#include <random>
#include <chrono>
#include <vector>
#include <unordered_map>

using namespace std;
using lint = long long;

struct Random {
    unsigned int seed;
    mt19937 mt;
    explicit Random(unsigned int s = chrono::steady_clock::now().time_since_epoch().count()) : seed(s), mt(seed) {}

    lint operator()(const lint &rand_min, const lint &rand_max) {
        uniform_int_distribution <lint> dist(rand_min, rand_max);
        return dist(mt);
    }
    lint operator()(const lint &rand_max) { return (*this)(0LL, rand_max); }

    [[nodiscard]] vector<lint> uniq_vec(const int &sz, const lint &rand_min, lint rand_max) {

        vector<lint> res(sz);
        unordered_map <lint, lint> memo;
        for (int i = 0; i < sz; i++, rand_max--) {

            lint rand_val = (*this)(rand_min, rand_max);

            // If rand_max hasn't been replaced yet, fill it with rand_max
            if (memo.find(rand_max) == memo.end()) memo[rand_max] = rand_max;

            auto val_itr = memo.find(rand_val);
            if (val_itr == memo.end()) { // replace rand_val with rand_max
                memo[rand_val] = memo[rand_max];
            }
            else { // If rand_val has already been replaced
                rand_val = val_itr->second;
                val_itr->second = memo[rand_max];
            }

            res[i] = rand_val;
        }
        return res;
    }
    template<class Ite>
    void shuf(Ite first, Ite last) { shuffle(first, last, mt); }

    string random_string(const int &max_len, const string list = "abcdefghijklmnopqrstuvwxyz") {
        assert(!list.empty());
        int size = (int)(*this)(1, max_len);
        string res(size, 0);
        generate(res.begin(), res.end(), [this, &list]() { return list[(*this)((int)list.size() - 1)]; });
        return res;
    }

};
