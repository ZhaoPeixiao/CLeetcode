#pragma once
#include<stdio.h>


struct TreeNode
{
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
};


int minDepth(struct TreeNode* root) {
	int left_depth, right_depth;
	if (root == NULL) {
		return 0;
	}
	if (root->left == NULL && root->right == NULL) {
		return 1;
	}
	if (root->left == NULL) {
		return 1 + minDepth(root->right);
	}
	if (root->right == NULL) {
		return 1 + minDepth(root->left);
	}
	left_depth = minDepth(root->left);
	right_depth = minDepth(root->right);
	
	return left_depth > right_depth ? right_depth + 1 : left_depth + 1;
}