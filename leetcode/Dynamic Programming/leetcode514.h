//
// Created by Peixiao on 2021/6/28.
//

#ifndef DYNAMIC_PROGRAMMING_LEETCODE514_H
#define DYNAMIC_PROGRAMMING_LEETCODE514_H

#endif //DYNAMIC_PROGRAMMING_LEETCODE514_H

#include "header.h"

class Solution {
public:
    unordered_map<char, vector<int>> charToIndex;
    vector<vector<int>> memo;

    int findRotateSteps(string ring, string key) {
        int m = ring.size(), n = key.size();
        memo.resize(m, vector<int>(n, 0));
        for (int i = 0; i < m; ++i) {
            charToIndex[ring[i]].push_back(i);
        }

        return dp(ring, 0, key, 0);
    }

    int dp(string& ring, int i, string& key, int j){
        if (j == key.size()) {
            return 0;
        }
        if (memo[i][j] != 0) {
            return memo[i][j];
        }

        int n = ring.size();
        int res = INT_MAX;
        for (int k : charToIndex[key[j]]) {
            int delta = abs(k - i);
            delta = min(delta, n - delta);
            int subProblem = dp(ring, k, key, j + 1);
            res = min(res, 1 + delta + subProblem);
        }
        memo[i][j] = res;
        return res;
    }
};