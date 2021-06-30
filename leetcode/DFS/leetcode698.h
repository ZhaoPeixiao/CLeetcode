//
// Created by Peixiao on 2021/6/30.
//

#ifndef DFS_LEETCODE698_H
#define DFS_LEETCODE698_H

#endif //DFS_LEETCODE698_H

#include "headers.h"

class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        if (k == 0) {
            return false;
        }
        int totalSum = 0;
        for (auto n : nums) {
            totalSum += n;
        }
        if (totalSum % k != 0) {
            return false;
        }
        vector<bool> visited(nums.size(), false);
        return partition(0, nums, visited, k, 0, totalSum / k);
    }

    bool partition(int start, vector<int>& nums, vector<bool>& visited, int k, int sumSoFar, int targetSum){
        if (k == 1) {
            return true;
        }
        if (sumSoFar == targetSum) {
            return partition(0, nums, visited, k - 1, 0, targetSum);
        }
        for (int i = start; i < nums.size(); i++) {
            if (!visited[i]) {
                visited[i] = true;
                if (partition(i + 1, nums, visited, k, sumSoFar + nums[i], targetSum)) {
                    return true;
                }
                visited[i]= false;
            }
        }
        return false;
    }
};