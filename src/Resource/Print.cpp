#include "../Include/Print.h"

void Result_Print() {
    std::cout << "----------------------------------\n";
    std::cout << "|     A    |     B    |     C    |\n";
    std::cout << "----------------------------------\n";
    for (int i = 0; i < information.get_vsize(); i++) {
        std::cout << "| " << std::bitset<8>(information.get_vfirst(i)) << " | ";
        std::cout << std::bitset<8>(information.get_vsecond(i)) << " | ";
        std::cout << std::bitset<8>(information.get_vthird(i)) << " |\n";
    }
    std::cout << "----------------------------------\n";
}