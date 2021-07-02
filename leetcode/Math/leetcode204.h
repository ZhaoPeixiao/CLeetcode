//
// Created by Peixiao on 2021/7/2.
//

#ifndef MATH_LEETCODE204_H
#define MATH_LEETCODE204_H

#endif //MATH_LEETCODE204_H

#include "headers.h"

class Solution {
public:
    int countPrimes(int n) {
        vector<bool> notPrime(n);
        int count = 0;

        for (int i = 2; i < n; i++) {
            if (notPrime[i] == false) {
                count ++;
                for (int j = 2; i * j < n; j++) {
                    notPrime[i*j] = true;
                }
            }
        }
        return count;
    }
};
