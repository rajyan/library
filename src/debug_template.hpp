#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

template<typename T, typename = void_t<>>
struct is_iterable: false_type {};
template<typename T>
struct is_iterable<T, void_t<decltype(declval<T>().begin(), declval<T>().end())>>: negation<is_same<T, string>> {};

template<class T1, class T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
    os << '(' << p.first << ',' << p.second << ')';
    return os;
}
template<class T>
enable_if_t<is_iterable<T>::value, ostream> &operator<<(ostream &os, const T &r) {
    os << '[';
    for (const auto &e : r) os << e << (&e != &*(--r.end()) ? " " : "");
    os << ']';
    return os;
}

template<class T>
void dump(const char *str, T &&h) { cerr << str << " = " << h << "\n"; };
template<class Head, class... Tail>
void dump(const char *str, Head &&h, Tail &&... t) {
    while (*str != ',') cerr << *str++;
    cerr << " = " << h << "\n";
    dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);
}
