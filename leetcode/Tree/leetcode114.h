//
// Created by Peixiao on 2021/6/4.
//

#ifndef TREE_LEETCODE114_H
#define TREE_LEETCODE114_H

#endif //TREE_LEETCODE114_H

#pragma once
#include "TreeNode.h"
#include <iostream>



void flatten(TreeNode* root) {
    while (root) {
        if (root -> left) {
            flatten(root -> left);
            TreeNode* right = root -> right;
            root -> right = root -> left;
            root -> left = NULL;
            while (root -> right) {
                root = root -> right;
            }
            root -> right = right;
        }
        root = root -> right;
    }
}