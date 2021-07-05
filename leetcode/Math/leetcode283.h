//
// Created by Peixiao on 2021/7/5.
//

#ifndef MATH_LEETCODE283_H
#define MATH_LEETCODE283_H

#endif //MATH_LEETCODE283_H

#include "headers.h"

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int fast = 0, slow = 0;
        while (fast < nums.size()) {
            if (nums[fast] != 0) {
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        for (int i = slow; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};