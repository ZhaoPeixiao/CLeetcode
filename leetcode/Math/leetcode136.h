//
// Created by Peixiao on 2021/7/2.
//

#ifndef MATH_LEETCODE136_H
#define MATH_LEETCODE136_H

#endif //MATH_LEETCODE136_H

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for (auto n : nums) {
            res ^= n;
        }
        return res;
    }
};