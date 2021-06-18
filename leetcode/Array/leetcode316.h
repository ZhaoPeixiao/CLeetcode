//
// Created by Peixiao on 2021/6/18.
//

#ifndef ARRAY_LEETCODE316_H
#define ARRAY_LEETCODE316_H

#endif //ARRAY_LEETCODE316_H

#include "header.h"

class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<bool> visited(26, 0);
        vector<int> count(26, 0);
        stack<int> stack;
        string ans;

        for (auto c : s) {
            count[c-'a']++;
        }

        for (auto c : s) {
            int index = c - 'a';
            count[index]--;
            if (!visited[index]) {
                visited[index] = true;
                while (!stack.empty() && count[stack.top()] && stack.top() > index) {
                    visited[stack.top()] = false;
                    stack.pop();
                }
                stack.push(index);
            }
        }

        while (!stack.empty()) {
            ans = string(1, 'a' + stack.top()) + ans;
            stack.pop();
        }
        return ans;
    }
};
