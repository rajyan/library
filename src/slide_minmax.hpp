#include <vector>
#include <deque>

using namespace std;

template<class T>
pair <vector<T>, vector<T>> slide_minmax(const vector<T> &v, int k) {

    deque<int> deq_min, deq_max;
    vector<T> ret_min, ret_max;
    for (int i = 0; i < (int)v.size(); i++) {

        while (!deq_min.empty() && v[deq_min.back()] >= v[i]) deq_min.pop_back();
        while (!deq_max.empty() && v[deq_max.back()] <= v[i]) deq_max.pop_back();

        deq_min.push_back(i);
        deq_max.push_back(i);

        if (i - k + 1 >= 0) {
            ret_min.emplace_back(v[deq_min.front()]);
            ret_max.emplace_back(v[deq_max.front()]);
            if (deq_min.front() == i - k + 1) deq_min.pop_front();
            if (deq_max.front() == i - k + 1) deq_max.pop_front();
        }

    }
    return {ret_min, ret_max};
}
