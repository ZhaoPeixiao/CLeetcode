//
// Created by Peixiao on 2021/6/24.
//

#ifndef DYNAMIC_PROGRAMMING_LEETCODE354_H
#define DYNAMIC_PROGRAMMING_LEETCODE354_H

#endif //DYNAMIC_PROGRAMMING_LEETCODE354_H

#include "header.h"

// DP
//class Solution {
//public:
//
//    static bool compare(vector<int> v1, vector<int> v2){
//        return v1[0] < v2[0] || (v1[0] == v2[0] && v1[1] < v2[1]);
//    }
//
//    int maxEnvelopes(vector<vector<int>>& envelopes) {
//        int n = envelopes.size();
//        if (n == 0) {
//            return 0;
//        }
//
//        sort(envelopes.begin(), envelopes.end(), compare);
//
//        vector<int> dp(n, 1);
//
//        int res = 1;
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < i; j++) {
//                if (envelopes[i][0] > envelopes[j][0] && envelopes[i][1] > envelopes[j][1]) {
//                    dp[i] = max(dp[i], 1 + dp[j]);
//                }
//            }
//            res = max(res, dp[i]);
//        }
//
//        return res;
//    }
//};

// Binary
// patience sorting
class Solution {
public:

    static bool compare(vector<int> v1, vector<int> v2){
        return v1[0] == v2[0] ? v2[1] - v1[1] : v1[0] - v2[0];
    }

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

    int maxEnvelopes(vector<vector<int>>& envelopes) {
        int n = envelopes.size();
        if (n == 0) {
            return 0;
        }

        sort(envelopes.begin(), envelopes.end(), compare);

        vector<int> height(n);
        for (int i = 0; i < n; i++) {
            height[i] = envelopes[i][1];
        }

        return lengthOfLIS(height);

    }
};