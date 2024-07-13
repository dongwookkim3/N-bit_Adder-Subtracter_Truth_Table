#pragma once

#ifndef INFORMATION_H
#define INFORMATION_H

#include <vector>
#include <tuple>

class Information {
private:
    int n_;
    bool m_;
    std::vector<std::tuple<int, int, int> > v_;

public:
    void set_n(int n);

    void set_m(bool m);

    void push_v(const std::tuple<int, int, int> &t);

    [[nodiscard]] int get_n() const;

    [[nodiscard]] bool get_m() const;

    std::vector<std::tuple<int, int, int> >::iterator get_vbegin();

    std::vector<std::tuple<int, int, int> >::iterator get_vend();

    [[nodiscard]] int get_vfirst(int index) const;

    [[nodiscard]] int get_vsecond(int index) const;

    [[nodiscard]] int get_vthird(int index) const;

    [[nodiscard]] size_t get_vsize() const;
};

extern Information information;

#endif // INFORMATION_H
