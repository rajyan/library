#include <random>
#include <chrono>

using namespace std;
using lint = long long;

struct RandNum {

	mt19937 mt;
	RandNum() : mt(chrono::steady_clock::now().time_since_epoch().count()) {}

	lint operator()(lint a, lint b) {
		uniform_int_distribution<lint> dist(a, b);
		return dist(mt);
	}
	lint operator() (lint b) { return (*this)(0LL, b); }

	template<class Ite>
	void shuf(Ite first, Ite last) { shuffle(first, last, mt); }

};
