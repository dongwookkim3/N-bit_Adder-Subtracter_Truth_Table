#include "../Include/Print.h"

void Setup_Print() {
    std::cout << "프로그램을 실행하시려면 비트의 길이를 입력해주세요.\n";
}

void Result_Print() {
    std::cout << "----------------------------------\n";
    std::cout << "|     A    |     B    |     S    |\n";
    std::cout << "----------------------------------\n";
    for (int i = 0; i < information.get_vsize(); i++) {
        std::cout << "| " << std::bitset<8>(information.get_vfirst(i)) << " | ";
        std::cout << std::bitset<8>(information.get_vsecond(i)) << " | ";
        std::cout << std::bitset<8>(information.get_vthird(i)) << " |\n";
    }
    std::cout << "----------------------------------\n";
}