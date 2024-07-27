#include "../Include/sort.h"

void Information_Sort(Information &information) {
    sort(information.get_vbegin(),information.get_vend(),compare);
}

bool compare(const std::tuple<int, int, int> &a, const std::tuple<int, int, int> &b) {
    if (std::get<2>(a) == std::get<2>(b)) return std::get<0>(a) < std::get<0>(b);
    return std::get<2>(a) < std::get<2>(b);
}
