#pragma once
#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices, int fee) {
	int n = prices.size();
	if (n == 1) {
		return 0;
	}
	int dp_i_0 = 0, dp_i_1 = INT_MIN;
	for (int i = 0; i < n; i++) {
		int tmp = dp_i_0;
		dp_i_0 = max(dp_i_0, dp_i_1 + prices[i]);
		dp_i_1 = max(dp_i_1, tmp - prices[i] - fee);
	}
	return dp_i_0;
}