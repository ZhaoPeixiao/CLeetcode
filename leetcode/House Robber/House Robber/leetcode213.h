#pragma once
#include<iostream>
#include<vector>
using namespace std;

int robWithRange(vector<int>& nums, int start, int end) {
	int n = nums.size();
	int* dp = (int*)calloc(n + 1, sizeof(int));
	for (int i = end; i >= start; i--) {
		dp[i] = max(dp[i + 1], dp[i + 2] + nums[i]);
	}
	return dp[start];
}


int rob(vector<int>& nums) {
	int n = nums.size();
	if (n == 1) {
		return nums[0];
	}
	return max(robWithRange(nums, 0, n - 2), robWithRange(nums, 1, n - 1));
}