//
// Created by Peixiao on 2021/6/29.
//

#ifndef DYNAMIC_PROGRAMMING_LEETCODE887_H
#define DYNAMIC_PROGRAMMING_LEETCODE887_H

#endif //DYNAMIC_PROGRAMMING_LEETCODE887_H

#include "header.h"

class Solution {
public:
    int superEggDrop(int n, int k) {
        int dp[n + 1][k + 1];
        for (int i = 1; i <= n; i++) {
            dp[i][1] = 1;
            dp[i][0] = 0;
        }
        for (int i = 1; i <= k; i++) {
            dp[1][i] = i;
        }
        for (int i = 2; i <= n; i++) {
            for (int j = 2; j <= k; j++) {
                dp[i][j] = INT_MAX;
                int low = 1;
                int high = j;
                int mid;
                while (low <= high) {
                    mid = (low + high) / 2;
                    int t1 = dp[i - 1][mid - 1];
                    int t2 = dp[i][j - mid];
                    if (t1 < t2)
                        low = mid + 1;
                    else if (t1 > t2)
                        high = mid - 1;
                    else
                        break;
                }
                int curr = 1 + max(dp[i - 1][mid - 1], dp[i][j - mid]);
                dp[i][j] = min(dp[i][j], curr);
            }
        }
        return dp[n][k];
    }
};