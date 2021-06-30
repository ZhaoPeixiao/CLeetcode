//
// Created by Peixiao on 2021/6/30.
//

#ifndef DFS_LEETCODE77_H
#define DFS_LEETCODE77_H

#endif //DFS_LEETCODE77_H

#include "headers.h"

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;

        vector<int> temp;

        combination(n, k, 1, n, temp, result);

        return result;
    }

    void combination(int n, int k, int start, int &limit, vector<int> temp, vector<vector<int>> &result) {
        if (k == 0) {
            result.push_back(temp);
            return;
        }

        if (n == 0) {
            return;
        }

        for (int i = start; i <= limit; i++) {
            temp.push_back(i);
            combination(n - 1, k - 1, i + 1, limit, temp, result);
            temp.pop_back();
        }
    }
};