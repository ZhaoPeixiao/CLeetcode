//
// Created by Peixiao on 2021/7/2.
//

#ifndef MATH_LEETCODE231_H
#define MATH_LEETCODE231_H

#endif //MATH_LEETCODE231_H

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        return (n & (n - 1)) == 0;
    }
};