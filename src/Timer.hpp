
#include <chrono>

using namespace std;

template<class T = chrono::microseconds>
class Timer {
public:
    Timer() { reset(); }

    void reset() {
        start = chrono::high_resolution_clock::now();
    }

    [[nodiscard]] T::rep elapsed() const {
        auto end = chrono::high_resolution_clock::now();
        return chrono::duration_cast<T>(end - start).count();
    }

private:
    chrono::high_resolution_clock::time_point start;
};
