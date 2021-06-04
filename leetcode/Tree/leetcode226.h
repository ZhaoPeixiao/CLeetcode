//
// Created by Peixiao on 2021/6/4.
//

#ifndef TREE_LEETCODE226_H
#define TREE_LEETCODE226_H

#endif //TREE_LEETCODE226_H

#pragma once
#include "TreeNode.h"
#include <iostream>


using namespace std;

TreeNode* invertTree(TreeNode* root) {
    if (root == NULL) {
        return NULL;
    }

    swap(root->left, root->right);

    invertTree(root->left);
    invertTree(root->right);

    return root;
}