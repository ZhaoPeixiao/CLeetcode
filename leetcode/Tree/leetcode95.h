//
// Created by Peixiao on 2021/6/11.
//

#ifndef TREE_LEETCODE95_H
#define TREE_LEETCODE95_H

#endif //TREE_LEETCODE95_H


#pragma once

#include "TreeNode.h"
#include <iostream>
#include <vector>

using namespace std;


vector<TreeNode *> generateTrees(int n, int start = 0) {
    if (start > n) {
        return {nullptr};
    }
    vector<TreeNode*> res;
    for(auto i = max(1, start); i <= n; i ++){
        for(auto left : generateTrees(i-1, max(1, start))){
            for(auto right : generateTrees(n, i + 1)){
                TreeNode* root = new TreeNode(i);
                root->left = left;
                root->right = right;
                res.push_back(root);
            }
        }
    }
    return res;
}