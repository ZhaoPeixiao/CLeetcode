//
// Created by Peixiao on 2021/7/5.
//

#ifndef MATH_LISTNODE_H
#define MATH_LISTNODE_H

#endif //MATH_LISTNODE_H

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};