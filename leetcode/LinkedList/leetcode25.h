//
// Created by Peixiao on 2021/6/10.
//

#ifndef LINKEDLIST_LEETCODE25_H
#define LINKEDLIST_LEETCODE25_H

#endif //LINKEDLIST_LEETCODE25_H

#progma once
#include <iostream>
#include "ListNode.h"

// reverse
ListNode* reverse(ListNode* head){
    ListNode* pre, cur, next;
    pre = nullptr, cur = head, next = head;
    while (cur != nullptr){
        next = cur.next;
        cur.next = pre;
        pre = cur;
        cur = next;
    }
    return pre;
}

ListNode* reverseBetweenNodes(ListNode* head, ListNode* end){
    ListNode *pre = nullptr, *cur = head, *next = head;
    while (cur != end){
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    return pre;
}

ListNode* reverseKGroup(ListNode* head, int k) {
    if(head == nullptr){
        return nullptr;
    }
    ListNode *start, *end;
    start = end = head;
    for(int i = 0; i < k; i++){
        if(end == nullptr){
            return head;
        }
        end = end->next;
    }
    ListNode *newHead = reverseBetweenNodes(start, end);
    start->next = reverseKGroup(end, k);
    return newHead;
}