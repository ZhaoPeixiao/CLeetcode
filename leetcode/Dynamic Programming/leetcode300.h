//
// Created by Peixiao on 2021/6/24.
//

#ifndef DYNAMIC_PROGRAMMING_LEETCODE300_H
#define DYNAMIC_PROGRAMMING_LEETCODE300_H

#endif //DYNAMIC_PROGRAMMING_LEETCODE300_H

#include "header.h"


// DP
//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n, 1);
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < i; j++) {
//                if (nums[i] > nums[j]) {
//                    dp[i] = max(dp[i], dp[j] + 1);
//                }
//            }
//        }
//        int res = 0;
//        for (auto val : dp) {
//            res = max(res, val);
//        }
//        return res;
//    }
//};

// Binary
// patience sorting
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> top(nums.size());
        int piles = 0;
        for (int i = 0; i < nums.size(); i++) {
            int poker = nums[i];

            int left = 0, right = piles;
            while (left < right) {
                int mid = (left + right) / 2;
                if (top[mid] > poker) {
                    right = mid;
                } else if (top[mid] < poker) {
                    left = mid + 1;
                } else {
                    right = mid;
                }
            }

            if (left == piles) {
                piles++;
            }
            top[left] = poker;
        }

        return piles;
    }
};