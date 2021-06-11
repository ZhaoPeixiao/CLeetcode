//
// Created by Peixiao on 2021/6/11.
//

#ifndef TREE_LEETCODE652_H
#define TREE_LEETCODE652_H

#endif //TREE_LEETCODE652_H

#pragma once
#include "TreeNode.h"
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

unordered_map<string, int> map;
vector<TreeNode*> res;

string inorder(TreeNode* root){
    if (root == nullptr) {
        return "";
    }

    string s = "(";
    s += inorder(root->left);
    s += to_string(root->val);
    s += inorder(root->right);
    s += ")";

    if(map[s] == 1){
        res.push_back(root);
    }
    map[s] ++;
    return s;
}


vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
    inorder(root);
    return res;
}