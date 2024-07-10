#include "Include/main.h"

int main() {
    int N,M;
    cin >> N >> M;
    information.setN(N);
    information.setM(M);
    for (int i=0;i<pow(2,information.getN());i++) {
        for (int j=0;j<pow(2,information.getN());j++) {
            if (information.getN()==false) information.pushV({i,j,i+j});
            else information.pushV({i,j,i-j});
        }
    }
    for (int i=0;i<information.getVsize();i++) {
        cout << bitset<8>(information.getVfirst(i)) << ' ';
        cout << bitset<8>(information.getVsecond(i)) << ' ';
        cout << bitset<8>(information.getVthird(i)) << "\n";
    }
    return 0;
}
