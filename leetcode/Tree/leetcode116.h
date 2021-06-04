//
// Created by Peixiao on 2021/6/4.
//

#ifndef TREE_LEETCODE116_H
#define TREE_LEETCODE116_H

#endif //TREE_LEETCODE116_H


#pragma once
#include "TreeNode.h"
#include <iostream>

void connectTwoNode(Node* node1, Node* node2){
    if (node1 == NULL || node2 == NULL) {
        return;
    }

    node1->next = node2;

    connectTwoNode(node1->left, node1->right);
    connectTwoNode(node2->left, node2->right);

    connectTwoNode(node1->right, node2->left);
}


Node* connect(Node* root) {
    if (root == NULL) {
        return NULL;
    }
    connectTwoNode(root->left, root->right);
    return root;
}