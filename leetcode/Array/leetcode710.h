//
// Created by Peixiao on 2021/6/17.
//

#ifndef ARRAY_LEETCODE710_H
#define ARRAY_LEETCODE710_H

#endif //ARRAY_LEETCODE710_H

#include "header.h"

class Solution {
public:
    int size;
    unordered_map<int, int> mapping;

    Solution(int n, vector<int>& blacklist) {
        size = n - blacklist.size();
        for (int b : blacklist) {
            mapping[b] = 666;
        }
        int last = n - 1;
        for (int b : blacklist) {
            if (b >= size) {
                continue;
            }
            while (mapping.count(last)) {
                last--;
            }
            mapping[b] = last;
            last--;
        }
    }

    int pick() {
        int index = rand() % size;
        if (mapping.count(index)) {
            return mapping[index];
        }
        return index;
    }
};