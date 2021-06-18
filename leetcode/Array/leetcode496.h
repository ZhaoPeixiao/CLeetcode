//
// Created by Peixiao on 2021/6/18.
//

#ifndef ARRAY_LEETCODE496_H
#define ARRAY_LEETCODE496_H

#endif //ARRAY_LEETCODE496_H


#include "header.h"

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        stack<int> stack;
        unordered_map<int, int> map;
        for (int n : nums2) {
            while (stack.size() && stack.top() < n) {
                map[stack.top()] = n;
                stack.pop();
            }
            stack.push(n);
        }
        for (int n : nums1) {
            res.push_back(map.count(n) ? map[n] : -1);
        }
        return res;
    }
};