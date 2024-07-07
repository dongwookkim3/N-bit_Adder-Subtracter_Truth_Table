#include "Include/main.h"

int main() {
    vector<tuple<int,int,int>> V;
    int N;
    bool M;
    cin >> N >> M;
    for (int i=0;i<pow(2,N);i++) {
        for (int j=0;j<pow(2,N);j++) {
            if (M==false) V.push_back({i,j,i+j});
            else V.push_back({i,j,i-j});
        }
    }
    for (int i=0;i<V.size();i++) {
        cout << get<0>(V[i]) << ' ';
        cout << get<1>(V[i]) << ' ';
        cout << get<2>(V[i]) << "\n";
    }
    return 0;
}