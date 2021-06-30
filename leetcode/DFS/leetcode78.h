//
// Created by Peixiao on 2021/6/30.
//

#ifndef DFS_LEETCODE78_H
#define DFS_LEETCODE78_H

#endif //DFS_LEETCODE78_H

#include "headers.h"

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        if (nums.size() == 0) {
            res.push_back(vector<int>{});
        } else {
            int elem = nums[nums.size() - 1];
            nums.pop_back();
            for(auto& vec:subsets(nums))
            {
                res.push_back(vec);
                vec.push_back(elem);
                res.push_back(vec);
            }
        }
        return res;
    }
};