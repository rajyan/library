#include <vector>
#include <algorithm>

using namespace std;

template<class T>
vector<T> divisor(const T n) {
    vector<T> res;
    for (T i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            res.emplace_back(i);
            if (i * i != n) res.emplace_back(n / i);
        }
    }
    sort(res.begin(), res.end());
    return res;
}
