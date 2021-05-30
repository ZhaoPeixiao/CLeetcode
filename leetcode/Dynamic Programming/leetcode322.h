#pragma once
#include<stdio.h>
#include<malloc.h>
#include<vector>


int coinChange(int* coins, int coinsSize, int amount) {
	if (amount == 0) {
		return 0;
	}
	int* dp = malloc((amount + 1) * sizeof(int));
	dp[0] = 0;
	for (int i = 1; i < amount + 1; i++) {
		dp[i] = INT_MAX;
	}
	for (int i = 0; i < amount + 1; i++) {
		for (int j = 0; j < coinsSize; j++) {
			if (i >= coins[j]) {
				int tmp = dp[i - coins[j]];
				if (tmp != INT_MAX && tmp + 1 < dp[i]) {
					dp[i] = tmp + 1;
				}
			}
		}
	}
	if (dp[amount] == INT_MAX) {
		return -1;
	}
	return dp[amount] == INT_MAX? -1 : dp[amount];
}