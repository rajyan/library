
#include "popcount.cpp"

using lint = long long;

inline int ctz(lint n) {
    return popcount(~n & (n - 1));
}