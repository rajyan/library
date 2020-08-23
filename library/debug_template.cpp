#pragma once

// for MSVC++
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

template <class T>
ostream &operator<<(ostream &os, const vector<T> &vec) {
	os << "[ ";
	for (const auto &e : vec) os << e << " ";
	os << "]\n";
	return os;
}

template <class T>
ostream &operator<<(ostream &os, const set<T> &st) {
	os << "[ ";
	for (const auto &e : st) os << e << " ";
	os << "]\n";
	return os;
}

template <class T1, class T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
	os << '(' << p.first << ',' << p.second << ')';
	return os;
}

template <class T1, class T2>
ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
	os << "[ ";
	for (const auto &e : mp) os << e << " ";
	os << "]\n";
	return os;
}

template <class T>
void dump(const char* str, T &&h) { cerr << str << " = " << h << "\n"; };
template <class Head, class... Tail>
void dump(const char* str, Head &&h, Tail &&... t) {
	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
	dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);
}