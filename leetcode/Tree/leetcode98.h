//
// Created by Peixiao on 2021/6/11.
//

#ifndef TREE_LEETCODE98_H
#define TREE_LEETCODE98_H

#endif //TREE_LEETCODE98_H

#pragma once
#include "TreeNode.h"
#include <iostream>
using namespace std;

bool isValidBST(TreeNode* root, TreeNode* min, TreeNode* max){
    if(root == nullptr){
        return true;
    }
    if(min != nullptr && root->val <= min->val){
        return false;
    }
    if(max != nullptr && root->val >= max->val){
        return false;
    }
    return isValidBST(root->left, min, root) && isValidBST(root->right, root, max);
}


bool isValidBST(TreeNode* root) {
    return isValidBST(root, nullptr, nullptr);
}