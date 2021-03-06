
#define PROBLEM "https://yukicoder.me/problems/no/891"

#include <iostream>
#include <iomanip>

using namespace std;

#include "../../src/Modint.hpp"
#include "../../src/Matrix2D.hpp"

struct init {
    init() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
    }
} init_;

int main() {

    int a, b, n;
    cin >> a >> b >> n;

    Matrix2D<mint> A{{a, b},
              {1, 0}};
    cout << (A.pow(n) * Point2D<mint>(1, 0)).y << '\n';

    return 0;
}
