//
// Created by Peixiao on 2021/6/29.
//

#ifndef DYNAMIC_PROGRAMMING_LEETCODE28_H
#define DYNAMIC_PROGRAMMING_LEETCODE28_H

#endif //DYNAMIC_PROGRAMMING_LEETCODE28_H

#include "header.h"

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() == 0) {
            return 0;
        }
        unordered_map<char, int> map;
        for (auto x : needle) {
            map[x]++;
        }
        int count = needle.size();
        int begin = 0, end = 0;
        while (end < haystack.size()) {
            if (map[haystack[end++]]-- > 0) {
                count--;
            }
            if (count == 0) {
                int i = begin, j = 0;
                while (j < needle.size() && haystack[i] == needle[j]) {
                    i++;
                    j++;
                }
                if (j == needle.size()) {
                    return begin;
                }
            }
            if (end - begin == needle.size() && map[haystack[begin++]]++ >= 0) {
                count++;
            }
        }
        return -1;
    }
};