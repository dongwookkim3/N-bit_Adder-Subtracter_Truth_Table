#include "Include/main.h"

int main() {
    int n;
    bool m;
    std::cin >> n >> m;
    information.set_n(n);
    information.set_m(m);
    for (int i = 0; i < pow(2, information.get_n()); i++) {
        for (int j = 0; j < pow(2, information.get_n()); j++) {
            if (information.get_m() == false) information.push_v({i, j, i + j});
            else information.push_v({i, j, i - j});
        }
    }
    sort(information.get_vbegin(), information.get_vend(), compare);
    for (int i = 0; i < information.get_vsize(); i++) {
        std::cout << std::bitset<8>(information.get_vfirst(i)) << ' ';
        std::cout << std::bitset<8>(information.get_vsecond(i)) << ' ';
        std::cout << std::bitset<8>(information.get_vthird(i)) << "\n";
    }
    return 0;
}
