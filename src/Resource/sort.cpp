#include "../Include/sort.h"

bool compare(const std::tuple<int, int, int> &a, const std::tuple<int, int, int> &b) {
    if (std::get<2>(a) == std::get<2>(b)) return std::get<0>(a) < std::get<0>(b);
    return std::get<2>(a) < std::get<2>(b);
}
