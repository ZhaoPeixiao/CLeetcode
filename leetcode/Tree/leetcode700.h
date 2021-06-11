//
// Created by Peixiao on 2021/6/11.
//

#ifndef TREE_LEETCODE700_H
#define TREE_LEETCODE700_H

#endif //TREE_LEETCODE700_H

#pragma once
#include "TreeNode.h"
#include <iostream>
using namespace std;

TreeNode* searchBST(TreeNode* root, int val) {
    if(root == nullptr){
        return nullptr;
    }
    if(root->val == val){
        return root;
    }
    else if(root->val > val){
        return searchBST(root->left, val);
    }
    else{
        return searchBST(root->right, val);
    }
}