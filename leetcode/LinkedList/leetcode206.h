//
// Created by Peixiao on 2021/6/10.
//

#ifndef LINKEDLIST_LEETCODE206_H
#define LINKEDLIST_LEETCODE206_H

#endif //LINKEDLIST_LEETCODE206_H

#progma once
#include <iostream>
#include "ListNode.h"

ListNode* reverseList(ListNode* head) {
    if(head == nullptr){
        return nullptr;
    }
    if (head->next == nullptr){
        return head;
    }

    ListNode* last = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;

    return last;

}