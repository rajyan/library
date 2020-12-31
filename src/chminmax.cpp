
template<class T>
inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }

template<class T>
inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }
