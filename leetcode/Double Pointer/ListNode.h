//
// Created by Peixiao on 2021/6/17.
//

#ifndef DOUBLE_POINTER_LISTNODE_H
#define DOUBLE_POINTER_LISTNODE_H

#endif //DOUBLE_POINTER_LISTNODE_H

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};