//
// Created by Peixiao on 2021/6/23.
//

#ifndef DYNAMIC_PROGRAMMING_LEETCODE931_H
#define DYNAMIC_PROGRAMMING_LEETCODE931_H

#endif //DYNAMIC_PROGRAMMING_LEETCODE931_H

#include "header.h"

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        vector<vector<int>> dp(m, vector<int>(m, 0));
        for (int i = 0; i < m; i++) {
            dp[0][i] = matrix[0][i];
        }
        for (int i = 1; i < m; i++) {
            for (int j = 0; j < m; j++) {
                if (j == 0) {
                    dp[i][j] = matrix[i][j] + min(dp[i - 1][j], dp[i - 1][j + 1]);
                } else if (j == m - 1) {
                    dp[i][j] = matrix[i][j] + min(dp[i - 1][j], dp[i - 1][j - 1]);
                } else {
                    dp[i][j] = matrix[i][j] + min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i - 1][j + 1]));
                }
            }
        }
        int res = INT_MAX;
        for (int j = 0; j < m; j++) {
            res = min(res, dp[m - 1][j]);
        }
        return res;
    }
};