//
// Created by Peixiao on 2021/6/11.
//

#ifndef TREE_LEETCODE96_H
#define TREE_LEETCODE96_H

#endif //TREE_LEETCODE96_H

#pragma once

#include <iostream>
#include <vector>

using namespace std;


int numTrees(int n) {
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        for(int j = 1; j <= i; j++){
            dp[i] += (dp[j-1]*dp[i-j]);
        }
    }
    return dp[n];
}