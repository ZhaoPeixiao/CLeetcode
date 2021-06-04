//
// Created by Peixiao on 2021/6/4.
//

#ifndef NSUM_LEETCODE1_H
#define NSUM_LEETCODE1_H

#endif //NSUM_LEETCODE1_H

#progma once
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    for(int i = 0; i < nums.size(); i++){
        if(map.find(target - nums[i]) != map.end()){
            return {map[target - nums[i]], i};
        }
        map[nums[i]] = i;
    }
    return {};
}
