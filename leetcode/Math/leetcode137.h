//
// Created by Peixiao on 2021/7/2.
//

#ifndef MATH_LEETCODE137_H
#define MATH_LEETCODE137_H

#endif //MATH_LEETCODE137_H

#include "headers.h"
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res;
        unordered_map<int, int>map;
        for (auto n : nums) {
            ++map[n];
        }

        for (auto &x:map) {
            if (x.second == 1) {
                return x.first;
            }
        }
        return 0;
    }
};