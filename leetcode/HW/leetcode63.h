//
// Created by Peixiao on 2021/6/13.
//

#ifndef HW_LEETCODE63_H
#define HW_LEETCODE63_H

#endif //HW_LEETCODE63_H

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int dp[101][101] = {0};

    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        if (m == 0 || n == 0) {
            return 0;
        }
        if(m == 1 && n==1) {
            return !obstacleGrid[m-1][n-1];
        }
        for(int i = 0; i < m+1; i++){
            dp[i][0] = 0;
        }
        for(int i = 0; i < n+1; i++){
            dp[0][i] = 0;
        }
        for(int i = 1; i < m+1; i ++){
            for(int j = 1; j < n+1; j ++){
                if(i == 1 && j == 1){
                    dp[i][j] = !obstacleGrid[i - 1][j - 1];
                }else{
                    dp[i][j] = obstacleGrid[i-1][j-1] == 1? 0 : (dp[i-1][j] + dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
};