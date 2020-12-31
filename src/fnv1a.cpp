#include <iostream>

using namespace std;

inline uint64_t fnv1a_64(string data) {

	uint64_t hash = 0xcbf29ce484222325;
	constexpr uint64_t prime = 0x100000001b3;

	for (int i = 0; i < (int)data.size(); ++i) {
		hash = hash ^ data[i];
		hash *= prime;
	}

	return hash;
}