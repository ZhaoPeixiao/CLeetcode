//
// Created by Peixiao on 2021/6/18.
//

#ifndef ARRAY_LEETCODE27_H
#define ARRAY_LEETCODE27_H

#endif //ARRAY_LEETCODE27_H

#include "header.h"

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