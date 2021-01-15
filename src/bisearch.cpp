#include <cmath>

using namespace std;
using lint = long long;
constexpr lint LINF = 1LL << 60;

auto judge = [&](auto key) {
    return key;
};

auto bisearch = [&](auto f) {

    auto ng = -1LL;
    auto ok = LINF;

    while (abs(ok - ng) > 1) {
        auto mid = (ok + ng) / 2;

        if (f(mid)) ok = mid;
        else ng = mid;
    }

    return ok;
};
