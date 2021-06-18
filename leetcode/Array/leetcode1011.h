//
// Created by Peixiao on 2021/6/16.
//

#ifndef ARRAY_LEETCODE1011_H
#define ARRAY_LEETCODE1011_H

#endif //ARRAY_LEETCODE1011_H


#include "header.h"

class Solution {
public:
    int getMax(vector<int> &weights) {
        int maxVal = 0;
        for (auto weight : weights) {
            maxVal = max(maxVal, weight);
        }
        return maxVal;
    }

    int getSum(vector<int>& weights){
        int sum = 0;
        for (auto weight : weights) {
            sum += weight;
        }
        return sum;
    }

    bool canFinish(vector<int> &weights, int days, int capacity){
        int i = 0;
        for (int day = 0; day < days; day++) {
            int maxCapacity = capacity;
            while ((maxCapacity -= weights[i]) >= 0) {
                i++;
                if (i == weights.size()) {
                    return true;
                }
            }
        }
        return false;
    }


    int shipWithinDays(vector<int>& weights, int days) {
        int left = getMax(weights);
        int right = getSum(weights) + 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canFinish(weights, days, mid)) {
                right = mid;
            }else{
                left = mid + 1;
            }
        }
        return left;
    }
};