//
// Created by Peixiao on 2021/6/18.
//

#ifndef ARRAY_LISTNODE_H
#define ARRAY_LISTNODE_H

#endif //ARRAY_LISTNODE_H


struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};