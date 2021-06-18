//
// Created by Peixiao on 2021/6/17.
//

#ifndef ARRAY_LEETCODE344_H
#define ARRAY_LEETCODE344_H

#endif //ARRAY_LEETCODE344_H

#include "header.h"

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size() - 1;
        char tmp;
        while (left < right) {
            tmp = s[left];
            s[left] = s[right];
            s[right] = tmp;
            left++;
            right--;
        }
    }
};