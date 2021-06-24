//
// Created by Peixiao on 2021/6/24.
//

#ifndef DYNAMIC_PROGRAMMING_LEETCODE53_H
#define DYNAMIC_PROGRAMMING_LEETCODE53_H

#endif //DYNAMIC_PROGRAMMING_LEETCODE53_H

#include "header.h"

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }

        int dp_0 = nums[0];
        int dp_1 = 0, res = dp_0;
        for (int i = 1; i < n; i++) {
            dp_1 = max(nums[i], nums[i] + dp_0);
            dp_0 = dp_1;
            res = max(res, dp_1);
        }
        return res;
    }
};