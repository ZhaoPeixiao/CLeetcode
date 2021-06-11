//
// Created by Peixiao on 2021/6/11.
//

#ifndef TREE_LEETCODE230_H
#define TREE_LEETCODE230_H

#endif //TREE_LEETCODE230_H


#pragma once
#include "TreeNode.h"
#include <iostream>
using namespace std;

int res = 0;
int rank = 0;

void traverse(TreeNode* root, int k){
    if(root == nullptr){
        return;
    }
    traverse(root->left, k);
    rank ++;
    if(k == rank){
        res = root->val;
        return;
    }
    traverse(root->right, k);
}

int kthSmallest(TreeNode* root, int k) {
    traverse(root, k);
    return res;
}