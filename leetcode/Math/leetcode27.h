//
// Created by Peixiao on 2021/7/5.
//

#ifndef MATH_LEETCODE27_H
#define MATH_LEETCODE27_H

#endif //MATH_LEETCODE27_H

#include "headers.h"

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int fast = 0, slow = 0;
        while (fast < nums.size()) {
            if (nums[fast] != val) {
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow;
    }
};