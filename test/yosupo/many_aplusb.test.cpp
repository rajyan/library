
#define PROBLEM "https://judge.yosupo.jp/problem/many_aplusb"

#define main temp
#include "../../src/template.hpp"
#undef main
#include "../../src/Timer.hpp"

int main() {

    Timer timer;

    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        lint a, b;
        cin >> a >> b;
        cout << a + b << "\n";
    }

    if (timer.elapsed() / 1000.0 / 1000.0 > 2.0) {
        abort();
    }

    return 0;
}
