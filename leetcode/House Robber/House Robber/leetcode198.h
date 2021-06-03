#pragma once
#include<iostream>
#include<vector>
using namespace std;

int helper(vector<int>& nums, int start) {
	if (start >= nums.size()) {
		return 0;
	}
	return max(helper(nums, start + 1), nums[start] + helper(nums, start + 2));
}


int rob(vector<int>& nums) {
	int n = nums.size();
	int* dp = (int*)calloc(n + 2, sizeof(int));
	for (int i = n - 1; i >= 0; i--) {
		dp[i] = max(dp[i + 1], dp[i + 2] + nums[i]);
	}
	return dp[0];
}