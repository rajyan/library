template<class T>
inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }
