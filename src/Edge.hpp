#pragma once

template<class T>
struct Edge {
    int from{}, to{};
    T cost;
    Edge() = default;
    Edge(const int &to, const T &cost) : to(to), cost(cost) {}
    Edge(const int &from, const int &to, const T &cost) : from(from), to(to), cost(cost) {}
    bool operator>(const Edge &r) const { return this->cost > r.cost; }
};
