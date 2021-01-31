#pragma once

using lint = long long;

inline int clz(lint x) {
    union {
        unsigned long long as_uint64;
        double as_double;
    } data{};
    data.as_double = (double)x + 0.5;
    int n = 1054 - (int)(data.as_uint64 >> 52);
    return 32 + n;
}
