//
// Created by Peixiao on 2021/6/4.
//

#ifndef NSUM_LEETCODE18_H
#define NSUM_LEETCODE18_H

#endif //NSUM_LEETCODE18_H

#progma once

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target) {

    vector<vector<int>> res;
    sort(nums.begin(), nums.end());

    int n = nums.size();
    for (int i = 0; i < n - 3; i++) {
        if (nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target) break;
        if (nums[i] + nums[n - 1] + nums[n - 2] + nums[n - 3] < target) continue;

        for (int j = i + 1; j < n - 2; j++) {
            if (nums[j] + nums[j + 1] + nums[j + 2] > target - nums[i]) break;
            if (nums[j] + nums[n - 1] + nums[n - 2] < target - nums[i]) continue;
            int newTarget = target - nums[i] - nums[j];
            int start = j + 1;
            int end = n - 1;

            while (start < end) {
                if (nums[start] + nums[end] < newTarget)
                    start++;
                else if (nums[start] + nums[end] > newTarget)
                    end--;
                else {
                    res.push_back(vector<int>{nums[i], nums[j], nums[start], nums[end]});
                    start++;
                    end--;
                    while (start < end && nums[start] == res.back()[2]) start++;
                    while (start < end && nums[end] == res.back()[3]) end--;
                }
            }

            while (j + 1 < n && nums[j] == nums[j + 1]) j++;
        }

        while (i + 1 < n && nums[i] == nums[i + 1]) i++;
    }

    return res;
}