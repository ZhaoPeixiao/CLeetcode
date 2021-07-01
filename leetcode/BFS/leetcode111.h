//
// Created by Peixiao on 2021/7/1.
//

#ifndef BFS_LEETCODE111_H
#define BFS_LEETCODE111_H

#endif //BFS_LEETCODE111_H

#include <iostream>
#include "TreeNode.h"

using namespace std;

class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) {
            return 0;
        } else if (!root->left) {
            return minDepth(root->right) + 1;
        } else if (!root->right) {
            return minDepth(root->left) + 1;
        } else {
            return min(minDepth(root->right), minDepth(root->left)) + 1;
        }
    }
};