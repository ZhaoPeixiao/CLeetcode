//
// Created by Peixiao on 2021/6/18.
//

#ifndef ARRAY_LEETCODE283_H
#define ARRAY_LEETCODE283_H

#endif //ARRAY_LEETCODE283_H

#include "header.h"

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