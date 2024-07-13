#include "../Include/sort.h"

bool compare(const tuple<int,int,int> &a, const tuple<int,int,int> &b) {
    if (get<2>(a) == get<2>(b)) return get<0>(a) < get<0>(b);
    return get<2>(a) < get<2>(b);
}