//
// Created by Peixiao on 2021/6/11.
//

#ifndef TREE_LEETCODE450_H
#define TREE_LEETCODE450_H

#endif //TREE_LEETCODE450_H

#pragma once
#include "TreeNode.h"
#include <iostream>
using namespace std;

TreeNode* getMin(TreeNode* node){
    while(node->left!= nullptr){
        node = node->left;
    }
    return node;
}

TreeNode* deleteNode(TreeNode* root, int key) {
    if (root == nullptr) {
        return nullptr;
    }
    if(root->val == key){
        if (root->left == nullptr) {
            return root->right;
        }
        if (root->right == nullptr) {
            return root->left;
        }
        TreeNode* minNode = getMin(root->right);
        root->val = minNode->val;
        root->right = deleteNode(root->right, minNode->val);
    }
    else if(root->val > key){
        root->left = deleteNode(root->left, key);
    }
    else{
        root->right = deleteNode(root->right, key);
    }
    return root;
}