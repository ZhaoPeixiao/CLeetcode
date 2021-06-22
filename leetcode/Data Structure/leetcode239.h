//
// Created by Peixiao on 2021/6/22.
//

#ifndef DATA_STRUCTURE_LEETCODE239_H
#define DATA_STRUCTURE_LEETCODE239_H

#endif //DATA_STRUCTURE_LEETCODE239_H

#include "header.h"

class MaxQueue {
private:
    queue<int> nums;
    deque<int> maxs;

public:
    void push(int x) {
        nums.push(x);
        while (!maxs.empty() && maxs.back() < x)
            maxs.pop_back();
        maxs.push_back(x);
    }
    void pop() {
        if (nums.front() == maxs.front())
            maxs.pop_front();
        nums.pop();
    }
    int getMax() {
        return maxs.front();
    }
};


class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        if (k < 1)
            return res;
        MaxQueue maxQueue;
        for (int i = 0; i != k; ++i)
            maxQueue.push(nums[i]);
        res.push_back(maxQueue.getMax());
        for (int i = k; i != nums.size(); ++i) {
            maxQueue.pop();
            maxQueue.push(nums[i]);
            res.push_back(maxQueue.getMax());
        }
        return res;
    }
};