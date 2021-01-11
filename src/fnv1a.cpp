#include <iostream>

using namespace std;

inline uint64_t fnv1a_64(const string& data) {

    uint64_t hash = 0xcbf29ce484222325;
    constexpr uint64_t prime = 0x100000001b3;

    for (char i : data) {
        hash = hash ^ i;
        hash *= prime;
    }

    return hash;
}