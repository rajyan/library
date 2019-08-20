#include <iostream>
#include <set>
#include <map>

using namespace std;
template <class T>

ostream &operator<<(ostream &os, const set<T> &st) {
	for (const auto &e : st) os << e << " ";
	return os;
}

template <class T1, class T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
	os << "(" << p.first << "," << p.second << ")";
	return os;
}

template <class T1, class T2>
ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
	for (const auto &e : mp) os << e << " ";
	return os;
}