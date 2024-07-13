#include "../Include/Information.h"

Information information;

void Information::set_n(const int n) {
    this->n_ = n;
}

void Information::set_m(const bool m) {
    this->m_ = m;
}

void Information::push_v(const std::tuple<int, int, int> &t) {
    this->v_.push_back(t);
}

int Information::get_n() const {
    return this->n_;
}

bool Information::get_m() const {
    return this->m_;
}

std::vector<std::tuple<int, int, int> >::iterator Information::get_vbegin() {
    return this->v_.begin();
}

std::vector<std::tuple<int, int, int> >::iterator Information::get_vend() {
    return this->v_.end();
}

int Information::get_vfirst(const int index) const {
    return std::get<0>(this->v_[index]);
}

int Information::get_vsecond(const int index) const {
    return std::get<1>(this->v_[index]);
}

int Information::get_vthird(const int index) const {
    return std::get<2>(this->v_[index]);
}

size_t Information::get_vsize() const {
    return this->v_.size();
}
