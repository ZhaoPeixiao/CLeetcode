//
// Created by Peixiao on 2021/6/16.
//

#ifndef ARRAY_LEETCODE875_H
#define ARRAY_LEETCODE875_H

#endif //ARRAY_LEETCODE875_H

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int getMax(vector<int> &piles) {
        int val = 0;
        for (auto pile : piles) {
            val = max(val, pile);
        }
        return val;
    }

    int getTime(int number, int speed) {
        return (number / speed) + (number % speed > 0 ? 1 : 0);
    }

    bool canEatUp(vector<int> &piles, int speed, int h) {
        int time = 0;
        for (auto pile : piles) {
            time += getTime(pile, speed);
        }
        return time <= h;
    }

    int minEatingSpeed(vector<int> &piles, int h) {
        int left = 1, right = getMax(piles);
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canEatUp(piles, mid, h)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};