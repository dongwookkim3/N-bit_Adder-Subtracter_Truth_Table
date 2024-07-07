#include "Include/main.h"

int main() {
    Information Info;
    int N,M;
    cin >> N >> M;
    Info.setN(N);
    Info.setM(M);
    for (int i=0;i<pow(2,Info.getN());i++) {
        for (int j=0;j<pow(2,Info.getN());j++) {
            if (Info.getN()==false) Info.pushV({i,j,i+j});
            else Info.pushV({i,j,i-j});
        }
    }

    for (int i=0;i<Info.getVsize();i++) {
        cout << bitset<7>(Info.getVfirst(i)) << ' ';
        cout << bitset<7>(Info.getVsecond(i)) << ' ';
        cout << bitset<7>(Info.getVthird(i)) << "\n";
    }
    /*
    for (int i=0;i<Info.getVsize();i++) {
        cout << Info.getVfirst(i) << ' ';
        cout << Info.getVsecond(i) << ' ';
        cout << Info.getVthird(i) << "\n";
    }
    */
    return 0;
}
