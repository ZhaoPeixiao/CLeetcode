#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
	vector<vector<int>> res;

	// pointer to list1 and list2
	int i = 0, j = 0;

	while (i < firstList.size() && j < secondList.size()) {
		if (firstList[i][1] >= secondList[j][0] && secondList[j][1] >= firstList[i][0]) {
			int intersectionStart = max(firstList[i][0], secondList[j][0]);
			int intersectionEnd = min(firstList[i][1], secondList[j][1]);
			res.push_back({ intersectionStart, intersectionEnd });
		}

		if (firstList[i][1] < secondList[j][1]) {
			i++;
		}
		else{
			j++;
		}
	}
	return res;
}