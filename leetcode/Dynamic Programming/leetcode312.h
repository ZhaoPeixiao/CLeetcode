//
// Created by Peixiao on 2021/6/29.
//

#ifndef DYNAMIC_PROGRAMMING_LEETCODE312_H
#define DYNAMIC_PROGRAMMING_LEETCODE312_H

#endif //DYNAMIC_PROGRAMMING_LEETCODE312_H

#include "header.h"

class Solution {
public:
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(), 1);
        nums.insert(nums.end(), 1);

        int n = nums.size();

        int dp[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                dp[i][j] = 0;
            }
        }

        for (int l = 2; l <= n; l++) {
            for (int i = 0; i + l < n; i++) {
                int j = i + l;
                for (int k = i + 1; k < j; k++) {
                    dp[i][j] = max(dp[i][j], dp[i][k] + dp[k][j] + nums[i] * nums[k] * nums[j]);
                }
            }
        }

        return dp[0][n - 1];
    }
};