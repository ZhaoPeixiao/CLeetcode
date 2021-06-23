//
// Created by Peixiao on 2021/6/23.
//

#ifndef DYNAMIC_PROGRAMMING_LEETCODE494_H
#define DYNAMIC_PROGRAMMING_LEETCODE494_H

#endif //DYNAMIC_PROGRAMMING_LEETCODE494_H

#include "header.h"

// Backtrack
//class Solution {
//public:
//    int findTargetSumWays(vector<int>& nums, int S) {
//        int count = 0;
//        backtrack(nums, S, 0, 0, count);
//        return count;
//    }
//
//    void backtrack(vector<int>& nums, int S, int sum, int pos, int& count){
//        if(pos == nums.size()){
//            if(sum == S) count++;
//            return;
//        }
//        backtrack(nums, S, sum + nums[pos], pos + 1, count);
//        backtrack(nums, S, sum - nums[pos], pos + 1, count);
//    }
//};

//DP
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for (auto num : nums) {
            sum += num;
        }
        if (sum < target || -sum > target) {
            return 0;
        }
        vector<int> cur(2 * sum + 1);
        vector<int> next(2 * sum + 1);
        cur[sum] = 1;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < 2 * sum + 1; j++) {
                if (cur[j] != 0) {
                    next[j + nums[i]] += cur[j];
                    next[j - nums[i]] += cur[j];
                    cur[j] = 0;
                }
            }
            swap(cur, next);
        }
        return cur[sum + target];
    }
};