//
// Created by Peixiao on 2021/6/13.
//

#ifndef HW_LEETCODE22_H
#define HW_LEETCODE22_H

#endif //HW_LEETCODE22_H


#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> res;

    void backtrack(int n, int leftCounter, int rightCounter, string path) {
        if (leftCounter == n && rightCounter == n) {
            res.push_back(path);
            return;
        }

        if (leftCounter < n) {
            backtrack(n, leftCounter + 1, rightCounter, path + "(");
        }
        if (rightCounter < n && rightCounter < leftCounter) {
            backtrack(n, leftCounter, rightCounter + 1, path + ")");
        }
    }

    vector<string> generateParenthesis(int n) {
        if (n < 1 || n > 8) {
            return {};
        }
        backtrack(n, 0, 0, "");
        return res;
    }
};