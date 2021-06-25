//
// Created by Peixiao on 2021/6/25.
//

#ifndef DYNAMIC_PROGRAMMING_LEETCODE45_H
#define DYNAMIC_PROGRAMMING_LEETCODE45_H

#endif //DYNAMIC_PROGRAMMING_LEETCODE45_H


#include "header.h"

class Solution {
public:
    int jump(vector<int>& nums) {
        int cur = 0, res = 0, maxDistance = 0;
        for(int i = 0; i < nums.size()-1; i ++){
            maxDistance = max(maxDistance, i + nums[i]);
            if (cur == i) {
                res ++;
                cur = maxDistance;
            }
        }
        return res;
    }
};