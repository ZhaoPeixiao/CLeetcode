//
// Created by Peixiao on 2021/6/14.
//

#ifndef TREE_LEETCODE297_H
#define TREE_LEETCODE297_H

#endif //TREE_LEETCODE297_H


#include "TreeNode.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (root == nullptr) {
            return "#";
        }
        return to_string(root->val) + " " + serialize(root->left) + " " + serialize(root->right);
    }

    TreeNode* deserialize(istringstream &ss){
        string str;
        ss >> str;

        if (str == "#") {
            return nullptr;
        }

        TreeNode *root = new TreeNode(stoi(str));
        root->left = deserialize(ss);
        root->right = deserialize(ss);

        return root;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        istringstream ss(data);
        return deserialize(ss);
    }
};