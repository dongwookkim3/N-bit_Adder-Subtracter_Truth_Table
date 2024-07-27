#include "../Include/Input.h"

void Input_Init() {
    int n;
    bool m;
    std::cin >> n >> m;
    information.set_n(n);
    information.set_m(m);
}
