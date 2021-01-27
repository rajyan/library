#include <cmath>

using namespace std;

template<class T, class F>
T bisearch(T OK, T NG, F f) {
    T ok = OK;
    T ng = NG;

    while (abs(ok - ng) > 1) {
        auto mid = (ok + ng) / 2;

        if (f(mid)) ok = mid;
        else ng = mid;
    }

    return ok;
}
