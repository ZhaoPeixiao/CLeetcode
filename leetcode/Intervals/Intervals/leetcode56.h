#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
	int n = intervals.size();
	sort(intervals.begin(), intervals.end());
	int res = 0;
	for (int i = 1; i < n; i++) {
		if (intervals[res][1] >= intervals[i][0]) {
			intervals[res][0] = min(intervals[res][0], intervals[i][0]);
			intervals[res][1] = max(intervals[res][1], intervals[i][1]);
		}
		else {
			res++;
			intervals[res] = intervals[i];
		}
	}
	while (intervals.size() != res + 1) {
		intervals.pop_back();
	}
	return intervals;
}