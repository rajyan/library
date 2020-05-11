#include <iostream>
#include <sstream>

using namespace std;

inline string fnv1a_64(string data) {

	uint64_t hash = 0xcbf29ce484222325;
	uint64_t prime = 0x100000001b3;

	for (int i = 0; i < (int)data.size(); ++i) {
		hash = hash ^ data[i];
		hash *= prime;
	}

	std::stringstream to_hex;
	to_hex << std::hex << hash;

	return to_hex.str();

}