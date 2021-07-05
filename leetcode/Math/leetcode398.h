//
// Created by Peixiao on 2021/7/5.
//

#ifndef MATH_LEETCODE398_H
#define MATH_LEETCODE398_H

#endif //MATH_LEETCODE398_H

#include "headers.h"

class Solution {
private:
    vector<int> nums;
public:
    Solution(vector<int>& nums) {
        this->nums = nums;
    }

    int pick(int target) {
        int cnt = 1;
        int res = -1;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == target) {
                if (rand() % cnt == 0) {
                    res = i;
                }
                cnt++;
            }
        }
        return res;
    }
};