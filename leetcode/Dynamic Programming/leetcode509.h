//
// Created by Peixiao on 2021/6/23.
//

#ifndef DYNAMIC_PROGRAMMING_LEETCODE509_H
#define DYNAMIC_PROGRAMMING_LEETCODE509_H

#endif //DYNAMIC_PROGRAMMING_LEETCODE509_H

#include "header.h"

class Solution {
public:
    int fib(int n) {
        if (n < 2) {
            return n;
        }
        int dp[n + 1];
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i < n + 1; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};