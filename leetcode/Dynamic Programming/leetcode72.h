//
// Created by Peixiao on 2021/6/24.
//

#ifndef DYNAMIC_PROGRAMMING_LEETCODE72_H
#define DYNAMIC_PROGRAMMING_LEETCODE72_H

#endif //DYNAMIC_PROGRAMMING_LEETCODE72_H

#include "header.h"

class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        if (n == 0) {
            return m;
        }
        if (m == 0) {
            return n;
        }

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                if (i == 0) {
                    dp[i][j] = j;
                } else if (j == 0) {
                    dp[i][j] = i;
                } else if (word1[i - 1] == word2[j - 1]) {
                    // 相等 i j 向前移动 什么也不做
                    dp[i][j] = dp[i - 1][j - 1];
                } else {
                    // 三选一操作        删除               插入          替换
                    dp[i][j] = 1 + min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1]));
                }
            }
        }
        return dp[n][m];
    }
};