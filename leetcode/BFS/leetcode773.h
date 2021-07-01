//
// Created by Peixiao on 2021/7/1.
//

#ifndef BFS_LEETCODE773_H
#define BFS_LEETCODE773_H

#endif //BFS_LEETCODE773_H

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<vector<int>> neighbor = {
            {1, 3},
            {0, 4, 2},
            {1, 5},
            {0, 4},
            {3, 1, 5},
            {4, 2}
    };

    int slidingPuzzle(vector<vector<int>> &board) {
        int m = 2, n = 3;
        string start = "";
        string tartger = "123450";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                start.push_back(board[i][j] + '0');
            }
        }

        queue<string> queue;
        unordered_set<string> visited;
        queue.push(start);
        visited.insert(start);

        int step = 0;
        while (!queue.empty()) {
            int size = queue.size();
            for (int i = 0; i < size; i++) {
                string curr = queue.front();
                queue.pop();
                if (tartger == curr) {
                    return step;
                }
                int idx = 0;
                for (; curr[idx] != '0'; idx++);
                for (int adj : neighbor[idx]) {
                    string new_board = curr;
                    swap(new_board[adj], new_board[idx]);
                    if (!visited.count(new_board)) {
                        queue.push(new_board);
                        visited.insert(new_board);
                    }
                }
            }
            step++;
        }
        return -1;
    }

};