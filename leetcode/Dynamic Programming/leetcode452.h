//
// Created by Peixiao on 2021/6/25.
//

#ifndef DYNAMIC_PROGRAMMING_LEETCODE452_H
#define DYNAMIC_PROGRAMMING_LEETCODE452_H

#endif //DYNAMIC_PROGRAMMING_LEETCODE452_H

#include "header.h"

class Solution {
public:

    static bool cmp(vector<int>& a, vector<int>& b){
        if(a[1] == b[1]){
            return a[0] < b[0];
        }

        return a[1] < b[1];
    }

    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), cmp);

        int res = 1;
        int arrow = points[0][1];
        for(int i = 1; i < points.size(); i++){
            if(arrow < points[i][0]){
                res ++;
                arrow = points[i][1];
            }
        }
        return res;
    }
};