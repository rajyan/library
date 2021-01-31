#pragma once

template<class T>
struct Edge {
    int from{}, to{};
    T cost;
    Edge() = default;
    Edge(int to, T cost) : to(to), cost(cost) {}
    Edge(int from, int to, T cost) : from(from), to(to), cost(cost) {}
    bool operator>(const Edge &r) const { return this->cost > r.cost; }
};
