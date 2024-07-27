#pragma once

#ifndef SORT_H
#define SORT_H

#include <tuple>
#include <algorithm>
#include "Information.h"

void Information_Sort(Information &information);

bool compare(const std::tuple<int, int, int> &a, const std::tuple<int, int, int> &b);

#endif //SORT_H
