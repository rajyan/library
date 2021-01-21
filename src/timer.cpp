
#include <chrono>

using namespace std;

class Timer {
public:
    Timer() { reset(); }

    void reset() {
        start = chrono::high_resolution_clock::now();
    }

    chrono::microseconds::rep elapsed() {
        auto end = chrono::high_resolution_clock::now();
        return chrono::duration_cast<chrono::microseconds>(end - start).count();
    }

private:
    chrono::high_resolution_clock::time_point start;
};
