#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include "print.hpp"

using namespace std;

template<class T>
void dump(const char *str, T &&h) { cerr << str << " = " << str(h) << "\n"; };
template<class Head, class... Tail>
void dump(const char *str, Head &&h, Tail &&... t) {
    while (*str != ',') cerr << *str++;
    cerr << " = " << str(h) << "\n";
    dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);
}
