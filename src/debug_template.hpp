#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include "print.hpp"

using namespace std;

template<class T>
void dump(const char *name, T &&h) { cerr << name << " = " << str(h) << "\n"; };
template<class Head, class... Tail>
void dump(const char *names, Head &&h, Tail &&... t) {
    while (*names != ',') cerr << *names++;
    cerr << " = " << str(h) << "\n";
    dump(names + (*(names + 1) == ' ' ? 2 : 1), t...);
}
