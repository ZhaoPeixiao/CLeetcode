//
// Created by Peixiao on 2021/7/2.
//

#ifndef MATH_LEETCODE372_H
#define MATH_LEETCODE372_H

#endif //MATH_LEETCODE372_H

#include "headers.h"

class Solution {
public:
    int superPow(int a, vector<int>& b) {
        int res = 1, mul = a % 1337;
        for (int i = b.size() - 1; i >= 0; --i) {
            int new_mul = 1;
            for (auto j = 0; j <= 9; ++j) {
                if (j < b[i]) {
                    res = (res * mul) % 1337;
                }
                new_mul = (new_mul * mul) % 1337;
            }
            mul = new_mul;
        }
        return res;
    }
};