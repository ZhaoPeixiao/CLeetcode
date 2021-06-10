//
// Created by Peixiao on 2021/6/10.
//

#ifndef LINKEDLIST_LEETCODE234_H
#define LINKEDLIST_LEETCODE234_H

#endif //LINKEDLIST_LEETCODE234_H

#progma once

#include <iostream>
#include "ListNode.h"

ListNode* reverse(ListNode* head){
    ListNode *pre = nullptr, *cur = head;
    while(cur != nullptr){
        ListNode* next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    return pre;
}

bool isPalindrome(ListNode *head) {
    ListNode *slow, *fast;
    slow = fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast != nullptr) {
        slow = slow->next;
    }

    ListNode* left = head;
    ListNode* right = reverse(slow);
    while (right != nullptr){
        if(left->val != right->val){
            return false;
        }
        left = left->next;
        right = right->next;
    }
    return true;
}