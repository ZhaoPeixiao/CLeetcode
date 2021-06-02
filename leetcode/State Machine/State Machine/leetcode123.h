#pragma once
#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) {
	int n = prices.size();
	if (n == 1) {
		return 0;
	}
	int dp_i10 = 0, dp_i11 = INT_MIN;
	int dp_i20 = 0, dp_i21 = INT_MIN;
	for (int p : prices) {
		dp_i20 = max(dp_i20, dp_i21 + p);
		dp_i21 = max(dp_i21, dp_i10 - p);
		dp_i10 = max(dp_i10, dp_i11 + p);
		dp_i11 = max(dp_i11, -p);
	}
	return  dp_i20;
}