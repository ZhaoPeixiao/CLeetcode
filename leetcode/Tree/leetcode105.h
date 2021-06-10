//
// Created by Peixiao on 2021/6/10.
//

#ifndef TREE_LEETCODE105_H
#define TREE_LEETCODE105_H

#endif //TREE_LEETCODE105_H

#pragma once
#include "TreeNode.h"
#include <iostream>
#include <vector>

TreeNode *build(vector<int> &preorder, int preStart, int preEnd, vector<int> &inorder,
                int inStart, int inEnd) {
    if (preStart > preEnd) {
        return nullptr;
    }

    int rootVal = preorder[preStart];
    int index = 0;
    for (int i = inStart; i <= inEnd; i++) {
        if (inorder[i] == rootVal) {
            index = i;
            break;
        }
    }
    int leftSize = index - inStart;

    TreeNode *root = new TreeNode(rootVal);

    root->left = build(preorder, preStart + 1, preStart + leftSize, inorder, inStart, index - 1);
    root->right = build(preorder, preStart + leftSize + 1, preEnd, inorder, index + 1, inEnd);

    return root;

}


TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
    return build(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
}