//
// Created by Peixiao on 2021/7/1.
//

#ifndef BFS_TREENODE_H
#define BFS_TREENODE_H

#endif //BFS_TREENODE_H


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};