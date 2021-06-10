//
// Created by Peixiao on 2021/6/10.
//

#ifndef TREE_LEETCODE106_H
#define TREE_LEETCODE106_H

#endif //TREE_LEETCODE106_H

#pragma once
#include "TreeNode.h"
#include <iostream>
#include <vector>

TreeNode *build(vector<int> &inorder, int inStart, int inEnd, vector<int> &postorder,
                int postStart, int postEnd){
    if(inStart > inEnd){
        return nullptr;
    }

    int rootVal = postorder[postEnd];

    int index = 0;

    for(int i = inStart; i <= inEnd; i++){
        if(inorder[i] == rootVal){
            index = i;
            break;
        }
    }

    TreeNode* node = new TreeNode(rootVal);
    int leftSize = index - inStart;
    node->left = build(inorder, inStart, index - 1, postorder, postStart, postStart + leftSize - 1);
    node->right = build(inorder, index + 1, inEnd, postorder, postStart + leftSize, postEnd - 1);
    return node;
}


TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    return build(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1);
}