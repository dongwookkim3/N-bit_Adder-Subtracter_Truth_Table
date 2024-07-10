#pragma once

#ifndef INFORMATION_H
#define INFORMATION_H

#include <vector>
#include <tuple>

using namespace std;

class Information {
private:
    int N;
    bool M;
    vector<tuple<int, int, int>> V;
public:
    void setN(int _N) {
        N = _N;
    }
    void setM(bool _M) {
        M = _M;
    }
    void pushV(tuple<int, int, int> _T) {
        V.push_back(_T);
    }
    int getN() {
        return N;
    }
    bool getM() {
        return M;
    }
    int getVfirst(int index) {
        return get<0>(V[index]);
    }
    int getVsecond(int index) {
        return get<1>(V[index]);
    }
    int getVthird(int index) {
        return get<2>(V[index]);
    }
    int getVsize() {
        return V.size();
    }
};

extern Information information;

#endif // INFORMATION_H
