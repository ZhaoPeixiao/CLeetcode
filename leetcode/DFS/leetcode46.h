//
// Created by Peixiao on 2021/6/30.
//

#ifndef DFS_LEETCODE46_H
#define DFS_LEETCODE46_H

#endif //DFS_LEETCODE46_H

#include "headers.h"

class Solution {
public:
    vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> flag(nums.size(), false);
        dfs(ans, nums, temp, flag);
        return ans;
    }

    void dfs(vector<vector<int>> &ans, vector<int> &nums, vector<int> &temp, vector<bool> &flag) {
        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (!flag[i]) {
                temp.push_back(nums[i]);
                flag[i] = true;
                dfs(ans, nums, temp, flag);
                flag[i] = false;
                temp.pop_back();
            }
        }
    }
};