//
// Created by Peixiao on 2021/6/17.
//

#ifndef ARRAY_LEETCODE380_H
#define ARRAY_LEETCODE380_H

#endif //ARRAY_LEETCODE380_H

#include "header.h"

class RandomizedSet {
public:
    vector<int> nums;
    unordered_map<int, int> valToIndex;

    /** Initialize your data structure here. */
    RandomizedSet() {

    }

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if (valToIndex.count(val)) {
            return false;
        }
        valToIndex[val] = nums.size();
        nums.push_back(val);
        return true;
    }

    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if (!valToIndex.count(val)) {
            return false;
        }
        int index = valToIndex[val];
        valToIndex[nums.back()] = index;
        swap(nums[index], nums.back());
        nums.pop_back();
        valToIndex.erase(val);
        return true;
    }

    /** Get a random element from the set. */
    int getRandom() {
        return nums[rand() % nums.size()];
    }
};