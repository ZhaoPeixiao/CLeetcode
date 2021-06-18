//
// Created by Peixiao on 2021/6/18.
//

#ifndef ARRAY_LEETCODE26_H
#define ARRAY_LEETCODE26_H

#endif //ARRAY_LEETCODE26_H

#include "header.h"

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

