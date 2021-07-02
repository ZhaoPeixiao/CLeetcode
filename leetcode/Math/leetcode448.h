//
// Created by Peixiao on 2021/7/2.
//

#ifndef MATH_LEETCODE448_H
#define MATH_LEETCODE448_H

#endif //MATH_LEETCODE448_H

#include "headers.h"

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int> &nums) {
        vector<int> v;
        if (nums.size() == 0) return v;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[abs(nums[i]) - 1] > 0) {
                nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                v.push_back(i + 1);
            }
        }

        return v;
    }
};