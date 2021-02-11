#pragma once

#include <sstream>

using namespace std;

struct params { string d, l, r, lp, rp; };
#ifdef _DEBUG
params p_{",", "[", "]", "(", ")"};
#else
params p_{" ", "", "", "", ""};
#endif

template<typename T, typename = void_t<>>
struct iterable: false_type {};
template<typename T>
struct iterable<T, void_t<decltype(declval<T>().begin(), declval<T>().end())>>: negation<is_same<T, string>> {};

template<class T>
enable_if_t<!iterable<T>::value, string> str(const T &v) {
    stringstream ss;
    ss << v;
    return ss.str();
}
template<class ...T>
string str(const pair<T...> &t) {
    return p_.lp + str(t.first) + p_.d + str(t.second) + p_.rp;
}
template<class T>
enable_if_t<iterable<T>::value, string> str(const T &r) {
    string res(p_.l);
    for (const auto &e : r) res += str(e) + (&e != &*prev(r.end()) ? p_.d : "");
    return res + p_.r;
}

template<class T>
void print(T &&o) {
    cout << str(o) << '\n';
    exit(0);
}
