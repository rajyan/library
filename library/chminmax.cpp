template<class T>
inline bool chmax(T &a, T b) { return a < b && (a = b, true); }

template<class T>
inline bool chmin(T &a, T b) { return a > b && (a = b, true); }