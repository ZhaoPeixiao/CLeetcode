//
// Created by Peixiao on 2021/6/14.
//

#ifndef TREE_LEETCODE222_H
#define TREE_LEETCODE222_H

#endif //TREE_LEETCODE222_H


#include "TreeNode.h"
#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    int countNodes(TreeNode* root) {
        TreeNode* left = root;
        TreeNode* right = root;
        int leftHeight = 0;
        int rightHeight = 0;
        while (left != nullptr) {
            left = left->left;
            leftHeight++;
        }

        while (right != nullptr) {
            right = right->right;
            rightHeight ++;
        }

        if (leftHeight == rightHeight) {
            return pow(2, leftHeight) - 1;
        }

        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};