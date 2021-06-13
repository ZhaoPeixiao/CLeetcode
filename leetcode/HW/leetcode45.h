//
// Created by Peixiao on 2021/6/13.
//

#ifndef HW_LEETCODE45_H
#define HW_LEETCODE45_H

#endif //HW_LEETCODE45_H

#include <iostream>
#include <vector>

using namespace std;

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