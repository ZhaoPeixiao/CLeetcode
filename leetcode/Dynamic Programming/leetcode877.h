//
// Created by Peixiao on 2021/6/29.
//

#ifndef DYNAMIC_PROGRAMMING_LEETCODE877_H
#define DYNAMIC_PROGRAMMING_LEETCODE877_H

#endif //DYNAMIC_PROGRAMMING_LEETCODE877_H

#include "header.h"

class Solution {
public:
    bool stoneGame(vector<int> &piles) {
        int n = piles.size();
        if (n <= 2) {
            return true;
        }
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            dp[i][i] = piles[i];
        }
        for (int l = 2; l <= n; l++) {
            for (int i = n - l; i >= 0; i--) {
                int j = i + l - 1;
                dp[i][j] = INT_MIN;
                dp[i][j] = max(dp[i][j], piles[i] - dp[i + 1][j]);
                dp[i][j] = max(dp[i][j], piles[j] - dp[i][j - 1]);
            }
        }
        return dp[0][n-1]>0;
    }
};