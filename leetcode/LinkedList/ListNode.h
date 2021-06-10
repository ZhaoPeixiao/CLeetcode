//
// Created by Peixiao on 2021/6/10.
//

#ifndef LINKEDLIST_LISTNODE_H
#define LINKEDLIST_LISTNODE_H

#endif //LINKEDLIST_LISTNODE_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode *next): val(x), next(next) {}
};