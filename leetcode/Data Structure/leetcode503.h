//
// Created by Peixiao on 2021/6/21.
//

#ifndef DATA_STRUCTURE_LEETCODE503_H
#define DATA_STRUCTURE_LEETCODE503_H

#endif //DATA_STRUCTURE_LEETCODE503_H


#include "header.h"

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        stack<int> stack;
        for (int i = 2 * n - 1; i >= 0; i--) {
            while (!stack.empty() && stack.pop() <= nums[i % n]) {
                stack.pop();
            }
            res[i % n] = stack.empty() ? -1 : stack.top();
            stack.push(nums[i % n]);
        }
        return res;
    }
};