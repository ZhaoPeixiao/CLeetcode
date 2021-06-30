//
// Created by Peixiao on 2021/6/30.
//

#ifndef DFS_LEETCODE51_H
#define DFS_LEETCODE51_H

#endif //DFS_LEETCODE51_H

#include "headers.h"

class Solution {
public:
    vector<vector<string>> res;

    bool isvalid(vector<vector<char>> &vis, int i, int j) {
        int x = i - 1;
        while (x >= 0) {
            if (vis[x][j] != '.') {
                return false;
            }
            x--;
        }
        x = i - 1;
        int y = j - 1;
        while (x >= 0 && y >= 0) {
            if (vis[x][y] != '.') {
                return false;
            }
            x--;
            y--;
        }
        x = i - 1;
        y = j + 1;
        while (x >= 0 && y < vis.size()) {
            if (vis[x][y] != '.') {
                return false;
            }
            x--;
            y++;
        }
        return true;
    }

    void printNQ(vector<vector<char>> &vis, int n, int r) {
        if (r == n) {
            vector<string> v;
            for (int i = 0; i < n; i++) {
                string s = "";
                for (int j = 0; j < n; j++) {
                    s.push_back(vis[i][j]);
                }
                v.push_back(s);
            }
            res.push_back(v);
            return;
        }

        for (int c = 0; c < n; c++) {
            if (isvalid(vis, r, c)) {
                vis[r][c] = 'Q';
                printNQ(vis, n, r + 1);
                vis[r][c] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<char>> vis(n, vector<char>(n, '.'));
        printNQ(vis, n, 0);
        return res;
    }
};
