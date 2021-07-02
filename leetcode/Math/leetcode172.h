//
// Created by Peixiao on 2021/7/2.
//

#ifndef MATH_LEETCODE172_H
#define MATH_LEETCODE172_H

#endif //MATH_LEETCODE172_H

#include "headers.h"

class Solution {
public:
    int trailingZeroes(int n) {
        int res = 0;
        long divisor = 5;
        while (divisor <= n) {
            res += n / divisor;
            divisor *= 5;
        }
        return res;
    }
};