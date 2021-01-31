#pragma once

#include <iostream>

using namespace std;

template<typename T, typename = void_t<>>
struct is_iterable: false_type {};
template<typename T>
struct is_iterable<T, void_t<decltype(declval<T>().begin(), declval<T>().end())>>: negation<is_same<T, string>> {};

template<class T1, class T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
#ifdef _DEBUG
    os << '(';
#endif
    os << p.first << ' ' << p.second;
#ifdef _DEBUG
    os << ')';
#endif
    return os;
}
template<class T>
enable_if_t<is_iterable<T>::value, ostream> &operator<<(ostream &os, const T &r) {
#ifdef _DEBUG
    os << '[';
#endif
    for (const auto &e : r) os << e << (&e != &*prev(r.end()) ? " " : "");
#ifdef _DEBUG
    os << ']';
#endif
    return os;
}

template<class T>
void print(T &&o) {
    cout << o << '\n';
    exit(0);
}