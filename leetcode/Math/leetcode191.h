//
// Created by Peixiao on 2021/7/2.
//

#ifndef MATH_LEETCODE191_H
#define MATH_LEETCODE191_H

#endif //MATH_LEETCODE191_H

#include "headers.h"

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        while (n != 0) {
            n = n & (n - 1);
            res++;
        }
        return res;
    }
};