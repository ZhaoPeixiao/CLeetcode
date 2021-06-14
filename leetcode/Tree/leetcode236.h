//
// Created by Peixiao on 2021/6/14.
//

#ifndef TREE_LEETCODE236_H
#define TREE_LEETCODE236_H

#endif //TREE_LEETCODE236_H

#include "TreeNode.h"
#include <iostream>

using namespace std;


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr) {
            return nullptr;
        }
        if (root == p || root == q) {
            return root;
        }
        TreeNode *left = lowestCommonAncestor(root->left, p, q);
        TreeNode *right = lowestCommonAncestor(root->right, p, q);
        if (left and right) {
            return root;
        }
        if (left) {
            return left;
        }
        if (right) {
            return right;
        }
        return nullptr;
    }
};