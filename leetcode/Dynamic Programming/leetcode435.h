//
// Created by Peixiao on 2021/6/25.
//

#ifndef DYNAMIC_PROGRAMMING_LEETCODE435_H
#define DYNAMIC_PROGRAMMING_LEETCODE435_H

#endif //DYNAMIC_PROGRAMMING_LEETCODE435_H


#include "header.h"

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int res = 0;
        int prev = INT_MIN;
        sort(intervals.begin(), intervals.end(), [&](const auto &a, const auto &b){
            return a[1] < b[1];
        });

        for (auto &in : intervals) {
            if (in[0] >= prev) {
                res++;
                prev = in[1];
            }
        }

        return intervals.size() - res;
    }
};
