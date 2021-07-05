//
// Created by Peixiao on 2021/7/5.
//

#ifndef MATH_LEETCODE26_H
#define MATH_LEETCODE26_H

#endif //MATH_LEETCODE26_H

#include "headers.h"

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        int slow = 0, fast = 0;
        while (fast < nums.size()) {
            if (nums[fast] != nums[slow]) {
                slow++;
                nums[slow] = nums[fast];
            }
            fast++;
        }
        return slow + 1;
    }
};