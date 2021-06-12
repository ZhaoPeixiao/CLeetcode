//
// Created by Peixiao on 2021/6/12.
//

#ifndef TREE_LEETCODE1373_H
#define TREE_LEETCODE1373_H

#endif //TREE_LEETCODE1373_H


#pragma once

#include "TreeNode.h"
#include <iostream>
#include <vector>

using namespace std;

class TreeInfo {
public:
    int maxVal;
    int minVal;
    int sum;
    bool isValidBST;
};

int maxSum = -1;

TreeInfo* findMaxSum(TreeNode* root){
    TreeInfo *cur = new TreeInfo();
    if (root == nullptr) {
        cur->isValidBST = true;
        cur->sum = 0;
        cur->maxVal = INT_MIN;
        cur->minVal = INT_MAX;
        return cur;
    }
    TreeInfo* left = findMaxSum(root->left);
    TreeInfo* right = findMaxSum(root->right);

    if(left->maxVal < root->val && right->minVal > root->val && left->isValidBST && right->isValidBST){
        cur->isValidBST = true;
    }
    cur->sum = root->val + left->sum + right->sum;

    if(cur->isValidBST){
        maxSum = max(maxSum, cur->sum);
    }
    cur->maxVal = max(root->val,max(left->maxVal,right->maxVal));
    cur->minVal = min(root->val,min(left->minVal,right->minVal));

    return cur;
}


int maxSumBST(TreeNode* root) {
    TreeInfo *r = findMaxSum(root);
    if(maxSum < 0){
        return 0;
    }
    return maxSum;
}