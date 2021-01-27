#include <cmath>

using namespace std;

template<class T, class F>
T bisearch(T NG, T OK, F f) {
    T ng = NG;
    T ok = OK;

    while (abs(ok - ng) > 1) {
        auto mid = (ok + ng) / 2;

        if (f(mid)) ok = mid;
        else ng = mid;
    }

    return ok;
}
