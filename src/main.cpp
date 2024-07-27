#include "Include/main.h"

int main() {
    Setup_Print();
    Input_Init();
    for (int i = 0; i < pow(2, information.get_n()); i++) {
        for (int j = 0; j < pow(2, information.get_n()); j++) {
            if (information.get_m() == false) information.push_v({i, j, i + j});
            else information.push_v({i, j, i - j});
        }
    }
    Information_Sort(information);
    Result_Print();
    return 0;
}
