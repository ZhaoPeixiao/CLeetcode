#pragma once
#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) {
	int price = INT_MAX, profit = 0;
	for (int p : prices) {
		price = min(price, p);
		profit = max(profit, p - price);
	}
	return profit;
}