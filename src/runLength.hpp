#pragma once

#include <string>
#include <vector>

using namespace std;

vector<pair<char, int>> runLength(string s) {
    char prev = s[0];
    vector<pair<char, int>> res{{prev, 0}};
    for (const auto &c : s) {
        if (c == prev) res.back().second++;
        else res.emplace_back(c, 1);
        prev = c;
    }
    return res;
}
