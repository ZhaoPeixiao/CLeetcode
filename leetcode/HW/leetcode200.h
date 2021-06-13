//
// Created by Peixiao on 2021/6/13.
//

#ifndef HW_LEETCODE200_H
#define HW_LEETCODE200_H

#endif //HW_LEETCODE200_H

#include <iostream>
#include <vector>

using namespace std;

class Solution {
    int res = 0;
    int x[4] = {-1, 0, 1, 0};
    int y[4] = {0, 1, 0, -1};
public:
    void dfs(vector<vector<char> > &gr, int i, int j, int m, int n, vector<vector<int> > &visited) {
        visited[i][j] = 1;
        for (int dir = 0; dir < 4; dir++) {
            int xd = i + x[dir];
            int yd = j + y[dir];
            if (xd >= 0 && yd >= 0 && xd <= m - 1 && yd <= n - 1) {
                if (!visited[xd][yd] && gr[xd][yd] == '1') {
                    dfs(gr, xd, yd, m, n, visited);
                }
            }
        }
    }

    int numIslands(vector<vector<char>> &grid) {
        int m = grid.size();
        if (m == 0) return 0;
        int n = grid[0].size();
        vector<vector<int> > visited(m + 1, vector<int>(n + 1, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1' && !visited[i][j]) {
                    res++;
                    dfs(grid, i, j, m, n, visited);
                }
            }
        }
        return res;
    }
};