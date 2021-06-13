//
// Created by Peixiao on 2021/6/13.
//

#ifndef HW_LEECODE70_H
#define HW_LEECODE70_H

#endif //HW_LEECODE70_H

#include <iostream>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1 || n == 2){
            return n;
        }
        int* dp = new int[n+1];
        dp[1] = 1, dp[2] = 2;
        for(int i = 3; i <= n; i ++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};
