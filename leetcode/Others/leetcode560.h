//
// Created by Peixiao on 2021/7/6.
//

#ifndef OTHERS_LEETCODE560_H
#define OTHERS_LEETCODE560_H

#include "headers.h"

class Solution {
public:
    int subarraySum(vector<int> &nums, int k) {
        unordered_map<int, int> sumFreq{{0, 1}};
        int sum = 0;
        int res = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (sumFreq.count(sum - k)) {
                res += sumFreq[sum - k];
            }
            sumFreq[sum]++;
        }

        return res;
    }
};


#endif //OTHERS_LEETCODE560_H
