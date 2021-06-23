//
// Created by Peixiao on 2021/6/23.
//

#ifndef DYNAMIC_PROGRAMMING_LEETCODE322_H
#define DYNAMIC_PROGRAMMING_LEETCODE322_H

#endif //DYNAMIC_PROGRAMMING_LEETCODE322_H

#include "header.h"

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, INT_MAX);
        dp[0] = 0;
        for (int i = 1; i < amount + 1; i++) {
            for (auto coin : coins) {
                if (coin <= i && dp[i - coin] != INT_MAX) {
                    dp[i] = min(dp[i], 1 + dp[i - coin]);
                }
            }
        }
        return dp[amount] == INT_MAX? -1 : dp[amount];
    }
};
