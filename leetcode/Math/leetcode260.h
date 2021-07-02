//
// Created by Peixiao on 2021/7/2.
//

#ifndef MATH_LEETCODE260_H
#define MATH_LEETCODE260_H

#endif //MATH_LEETCODE260_H

#include "headers.h"

class Solution {
public:
    vector<int> singleNumber(vector<int> &nums) {
        vector<int> answer{0, 0};
        int sXor = 0, lowbit;

        for (auto i : nums) sXor ^= i;

        if (sXor == INT_MIN) lowbit = 0;
        else lowbit = sXor & (-sXor);

        for (auto i : nums)
            if (i & lowbit) answer[0] ^= i;
            else answer[1] ^= i;

        return answer;
    }
};