//
// Created by Peixiao on 2021/6/25.
//

#ifndef DYNAMIC_PROGRAMMING_LEETCODE55_H
#define DYNAMIC_PROGRAMMING_LEETCODE55_H

#endif //DYNAMIC_PROGRAMMING_LEETCODE55_H

#include "header.h"

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int longestDistance = 0;
        for (int i = 0; i < n - 1; i++) {
            longestDistance = max(longestDistance, i + nums[i]);
            if (longestDistance <= i) {
                return false;
            }
        }
        return longestDistance >= n - 1;
    }
};