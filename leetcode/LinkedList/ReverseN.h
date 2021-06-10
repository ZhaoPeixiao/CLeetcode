//
// Created by Peixiao on 2021/6/10.
//

#ifndef LINKEDLIST_REVERSEN_H
#define LINKEDLIST_REVERSEN_H

#endif //LINKEDLIST_REVERSEN_H

#progma once
#include <iostream>
#include "ListNode.h"

ListNode* successor = nullptr;

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