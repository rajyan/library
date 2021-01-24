
#define PROBLEM "https://yukicoder.me/problems/no/891"

#include <iostream>
#include <iomanip>

using namespace std;

#include "../../src/Modint.cpp"
#include "../../src/Matrix2D.cpp"

using mintmat = Matrix2D<mint>;

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

    mintmat A{{a, b},
              {1, 0}};
    cout << (A.pow(n) * Point2D<mint>(1, 0)).y << '\n';

    return 0;
}
