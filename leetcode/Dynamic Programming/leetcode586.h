//
// Created by Peixiao on 2021/6/24.
//

#ifndef DYNAMIC_PROGRAMMING_LEETCODE586_H
#define DYNAMIC_PROGRAMMING_LEETCODE586_H

#endif //DYNAMIC_PROGRAMMING_LEETCODE586_H

#include "header.h"

class Solution {
public:

    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();

        if (n == 0 || m == 0) {
            return 0;
        }

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (text1[i - 1] == text2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }


    int minDistance(string word1, string word2) {
        int m = word1.size(), n = word2.size();
        int lcs = longestCommonSubsequence(word1, word2);
        return m - lcs + n - lcs;
    }
};