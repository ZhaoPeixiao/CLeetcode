#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

static bool cmp(vector<int>& a, vector<int>& b)
{
	if (a[0] != b[0]) return -a[0] > -b[0];
	else return a[1] > b[1];
}


int removeCoveredIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(), cmp);
    int cnt = 0;
    for (int i = 0; i < intervals.size();) {
        int j = i + 1;
        while (j < intervals.size() && intervals[j][1] <= intervals[i][1]) j++;//如果内包括，则+1
        cnt++;
        i = j;
    }
    return cnt;
}