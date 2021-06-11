//
// Created by Peixiao on 2021/6/11.
//

#ifndef TREE_LEETCODE701_H
#define TREE_LEETCODE701_H

#endif //TREE_LEETCODE701_H


#pragma once
#include "TreeNode.h"
#include <iostream>
using namespace std;

TreeNode* insertIntoBST(TreeNode* root, int val) {
    if(root == nullptr) {
        return new TreeNode(val);
    }
    if(root->val < val){
        root->right = insertIntoBST(root->right, val);
    }
    if(root->val > val){
        root->left = insertIntoBST(root->left, val);
    }
    return root;
}