#pragma once
#include<iostream>
#include<vector>
using namespace std;

int maxProfit_inf(vector<int>& prices) {
	int n = prices.size();
	if (n == 1) {
		return 0;
	}
	int dp_i_0 = 0, dp_i_1 = INT_MIN;
	for (int i = 0; i < n; i++) {
		int tmp = dp_i_0;
		dp_i_0 = max(dp_i_0, dp_i_1 + prices[i]);
		dp_i_1 = max(dp_i_1, tmp - prices[i]);
	}
	return dp_i_0;
}


int maxProfit(int k, vector<int>& prices) {
	int n = prices.size();
	if (k > n / 2) {
		return maxProfit_inf(prices);
	}
	vector<int> buys(k + 1, INT_MIN), sells(k + 1, 0);
	for (auto p : prices) {
		for (auto i = 1; i <= k; i++) {
			buys[i] = max(buys[i], sells[i - 1] - p);
			sells[i] = max(sells[i], buys[i] + p);
		}
	}
	return sells[k];
}