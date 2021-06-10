//
// Created by Peixiao on 2021/6/10.
//

#ifndef LINKEDLIST_LEETCODE92_H
#define LINKEDLIST_LEETCODE92_H

#endif //LINKEDLIST_LEETCODE92_H

#progma once
#include <iostream>
#include "ListNode.h"

ListNode* successor;

ListNode* reverseN(ListNode* head, int n){
    if(n == 1){
        successor = head->next;
        return head;
    }

    ListNode* last = reverseN(head->next, n - 1);

    head->next->next = head;
    head->next = successor;

    return last;
}

ListNode* reverseBetween(ListNode* head, int left, int right) {
    if(head == nullptr){
        return nullptr;
    }
    if(left == 1){
        return reverseN(head, right);
    }
    head->next = reverseBetween(head->next, left-1, right-1);
    return head;
}
