#include "Include/main.h"

#include "Include/Print.h"

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
    Result_Print();
    return 0;
}
