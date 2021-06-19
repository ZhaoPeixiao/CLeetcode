//
// Created by Peixiao on 2021/6/19.
//

#ifndef DATA_STRUCTURE_LEETCODE130_H
#define DATA_STRUCTURE_LEETCODE130_H

#endif //DATA_STRUCTURE_LEETCODE130_H


#include <iostream>
#include <vector>
#include "UnionFind.h"

using namespace std;

class Solution {
public:
    void dfs(vector<vector<char>> &board, int i, int j, int m, int n) {
        if (i >= m || i < 0 || j >= n || j < 0) {
            return;
        }
        if (board[i][j] == 'O') {
            board[i][j] = 'V';
            dfs(board, i + 1, j, m, n);
            dfs(board, i, j - 1, m, n);
            dfs(board, i, j + 1, m, n);
            dfs(board, i - 1, j, m, n);
        }
    }

    void solve(vector<vector<char>> &board) {
        if (board.empty()) {
            return;
        }
        int m = board.size();
        int n = board[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'O' && (i == 0 || j == 0 || i == m - 1 || j == n - 1)) {
                    dfs(board, i, j, m, n);
                }
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'O') {
                    board[i][j] = 'X';
                } else if (board[i][j] == 'V') {
                    board[i][j] = 'O';
                }
            }
        }
    }
};