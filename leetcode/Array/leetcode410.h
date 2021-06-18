//
// Created by Peixiao on 2021/6/16.
//

#ifndef ARRAY_LEETCODE410_H
#define ARRAY_LEETCODE410_H

#endif //ARRAY_LEETCODE410_H

#include "header.h"

class Solution {
public:
    bool canSplit(vector<int> &nums, int maxSum, int m){
        int count = 1;
        int sum = 0;
        for (auto num : nums) {
            sum += num;
            if (sum > maxSum) {
                sum = num;
                ++count;
            }
        }
        return count <= m;
    }


    int splitArray(vector<int>& nums, int m) {
        int low = 0, high = 0;
        for (auto num : nums) {
            low = max(low, num);
            high += num;
        }
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canSplit(nums, mid, m)) {
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};