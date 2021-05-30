#pragma once
#include<stdio.h>
#include<malloc.h>
#include<vector>
using namespace std;

// 递归
int fib_recursion(int n) {
	if (n < 1) {
		return 0;
	}
	if (n == 1 || n == 2) {
		return 1;
	}
	return fib_recursion(n - 1) + fib_recursion(n - 2);
}


// 带备忘录的递归
int helper(vector<int>& memo, int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	if (memo[n] != 0) {
		return memo[n];
	}
	memo[n] = helper(memo, n - 1) + helper(memo, n - 2);
	return memo[n];
}

int fib_recursion_improved(int n) {
	if (n < 1) {
		return 0;
	}
	vector<int> memo(n + 1, 0);
	
	return helper(memo, n);
}


// DP simple
int fib_dp(int n) {
	if (n < 1) {
		return 0;
	}
	if (n == 1 || n == 2) {
		return 1;
	}

	int *dp = (int*)malloc((n+1) * sizeof(int));
	dp[1] = dp[2] = 1;
	for (int i = 3; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}


// DP 优化
int fib_dp_improved(int n) {
	if (n < 1) {
		return 0;
	}
	if (n == 1 || n == 2) {
		return 1;
	}

	int prev = 1, curr = 1;
	for (int i = 3; i <= n; i++) {
		int sum = prev + curr;
		prev = curr;
		curr = sum;
	}

	return curr;
}