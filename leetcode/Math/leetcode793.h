//
// Created by Peixiao on 2021/7/2.
//

#ifndef MATH_LEETCODE793_H
#define MATH_LEETCODE793_H

#endif //MATH_LEETCODE793_H

#include "headers.h"

class Solution {
public:
    long long f(long long x) {
        long long ans = 0;
        for (long long i = 5; i <= x; i *= 5) {
            ans += x / i;
        }
        return ans;
    }

    int preimageSizeFZF(int K) {
        long long low = 0;
        long long high = K * 5LL;
        int ans = 0;
        while (low <= high) {
            long long x = (low + high) / 2;
            if (f(x) > K) {
                high = x - 1;
            } else if (f(x) < K) {
                low = x + 1;
            } else {
                for (long long i = max(0LL, x - 5); i <= (x + 5); i++) {
                    if (f(i) == K) {
                        ans++;
                    }
                }
                return ans;
            }
        }
        return 0;
    }
};