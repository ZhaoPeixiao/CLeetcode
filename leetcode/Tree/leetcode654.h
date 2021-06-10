//
// Created by Peixiao on 2021/6/10.
//

#ifndef TREE_LEETCODE654_H
#define TREE_LEETCODE654_H

#endif //TREE_LEETCODE654_H

#pragma once
#include "TreeNode.h"
#include <iostream>
#include <vector>

TreeNode* build(vector<int>& nums, int low, int high){
    if(low > high){
        return nullptr;
    }

    int index = -1, maxVal = INT_MIN;
    for(int i = low; i <= high; i++){
        if(maxVal < nums[i]){
            index = i;
            maxVal = nums[i];
        }
    }

    TreeNode *node = new TreeNode(maxVal);
    node->left = build(nums, low, index - 1);
    node->right = build(nums, index + 1, high);

    return node;

}


TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
    return build(nums, 0, nums.size() - 1);
}