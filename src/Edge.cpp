template<class T>
struct Edge {
    int from{}, to{};
    T cost;
    Edge() = default;
    Edge(int from, int to, T cost) : from(from), to(to), cost(cost) {}
};
