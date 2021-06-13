//
// Created by Peixiao on 2021/6/13.
//

#ifndef HW_LEETCODE213_H
#define HW_LEETCODE213_H

#endif //HW_LEETCODE213_H

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int robWithRange(vector<int> &nums, int start, int end) {
        int n = nums.size();
        int *dp = new int[n + 2];
        for (int i = end; i >= start; i--) {
            dp[i] = max(dp[i + 1], dp[i + 2] + nums[i]);
        }
        return dp[start];
    }


    int rob(vector<int> &nums) {
        int n = nums.size();
        if (n == 1) {
            return nums[0];
        }
        return max(robWithRange(nums, 0, n - 2), robWithRange(nums, 1, n - 1));
    }
};